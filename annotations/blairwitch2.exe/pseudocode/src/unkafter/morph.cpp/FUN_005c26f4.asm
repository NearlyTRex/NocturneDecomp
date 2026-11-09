; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c26f4(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c2bcc at 005c2c06
;
; Referenced Globals:
;   undefined4 DAT_02681074
;   undefined4 DAT_02681078
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c26f4
        ;   Label: unkafter_morph.cpp_FUN_005c26f4
    PUSH ESI                            ; 005c26f5
    PUSH EDI                            ; 005c26f6
    PUSH EBP                            ; 005c26f7
    MOV EDX,dword ptr [0x02681074]      ; 005c26f8 | DAT_02681074
    XOR ESI,ESI                         ; 005c26fe
    TEST EDX,EDX                        ; 005c2700
    JLE 0x005c2735                      ; 005c2702
        ;   XREF to: 005c2735 (CONDITIONAL_JUMP)  ; LAB_005c2735
    XOR EBX,EBX                         ; 005c2704
    MOV EAX,[0x02681078]                ; 005c2706 | DAT_02681078
        ;   Label: LAB_005c2706
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 005c270b
    PUSH ECX                            ; 005c270e
    CALL dword ptr CS:[0x5c8524]        ; 005c270f
    MOV EAX,[0x02681078]                ; 005c2716 | DAT_02681078
    MOV EDI,dword ptr [EBX + EAX*0x1]   ; 005c271b
    PUSH EDI                            ; 005c271e
    ADD EBX,0x4                         ; 005c271f
    INC ESI                             ; 005c2722
    CALL crt_unknown.c_FUN_005b86a0     ; 005c2723
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    MOV EBP,dword ptr [0x02681074]      ; 005c2728 | DAT_02681074
    ADD ESP,0x4                         ; 005c272e
    CMP ESI,EBP                         ; 005c2731
    JL 0x005c2706                       ; 005c2733
        ;   XREF to: 005c2706 (CONDITIONAL_JUMP)  ; LAB_005c2706
    MOV EAX,[0x02681078]                ; 005c2735 | DAT_02681078
        ;   Label: LAB_005c2735
    TEST EAX,EAX                        ; 005c273a
    JZ 0x005c2747                       ; 005c273c
        ;   XREF to: 005c2747 (CONDITIONAL_JUMP)  ; LAB_005c2747
    PUSH EAX                            ; 005c273e
    CALL crt_unknown.c_FUN_005b86a0     ; 005c273f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c2744
    POP EBP                             ; 005c2747
        ;   Label: LAB_005c2747
    POP EDI                             ; 005c2748
    POP ESI                             ; 005c2749
    POP EBX                             ; 005c274a
    RET                                 ; 005c274b

