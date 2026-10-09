#include "platform/renderer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IRenderer, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IRenderer>);
    static_assert(std::has_virtual_destructor_v<IRenderer>);
}

TEST(IRenderer, ModeAndCardInterface) {
    static_assert(
        std::is_same_v<decltype(&IRenderer::init), int (IRenderer::*)(CExternalRendererBridge *)>);
    static_assert(std::is_same_v<decltype(&IRenderer::kill), void (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::selectCard), int (IRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::buildCardList),
                                 int (IRenderer::*)(int *, char **, char **, int *, int *)>);
    static_assert(std::is_same_v<decltype(&IRenderer::getVideoMemory),
                                 int (IRenderer::*)(int *, int *, int *)>);
    static_assert(std::is_same_v<decltype(&IRenderer::setVideoMode2),
                                 int (IRenderer::*)(int, int, int, void **)>);
    static_assert(std::is_same_v<decltype(&IRenderer::restoreVideoMode), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::setColorTable16),
                                 int (IRenderer::*)(std::uint8_t *, std::uint16_t *)>);
}

TEST(IRenderer, FrameInterface) {
    static_assert(std::is_same_v<decltype(&IRenderer::lockFrame), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::unlockFrame), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::lockHoldBuffer), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::unlockHoldBuffer), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::toggle), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::sync), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::beginScene), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::endScene), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::clear), int (IRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&IRenderer::clearZBuffer), int (IRenderer::*)()>);
    static_assert(
        std::is_same_v<decltype(&IRenderer::clearZBox), int (IRenderer::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::masterZBuffer), int (IRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::restoreZBuffer),
                                 int (IRenderer::*)(int, int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&IRenderer::setFogColor), int (IRenderer::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::setMipMapLevel), int (IRenderer::*)(int)>);
}

TEST(IRenderer, DrawingInterface) {
    using TextureEntry = int (IRenderer::*)(SMRGLTextureBasic *, int, std::uint8_t *,
                                            std::uint8_t *, std::uint8_t *);
    static_assert(std::is_same_v<decltype(&IRenderer::selectTexture), TextureEntry>);
    static_assert(std::is_same_v<decltype(&IRenderer::updateTexture), TextureEntry>);
    static_assert(std::is_same_v<decltype(&IRenderer::drawPolygon),
                                 int (IRenderer::*)(SRenderVertex *, int, int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::drawPolygon2),
                                 int (IRenderer::*)(SRenderVertex **, int, int)>);
    static_assert(
        std::is_same_v<decltype(&IRenderer::drawPolyList),
                       int (IRenderer::*)(SRenderVertex *, SMRGLPrimitiveQuad **, int, int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::drawPolyList2),
                                 int (IRenderer::*)(SRenderVertex *, SInputFace **, int, int)>);
    static_assert(
        std::is_same_v<decltype(&IRenderer::addParticle), int (IRenderer::*)(void *, int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::flushParticleList), int (IRenderer::*)()>);
    static_assert(
        std::is_same_v<decltype(&IRenderer::add3dLine), int (IRenderer::*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&IRenderer::flushLineList), int (IRenderer::*)()>);
}

} // namespace
} // namespace nocturne::platform
