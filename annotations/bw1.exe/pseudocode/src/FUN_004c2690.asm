; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_004c2690(void)
;
;
; XREF[2]:
;   FUN_00480480 at 00480514
;   FUN_00531ee0 at 0053203b
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01cc8cd2
;   undefined4 DAT_01cc8cd4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0061b4a0],0x10     ; 004c2690 | DAT_0061b4a0
        ;   Label: FUN_004c2690
    JNZ 0x004c26a2                      ; 004c2697
        ;   XREF to: 004c26a2 (CONDITIONAL_JUMP)  ; LAB_004c26a2
    XOR EAX,EAX                         ; 004c2699
    MOV AX,[0x01cc8cd2]                 ; 004c269b | DAT_01cc8cd2
    RET                                 ; 004c26a1
    MOV EAX,[0x01cc8cd4]                ; 004c26a2 | DAT_01cc8cd4
        ;   Label: LAB_004c26a2
    RET                                 ; 004c26a7

