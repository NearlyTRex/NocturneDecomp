; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer *this_ptr,SCameraViewportState *camera_state)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SCameraViewportState * Stack[0x8]:4   camera_state
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004551a0 at 004551d5
;
; Referenced Globals:
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00485040
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040
    MOV EDX,dword ptr [EAX]             ; 00485044
    MOV dword ptr [0x01c4eff8],EDX      ; 00485046 | DAT_01c4eff8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048504c
    MOV dword ptr [0x01c4effc],EDX      ; 0048504f | DAT_01c4effc
    MOV EDX,dword ptr [EAX + 0x8]       ; 00485055
    MOV dword ptr [0x01c4f000],EDX      ; 00485058 | DAT_01c4f000
    MOV EDX,dword ptr [EAX + 0xc]       ; 0048505e
    MOV dword ptr [0x01c4f004],EDX      ; 00485061 | DAT_01c4f004
    MOV EDX,dword ptr [EAX + 0x10]      ; 00485067
    MOV dword ptr [0x01c51d38],EDX      ; 0048506a | DAT_01c51d38
    MOV EDX,dword ptr [EAX + 0x14]      ; 00485070
    MOV dword ptr [0x01c51d3c],EDX      ; 00485073 | DAT_01c51d3c
    MOV EDX,dword ptr [EAX + 0x18]      ; 00485079
    MOV dword ptr [0x01c51d40],EDX      ; 0048507c | DAT_01c51d40
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00485082
    MOV dword ptr [0x01c51d44],EDX      ; 00485085 | DAT_01c51d44
    MOV EDX,dword ptr [EAX + 0x20]      ; 0048508b
    MOV dword ptr [0x01c51d48],EDX      ; 0048508e | DAT_01c51d48
    MOV EDX,dword ptr [EAX + 0x24]      ; 00485094
    MOV dword ptr [0x01c51d4c],EDX      ; 00485097 | DAT_01c51d4c
    MOV EDX,dword ptr [EAX + 0x28]      ; 0048509d
    MOV dword ptr [0x01c4f008],EDX      ; 004850a0 | DAT_01c4f008
    MOV EDX,dword ptr [EAX + 0x2c]      ; 004850a6
    MOV dword ptr [0x01c4f010],EDX      ; 004850a9 | DAT_01c4f010
    MOV EDX,dword ptr [EAX + 0x30]      ; 004850af
    MOV dword ptr [0x01c4f00c],EDX      ; 004850b2 | DAT_01c4f00c
    MOV EDX,dword ptr [EAX + 0x34]      ; 004850b8
    MOV dword ptr [0x01c4f014],EDX      ; 004850bb | DAT_01c4f014
    MOV EDX,dword ptr [EAX + 0x38]      ; 004850c1
    MOV dword ptr [0x01c51d2c],EDX      ; 004850c4 | DAT_01c51d2c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004850ca
    MOV dword ptr [0x01c51d30],EDX      ; 004850cd | DAT_01c51d30
    MOV EDX,dword ptr [EAX + 0x40]      ; 004850d3
    MOV dword ptr [0x01c51d34],EDX      ; 004850d6 | DAT_01c51d34
    MOV EDX,dword ptr [EAX + 0x44]      ; 004850dc
    MOV dword ptr [0x01c51d5c],EDX      ; 004850df | DAT_01c51d5c
    MOV EDX,dword ptr [EAX + 0x48]      ; 004850e5
    MOV dword ptr [0x01c51d60],EDX      ; 004850e8 | DAT_01c51d60
    MOV EDX,dword ptr [EAX + 0x4c]      ; 004850ee
    MOV dword ptr [0x01c51d64],EDX      ; 004850f1 | DAT_01c51d64
    MOV EDX,dword ptr [EAX + 0x50]      ; 004850f7
    MOV dword ptr [0x01c51d68],EDX      ; 004850fa | DAT_01c51d68
    MOV EDX,dword ptr [EAX + 0x54]      ; 00485100
    MOV dword ptr [0x01c51d6c],EDX      ; 00485103 | DAT_01c51d6c
    MOV EDX,dword ptr [EAX + 0x58]      ; 00485109
    MOV dword ptr [0x01c51d70],EDX      ; 0048510c | DAT_01c51d70
    MOV EDX,dword ptr [EAX + 0x5c]      ; 00485112
    MOV dword ptr [0x01c51d74],EDX      ; 00485115 | DAT_01c51d74
    MOV EDX,dword ptr [EAX + 0x60]      ; 0048511b
    MOV dword ptr [0x01c51d78],EDX      ; 0048511e | DAT_01c51d78
    MOV EDX,dword ptr [EAX + 0x64]      ; 00485124
    MOV dword ptr [0x01c51d7c],EDX      ; 00485127 | DAT_01c51d7c
    MOV EDX,dword ptr [EAX + 0x68]      ; 0048512d
    MOV dword ptr [0x01d1dd18],EDX      ; 00485130 | DAT_01d1dd18
    MOV EDX,dword ptr [EAX + 0x6c]      ; 00485136
    MOV dword ptr [0x01d1dd1c],EDX      ; 00485139 | DAT_01d1dd1c
    MOV EDX,dword ptr [EAX + 0x70]      ; 0048513f
    MOV dword ptr [0x01d1dd20],EDX      ; 00485142 | DAT_01d1dd20
    MOV EDX,dword ptr [EAX + 0x74]      ; 00485148
    MOV dword ptr [0x01d1dd24],EDX      ; 0048514b | DAT_01d1dd24
    MOV EDX,dword ptr [EAX + 0x78]      ; 00485151
    MOV dword ptr [0x01d1dd28],EDX      ; 00485154 | DAT_01d1dd28
    MOV EDX,dword ptr [EAX + 0x7c]      ; 0048515a
    MOV dword ptr [0x01d1dd2c],EDX      ; 0048515d | DAT_01d1dd2c
    MOV EDX,dword ptr [EAX + 0x80]      ; 00485163
    MOV dword ptr [0x01d1dd30],EDX      ; 00485169 | DAT_01d1dd30
    MOV EDX,dword ptr [EAX + 0x84]      ; 0048516f
    MOV dword ptr [0x01d1dd34],EDX      ; 00485175 | DAT_01d1dd34
    MOV EDX,dword ptr [EAX + 0x88]      ; 0048517b
    MOV EAX,dword ptr [EAX + 0x8c]      ; 00485181
    MOV dword ptr [0x01d1dd38],EDX      ; 00485187 | DAT_01d1dd38
    MOV [0x0061b4c4],EAX                ; 0048518d | DAT_0061b4c4
    RET                                 ; 00485192

