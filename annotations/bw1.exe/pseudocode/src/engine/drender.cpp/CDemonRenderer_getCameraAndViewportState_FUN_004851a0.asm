; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SCameraViewportState * Stack[0x8]:4   output_state
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 at 0044d84b
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004551a0 at 004551b7
;
; Referenced Globals:
;   int g_ProjectionScale = 0x10000
;   int g_INT_01c4eff8
;   int g_INT_01c4effc
;   int g_INT_01c4f000
;   int g_INT_01c4f004
;   int g_INT_01c4f008
;   int g_INT_01c4f00c
;   int g_ClipRight
;   int g_INT_01c4f014
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004851a0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
    MOV EDX,dword ptr [0x01c4eff8]      ; 004851a4 | g_INT_01c4eff8
    MOV dword ptr [EAX],EDX             ; 004851aa
    MOV EDX,dword ptr [0x01c4effc]      ; 004851ac | g_INT_01c4effc
    MOV dword ptr [EAX + 0x4],EDX       ; 004851b2
    MOV EDX,dword ptr [0x01c4f000]      ; 004851b5 | g_INT_01c4f000
    MOV dword ptr [EAX + 0x8],EDX       ; 004851bb
    MOV EDX,dword ptr [0x01c4f004]      ; 004851be | g_INT_01c4f004
    MOV dword ptr [EAX + 0xc],EDX       ; 004851c4
    MOV EDX,dword ptr [0x01c51d38]      ; 004851c7 | g_CameraOriginX
    MOV dword ptr [EAX + 0x10],EDX      ; 004851cd
    MOV EDX,dword ptr [0x01c51d3c]      ; 004851d0 | g_CameraOriginY
    MOV dword ptr [EAX + 0x14],EDX      ; 004851d6
    MOV EDX,dword ptr [0x01c51d40]      ; 004851d9 | g_CameraOriginZ
    MOV dword ptr [EAX + 0x18],EDX      ; 004851df
    MOV EDX,dword ptr [0x01c51d44]      ; 004851e2 | g_CameraRotationPitch
    MOV dword ptr [EAX + 0x1c],EDX      ; 004851e8
    MOV EDX,dword ptr [0x01c51d48]      ; 004851eb | g_CameraRotationYaw
    MOV dword ptr [EAX + 0x20],EDX      ; 004851f1
    MOV EDX,dword ptr [0x01c51d4c]      ; 004851f4 | g_CameraRotationRoll
    MOV dword ptr [EAX + 0x24],EDX      ; 004851fa
    MOV EDX,dword ptr [0x01c4f008]      ; 004851fd | g_INT_01c4f008
    MOV dword ptr [EAX + 0x28],EDX      ; 00485203
    MOV EDX,dword ptr [0x01c4f010]      ; 00485206 | g_ClipRight
    MOV dword ptr [EAX + 0x2c],EDX      ; 0048520c
    MOV EDX,dword ptr [0x01c4f00c]      ; 0048520f | g_INT_01c4f00c
    MOV dword ptr [EAX + 0x30],EDX      ; 00485215
    MOV EDX,dword ptr [0x01c4f014]      ; 00485218 | g_INT_01c4f014
    MOV dword ptr [EAX + 0x34],EDX      ; 0048521e
    MOV EDX,dword ptr [0x01c51d2c]      ; 00485221 | g_RelativeX
    MOV dword ptr [EAX + 0x38],EDX      ; 00485227
    MOV EDX,dword ptr [0x01c51d30]      ; 0048522a | g_RelativeY
    MOV dword ptr [EAX + 0x3c],EDX      ; 00485230
    MOV EDX,dword ptr [0x01c51d34]      ; 00485233 | g_RelativeZ
    MOV dword ptr [EAX + 0x40],EDX      ; 00485239
    MOV EDX,dword ptr [0x01c51d5c]      ; 0048523c | g_INT_01c51d5c
    MOV dword ptr [EAX + 0x44],EDX      ; 00485242
    MOV EDX,dword ptr [0x01c51d60]      ; 00485245 | g_INT_01c51d60
    MOV dword ptr [EAX + 0x48],EDX      ; 0048524b
    MOV EDX,dword ptr [0x01c51d64]      ; 0048524e | g_INT_01c51d64
    MOV dword ptr [EAX + 0x4c],EDX      ; 00485254
    MOV EDX,dword ptr [0x01c51d68]      ; 00485257 | g_INT_01c51d68
    MOV dword ptr [EAX + 0x50],EDX      ; 0048525d
    MOV EDX,dword ptr [0x01c51d6c]      ; 00485260 | g_INT_01c51d6c
    MOV dword ptr [EAX + 0x54],EDX      ; 00485266
    MOV EDX,dword ptr [0x01c51d70]      ; 00485269 | g_INT_01c51d70
    MOV dword ptr [EAX + 0x58],EDX      ; 0048526f
    MOV EDX,dword ptr [0x01c51d74]      ; 00485272 | g_INT_01c51d74
    MOV dword ptr [EAX + 0x5c],EDX      ; 00485278
    MOV EDX,dword ptr [0x01c51d78]      ; 0048527b | g_INT_01c51d78
    MOV dword ptr [EAX + 0x60],EDX      ; 00485281
    MOV EDX,dword ptr [0x01c51d7c]      ; 00485284 | g_INT_01c51d7c
    MOV dword ptr [EAX + 0x64],EDX      ; 0048528a
    MOV EDX,dword ptr [0x01d1dd18]      ; 0048528d | g_INT_01d1dd18
    MOV dword ptr [EAX + 0x68],EDX      ; 00485293
    MOV EDX,dword ptr [0x01d1dd1c]      ; 00485296 | g_INT_01d1dd1c
    MOV dword ptr [EAX + 0x6c],EDX      ; 0048529c
    MOV EDX,dword ptr [0x01d1dd20]      ; 0048529f | g_INT_01d1dd20
    MOV dword ptr [EAX + 0x70],EDX      ; 004852a5
    MOV EDX,dword ptr [0x01d1dd24]      ; 004852a8 | g_INT_01d1dd24
    MOV dword ptr [EAX + 0x74],EDX      ; 004852ae
    MOV EDX,dword ptr [0x01d1dd28]      ; 004852b1 | g_INT_01d1dd28
    MOV dword ptr [EAX + 0x78],EDX      ; 004852b7
    MOV EDX,dword ptr [0x01d1dd2c]      ; 004852ba | g_INT_01d1dd2c
    MOV dword ptr [EAX + 0x7c],EDX      ; 004852c0
    MOV EDX,dword ptr [0x01d1dd30]      ; 004852c3 | g_INT_01d1dd30
    MOV dword ptr [EAX + 0x80],EDX      ; 004852c9
    MOV EDX,dword ptr [0x01d1dd34]      ; 004852cf | g_INT_01d1dd34
    MOV dword ptr [EAX + 0x84],EDX      ; 004852d5
    MOV EDX,dword ptr [0x01d1dd38]      ; 004852db | g_INT_01d1dd38
    MOV dword ptr [EAX + 0x88],EDX      ; 004852e1
    MOV EDX,dword ptr [0x0061b4c4]      ; 004852e7 | g_ProjectionScale
    MOV dword ptr [EAX + 0x8c],EDX      ; 004852ed
    RET                                 ; 004852f3

