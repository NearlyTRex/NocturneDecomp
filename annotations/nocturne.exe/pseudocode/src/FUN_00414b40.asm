; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414b40(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_00764608
;   undefined4 DAT_0076462c
;   undefined4 DAT_00764634
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414b40
        ;   Label: FUN_00414b40
    PUSH ESI                            ; 00414b41
    PUSH EDI                            ; 00414b42
    PUSH EBP                            ; 00414b43
    SUB ESP,0x24                        ; 00414b44
    MOV ESI,dword ptr [ESP + 0x38]      ; 00414b47
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00414b4b
    MOV EDX,dword ptr [0x00764608]      ; 00414b4f | DAT_00764608
    PUSH EDX                            ; 00414b55
    LEA EAX,[ESP + 0x1c]                ; 00414b56
    PUSH EAX                            ; 00414b5a
    LEA EAX,[ESI + 0x150]               ; 00414b5b
    PUSH EAX                            ; 00414b61
    MOV EBX,0x1                         ; 00414b62
    CALL FUN_0051d380                   ; 00414b67
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 00414b6c
    CMP EDI,EAX                         ; 00414b6f
    JNZ 0x00414bdd                      ; 00414b71
        ;   XREF to: 00414bdd (CONDITIONAL_JUMP)  ; LAB_00414bdd
    MOV EAX,dword ptr [ESI + 0xbda0]    ; 00414b73
        ;   Label: LAB_00414b73
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 00414b79
    JZ 0x00414bc3                       ; 00414b81
        ;   XREF to: 00414bc3 (CONDITIONAL_JUMP)  ; LAB_00414bc3
    MOV EBP,dword ptr [0x0076462c]      ; 00414b83 | DAT_0076462c
    PUSH EBP                            ; 00414b89
    LEA EAX,[ESP + 0x10]                ; 00414b8a
    PUSH EAX                            ; 00414b8e
    LEA EAX,[ESI + 0x150]               ; 00414b8f
    PUSH EAX                            ; 00414b95
    CALL FUN_0051d380                   ; 00414b96
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    MOV EDX,EAX                         ; 00414b9b
    LEA EAX,[EBX*0x4 + 0x0]             ; 00414b9d
    SUB EAX,EBX                         ; 00414ba4
    SHL EAX,0x2                         ; 00414ba6
    ADD EAX,EDI                         ; 00414ba9
    ADD ESP,0xc                         ; 00414bab
    CMP EAX,EDX                         ; 00414bae
    JZ 0x00414bc2                       ; 00414bb0
        ;   XREF to: 00414bc2 (CONDITIONAL_JUMP)  ; LAB_00414bc2
    MOV ECX,dword ptr [EDX]             ; 00414bb2
    MOV dword ptr [EAX],ECX             ; 00414bb4
    MOV ECX,dword ptr [EDX + 0x4]       ; 00414bb6
    MOV dword ptr [EAX + 0x4],ECX       ; 00414bb9
    MOV ECX,dword ptr [EDX + 0x8]       ; 00414bbc
    MOV dword ptr [EAX + 0x8],ECX       ; 00414bbf
    INC EBX                             ; 00414bc2
        ;   Label: LAB_00414bc2
    MOV EAX,dword ptr [ESI + 0xbd8c]    ; 00414bc3
        ;   Label: LAB_00414bc3
    CMP dword ptr [ESI + EAX*0x4 + 0x2290],0x0 ; 00414bc9
    JNZ 0x00414bef                      ; 00414bd1
        ;   XREF to: 00414bef (CONDITIONAL_JUMP)  ; LAB_00414bef
    MOV EAX,EBX                         ; 00414bd3
    ADD ESP,0x24                        ; 00414bd5
    POP EBP                             ; 00414bd8
    POP EDI                             ; 00414bd9
    POP ESI                             ; 00414bda
    POP EBX                             ; 00414bdb
    RET                                 ; 00414bdc
    MOV EDX,dword ptr [EAX]             ; 00414bdd
        ;   Label: LAB_00414bdd
    MOV dword ptr [EDI],EDX             ; 00414bdf
    MOV EDX,dword ptr [EAX + 0x4]       ; 00414be1
    MOV dword ptr [EDI + 0x4],EDX       ; 00414be4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00414be7
    MOV dword ptr [EDI + 0x8],EDX       ; 00414bea
    JMP 0x00414b73                      ; 00414bed
        ;   XREF to: 00414b73 (UNCONDITIONAL_JUMP)  ; LAB_00414b73
    MOV ECX,dword ptr [0x00764634]      ; 00414bef | DAT_00764634
        ;   Label: LAB_00414bef
    PUSH ECX                            ; 00414bf5
    LEA EAX,[ESP + 0x4]                 ; 00414bf6
    PUSH EAX                            ; 00414bfa
    ADD ESI,0x150                       ; 00414bfb
    PUSH ESI                            ; 00414c01
    CALL FUN_0051d380                   ; 00414c02
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    MOV ESI,EAX                         ; 00414c07
    LEA EAX,[EBX*0x4 + 0x0]             ; 00414c09
    SUB EAX,EBX                         ; 00414c10
    SHL EAX,0x2                         ; 00414c12
    ADD EDI,EAX                         ; 00414c15
    ADD ESP,0xc                         ; 00414c17
    CMP EDI,ESI                         ; 00414c1a
    JZ 0x00414c2e                       ; 00414c1c
        ;   XREF to: 00414c2e (CONDITIONAL_JUMP)  ; LAB_00414c2e
    MOV EAX,dword ptr [ESI]             ; 00414c1e
    MOV dword ptr [EDI],EAX             ; 00414c20
    MOV EAX,dword ptr [ESI + 0x4]       ; 00414c22
    MOV dword ptr [EDI + 0x4],EAX       ; 00414c25
    MOV EAX,dword ptr [ESI + 0x8]       ; 00414c28
    MOV dword ptr [EDI + 0x8],EAX       ; 00414c2b
    INC EBX                             ; 00414c2e
        ;   Label: LAB_00414c2e
    MOV EAX,EBX                         ; 00414c2f
    ADD ESP,0x24                        ; 00414c31
    POP EBP                             ; 00414c34
    POP EDI                             ; 00414c35
    POP ESI                             ; 00414c36
    POP EBX                             ; 00414c37
    RET                                 ; 00414c38

