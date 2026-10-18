#pragma once

#include <cstdint>

namespace nocturne::engine {

class C2d;
class C3d;
class CAlphaBitmap;
class CBitFont;
class CConsole;
class CDemonRenderer;
class CDosIo;
class CFileFinder;
class CFont;
class CFontColors;
class CIni;
class CIniFile;
class CKeys;
class CLight;
class CMatrix;
class CMenuInput;
class CMouse;
class CPod;
class CPodAuditRecord;
class CPodFile;
struct CPodDirectoryEntry;
struct CPodSearchContext;
class CPrim;
class CSpecial;
class CTexture;
class CTextureCache;
class CWinFont;
class CZRaster;
enum class EInputCodeType : std::uint16_t;
enum class EMenuAction : std::uint8_t;
class IGameClock;
class IRawInput;
class IScreenDevice;
struct SColorChannels;
struct SColorMasks;
struct SCurrentTexture;
struct SFace;
struct SFoundFileInfo;
struct SHardwareEdge;
struct SLineStrip;
struct SMRGLAnimatedTexture;
struct SMRGLHeaderExtended;
struct SMRGLKeyframeModel;
struct SMRGLModelBounds;
struct SMRGLPrimitivePoly;
struct SMRGLPrimitiveTriangle;
struct SMRGLPrimitiveTriangleIndex;
struct SProjectionParams;
struct SRGBColorPalette;
struct SSoftwareEdge;
struct STextureOwners;

} // namespace nocturne::engine
