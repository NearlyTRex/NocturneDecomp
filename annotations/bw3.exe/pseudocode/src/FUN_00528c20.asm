; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00528c20(int param_1,int param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00529a70 at 0052c1e5
;
; Referenced Globals:
;   TerminatedCString s_n_005cdd67
;   TerminatedCString s_Character_s_model_s_does_005cdd73
;   undefined4 DAT_01ed6810
;
; Called Functions:
;   FUN_00531090
;   FUN_0054a310
;   FUN_0054ea40
;   FUN_005a28c0
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528c20
        ;   Label: FUN_00528c20
    PUSH ESI                            ; 00528c21
    PUSH EDI                            ; 00528c22
    SUB ESP,0x68                        ; 00528c23
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00528c26
    MOV EDI,dword ptr [ESP + 0x80]      ; 00528c2a
    MOV EAX,EDI                         ; 00528c31
    LEA ESI,[EDI + 0xf0]                ; 00528c33
    MOV dword ptr [EAX],0x0             ; 00528c39
        ;   Label: LAB_00528c39
    ADD EAX,0x4                         ; 00528c3f
    CMP EAX,ESI                         ; 00528c42
    JNZ 0x00528c39                      ; 00528c44
        ;   XREF to: 00528c39 (CONDITIONAL_JUMP)  ; LAB_00528c39
    MOV EAX,dword ptr [ESP + 0x78]      ; 00528c46
    ADD EAX,0x158                       ; 00528c4a
    PUSH EAX                            ; 00528c4f
    CALL FUN_0054ea40                   ; 00528c50
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 00528c55
    MOV ESI,EAX                         ; 00528c58
    LEA EAX,[ESP + 0x64]                ; 00528c5a
        ;   Label: LAB_00528c5a
    PUSH EAX                            ; 00528c5e
    LEA EAX,[ESP + 0x4]                 ; 00528c5f
    PUSH EAX                            ; 00528c63
    PUSH 0x5cdd67                       ; 00528c64 | = " %[^ \t),]%n"
    MOV EDX,0xffffffff                  ; 00528c69
    PUSH EBX                            ; 00528c6e
    MOV dword ptr [ESP + 0x74],EDX      ; 00528c6f
    CALL FUN_005a5b9c                   ; 00528c73
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    ADD ESP,0x10                        ; 00528c78
    MOV ECX,dword ptr [ESP + 0x64]      ; 00528c7b
    CMP ECX,0x1                         ; 00528c7f
    JGE 0x00528c90                      ; 00528c82
        ;   XREF to: 00528c90 (CONDITIONAL_JUMP)  ; LAB_00528c90
    MOV EAX,0x1                         ; 00528c84
    ADD ESP,0x68                        ; 00528c89
    POP EDI                             ; 00528c8c
    POP ESI                             ; 00528c8d
    POP EBX                             ; 00528c8e
    RET                                 ; 00528c8f
    PUSH 0x0                            ; 00528c90
        ;   Label: LAB_00528c90
    LEA EAX,[ESP + 0x4]                 ; 00528c92
    PUSH EAX                            ; 00528c96
    PUSH ESI                            ; 00528c97
    ADD EBX,ECX                         ; 00528c98
    CALL FUN_0054a310                   ; 00528c9a
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a310()
    ADD ESP,0xc                         ; 00528c9f
    TEST EAX,EAX                        ; 00528ca2
    JL 0x00528caf                       ; 00528ca4
        ;   XREF to: 00528caf (CONDITIONAL_JUMP)  ; LAB_00528caf
    MOV dword ptr [EDI + EAX*0x4],0x1   ; 00528ca6
    JMP 0x00528c5a                      ; 00528cad
        ;   XREF to: 00528c5a (UNCONDITIONAL_JUMP)  ; LAB_00528c5a
    MOV EAX,ESP                         ; 00528caf
        ;   Label: LAB_00528caf
    PUSH EAX                            ; 00528cb1
    PUSH ESI                            ; 00528cb2
    CALL FUN_00531090                   ; 00528cb3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 00528cb8
    PUSH EAX                            ; 00528cbb
    MOV EAX,dword ptr [ESP + 0x80]      ; 00528cbc
    PUSH EAX                            ; 00528cc3
    PUSH 0x5cdd73                       ; 00528cc4 | = "Character %s model %s does not have a..."
    PUSH 0x1ed6810                      ; 00528cc9 | DAT_01ed6810
    CALL FUN_005a28c0                   ; 00528cce
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x14                        ; 00528cd3
    XOR EAX,EAX                         ; 00528cd6
    ADD ESP,0x68                        ; 00528cd8
    POP EDI                             ; 00528cdb
    POP ESI                             ; 00528cdc
    POP EBX                             ; 00528cdd
    RET                                 ; 00528cde

