#include "core/terrain/terrain.h"

#include "core/ground/ground.h"

namespace nocturne::core {

CTerrain::CTerrain(CGround &ground) : ground_(ground) {}

// deferred: restarting the animation and noting the terrain is there, with process and render
// nocedit 0x005e1ef0
void CTerrain::init() {
    ground_.init();
    ground_.load("junk.jnk");
}

// deferred: noting the terrain is gone, with render
// nocedit 0x005e1f30
void CTerrain::free() {
    ground_.free();
}

} // namespace nocturne::core
