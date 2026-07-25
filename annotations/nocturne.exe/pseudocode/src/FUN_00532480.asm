; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532480(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9da4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532480 | DAT_01c02594
        ;   Label: FUN_00532480
    JNZ 0x0053248c                      ; 00532487
        ;   XREF to: 0053248c (CONDITIONAL_JUMP)  ; LAB_0053248c
    XOR EAX,EAX                         ; 00532489
    RET                                 ; 0053248b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053248c
        ;   Label: LAB_0053248c
    PUSH ECX                            ; 00532490
    CALL dword ptr [0x02dc9da4]         ; 00532491 | DAT_02dc9da4
    ADD ESP,0x4                         ; 00532497
    RET                                 ; 0053249a

