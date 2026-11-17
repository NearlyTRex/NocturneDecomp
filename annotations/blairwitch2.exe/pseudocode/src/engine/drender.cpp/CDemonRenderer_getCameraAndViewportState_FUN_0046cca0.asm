; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0(CDemonRenderer *this_ptr,SCameraViewportState *output_state)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SCameraViewportState * Stack[0x8]:4   output_state
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 at 0043c18b
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0 at 00443b07
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

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046cca0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
    MOV EDX,dword ptr [0x01c35e38]      ; 0046cca4 | g_INT_01c35e38
    MOV dword ptr [EAX],EDX             ; 0046ccaa
    MOV EDX,dword ptr [0x01c35e3c]      ; 0046ccac | g_INT_01c35e3c
    MOV dword ptr [EAX + 0x4],EDX       ; 0046ccb2
    MOV EDX,dword ptr [0x01c35e40]      ; 0046ccb5 | g_INT_01c35e40
    MOV dword ptr [EAX + 0x8],EDX       ; 0046ccbb
    MOV EDX,dword ptr [0x01c35e44]      ; 0046ccbe | g_INT_01c35e44
    MOV dword ptr [EAX + 0xc],EDX       ; 0046ccc4
    MOV EDX,dword ptr [0x01c38b78]      ; 0046ccc7 | g_CameraOriginX
    MOV dword ptr [EAX + 0x10],EDX      ; 0046cccd
    MOV EDX,dword ptr [0x01c38b7c]      ; 0046ccd0 | g_CameraOriginY
    MOV dword ptr [EAX + 0x14],EDX      ; 0046ccd6
    MOV EDX,dword ptr [0x01c38b80]      ; 0046ccd9 | g_CameraOriginZ
    MOV dword ptr [EAX + 0x18],EDX      ; 0046ccdf
    MOV EDX,dword ptr [0x01c38b84]      ; 0046cce2 | g_CameraRotationPitch
    MOV dword ptr [EAX + 0x1c],EDX      ; 0046cce8
    MOV EDX,dword ptr [0x01c38b88]      ; 0046cceb | g_CameraRotationYaw
    MOV dword ptr [EAX + 0x20],EDX      ; 0046ccf1
    MOV EDX,dword ptr [0x01c38b8c]      ; 0046ccf4 | g_CameraRotationRoll
    MOV dword ptr [EAX + 0x24],EDX      ; 0046ccfa
    MOV EDX,dword ptr [0x01c35e48]      ; 0046ccfd | g_INT_01c35e48
    MOV dword ptr [EAX + 0x28],EDX      ; 0046cd03
    MOV EDX,dword ptr [0x01c35e50]      ; 0046cd06 | g_ClipRight
    MOV dword ptr [EAX + 0x2c],EDX      ; 0046cd0c
    MOV EDX,dword ptr [0x01c35e4c]      ; 0046cd0f | g_INT_01c35e4c
    MOV dword ptr [EAX + 0x30],EDX      ; 0046cd15
    MOV EDX,dword ptr [0x01c35e54]      ; 0046cd18 | g_INT_01c35e54
    MOV dword ptr [EAX + 0x34],EDX      ; 0046cd1e
    MOV EDX,dword ptr [0x01c38b6c]      ; 0046cd21 | g_RelativeX
    MOV dword ptr [EAX + 0x38],EDX      ; 0046cd27
    MOV EDX,dword ptr [0x01c38b70]      ; 0046cd2a | g_RelativeY
    MOV dword ptr [EAX + 0x3c],EDX      ; 0046cd30
    MOV EDX,dword ptr [0x01c38b74]      ; 0046cd33 | g_RelativeZ
    MOV dword ptr [EAX + 0x40],EDX      ; 0046cd39
    MOV EDX,dword ptr [0x01c38b9c]      ; 0046cd3c | g_INT_01c38b9c
    MOV dword ptr [EAX + 0x44],EDX      ; 0046cd42
    MOV EDX,dword ptr [0x01c38ba0]      ; 0046cd45 | g_INT_01c38ba0
    MOV dword ptr [EAX + 0x48],EDX      ; 0046cd4b
    MOV EDX,dword ptr [0x01c38ba4]      ; 0046cd4e | g_INT_01c38ba4
    MOV dword ptr [EAX + 0x4c],EDX      ; 0046cd54
    MOV EDX,dword ptr [0x01c38ba8]      ; 0046cd57 | g_INT_01c38ba8
    MOV dword ptr [EAX + 0x50],EDX      ; 0046cd5d
    MOV EDX,dword ptr [0x01c38bac]      ; 0046cd60 | g_INT_01c38bac
    MOV dword ptr [EAX + 0x54],EDX      ; 0046cd66
    MOV EDX,dword ptr [0x01c38bb0]      ; 0046cd69 | g_INT_01c38bb0
    MOV dword ptr [EAX + 0x58],EDX      ; 0046cd6f
    MOV EDX,dword ptr [0x01c38bb4]      ; 0046cd72 | g_INT_01c38bb4
    MOV dword ptr [EAX + 0x5c],EDX      ; 0046cd78
    MOV EDX,dword ptr [0x01c38bb8]      ; 0046cd7b | g_INT_01c38bb8
    MOV dword ptr [EAX + 0x60],EDX      ; 0046cd81
    MOV EDX,dword ptr [0x01c38bbc]      ; 0046cd84 | g_INT_01c38bbc
    MOV dword ptr [EAX + 0x64],EDX      ; 0046cd8a
    MOV EDX,dword ptr [0x01d04fb8]      ; 0046cd8d | g_INT_01d04fb8
    MOV dword ptr [EAX + 0x68],EDX      ; 0046cd93
    MOV EDX,dword ptr [0x01d04fbc]      ; 0046cd96 | g_INT_01d04fbc
    MOV dword ptr [EAX + 0x6c],EDX      ; 0046cd9c
    MOV EDX,dword ptr [0x01d04fc0]      ; 0046cd9f | g_INT_01d04fc0
    MOV dword ptr [EAX + 0x70],EDX      ; 0046cda5
    MOV EDX,dword ptr [0x01d04fc4]      ; 0046cda8 | g_INT_01d04fc4
    MOV dword ptr [EAX + 0x74],EDX      ; 0046cdae
    MOV EDX,dword ptr [0x01d04fc8]      ; 0046cdb1 | g_INT_01d04fc8
    MOV dword ptr [EAX + 0x78],EDX      ; 0046cdb7
    MOV EDX,dword ptr [0x01d04fcc]      ; 0046cdba | g_INT_01d04fcc
    MOV dword ptr [EAX + 0x7c],EDX      ; 0046cdc0
    MOV EDX,dword ptr [0x01d04fd0]      ; 0046cdc3 | g_INT_01d04fd0
    MOV dword ptr [EAX + 0x80],EDX      ; 0046cdc9
    MOV EDX,dword ptr [0x01d04fd4]      ; 0046cdcf | g_INT_01d04fd4
    MOV dword ptr [EAX + 0x84],EDX      ; 0046cdd5
    MOV EDX,dword ptr [0x01d04fd8]      ; 0046cddb | g_INT_01d04fd8
    MOV dword ptr [EAX + 0x88],EDX      ; 0046cde1
    MOV EDX,dword ptr [0x006141e4]      ; 0046cde7 | g_ProjectionScale
    MOV dword ptr [EAX + 0x8c],EDX      ; 0046cded
    RET                                 ; 0046cdf3

