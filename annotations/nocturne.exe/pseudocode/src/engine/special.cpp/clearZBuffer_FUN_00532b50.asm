; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_clearZBuffer_FUN_00532b50(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404f4
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dd4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532b50 | DAT_01c02594
        ;   Label: engine_special.cpp_clearZBuffer_FUN_00532b50
    JNZ 0x00532b5c                      ; 00532b57
        ;   XREF to: 00532b5c (CONDITIONAL_JUMP)  ; LAB_00532b5c
    XOR EAX,EAX                         ; 00532b59
    RET                                 ; 00532b5b
    CALL dword ptr [0x02dc9dd4]         ; 00532b5c | DAT_02dc9dd4
        ;   Label: LAB_00532b5c
    RET                                 ; 00532b62

