; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0055ac00(int *param_1)
;
;
; XREF[1]:
;   FUN_0055d470 at 0055d485
;
; Referenced Globals:
;   undefined4 DAT_02cf49c4
;   undefined4 DAT_02cf49c8
;   undefined4 DAT_02cf49cc
;   undefined4 DAT_02cf49d0
;   undefined4 DAT_02cf49d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ac00
        ;   Label: FUN_0055ac00
    PUSH ESI                            ; 0055ac01
    PUSH EDI                            ; 0055ac02
    PUSH EBP                            ; 0055ac03
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055ac04
    PUSH ESI                            ; 0055ac08
    MOV EAX,dword ptr [ESI]             ; 0055ac09
    MOV EDI,0x1                         ; 0055ac0b
    CALL dword ptr [EAX + 0x8]          ; 0055ac10
    ADD ESP,0x4                         ; 0055ac13
    TEST EAX,EAX                        ; 0055ac16
    JZ 0x0055aca3                       ; 0055ac18
        ;   XREF to: 0055aca3 (CONDITIONAL_JUMP)  ; LAB_0055aca3
    XOR EBX,EBX                         ; 0055ac1e
        ;   Label: LAB_0055ac1e
    PUSH EBX                            ; 0055ac20
        ;   Label: LAB_0055ac20
    MOV EAX,dword ptr [ESI]             ; 0055ac21
    PUSH ESI                            ; 0055ac23
    INC EBX                             ; 0055ac24
    CALL dword ptr [EAX + 0x34]         ; 0055ac25
    ADD ESP,0x8                         ; 0055ac28
    CMP EBX,0x41                        ; 0055ac2b
    JL 0x0055ac20                       ; 0055ac2e
        ;   XREF to: 0055ac20 (CONDITIONAL_JUMP)  ; LAB_0055ac20
    MOV EDX,dword ptr [0x02cf49d0]      ; 0055ac30 | DAT_02cf49d0
    TEST EDX,EDX                        ; 0055ac36
    JZ 0x0055ac48                       ; 0055ac38
        ;   XREF to: 0055ac48 (CONDITIONAL_JUMP)  ; LAB_0055ac48
    PUSH EDX                            ; 0055ac3a
    MOV EBX,dword ptr [EDX]             ; 0055ac3b
    CALL dword ptr [EBX + 0x8]          ; 0055ac3d
    XOR ECX,ECX                         ; 0055ac40
    MOV dword ptr [0x02cf49d0],ECX      ; 0055ac42 | DAT_02cf49d0
    MOV EBX,dword ptr [0x02cf49cc]      ; 0055ac48 | DAT_02cf49cc
        ;   Label: LAB_0055ac48
    TEST EBX,EBX                        ; 0055ac4e
    JZ 0x0055ac62                       ; 0055ac50
        ;   XREF to: 0055ac62 (CONDITIONAL_JUMP)  ; LAB_0055ac62
    MOV EAX,EBX                         ; 0055ac52
    PUSH EAX                            ; 0055ac54
    MOV EBX,dword ptr [EBX]             ; 0055ac55
    XOR ESI,ESI                         ; 0055ac57
    CALL dword ptr [EBX + 0x8]          ; 0055ac59
    MOV dword ptr [0x02cf49cc],ESI      ; 0055ac5c | DAT_02cf49cc
    MOV EBP,dword ptr [0x02cf49d4]      ; 0055ac62 | DAT_02cf49d4
        ;   Label: LAB_0055ac62
    TEST EBP,EBP                        ; 0055ac68
    JZ 0x0055ac7a                       ; 0055ac6a
        ;   XREF to: 0055ac7a (CONDITIONAL_JUMP)  ; LAB_0055ac7a
    PUSH EBP                            ; 0055ac6c
    MOV EBX,dword ptr [EBP]             ; 0055ac6d
    CALL dword ptr [EBX + 0x8]          ; 0055ac70
    XOR EAX,EAX                         ; 0055ac73
    MOV [0x02cf49d4],EAX                ; 0055ac75 | DAT_02cf49d4
    MOV EDX,dword ptr [0x02cf49c8]      ; 0055ac7a | DAT_02cf49c8
        ;   Label: LAB_0055ac7a
    TEST EDX,EDX                        ; 0055ac80
    JZ 0x0055ac92                       ; 0055ac82
        ;   XREF to: 0055ac92 (CONDITIONAL_JUMP)  ; LAB_0055ac92
    PUSH EDX                            ; 0055ac84
    MOV EBX,dword ptr [EDX]             ; 0055ac85
    CALL dword ptr [EBX + 0x8]          ; 0055ac87
    XOR ECX,ECX                         ; 0055ac8a
    MOV dword ptr [0x02cf49c8],ECX      ; 0055ac8c | DAT_02cf49c8
    MOV EBX,dword ptr [0x02cf49c4]      ; 0055ac92 | DAT_02cf49c4
        ;   Label: LAB_0055ac92
    TEST EBX,EBX                        ; 0055ac98
    JNZ 0x0055acaa                      ; 0055ac9a
        ;   XREF to: 0055acaa (CONDITIONAL_JUMP)  ; LAB_0055acaa
    MOV EAX,EDI                         ; 0055ac9c
    POP EBP                             ; 0055ac9e
    POP EDI                             ; 0055ac9f
    POP ESI                             ; 0055aca0
    POP EBX                             ; 0055aca1
    RET                                 ; 0055aca2
    XOR EDI,EDI                         ; 0055aca3
        ;   Label: LAB_0055aca3
    JMP 0x0055ac1e                      ; 0055aca5
        ;   XREF to: 0055ac1e (UNCONDITIONAL_JUMP)  ; LAB_0055ac1e
    MOV EAX,EBX                         ; 0055acaa
        ;   Label: LAB_0055acaa
    PUSH EAX                            ; 0055acac
    MOV EBX,dword ptr [EBX]             ; 0055acad
    XOR ESI,ESI                         ; 0055acaf
    CALL dword ptr [EBX + 0x8]          ; 0055acb1
    MOV dword ptr [0x02cf49c4],ESI      ; 0055acb4 | DAT_02cf49c4
    MOV EAX,EDI                         ; 0055acba
    POP EBP                             ; 0055acbc
    POP EDI                             ; 0055acbd
    POP ESI                             ; 0055acbe
    POP EBX                             ; 0055acbf
    RET                                 ; 0055acc0

