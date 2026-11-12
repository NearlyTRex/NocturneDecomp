; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clear_FUN_0055fd40(void)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043ba28
;   engine_mini3d.cpp_FUN_004f23ee at 004f23f7
;   engine_special.cpp_clearScreen_FUN_0055b1f0 at 0055b1fb
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc18
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055fd40 | DAT_01c37788
        ;   Label: engine_special.cpp_clear_FUN_0055fd40
    JNZ 0x0055fd4c                      ; 0055fd47
        ;   XREF to: 0055fd4c (CONDITIONAL_JUMP)  ; LAB_0055fd4c
    XOR EAX,EAX                         ; 0055fd49
    RET                                 ; 0055fd4b
    CALL dword ptr [0x0264bc18]         ; 0055fd4c | DAT_0264bc18
        ;   Label: LAB_0055fd4c
    RET                                 ; 0055fd52

