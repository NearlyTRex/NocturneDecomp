; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a8688(int param_1)
;
;
; XREF[1]:
;   FUN_005a82c0 at 005a830d
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   FUN_005a82a0
;   FUN_005a82ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8688
        ;   Label: FUN_005a8688
    PUSH ESI                            ; 005a8689
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a868a
    XOR EBX,EBX                         ; 005a868e
    PUSH ESI                            ; 005a8690
        ;   Label: LAB_005a8690
    CALL FUN_005a82a0                   ; 005a8691
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a82a0()
    MOV EDX,EAX                         ; 005a8696
    ADD ESP,0x4                         ; 005a8698
    INC DL                              ; 005a869b
    AND EDX,0xff                        ; 005a869d
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 005a86a3 | DAT_006074b8
    JZ 0x005a86af                       ; 005a86aa
        ;   XREF to: 005a86af (CONDITIONAL_JUMP)  ; LAB_005a86af
    INC EBX                             ; 005a86ac
    JMP 0x005a8690                      ; 005a86ad
        ;   XREF to: 005a8690 (UNCONDITIONAL_JUMP)  ; LAB_005a8690
    TEST byte ptr [ESI + 0x10],0x2      ; 005a86af
        ;   Label: LAB_005a86af
    JNZ 0x005a86bf                      ; 005a86b3
        ;   XREF to: 005a86bf (CONDITIONAL_JUMP)  ; LAB_005a86bf
    PUSH ESI                            ; 005a86b5
    PUSH EAX                            ; 005a86b6
    CALL FUN_005a82ac                   ; 005a86b7
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined FUN_005a82ac()
    ADD ESP,0x8                         ; 005a86bc
    MOV EAX,EBX                         ; 005a86bf
        ;   Label: LAB_005a86bf
    POP ESI                             ; 005a86c1
    POP EBX                             ; 005a86c2
    RET                                 ; 005a86c3

