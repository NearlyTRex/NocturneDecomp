; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SCameraViewportState * Stack[0x8]:4   camera_state
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 at 004545c4
;
; Referenced Globals:
;   int g_ProjectionScale = 0x10000
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
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

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048dcc0
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
    MOV EDX,dword ptr [EAX]             ; 0048dcc4
    MOV dword ptr [0x02d02548],EDX      ; 0048dcc6 | g_ViewportCenterXFixed
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048dccc
    MOV dword ptr [0x02d0254c],EDX      ; 0048dccf | g_ViewportCenterYFixed
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048dcd5
    MOV dword ptr [0x02d02550],EDX      ; 0048dcd8 | g_ViewportRightFixed
    MOV EDX,dword ptr [EAX + 0xc]       ; 0048dcde
    MOV dword ptr [0x02d02554],EDX      ; 0048dce1 | g_ViewportBottomFixed
    MOV EDX,dword ptr [EAX + 0x10]      ; 0048dce7
    MOV dword ptr [0x02d052c4],EDX      ; 0048dcea | g_CameraOriginX
    MOV EDX,dword ptr [EAX + 0x14]      ; 0048dcf0
    MOV dword ptr [0x02d052c8],EDX      ; 0048dcf3 | g_CameraOriginY
    MOV EDX,dword ptr [EAX + 0x18]      ; 0048dcf9
    MOV dword ptr [0x02d052cc],EDX      ; 0048dcfc | g_CameraOriginZ
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0048dd02
    MOV dword ptr [0x02d052d0],EDX      ; 0048dd05 | g_CameraRotationPitch
    MOV EDX,dword ptr [EAX + 0x20]      ; 0048dd0b
    MOV dword ptr [0x02d052d4],EDX      ; 0048dd0e | g_CameraRotationYaw
    MOV EDX,dword ptr [EAX + 0x24]      ; 0048dd14
    MOV dword ptr [0x02d052d8],EDX      ; 0048dd17 | g_CameraRotationRoll
    MOV EDX,dword ptr [EAX + 0x28]      ; 0048dd1d
    MOV dword ptr [0x02d02558],EDX      ; 0048dd20 | g_ClipLeft
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0048dd26
    MOV dword ptr [0x02d02560],EDX      ; 0048dd29 | g_ClipRight
    MOV EDX,dword ptr [EAX + 0x30]      ; 0048dd2f
    MOV dword ptr [0x02d0255c],EDX      ; 0048dd32 | g_ClipTop
    MOV EDX,dword ptr [EAX + 0x34]      ; 0048dd38
    MOV dword ptr [0x02d02564],EDX      ; 0048dd3b | g_ClipBottom
    MOV EDX,dword ptr [EAX + 0x38]      ; 0048dd41
    MOV dword ptr [0x02d052b8],EDX      ; 0048dd44 | g_RelativeX
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0048dd4a
    MOV dword ptr [0x02d052bc],EDX      ; 0048dd4d | g_RelativeY
    MOV EDX,dword ptr [EAX + 0x40]      ; 0048dd53
    MOV dword ptr [0x02d052c0],EDX      ; 0048dd56 | g_RelativeZ
    MOV EDX,dword ptr [EAX + 0x44]      ; 0048dd5c
    MOV dword ptr [0x02d052e8],EDX      ; 0048dd5f | g_TransformMatrix
    MOV EDX,dword ptr [EAX + 0x48]      ; 0048dd65
    MOV dword ptr [0x02d052ec],EDX      ; 0048dd68 | g_TransformMatrix[0][1]
    MOV EDX,dword ptr [EAX + 0x4c]      ; 0048dd6e
    MOV dword ptr [0x02d052f0],EDX      ; 0048dd71 | g_TransformMatrix[0][2]
    MOV EDX,dword ptr [EAX + 0x50]      ; 0048dd77
    MOV dword ptr [0x02d052f4],EDX      ; 0048dd7a | g_TransformMatrix[1][0]
    MOV EDX,dword ptr [EAX + 0x54]      ; 0048dd80
    MOV dword ptr [0x02d052f8],EDX      ; 0048dd83 | g_TransformMatrix[1][1]
    MOV EDX,dword ptr [EAX + 0x58]      ; 0048dd89
    MOV dword ptr [0x02d052fc],EDX      ; 0048dd8c | g_TransformMatrix[1][2]
    MOV EDX,dword ptr [EAX + 0x5c]      ; 0048dd92
    MOV dword ptr [0x02d05300],EDX      ; 0048dd95 | g_TransformMatrix[2][0]
    MOV EDX,dword ptr [EAX + 0x60]      ; 0048dd9b
    MOV dword ptr [0x02d05304],EDX      ; 0048dd9e | g_TransformMatrix[2][1]
    MOV EDX,dword ptr [EAX + 0x64]      ; 0048dda4
    MOV dword ptr [0x02d05308],EDX      ; 0048dda7 | g_TransformMatrix[2][2]
    MOV EDX,dword ptr [EAX + 0x68]      ; 0048ddad
    MOV dword ptr [0x02f0d364],EDX      ; 0048ddb0 | g_InverseMatrix
    MOV EDX,dword ptr [EAX + 0x6c]      ; 0048ddb6
    MOV dword ptr [0x02f0d368],EDX      ; 0048ddb9 | g_InverseMatrix[0][1]
    MOV EDX,dword ptr [EAX + 0x70]      ; 0048ddbf
    MOV dword ptr [0x02f0d36c],EDX      ; 0048ddc2 | g_InverseMatrix[0][2]
    MOV EDX,dword ptr [EAX + 0x74]      ; 0048ddc8
    MOV dword ptr [0x02f0d370],EDX      ; 0048ddcb | g_InverseMatrix[1][0]
    MOV EDX,dword ptr [EAX + 0x78]      ; 0048ddd1
    MOV dword ptr [0x02f0d374],EDX      ; 0048ddd4 | g_InverseMatrix[1][1]
    MOV EDX,dword ptr [EAX + 0x7c]      ; 0048ddda
    MOV dword ptr [0x02f0d378],EDX      ; 0048dddd | g_InverseMatrix[1][2]
    MOV EDX,dword ptr [EAX + 0x80]      ; 0048dde3
    MOV dword ptr [0x02f0d37c],EDX      ; 0048dde9 | g_InverseMatrix[2][0]
    MOV EDX,dword ptr [EAX + 0x84]      ; 0048ddef
    MOV dword ptr [0x02f0d380],EDX      ; 0048ddf5 | g_InverseMatrix[2][1]
    MOV EDX,dword ptr [EAX + 0x88]      ; 0048ddfb
    MOV EAX,dword ptr [EAX + 0x8c]      ; 0048de01
    MOV dword ptr [0x02f0d384],EDX      ; 0048de07 | g_InverseMatrix[2][2]
    MOV [0x006793c0],EAX                ; 0048de0d | g_ProjectionScale
    RET                                 ; 0048de12

