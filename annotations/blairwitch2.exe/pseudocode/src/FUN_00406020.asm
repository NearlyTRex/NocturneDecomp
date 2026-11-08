; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406020(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406020
        ;   Label: FUN_00406020
    PUSH ESI                            ; 00406021
    PUSH EBP                            ; 00406022
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406023
    LEA ESI,[EBX + 0x18]                ; 00406027
    LEA EAX,[EBX + 0x8]                 ; 0040602a
    PUSH EAX                            ; 0040602d
    CALL FUN_00403970                   ; 0040602e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00406033
    TEST EAX,EAX                        ; 00406036
    JZ 0x0040607b                       ; 00406038
        ;   XREF to: 0040607b (CONDITIONAL_JUMP)  ; LAB_0040607b
    CMP dword ptr [0x01c38b40],0x0      ; 0040603a | DAT_01c38b40
    JNZ 0x00406096                      ; 00406041
        ;   XREF to: 00406096 (CONDITIONAL_JUMP)  ; LAB_00406096
    CMP dword ptr [0x006141c0],0x20     ; 00406043 | DAT_006141c0
    JNZ 0x0040608a                      ; 0040604a
        ;   XREF to: 0040608a (CONDITIONAL_JUMP)  ; LAB_0040608a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040604c | DAT_01c35e6c
    PUSH EDI                            ; 00406056
        ;   Label: LAB_00406056
    MOV EDI,0x81                        ; 00406057
    PUSH ESI                            ; 0040605c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040605d
    MOV EBP,0x1                         ; 00406060
    PUSH EAX                            ; 00406065
    MOV dword ptr [0x01c38b54],EDI      ; 00406066 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 0040606c | DAT_01c38b58
    CALL FUN_00431d90                   ; 00406072
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00406077
    POP EDI                             ; 0040607a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040607b
        ;   Label: LAB_0040607b
    ADD EBX,0x18                        ; 0040607e
    SHL EAX,0x2                         ; 00406081
    ADD EAX,EBX                         ; 00406084
    POP EBP                             ; 00406086
    POP ESI                             ; 00406087
    POP EBX                             ; 00406088
    RET                                 ; 00406089
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040608a | DAT_01c35e6c
        ;   Label: LAB_0040608a
    JMP 0x00406056                      ; 00406094
        ;   XREF to: 00406056 (UNCONDITIONAL_JUMP)  ; LAB_00406056
    CMP dword ptr [0x006141c0],0x20     ; 00406096 | DAT_006141c0
        ;   Label: LAB_00406096
    JNZ 0x004060ab                      ; 0040609d
        ;   XREF to: 004060ab (CONDITIONAL_JUMP)  ; LAB_004060ab
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040609f | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00406056                      ; 004060a9
        ;   XREF to: 00406056 (UNCONDITIONAL_JUMP)  ; LAB_00406056
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004060ab | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_004060ab
    JMP 0x00406056                      ; 004060b5
        ;   XREF to: 00406056 (UNCONDITIONAL_JUMP)  ; LAB_00406056

