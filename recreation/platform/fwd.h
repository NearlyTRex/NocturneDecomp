#pragma once

#include <cstdint>

namespace nocturne::platform {

class CFileLog;
class CLogRate;
class IAudioDevice;
class IAudioSource;
class IClipboard;
class IClock;
class IDisplay;
class IEnvironment;
class IFile;
class IFileSystem;
class IGamepad;
class ILog;
class IMoviePlayer;
class INetwork;
class IOsFont;
class IOsFontFactory;
class IRenderer;
class IUdpSocket;
class IWindow;
struct CExternalRendererBridge;
struct SAudioFormat;
struct SClipPlane;
struct SFileInfo;
struct SInputFace;
struct SMRGLHeaderBasic;
struct SMRGLHeaderPrimitive;
struct SMRGLPrimitiveQuad;
struct SMRGLTextureBasic;
struct SMRGLVertex;
struct SNetworkAddr;
struct SProjectedVertex;
struct SRenderVertex;
struct STextMask;
struct STrianglePackedIndices;
struct SWindowEvent;
enum class EFileMode : std::uint8_t;
enum class EGamepadAxis : std::uint8_t;
enum class EGamepadButton : std::uint8_t;
enum class EGamepadType : std::uint8_t;
enum class ELogSubsystem : std::uint8_t;
enum class EMouseButton : std::uint8_t;
enum class EUpscaler : std::uint8_t;
enum class EWindowMode : std::uint8_t;
enum class EWindowEventType : std::uint8_t;

} // namespace nocturne::platform
