; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer *this_ptr,SCameraViewportState *output_state)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SCameraViewportState * Stack[0x8]:4   output_state
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 at 0044cdbb
;   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 at 00454507
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

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048de20
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
    MOV EDX,dword ptr [0x02d02548]      ; 0048de24 | g_ViewportCenterXFixed
    MOV dword ptr [EAX],EDX             ; 0048de2a
    MOV EDX,dword ptr [0x02d0254c]      ; 0048de2c | g_ViewportCenterYFixed
    MOV dword ptr [EAX + 0x4],EDX       ; 0048de32
    MOV EDX,dword ptr [0x02d02550]      ; 0048de35 | g_ViewportRightFixed
    MOV dword ptr [EAX + 0x8],EDX       ; 0048de3b
    MOV EDX,dword ptr [0x02d02554]      ; 0048de3e | g_ViewportBottomFixed
    MOV dword ptr [EAX + 0xc],EDX       ; 0048de44
    MOV EDX,dword ptr [0x02d052c4]      ; 0048de47 | g_CameraOriginX
    MOV dword ptr [EAX + 0x10],EDX      ; 0048de4d
    MOV EDX,dword ptr [0x02d052c8]      ; 0048de50 | g_CameraOriginY
    MOV dword ptr [EAX + 0x14],EDX      ; 0048de56
    MOV EDX,dword ptr [0x02d052cc]      ; 0048de59 | g_CameraOriginZ
    MOV dword ptr [EAX + 0x18],EDX      ; 0048de5f
    MOV EDX,dword ptr [0x02d052d0]      ; 0048de62 | g_CameraRotationPitch
    MOV dword ptr [EAX + 0x1c],EDX      ; 0048de68
    MOV EDX,dword ptr [0x02d052d4]      ; 0048de6b | g_CameraRotationYaw
    MOV dword ptr [EAX + 0x20],EDX      ; 0048de71
    MOV EDX,dword ptr [0x02d052d8]      ; 0048de74 | g_CameraRotationRoll
    MOV dword ptr [EAX + 0x24],EDX      ; 0048de7a
    MOV EDX,dword ptr [0x02d02558]      ; 0048de7d | g_ClipLeft
    MOV dword ptr [EAX + 0x28],EDX      ; 0048de83
    MOV EDX,dword ptr [0x02d02560]      ; 0048de86 | g_ClipRight
    MOV dword ptr [EAX + 0x2c],EDX      ; 0048de8c
    MOV EDX,dword ptr [0x02d0255c]      ; 0048de8f | g_ClipTop
    MOV dword ptr [EAX + 0x30],EDX      ; 0048de95
    MOV EDX,dword ptr [0x02d02564]      ; 0048de98 | g_ClipBottom
    MOV dword ptr [EAX + 0x34],EDX      ; 0048de9e
    MOV EDX,dword ptr [0x02d052b8]      ; 0048dea1 | g_RelativeX
    MOV dword ptr [EAX + 0x38],EDX      ; 0048dea7
    MOV EDX,dword ptr [0x02d052bc]      ; 0048deaa | g_RelativeY
    MOV dword ptr [EAX + 0x3c],EDX      ; 0048deb0
    MOV EDX,dword ptr [0x02d052c0]      ; 0048deb3 | g_RelativeZ
    MOV dword ptr [EAX + 0x40],EDX      ; 0048deb9
    MOV EDX,dword ptr [0x02d052e8]      ; 0048debc | g_TransformMatrix
    MOV dword ptr [EAX + 0x44],EDX      ; 0048dec2
    MOV EDX,dword ptr [0x02d052ec]      ; 0048dec5 | g_TransformMatrix[0][1]
    MOV dword ptr [EAX + 0x48],EDX      ; 0048decb
    MOV EDX,dword ptr [0x02d052f0]      ; 0048dece | g_TransformMatrix[0][2]
    MOV dword ptr [EAX + 0x4c],EDX      ; 0048ded4
    MOV EDX,dword ptr [0x02d052f4]      ; 0048ded7 | g_TransformMatrix[1][0]
    MOV dword ptr [EAX + 0x50],EDX      ; 0048dedd
    MOV EDX,dword ptr [0x02d052f8]      ; 0048dee0 | g_TransformMatrix[1][1]
    MOV dword ptr [EAX + 0x54],EDX      ; 0048dee6
    MOV EDX,dword ptr [0x02d052fc]      ; 0048dee9 | g_TransformMatrix[1][2]
    MOV dword ptr [EAX + 0x58],EDX      ; 0048deef
    MOV EDX,dword ptr [0x02d05300]      ; 0048def2 | g_TransformMatrix[2][0]
    MOV dword ptr [EAX + 0x5c],EDX      ; 0048def8
    MOV EDX,dword ptr [0x02d05304]      ; 0048defb | g_TransformMatrix[2][1]
    MOV dword ptr [EAX + 0x60],EDX      ; 0048df01
    MOV EDX,dword ptr [0x02d05308]      ; 0048df04 | g_TransformMatrix[2][2]
    MOV dword ptr [EAX + 0x64],EDX      ; 0048df0a
    MOV EDX,dword ptr [0x02f0d364]      ; 0048df0d | g_InverseMatrix
    MOV dword ptr [EAX + 0x68],EDX      ; 0048df13
    MOV EDX,dword ptr [0x02f0d368]      ; 0048df16 | g_InverseMatrix[0][1]
    MOV dword ptr [EAX + 0x6c],EDX      ; 0048df1c
    MOV EDX,dword ptr [0x02f0d36c]      ; 0048df1f | g_InverseMatrix[0][2]
    MOV dword ptr [EAX + 0x70],EDX      ; 0048df25
    MOV EDX,dword ptr [0x02f0d370]      ; 0048df28 | g_InverseMatrix[1][0]
    MOV dword ptr [EAX + 0x74],EDX      ; 0048df2e
    MOV EDX,dword ptr [0x02f0d374]      ; 0048df31 | g_InverseMatrix[1][1]
    MOV dword ptr [EAX + 0x78],EDX      ; 0048df37
    MOV EDX,dword ptr [0x02f0d378]      ; 0048df3a | g_InverseMatrix[1][2]
    MOV dword ptr [EAX + 0x7c],EDX      ; 0048df40
    MOV EDX,dword ptr [0x02f0d37c]      ; 0048df43 | g_InverseMatrix[2][0]
    MOV dword ptr [EAX + 0x80],EDX      ; 0048df49
    MOV EDX,dword ptr [0x02f0d380]      ; 0048df4f | g_InverseMatrix[2][1]
    MOV dword ptr [EAX + 0x84],EDX      ; 0048df55
    MOV EDX,dword ptr [0x02f0d384]      ; 0048df5b | g_InverseMatrix[2][2]
    MOV dword ptr [EAX + 0x88],EDX      ; 0048df61
    MOV EDX,dword ptr [0x006793c0]      ; 0048df67 | g_ProjectionScale
    MOV dword ptr [EAX + 0x8c],EDX      ; 0048df6d
    RET                                 ; 0048df73

