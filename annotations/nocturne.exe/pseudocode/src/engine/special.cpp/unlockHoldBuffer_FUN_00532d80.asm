; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00532d80(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 0044504e
;
; Referenced Globals:
;   undefined4 DAT_02dc9e00
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9e00],0x0      ; 00532d80 | DAT_02dc9e00
        ;   Label: engine_special.cpp_unlockHoldBuffer_FUN_00532d80
    JNZ 0x00532d8c                      ; 00532d87
        ;   XREF to: 00532d8c (CONDITIONAL_JUMP)  ; LAB_00532d8c
    XOR EAX,EAX                         ; 00532d89
    RET                                 ; 00532d8b
    CALL dword ptr [0x02dc9e00]         ; 00532d8c | DAT_02dc9e00
        ;   Label: LAB_00532d8c
    RET                                 ; 00532d92

