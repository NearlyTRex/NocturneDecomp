#include "platform/sdl/sdlnetwork.h"

#include "platform/sdl/sdludpsocket.h"

#include <SDL3/SDL.h>
#include <SDL3_net/SDL_net.h>
#include <stdexcept>

namespace nocturne::platform::sdl {

CSdlNetwork::CSdlNetwork() {
    if (!NET_Init()) {
        throw std::runtime_error(SDL_GetError());
    }
}

CSdlNetwork::~CSdlNetwork() {
    NET_Quit();
}

std::unique_ptr<IUdpSocket> CSdlNetwork::createUDPSocket() {
    return std::make_unique<CSdlUdpSocket>();
}

} // namespace nocturne::platform::sdl
