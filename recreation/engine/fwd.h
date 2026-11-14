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
class CGamepadInput;
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
enum class EPodState : std::uint8_t;
class IGameClock;
class IRawInput;
class IScreenDevice;
struct SBaseManifest;
struct SColorChannels;
struct SColorMasks;
struct SCurrentTexture;
struct SEmbeddedGame;
struct SFace;
struct SFoundFileInfo;
struct SGameChapter;
struct SGameContent;
struct SGameCredits;
struct SGameStory;
struct SHardwareEdge;
struct SLayoutPoint;
struct SLineStrip;
struct SLoadingPicture;
struct SMRGLAnimatedTexture;
struct SMRGLHeaderExtended;
struct SMRGLKeyframeModel;
struct SMRGLModelBounds;
struct SMRGLPrimitivePoly;
struct SMRGLPrimitiveTriangle;
struct SMRGLPrimitiveTriangleIndex;
struct SLoadOrder;
struct SMenuLayout;
struct SMergedGameContent;
struct SMoonWindow;
struct SPackage;
struct SPackageDiscovery;
struct SPackageManifest;
struct SPackagePod;
struct SPodCheck;
struct SProjectionParams;
struct SRelease;
struct SReleaseFile;
struct SReleaseLooseFile;
struct SRGBColorPalette;
struct SSoftwareEdge;
struct SStoryUnlock;
struct STextureOwners;

} // namespace nocturne::engine
