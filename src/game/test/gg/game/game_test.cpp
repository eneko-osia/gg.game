#include "gg/test/catch.h"

//==============================================================================

#include "gg/core/type/type_trait.h"
#include "gg/game/game.h"

//==============================================================================
namespace gg
{
//==============================================================================

TEST_CASE("game", "[gg.game]")
{
    SECTION("pod")
    {
        REQUIRE_FALSE(type::is_pod<game>());
    }

    SECTION("polymorphic")
    {
        REQUIRE(type::is_polymorphic<game>());
    }

    SECTION("sizeof")
    {
    #if defined(GG_X86)
        REQUIRE(sizeof(game) == 4);
    #elif defined(GG_X86_64)
        REQUIRE(sizeof(game) == 8);
    #endif
    }
}

//==============================================================================
}
//==============================================================================
