; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00495050(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0048b950 at 0048b96f
;   FUN_005289b0 at 00528a22
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_004950c0
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495050
        ;   Label: FUN_00495050
    PUSH ESI                            ; 00495051
    PUSH EDI                            ; 00495052
    PUSH EBP                            ; 00495053
    MOV EDI,dword ptr [ESP + 0x14]      ; 00495054
    MOV EDX,dword ptr [ESP + 0x18]      ; 00495058
    PUSH EDX                            ; 0049505c
    PUSH EDI                            ; 0049505d
    CALL FUN_004950c0                   ; 0049505e
        ;   XREF to: 004950c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004950c0()
    ADD ESP,0x8                         ; 00495063
    TEST EAX,EAX                        ; 00495066
    JL 0x0049508c                       ; 00495068
        ;   XREF to: 0049508c (CONDITIONAL_JUMP)  ; LAB_0049508c
    ADD EAX,EAX                         ; 0049506a
    MOV EBX,EAX                         ; 0049506c
    SHL EAX,0x4                         ; 0049506e
    ADD EDI,0x37da                      ; 00495071
    SUB EAX,EBX                         ; 00495077
    XOR ESI,ESI                         ; 00495079
    ADD EDI,EAX                         ; 0049507b
    XOR EBX,EBX                         ; 0049507d
    MOV EAX,[0x00603b28]                ; 0049507f | DAT_00603b28
        ;   Label: LAB_0049507f
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00495084 | DAT_02024a2c
    JL 0x00495099                       ; 0049508a
        ;   XREF to: 00495099 (CONDITIONAL_JUMP)  ; LAB_00495099
    XOR EAX,EAX                         ; 0049508c
        ;   Label: LAB_0049508c
    POP EBP                             ; 0049508e
    POP EDI                             ; 0049508f
    POP ESI                             ; 00495090
    POP EBX                             ; 00495091
    RET                                 ; 00495092
    INC ESI                             ; 00495093
        ;   Label: LAB_00495093
    ADD EBX,0x4                         ; 00495094
    JMP 0x0049507f                      ; 00495097
        ;   XREF to: 0049507f (UNCONDITIONAL_JUMP)  ; LAB_0049507f
    PUSH EDI                            ; 00495099
        ;   Label: LAB_00495099
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 0049509a | DAT_02024a30
    PUSH EBP                            ; 004950a1
    CALL FUN_005a3260                   ; 004950a2
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004950a7
    TEST EAX,EAX                        ; 004950aa
    JNZ 0x00495093                      ; 004950ac
        ;   XREF to: 00495093 (CONDITIONAL_JUMP)  ; LAB_00495093
    MOV EAX,[0x00603b28]                ; 004950ae | DAT_00603b28
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004950b3 | DAT_02024a30
    POP EBP                             ; 004950ba
    POP EDI                             ; 004950bb
    POP ESI                             ; 004950bc
    POP EBX                             ; 004950bd
    RET                                 ; 004950be

