; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SCameraViewportState * Stack[0x8]:4   camera_state
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0 at 00443b25
;
; Referenced Globals:
;   int g_ProjectionScale = 0x10000
;   int g_INT_01c35e38
;   int g_INT_01c35e3c
;   int g_INT_01c35e40
;   int g_INT_01c35e44
;   int g_INT_01c35e48
;   int g_INT_01c35e4c
;   int g_ClipRight
;   int g_INT_01c35e54
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

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046cb40
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40
    MOV EDX,dword ptr [EAX]             ; 0046cb44
    MOV dword ptr [0x01c35e38],EDX      ; 0046cb46 | g_INT_01c35e38
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046cb4c
    MOV dword ptr [0x01c35e3c],EDX      ; 0046cb4f | g_INT_01c35e3c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046cb55
    MOV dword ptr [0x01c35e40],EDX      ; 0046cb58 | g_INT_01c35e40
    MOV EDX,dword ptr [EAX + 0xc]       ; 0046cb5e
    MOV dword ptr [0x01c35e44],EDX      ; 0046cb61 | g_INT_01c35e44
    MOV EDX,dword ptr [EAX + 0x10]      ; 0046cb67
    MOV dword ptr [0x01c38b78],EDX      ; 0046cb6a | g_CameraOriginX
    MOV EDX,dword ptr [EAX + 0x14]      ; 0046cb70
    MOV dword ptr [0x01c38b7c],EDX      ; 0046cb73 | g_CameraOriginY
    MOV EDX,dword ptr [EAX + 0x18]      ; 0046cb79
    MOV dword ptr [0x01c38b80],EDX      ; 0046cb7c | g_CameraOriginZ
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0046cb82
    MOV dword ptr [0x01c38b84],EDX      ; 0046cb85 | g_CameraRotationPitch
    MOV EDX,dword ptr [EAX + 0x20]      ; 0046cb8b
    MOV dword ptr [0x01c38b88],EDX      ; 0046cb8e | g_CameraRotationYaw
    MOV EDX,dword ptr [EAX + 0x24]      ; 0046cb94
    MOV dword ptr [0x01c38b8c],EDX      ; 0046cb97 | g_CameraRotationRoll
    MOV EDX,dword ptr [EAX + 0x28]      ; 0046cb9d
    MOV dword ptr [0x01c35e48],EDX      ; 0046cba0 | g_INT_01c35e48
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0046cba6
    MOV dword ptr [0x01c35e50],EDX      ; 0046cba9 | g_ClipRight
    MOV EDX,dword ptr [EAX + 0x30]      ; 0046cbaf
    MOV dword ptr [0x01c35e4c],EDX      ; 0046cbb2 | g_INT_01c35e4c
    MOV EDX,dword ptr [EAX + 0x34]      ; 0046cbb8
    MOV dword ptr [0x01c35e54],EDX      ; 0046cbbb | g_INT_01c35e54
    MOV EDX,dword ptr [EAX + 0x38]      ; 0046cbc1
    MOV dword ptr [0x01c38b6c],EDX      ; 0046cbc4 | g_RelativeX
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0046cbca
    MOV dword ptr [0x01c38b70],EDX      ; 0046cbcd | g_RelativeY
    MOV EDX,dword ptr [EAX + 0x40]      ; 0046cbd3
    MOV dword ptr [0x01c38b74],EDX      ; 0046cbd6 | g_RelativeZ
    MOV EDX,dword ptr [EAX + 0x44]      ; 0046cbdc
    MOV dword ptr [0x01c38b9c],EDX      ; 0046cbdf | g_INT_01c38b9c
    MOV EDX,dword ptr [EAX + 0x48]      ; 0046cbe5
    MOV dword ptr [0x01c38ba0],EDX      ; 0046cbe8 | g_INT_01c38ba0
    MOV EDX,dword ptr [EAX + 0x4c]      ; 0046cbee
    MOV dword ptr [0x01c38ba4],EDX      ; 0046cbf1 | g_INT_01c38ba4
    MOV EDX,dword ptr [EAX + 0x50]      ; 0046cbf7
    MOV dword ptr [0x01c38ba8],EDX      ; 0046cbfa | g_INT_01c38ba8
    MOV EDX,dword ptr [EAX + 0x54]      ; 0046cc00
    MOV dword ptr [0x01c38bac],EDX      ; 0046cc03 | g_INT_01c38bac
    MOV EDX,dword ptr [EAX + 0x58]      ; 0046cc09
    MOV dword ptr [0x01c38bb0],EDX      ; 0046cc0c | g_INT_01c38bb0
    MOV EDX,dword ptr [EAX + 0x5c]      ; 0046cc12
    MOV dword ptr [0x01c38bb4],EDX      ; 0046cc15 | g_INT_01c38bb4
    MOV EDX,dword ptr [EAX + 0x60]      ; 0046cc1b
    MOV dword ptr [0x01c38bb8],EDX      ; 0046cc1e | g_INT_01c38bb8
    MOV EDX,dword ptr [EAX + 0x64]      ; 0046cc24
    MOV dword ptr [0x01c38bbc],EDX      ; 0046cc27 | g_INT_01c38bbc
    MOV EDX,dword ptr [EAX + 0x68]      ; 0046cc2d
    MOV dword ptr [0x01d04fb8],EDX      ; 0046cc30 | g_INT_01d04fb8
    MOV EDX,dword ptr [EAX + 0x6c]      ; 0046cc36
    MOV dword ptr [0x01d04fbc],EDX      ; 0046cc39 | g_INT_01d04fbc
    MOV EDX,dword ptr [EAX + 0x70]      ; 0046cc3f
    MOV dword ptr [0x01d04fc0],EDX      ; 0046cc42 | g_INT_01d04fc0
    MOV EDX,dword ptr [EAX + 0x74]      ; 0046cc48
    MOV dword ptr [0x01d04fc4],EDX      ; 0046cc4b | g_INT_01d04fc4
    MOV EDX,dword ptr [EAX + 0x78]      ; 0046cc51
    MOV dword ptr [0x01d04fc8],EDX      ; 0046cc54 | g_INT_01d04fc8
    MOV EDX,dword ptr [EAX + 0x7c]      ; 0046cc5a
    MOV dword ptr [0x01d04fcc],EDX      ; 0046cc5d | g_INT_01d04fcc
    MOV EDX,dword ptr [EAX + 0x80]      ; 0046cc63
    MOV dword ptr [0x01d04fd0],EDX      ; 0046cc69 | g_INT_01d04fd0
    MOV EDX,dword ptr [EAX + 0x84]      ; 0046cc6f
    MOV dword ptr [0x01d04fd4],EDX      ; 0046cc75 | g_INT_01d04fd4
    MOV EDX,dword ptr [EAX + 0x88]      ; 0046cc7b
    MOV EAX,dword ptr [EAX + 0x8c]      ; 0046cc81
    MOV dword ptr [0x01d04fd8],EDX      ; 0046cc87 | g_INT_01d04fd8
    MOV [0x006141e4],EAX                ; 0046cc8d | g_ProjectionScale
    RET                                 ; 0046cc92

