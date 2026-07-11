; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048c8a0(void)
;
;
; XREF[1]:
;   FUN_0050a260 at 0050a4dc
;
; Referenced Globals:
;   undefined4 DAT_01c4e958
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 00489980
        ;   Label: LAB_00489980
    RET                                 ; 00489982
    MOV EDX,dword ptr [0x01c4e958]      ; 0048c8a0 | DAT_01c4e958
        ;   Label: FUN_0048c8a0
    XOR EAX,EAX                         ; 0048c8a6
    CMP EDX,0x1                         ; 0048c8a8
    JZ 0x0048c8c4                       ; 0048c8ab
        ;   XREF to: 0048c8c4 (CONDITIONAL_JUMP)  ; LAB_0048c8c4
    ADD EAX,0x5c                        ; 0048c8ad
        ;   Label: LAB_0048c8ad
    CMP EAX,0x730                       ; 0048c8b0
    JGE 0x00489980                      ; 0048c8b5
        ;   XREF to: 00489980 (CONDITIONAL_JUMP)  ; LAB_00489980
    CMP dword ptr [EAX + 0x1c4e958],0x1 ; 0048c8bb
    JNZ 0x0048c8ad                      ; 0048c8c2
        ;   XREF to: 0048c8ad (CONDITIONAL_JUMP)  ; LAB_0048c8ad
    MOV EAX,0x1                         ; 0048c8c4
        ;   Label: LAB_0048c8c4
    RET                                 ; 0048c8c9

