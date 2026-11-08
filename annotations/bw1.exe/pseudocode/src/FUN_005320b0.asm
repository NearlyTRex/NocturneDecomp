; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005320b0(int *param_1)
;
;
; XREF[2]:
;   FUN_004c1dd0 at 004c1ea2
;   FUN_004c2750 at 004c278f
;
; Called Functions:
;   FUN_00511170
;   thunk_FUN_00581f50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005320b0
        ;   Label: FUN_005320b0
    PUSH EBP                            ; 005320b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005320b2
    CALL thunk_FUN_00581f50             ; 005320b6
        ;   XREF to: 00511160 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00581f50()
    MOV EDX,dword ptr [ESI]             ; 005320bb
    XOR EBP,EBP                         ; 005320bd
    TEST EDX,EDX                        ; 005320bf
    JLE 0x00532106                      ; 005320c1
        ;   XREF to: 00532106 (CONDITIONAL_JUMP)  ; LAB_00532106
    PUSH EDI                            ; 005320c3
    PUSH EBX                            ; 005320c4
    LEA EDI,[ESI + 0x324]               ; 005320c5
    MOV EBX,ESI                         ; 005320cb
    MOV ECX,dword ptr [EBX + 0x68b4]    ; 005320cd
        ;   Label: LAB_005320cd
    PUSH ECX                            ; 005320d3
    MOV EDX,dword ptr [EBX + 0x6724]    ; 005320d4
    PUSH EDX                            ; 005320da
    MOV ECX,dword ptr [EBX + 0x194]     ; 005320db
    PUSH ECX                            ; 005320e1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005320e2
    PUSH EDX                            ; 005320e5
    PUSH EDI                            ; 005320e6
    ADD EBX,0x4                         ; 005320e7
    MOV EAX,dword ptr [ESI + 0x6a44]    ; 005320ea
    PUSH ESI                            ; 005320f0
    INC EBP                             ; 005320f1
    ADD EDI,0x100                       ; 005320f2
    CALL dword ptr [EAX + 0x4]          ; 005320f8
    MOV ECX,dword ptr [ESI]             ; 005320fb
    ADD ESP,0x18                        ; 005320fd
    CMP EBP,ECX                         ; 00532100
    JL 0x005320cd                       ; 00532102
        ;   XREF to: 005320cd (CONDITIONAL_JUMP)  ; LAB_005320cd
    POP EBX                             ; 00532104
    POP EDI                             ; 00532105
    CALL FUN_00511170                   ; 00532106
        ;   XREF to: 00511170 (UNCONDITIONAL_CALL)  ; undefined FUN_00511170()
        ;   Label: LAB_00532106
    MOV dword ptr [ESI],0x0             ; 0053210b
    POP EBP                             ; 00532111
    POP ESI                             ; 00532112
    RET                                 ; 00532113

