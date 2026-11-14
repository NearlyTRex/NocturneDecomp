; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clearZBuffer_FUN_0055fef0(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043ba2d
;   engine_mini3d.cpp_clearZBuffer_FUN_004f2410 at 004f2417
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc24
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055fef0 | DAT_01c37788
        ;   Label: engine_special.cpp_clearZBuffer_FUN_0055fef0
    JNZ 0x0055fefc                      ; 0055fef7
        ;   XREF to: 0055fefc (CONDITIONAL_JUMP)  ; LAB_0055fefc
    XOR EAX,EAX                         ; 0055fef9
    RET                                 ; 0055fefb
    CALL dword ptr [0x0264bc24]         ; 0055fefc | DAT_0264bc24
        ;   Label: LAB_0055fefc
    RET                                 ; 0055ff02

