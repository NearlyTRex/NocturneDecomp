#pragma once

#include <cstdint>

namespace nocturne::common {

class CBinaryReader;
class CBinaryWriter;
class CFrameConverter;
class CMatrix3x3f;
class CMatrix3x4f;
class CMovieClock;
class CPolygonBatch;
class CQuaternion4f;
class CVector2i;
class CVector3d;
class CVector3f;
class CVector3i;
class CVector4i;
enum class EBlendFactor : std::uint8_t;
enum class EDepthFunction : std::uint8_t;
enum class EMipFilter : std::uint8_t;
enum class EPixelLayout : std::uint8_t;
enum class ETextureFilter : std::uint8_t;
struct SExtent;
struct SFrameUpload;
struct SLighting;
struct SMovieProgress;
struct SPipelineState;
struct SPixelFormat;
struct SPoint;
struct SPresentation;
struct SRenderStateInput;
struct SScreenVertex;
struct SVertexContext;
struct SVertexInput;
struct SViewport;
struct SWildcardPath;
union UOrientationVector;

} // namespace nocturne::common
