// Name: dll_dx7.cpp_FUN_10001d70
// Address: 10001d70
// Address Range: [[10001d70, 100021d1]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10001d70(int param_1)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10001d70(int param_1)

{
  if (param_1 < -0x7789f7ff) {
    if (param_1 != -0x7789f800) {
      switch(param_1) {
      case -0x7789fd44:
        dll_dx7_cpp_FUN_10002340("D3DERR_BADMAJORVERSION: The service you requested is unavailable in this major version of DirectX. (A \"major version\" denotes a primary release, such as DirectX 6.0.)");
      case -0x7789fd43:
        dll_dx7_cpp_FUN_10002340("D3DERR_BADMINORVERSION: The service you requested is available in this major version of DirectX, but not in this minor version. Get the latest version of the component runtime from Microsoft. (A \"minor version\" denotes a secondary release, such as DirectX 6.1.)");
LAB_10001e1c:
        dll_dx7_cpp_FUN_10002340("D3DERR_COLORKEYATTACHED: The application attempted to create a texture with a surface that uses a color key for transparency.");
switchD_10001dfb_caseD_8876081e:
        dll_dx7_cpp_FUN_10002340("D3DERR_CONFLICTINGTEXTUREFILTER: The current texture filters cannot be used together.");
        goto switchD_10001dfb_caseD_88760826;
      default:
        goto switchD_10001d97_caseD_887602be;
      case -0x7789fd3d:
switchD_10001d97_caseD_887602c3:
        dll_dx7_cpp_FUN_10002340("D3DERR_DEVICEAGGREGATED: The IDirect3DDevice3::SetRenderTarget method was called on a device that was retrieved from the render target surface.");
      case -0x7789fd33:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_CLIPPED_FAILED: The execute buffer could not be clipped during execution.");
      case -0x7789fd3a:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_CREATE_FAILED: The execute buffer could not be created. This typically occurs when no memory is available to allocate the execute buffer.");
      case -0x7789fd39:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_DESTROY_FAILED: The memory for the execute buffer could not be deallocated.");
      case -0x7789fd34:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_FAILED: The contents of the execute buffer are invalid and cannot be executed.");
      case -0x7789fd38:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_LOCK_FAILED: The execute buffer could not be locked.");
      case -0x7789fd36:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_LOCKED: The operation requested by the application could not be completed because the execute buffer is locked.");
      case -0x7789fd35:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_NOT_LOCKED: The execute buffer could not be unlocked because it is not currently locked.");
      case -0x7789fd37:
        dll_dx7_cpp_FUN_10002340("D3DERR_EXECUTE_UNLOCK_FAILED: The execute buffer could not be unlocked.");
      case -0x7789fd3e:
        dll_dx7_cpp_FUN_10002340("D3DERR_INITFAILED: A rendering device could not be created because the new device could not be initialized.");
      case -0x7789fcfe:
        dll_dx7_cpp_FUN_10002340("D3DERR_INBEGIN: The requested operation cannot be completed while scene rendering is taking place. Try again after the scene is completed and the IDirect3DDevice::EndScene method (or equivalent method) is called.");
      case -0x7789fd3f:
        dll_dx7_cpp_FUN_10002340("D3DERR_INVALID_DEVICE: The requested device type is not valid.");
      case -0x7789fd21:
        dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDCURRENTVIEWPORT: The currently selected viewport is not valid.");
switchD_10001dfb_caseD_88760824:
        dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDMATRIX: The requested operation could not be completed because the combination of the currently set world, view, and projection matrices is invalid (the determinant of the combined matrix is zero).");
switchD_10001d97_caseD_887602e8:
        dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDPALETTE: The palette associated with a surface is invalid.");
        goto switchD_10001d97_caseD_887602e0;
      case -0x7789fd20:
switchD_10001d97_caseD_887602e0:
        dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDPRIMITIVETYPE: The primitive type specified by the application is invalid.");
      case -0x7789fd1d:
        dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDRAMPTEXTURE: Ramp mode is being used and the texture handle in the current material does not match the current texture handle that is set as a render state.");
        break;
      case -0x7789fd1f:
        goto switchD_10001d97_caseD_887602e1;
      case -0x7789fd1e:
switchD_10001d97_caseD_887602e2:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_BADSIZE: The dimensions of a current texture are invalid. This can occur when an application attempts to use a texture that has non-power-of-two dimensions with a device that requires them.");
      case -0x7789fd2f:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_CREATE_FAILED: The texture handle for the texture could not be retrieved from the driver.");
      case -0x7789fd2e:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_DESTROY_FAILED: The device was unable to deallocate the texture memory.");
      case -0x7789fd27:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_GETSURF_FAILED: The DirectDraw surface used to create the texture could not be retrieved.");
      case -0x7789fd2b:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_LOAD_FAILED: The texture could not be loaded.");
      case -0x7789fd2d:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_LOCK_FAILED: The texture could not be locked.");
      case -0x7789fd29:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_LOCKED: The requested operation could not be completed because the texture surface is currently locked.");
      case -0x7789fd30:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_NO_SUPPORT: The device does not support texture mapping.");
      case -0x7789fd28:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_NOT_LOCKED: The requested operation could not be completed because the texture surface is not locked.");
      case -0x7789fd2a:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_SWAP_FAILED: The texture handles could not be swapped.");
      case -0x7789fd2c:
        dll_dx7_cpp_FUN_10002340("D3DERR_TEXTURE_UNLOCK_FAILED: The texture surface could not be unlocked.");
switchD_10001dfb_caseD_8876081d:
        dll_dx7_cpp_FUN_10002340("D3DERR_TOOMANYOPERATIONS: The application is requesting more texture filtering operations than the device supports.");
        goto switchD_10001dfb_caseD_88760823;
      case -0x7789fd18:
        goto switchD_10001d97_caseD_887602e8;
      case -0x7789fd17:
        goto switchD_10001d97_caseD_887602e9;
      case -0x7789fd16:
switchD_10001d97_caseD_887602ea:
        dll_dx7_cpp_FUN_10002340("D3DERR_ZBUFF_NEEDS_VIDEOMEMORY: The requested operation could not be completed because the specified device requires video-memory depth-buffer surfaces. (Hardware-accelerated devices require video-memory depth buffers.)");
LAB_100021b7:
        dll_dx7_cpp_FUN_10002340("D3DERR_ZBUFFER_NOTPRESENT: The requested operation could not be completed because the render target surface does not have an attached depth buffer.");
switchD_10001d97_caseD_887602be:
        dll_dx7_cpp_FUN_10002340("D3DERR_ELIFINO: An unknown D3D error occured:");
        return;
      case -0x7789fd15:
        goto switchD_10001d97_caseD_887602eb;
      case -0x7789fd12:
switchD_10001d97_caseD_887602ee:
        dll_dx7_cpp_FUN_10002340("D3DERR_LIGHT_SET_FAILED: The attempt to set lighting parameters for a light object failed.");
      case -0x7789fd11:
        dll_dx7_cpp_FUN_10002340("D3DERR_LIGHTHASVIEWPORT: The requested operation failed because the light object is associated with another viewport.");
      case -0x7789fd10:
        dll_dx7_cpp_FUN_10002340("D3DERR_LIGHTNOTINTHISVIEWPORT: The requested operation failed because the light object has not been associated with this viewport.");
      case -0x7789fd1c:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATERIAL_CREATE_FAILED: The material could not be created. This typically occurs when no memory is available to allocate for the material.");
      case -0x7789fd1b:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATERIAL_DESTROY_FAILED: The memory for the material could not be deallocated.");
      case -0x7789fd19:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATERIAL_GETDATA_FAILED: The material parameters could not be retrieved.");
      case -0x7789fd1a:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATERIAL_SETDATA_FAILED: The material parameters could not be set.");
      case -0x7789fd26:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATRIX_CREATE_FAILED: The matrix could not be created. This can occur when no memory is available to allocate for the matrix.");
      case -0x7789fd25:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATRIX_DESTROY_FAILED: The memory for the matrix could not be deallocated.");
      case -0x7789fd23:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATRIX_GETDATA_FAILED: The matrix data could not be retrieved. This can occur when the matrix was not created by the current device.");
      case -0x7789fd24:
        dll_dx7_cpp_FUN_10002340("D3DERR_MATRIX_SETDATA_FAILED: The matrix data could not be set. This can occur when the matrix was not created by the current device.");
      case -0x7789fcf9:
        dll_dx7_cpp_FUN_10002340("D3DERR_NOCURRENTVIEWPORT: The viewport parameters could not be retrieved because none have been set.");
      case -0x7789fcfd:
        dll_dx7_cpp_FUN_10002340("D3DERR_NOTINBEGIN: The requested rendering operation could not be completed because scene rendering has not begun. Call IDirect3DDevice3::BeginScene to begin rendering then try again.");
      case -0x7789fcfc:
        dll_dx7_cpp_FUN_10002340("D3DERR_NOVIEWPORTS: The requested operation failed because the device currently has no viewports associated with it.");
      case -0x7789fd06:
        dll_dx7_cpp_FUN_10002340("D3DERR_SCENE_BEGIN_FAILED: Scene rendering could not begin.");
      case -0x7789fd05:
        dll_dx7_cpp_FUN_10002340("D3DERR_SCENE_END_FAILED: Scene rendering could not be completed.");
      case -0x7789fd08:
        dll_dx7_cpp_FUN_10002340("D3DERR_SCENE_IN_SCENE: Scene rendering could not begin because a previous scene was not completed by a call to the IDirect3DDevice3::EndScene method.");
      case -0x7789fd07:
        dll_dx7_cpp_FUN_10002340("D3DERR_SCENE_NOT_IN_SCENE: Scene rendering could not be completed because a scene was not started by a previous call to the IDirect3DDevice3::BeginScene method.");
      case -0x7789fd22:
        dll_dx7_cpp_FUN_10002340("D3DERR_SETVIEWPORTDATA_FAILED: The viewport parameters could not be set.");
switchD_10001dfb_caseD_88760817:
        dll_dx7_cpp_FUN_10002340("D3DERR_STENCILBUFFER_NOTPRESENT: The requested stencil buffer operation could not be completed because there is no stencil buffer attached to the render target surface.");
switchD_10001d97_caseD_887602eb:
        dll_dx7_cpp_FUN_10002340("D3DERR_SURFACENOTINVIDMEM: The device could not be created because the render target surface is not located in video-memory. (Hardware-accelerated devices require video-memory render target surfaces.)");
        goto switchD_10001d97_caseD_887602e2;
      case -0x7789fcfb:
        goto switchD_10001d97_caseD_88760305;
      case -0x7789fcfa:
switchD_10001d97_caseD_88760306:
        dll_dx7_cpp_FUN_10002340("D3DERR_VIEWPORTHASNODEVICE: The requested operation could not be completed because the viewport has not yet been associated with a device. Associate the viewport with a rendering device by calling IDirect3DDevice3::AddViewport and try again.");
switchD_10001dfb_caseD_88760818:
        dll_dx7_cpp_FUN_10002340("D3DERR_WRONGTEXTUREFORMAT: The pixel format of the texture surface is not valid.");
switchD_10001d97_caseD_887602e9:
        dll_dx7_cpp_FUN_10002340("D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY: The requested operation could not be completed because the specified device requires system-memory depth-buffer surfaces. (Software rendering devices require system-memory depth buffers.)");
        goto switchD_10001d97_caseD_887602ea;
      }
    }
    dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDVERTEXFORMAT: The combination of flexible vertex format flags specified by the application is not valid.");
switchD_10001d97_caseD_887602e1:
    dll_dx7_cpp_FUN_10002340("D3DERR_INVALIDVERTEXTYPE: The vertex type specified by the application is invalid.");
    goto switchD_10001d97_caseD_887602ee;
  }
  if (param_1 < -0x7789f7f3) {
    if (param_1 != -0x7789f7f4) {
      if (param_1 != -0x7789f7fe) goto switchD_10001d97_caseD_887602be;
      goto LAB_10001e1c;
    }
  }
  else {
    if (param_1 < -0x7789f7e9) {
      if (param_1 == -0x7789f7ea) goto LAB_100021b7;
      if (param_1 == -0x7789f7f3) goto LAB_1000214f;
      if (param_1 != -0x7789f7f2) goto switchD_10001d97_caseD_887602be;
    }
    else {
      if (0 < param_1) goto switchD_10001d97_caseD_887602be;
      if (param_1 == 0) {
        return;
      }
      switch(param_1) {
      case -0x7789f7e9:
        goto switchD_10001dfb_caseD_88760817;
      case -0x7789f7e8:
        goto switchD_10001dfb_caseD_88760818;
      case -0x7789f7e3:
        goto switchD_10001dfb_caseD_8876081d;
      case -0x7789f7e2:
        goto switchD_10001dfb_caseD_8876081e;
      default:
        goto switchD_10001d97_caseD_887602be;
      case -0x7789f7dd:
switchD_10001dfb_caseD_88760823:
        dll_dx7_cpp_FUN_10002340("D3DERR_TOOMANYPRIMITIVES: The device is unable to render the provided quantity of primitives in a single pass.");
      case -0x7789f7e4:
        dll_dx7_cpp_FUN_10002340("D3DERR_UNSUPPORTEDALPHAARG: The device does not support one of the specified texture blending arguments for the alpha channel.");
      case -0x7789f7e5:
        dll_dx7_cpp_FUN_10002340("D3DERR_UNSUPPORTEDALPHAOPERATION: The device does not support one of the specified texture blending operations for the alpha channel.");
      case -0x7789f7e6:
        dll_dx7_cpp_FUN_10002340("D3DERR_UNSUPPORTEDCOLORARG: The device does not support the one of the specified texture blending arguments for color values.");
      case -0x7789f7e7:
        dll_dx7_cpp_FUN_10002340("D3DERR_UNSUPPORTEDCOLOROPERATION: The device does not support the one of the specified texture blending operations for color values.");
      case -0x7789f7e1:
        dll_dx7_cpp_FUN_10002340("D3DERR_UNSUPPORTEDFACTORVALUE: The specified texture factor value is not supported by the device.");
      case -0x7789f7de:
        dll_dx7_cpp_FUN_10002340("D3DERR_UNSUPPORTEDTEXTUREFILTER: The specified texture filter is not supported by the device.");
        break;
      case -0x7789f7dc:
        goto switchD_10001dfb_caseD_88760824;
      case -0x7789f7da:
switchD_10001dfb_caseD_88760826:
        dll_dx7_cpp_FUN_10002340("D3DERR_CONFLICTINGTEXTUREPALETTE: The current textures cannot be used simultaneously. This generally occurs when a multi-texture device requires that all palettized textures simultaneously enabled also share the same palette.");
      case -0x7789f7df:
        dll_dx7_cpp_FUN_10002340("D3DERR_CONFLICTINGRENDERSTATE: The currently set render states cannot be used together.");
        goto switchD_10001d97_caseD_887602c3;
      }
LAB_1000214f:
      dll_dx7_cpp_FUN_10002340("D3DERR_VBUF_CREATE_FAILED: The vertex buffer could not be created. This can happen when there is insufficient memory to allocate a vertex buffer.");
    }
    dll_dx7_cpp_FUN_10002340("D3DERR_VERTEXBUFFERLOCKED: The requested operation could not be completed because the vertex buffer is locked.");
  }
  dll_dx7_cpp_FUN_10002340("D3DERR_VERTEXBUFFEROPTIMIZED: The requested operation could not be completed because the vertex buffer is optimized. (The contents of optimized vertex buffers are driver specific, and considered private.)");
switchD_10001d97_caseD_88760305:
  dll_dx7_cpp_FUN_10002340("D3DERR_VIEWPORTDATANOTSET: The requested operation could not be completed because viewport parameters have not yet been set. Set the viewport parameters by calling IDirect3DViewport3::SetViewport method and try again.");
  goto switchD_10001d97_caseD_88760306;
}
