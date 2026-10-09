#pragma once

#include <cstdint>

namespace nocturne::platform {

class CExternalRendererBridge;
class IClipboard;
class IClock;
class IDisplay;
class IFileSystem;
class IJoystick;
class IMoviePlayer;
class INetwork;
class IRenderer;
class IUdpSocket;
class IWindow;
struct SFileInfo;
struct SInputFace;
struct SJoystickCaps;
struct SJoystickState;
struct SMRGLPrimitiveQuad;
struct SMRGLTextureBasic;
struct SNetworkAddr;
struct SPixelFormat;
struct SRenderVertex;
struct SWindowEvent;
enum class EMouseButton : std::uint8_t;
enum class EWindowEventType : std::uint8_t;

} // namespace nocturne::platform
