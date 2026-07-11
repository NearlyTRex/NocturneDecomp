; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532d00(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0049d870 at 0049d929
;   FUN_004d0080 at 004d0c52
;   FUN_00531780 at 0053228e
;
; Referenced Globals:
;   undefined4 DAT_02dc9df4
;   undefined4 DAT_02dc9e04
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9e04],0x0      ; 00532d00 | DAT_02dc9e04
        ;   Label: FUN_00532d00
    JNZ 0x00532d0c                      ; 00532d07
        ;   XREF to: 00532d0c (CONDITIONAL_JUMP)  ; LAB_00532d0c
    XOR EAX,EAX                         ; 00532d09
    RET                                 ; 00532d0b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00532d0c
        ;   Label: LAB_00532d0c
    PUSH ECX                            ; 00532d10
    CALL dword ptr [0x02dc9df4]         ; 00532d11 | DAT_02dc9df4
    ADD ESP,0x4                         ; 00532d17
    RET                                 ; 00532d1a

