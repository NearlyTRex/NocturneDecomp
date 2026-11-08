; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a090(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   FUN_0041daf0
;   FUN_00460f20
;   FUN_0046ce90
;   FUN_0046cee0
;   FUN_005375c0
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a090
        ;   Label: FUN_0049a090
    PUSH ESI                            ; 0049a091
    PUSH EDI                            ; 0049a092
    PUSH EBP                            ; 0049a093
    SUB ESP,0x18                        ; 0049a094
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0049a097
    PUSH EBX                            ; 0049a09b
    MOV EDX,dword ptr [0x005f2afc]      ; 0049a09c | DAT_005f2afc
    PUSH EDX                            ; 0049a0a2 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 0049a0a3
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 0049a0a8
    PUSH 0x0                            ; 0049a0ab
    LEA EAX,[EBX + 0x40]                ; 0049a0ad
    PUSH EAX                            ; 0049a0b0
    MOV ECX,dword ptr [0x005f2afc]      ; 0049a0b1 | DAT_005f2afc
    PUSH ECX                            ; 0049a0b7 | DAT_01bdd7e4
    LEA EDI,[ESP + 0xc]                 ; 0049a0b8
    CALL FUN_0046cee0                   ; 0049a0bc
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cee0()
    ADD ESP,0xc                         ; 0049a0c1
    MOV ECX,0x6                         ; 0049a0c4
    MOV ESI,dword ptr [EBX + 0x4c]      ; 0049a0c9
    PUSH 0x0                            ; 0049a0cc
    LEA EAX,[ESP + 0x4]                 ; 0049a0ce
    MOV ESI,dword ptr [ESI + 0x350]     ; 0049a0d2
    PUSH EAX                            ; 0049a0d8
    MOVSD.REP ES:EDI,ESI                ; 0049a0d9
    CALL FUN_0041daf0                   ; 0049a0db
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0049a0e0
    TEST EAX,EAX                        ; 0049a0e3
    JNZ 0x0049a0fe                      ; 0049a0e5
        ;   XREF to: 0049a0fe (CONDITIONAL_JUMP)  ; LAB_0049a0fe
    MOV EBP,dword ptr [0x005f2afc]      ; 0049a0e7 | DAT_005f2afc
        ;   Label: LAB_0049a0e7
    PUSH EBP                            ; 0049a0ed | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0049a0ee
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0049a0f3
    ADD ESP,0x18                        ; 0049a0f6
    POP EBP                             ; 0049a0f9
    POP EDI                             ; 0049a0fa
    POP ESI                             ; 0049a0fb
    POP EBX                             ; 0049a0fc
    RET                                 ; 0049a0fd
    PUSH 0x0                            ; 0049a0fe
        ;   Label: LAB_0049a0fe
    LEA EAX,[ESP + 0x10]                ; 0049a100
    PUSH EAX                            ; 0049a104
    LEA EAX,[ESP + 0x8]                 ; 0049a105
    PUSH EAX                            ; 0049a109
    PUSH 0x2cfd900                      ; 0049a10a | DAT_02cfd900
    PUSH EBX                            ; 0049a10f
    MOV ESI,dword ptr [0x00603b28]      ; 0049a110 | DAT_00603b28
    PUSH ESI                            ; 0049a116 | DAT_01ed78c8
    CALL FUN_005375c0                   ; 0049a117
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375c0()
    ADD ESP,0x18                        ; 0049a11c
    PUSH -0x1                           ; 0049a11f
    PUSH 0x0                            ; 0049a121
    PUSH 0x0                            ; 0049a123
    MOV EDI,dword ptr [EBX + 0x4c]      ; 0049a125
    PUSH EDI                            ; 0049a128
    CALL FUN_00460f20                   ; 0049a129
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f20()
    ADD ESP,0x10                        ; 0049a12e
    JMP 0x0049a0e7                      ; 0049a131
        ;   XREF to: 0049a0e7 (UNCONDITIONAL_JUMP)  ; LAB_0049a0e7

