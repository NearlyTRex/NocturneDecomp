// Name: dll_dx7.cpp_checkD3DResult_FUN_10001d70
// Address: 10001d70
// MANUAL RECONSTRUCTION
// Address Range: [[10001d70, 10001e0b] [10001e0f, 10001e18] [10001e1c, 10001e25] [10001e29, 10001e32] [10001e36, 10001e3f] [10001e43, 10001e4c] [10001e50, 10001e59] [10001e5d, 10001e66] [10001e6a, 10001e73] [10001e77, 10001e80] [10001e84, 10001e8d] [10001e91, 10001e9a] [10001e9e, 10001ea7] [10001eab, 10001eb4] [10001eb8, 10001ec1] [10001ec5, 10001ece] [10001ed2, 10001edb] [10001edf, 10001ee8] [10001eec, 10001ef5] [10001ef9, 10001f02] [10001f06, 10001f0f] [10001f13, 10001f1c] [10001f20, 10001f29] [10001f2d, 10001f36] [10001f3a, 10001f43] [10001f47, 10001f50] [10001f54, 10001f5d] [10001f61, 10001f6a] [10001f6e, 10001f77] [10001f7b, 10001f84] [10001f88, 10001f91] [10001f95, 10001f9e] [10001fa2, 10001fab] [10001faf, 10001fb8] [10001fbc, 10001fc5] [10001fc9, 10001fd2] [10001fd6, 10001fdf] [10001fe3, 10001fec] [10001ff0, 10001ff9] [10001ffd, 10002006] [1000200a, 10002013] [10002017, 10002020] [10002024, 1000202d] [10002031, 1000203a] [1000203e, 10002047] [1000204b, 10002054] [10002058, 10002061] [10002065, 1000206e] [10002072, 1000207b] [1000207f, 10002088] [1000208c, 10002095] [10002099, 100020a2] [100020a6, 100020af] [100020b3, 100020bc] [100020c0, 100020c9] [100020cd, 100020d6] [100020da, 100020e3] [100020e7, 100020f0] [100020f4, 100020fd] [10002101, 1000210a] [1000210e, 10002117] [1000211b, 10002124] [10002128, 10002131] [10002135, 1000213e] [10002142, 1000214b] [1000214f, 10002158] [1000215c, 10002165] [10002169, 10002172] [10002176, 1000217f] [10002183, 1000218c] [10002190, 10002199] [1000219d, 100021a6] [100021aa, 100021b3] [100021b7, 100021c0] [100021c4, 100021cd] [100021d1, 100021d1]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_checkD3DResult_FUN_10001d70(HRESULT result)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_checkD3DResult_FUN_10001d70(HRESULT result)

{
  if (result < -0x7789f7ff) {
    if (result == -0x7789f800) {
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDVERTEXFORMAT: The combination of flexible vertex format flags specified by the application is not valid.");
    }
    switch(result) {
    case -0x7789fd44:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_BADMAJORVERSION: The service you requested is unavailable in this major version of DirectX. (A \"major version\" denotes a primary release, such as DirectX 6.0.)");
    case -0x7789fd43:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_BADMINORVERSION: The service you requested is available in this major version of DirectX, but not in this minor version. Get the latest version of the component runtime from Microsoft. (A \"minor version\" denotes a secondary release, such as DirectX 6.1.)");
    case -0x7789fd3f:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALID_DEVICE: The requested device type is not valid.");
    case -0x7789fd3e:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INITFAILED: A rendering device could not be created because the new device could not be initialized.");
    case -0x7789fd3d:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_DEVICEAGGREGATED: The IDirect3DDevice3::SetRenderTarget method was called on a device that was retrieved from the render target surface.");
    case -0x7789fd3a:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_CREATE_FAILED: The execute buffer could not be created. This typically occurs when no memory is available to allocate the execute buffer.");
    case -0x7789fd39:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_DESTROY_FAILED: The memory for the execute buffer could not be deallocated.");
    case -0x7789fd38:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_LOCK_FAILED: The execute buffer could not be locked.");
    case -0x7789fd37:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_UNLOCK_FAILED: The execute buffer could not be unlocked.");
    case -0x7789fd36:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_LOCKED: The operation requested by the application could not be completed because the execute buffer is locked.");
    case -0x7789fd35:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_NOT_LOCKED: The execute buffer could not be unlocked because it is not currently locked.");
    case -0x7789fd34:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_FAILED: The contents of the execute buffer are invalid and cannot be executed.");
    case -0x7789fd33:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_EXECUTE_CLIPPED_FAILED: The execute buffer could not be clipped during execution.");
    case -0x7789fd30:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_NO_SUPPORT: The device does not support texture mapping.");
    case -0x7789fd2f:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_CREATE_FAILED: The texture handle for the texture could not be retrieved from the driver.");
    case -0x7789fd2e:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_DESTROY_FAILED: The device was unable to deallocate the texture memory.");
    case -0x7789fd2d:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_LOCK_FAILED: The texture could not be locked.");
    case -0x7789fd2c:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_UNLOCK_FAILED: The texture surface could not be unlocked.");
    case -0x7789fd2b:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_LOAD_FAILED: The texture could not be loaded.");
    case -0x7789fd2a:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_SWAP_FAILED: The texture handles could not be swapped.");
    case -0x7789fd29:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_LOCKED: The requested operation could not be completed because the texture surface is currently locked.");
    case -0x7789fd28:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_NOT_LOCKED: The requested operation could not be completed because the texture surface is not locked.");
    case -0x7789fd27:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_GETSURF_FAILED: The DirectDraw surface used to create the texture could not be retrieved.");
    case -0x7789fd26:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATRIX_CREATE_FAILED: The matrix could not be created. This can occur when no memory is available to allocate for the matrix.");
    case -0x7789fd25:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATRIX_DESTROY_FAILED: The memory for the matrix could not be deallocated.");
    case -0x7789fd24:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATRIX_SETDATA_FAILED: The matrix data could not be set. This can occur when the matrix was not created by the current device.");
    case -0x7789fd23:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATRIX_GETDATA_FAILED: The matrix data could not be retrieved. This can occur when the matrix was not created by the current device.");
    case -0x7789fd22:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_SETVIEWPORTDATA_FAILED: The viewport parameters could not be set.");
    case -0x7789fd21:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDCURRENTVIEWPORT: The currently selected viewport is not valid.");
    case -0x7789fd20:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDPRIMITIVETYPE: The primitive type specified by the application is invalid.");
    case -0x7789fd1f:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDVERTEXTYPE: The vertex type specified by the application is invalid.");
    case -0x7789fd1e:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TEXTURE_BADSIZE: The dimensions of a current texture are invalid. This can occur when an application attempts to use a texture that has non-power-of-two dimensions with a device that requires them.");
    case -0x7789fd1d:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDRAMPTEXTURE: Ramp mode is being used and the texture handle in the current material does not match the current texture handle that is set as a render state.");
    case -0x7789fd1c:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATERIAL_CREATE_FAILED: The material could not be created. This typically occurs when no memory is available to allocate for the material.");
    case -0x7789fd1b:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATERIAL_DESTROY_FAILED: The memory for the material could not be deallocated.");
    case -0x7789fd1a:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATERIAL_SETDATA_FAILED: The material parameters could not be set.");
    case -0x7789fd19:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_MATERIAL_GETDATA_FAILED: The material parameters could not be retrieved.");
    case -0x7789fd18:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDPALETTE: The palette associated with a surface is invalid.");
    case -0x7789fd17:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY: The requested operation could not be completed because the specified device requires system-memory depth-buffer surfaces. (Software rendering devices require system-memory depth buffers.)");
    case -0x7789fd16:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_ZBUFF_NEEDS_VIDEOMEMORY: The requested operation could not be completed because the specified device requires video-memory depth-buffer surfaces. (Hardware-accelerated devices require video-memory depth buffers.)");
    case -0x7789fd15:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_SURFACENOTINVIDMEM: The device could not be created because the render target surface is not located in video-memory. (Hardware-accelerated devices require video-memory render target surfaces.)");
    case -0x7789fd12:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_LIGHT_SET_FAILED: The attempt to set lighting parameters for a light object failed.");
    case -0x7789fd11:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_LIGHTHASVIEWPORT: The requested operation failed because the light object is associated with another viewport.");
    case -0x7789fd10:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_LIGHTNOTINTHISVIEWPORT: The requested operation failed because the light object has not been associated with this viewport.");
    case -0x7789fd08:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_SCENE_IN_SCENE: Scene rendering could not begin because a previous scene was not completed by a call to the IDirect3DDevice3::EndScene method.");
    case -0x7789fd07:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_SCENE_NOT_IN_SCENE: Scene rendering could not be completed because a scene was not started by a previous call to the IDirect3DDevice3::BeginScene method.");
    case -0x7789fd06:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_SCENE_BEGIN_FAILED: Scene rendering could not begin.");
    case -0x7789fd05:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_SCENE_END_FAILED: Scene rendering could not be completed.");
    case -0x7789fcfe:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INBEGIN: The requested operation cannot be completed while scene rendering is taking place. Try again after the scene is completed and the IDirect3DDevice::EndScene method (or equivalent method) is called.");
    case -0x7789fcfd:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_NOTINBEGIN: The requested rendering operation could not be completed because scene rendering has not begun. Call IDirect3DDevice3::BeginScene to begin rendering then try again.");
    case -0x7789fcfc:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_NOVIEWPORTS: The requested operation failed because the device currently has no viewports associated with it.");
    case -0x7789fcfb:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_VIEWPORTDATANOTSET: The requested operation could not be completed because viewport parameters have not yet been set. Set the viewport parameters by calling IDirect3DViewport3::SetViewport method and try again.");
    case -0x7789fcfa:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_VIEWPORTHASNODEVICE: The requested operation could not be completed because the viewport has not yet been associated with a device. Associate the viewport with a rendering device by calling IDirect3DDevice3::AddViewport and try again.");
    case -0x7789fcf9:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_NOCURRENTVIEWPORT: The viewport parameters could not be retrieved because none have been set.");
    }
  }
  else if (result < -0x7789f7f3) {
    if (result == -0x7789f7f4) {
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_VERTEXBUFFEROPTIMIZED: The requested operation could not be completed because the vertex buffer is optimized. (The contents of optimized vertex buffers are driver specific, and considered private.)");
    }
    if (result == -0x7789f7fe) {
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_COLORKEYATTACHED: The application attempted to create a texture with a surface that uses a color key for transparency.");
    }
  }
  else if (result < -0x7789f7e9) {
    if (result == -0x7789f7ea) {
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_ZBUFFER_NOTPRESENT: The requested operation could not be completed because the render target surface does not have an attached depth buffer.");
    }
    if (result == -0x7789f7f3) {
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_VBUF_CREATE_FAILED: The vertex buffer could not be created. This can happen when there is insufficient memory to allocate a vertex buffer.");
    }
    if (result == -0x7789f7f2) {
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_VERTEXBUFFERLOCKED: The requested operation could not be completed because the vertex buffer is locked.");
    }
  }
  else if (result < 1) {
    if (result == 0) {
      return;
    }
    switch(result) {
    case -0x7789f7e9:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_STENCILBUFFER_NOTPRESENT: The requested stencil buffer operation could not be completed because there is no stencil buffer attached to the render target surface.");
    case -0x7789f7e8:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_WRONGTEXTUREFORMAT: The pixel format of the texture surface is not valid.");
    case -0x7789f7e7:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_UNSUPPORTEDCOLOROPERATION: The device does not support the one of the specified texture blending operations for color values.");
    case -0x7789f7e6:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_UNSUPPORTEDCOLORARG: The device does not support the one of the specified texture blending arguments for color values.");
    case -0x7789f7e5:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_UNSUPPORTEDALPHAOPERATION: The device does not support one of the specified texture blending operations for the alpha channel.");
    case -0x7789f7e4:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_UNSUPPORTEDALPHAARG: The device does not support one of the specified texture blending arguments for the alpha channel.");
    case -0x7789f7e3:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TOOMANYOPERATIONS: The application is requesting more texture filtering operations than the device supports.");
    case -0x7789f7e2:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_CONFLICTINGTEXTUREFILTER: The current texture filters cannot be used together.");
    case -0x7789f7e1:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_UNSUPPORTEDFACTORVALUE: The specified texture factor value is not supported by the device.");
    case -0x7789f7df:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_CONFLICTINGRENDERSTATE: The currently set render states cannot be used together.");
    case -0x7789f7de:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_UNSUPPORTEDTEXTUREFILTER: The specified texture filter is not supported by the device.");
    case -0x7789f7dd:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_TOOMANYPRIMITIVES: The device is unable to render the provided quantity of primitives in a single pass.");
    case -0x7789f7dc:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_INVALIDMATRIX: The requested operation could not be completed because the combination of the currently set world, view, and projection matrices is invalid (the determinant of the combined matrix is zero).");
    case -0x7789f7da:
      dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_CONFLICTINGTEXTUREPALETTE: The current textures cannot be used simultaneously. This generally occurs when a multi-texture device requires that all palettized textures simultaneously enabled also share the same palette.");
    }
  }
  dll_dx7_cpp_fatalError_FUN_10002340("D3DERR_ELIFINO: An unknown D3D error occured:");
}
