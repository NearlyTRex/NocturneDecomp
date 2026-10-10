#pragma once

#include <cstdint>

namespace nocturne::platform {

class CExternalRendererBridge;
class IAudioDevice;
class IAudioSource;
class IClipboard;
class IClock;
class IDisplay;
class IFileSystem;
class IGamepad;
class IMoviePlayer;
class INetwork;
class IOsFont;
class IOsFontFactory;
class IRenderer;
class IUdpSocket;
class IWindow;
struct SAudioFormat;
struct SFileInfo;
struct SInputFace;
struct SMRGLPrimitiveQuad;
struct SMRGLTextureBasic;
struct SNetworkAddr;
struct SRenderVertex;
struct STextMask;
struct SWindowEvent;
enum class EGamepadAxis : std::uint8_t;
enum class EGamepadButton : std::uint8_t;
enum class EGamepadType : std::uint8_t;
enum class EMouseButton : std::uint8_t;
enum class EWindowMode : std::uint8_t;
enum class EWindowEventType : std::uint8_t;

} // namespace nocturne::platform
