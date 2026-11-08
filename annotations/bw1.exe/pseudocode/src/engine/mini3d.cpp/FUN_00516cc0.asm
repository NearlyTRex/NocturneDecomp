; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00516cc0(int param_1,int param_2,ushort *param_3,uint param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00512de0 at 005130dc
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005e8f4b
;   TerminatedCString s_CMini3D_polyList_Too_man_005e8f60
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01d227e4
;   undefined4 DAT_01d25f14
;   undefined4 DAT_01e7dac8
;
; Called Functions:
;   FUN_005030e0
;   FUN_00512670
;   FUN_00513370
;   FUN_00513480
;   FUN_00516fd0
;   FUN_00517240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516cc0
        ;   Label: FUN_00516cc0
    PUSH ESI                            ; 00516cc1
    PUSH EDI                            ; 00516cc2
    PUSH EBP                            ; 00516cc3
    SUB ESP,0x4                         ; 00516cc4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00516cc7
    MOV EAX,dword ptr [ESP + 0x24]      ; 00516ccb
    MOV EDX,dword ptr [0x01e7dac8]      ; 00516ccf | DAT_01e7dac8
    MOV ECX,dword ptr [0x01d224b4]      ; 00516cd5 | DAT_01d224b4
    ADD EDX,EAX                         ; 00516cdb
    ADD ECX,EBP                         ; 00516cdd
    MOV dword ptr [0x01e7dac8],EDX      ; 00516cdf | DAT_01e7dac8
    MOV dword ptr [0x01d224b4],ECX      ; 00516ce5 | DAT_01d224b4
    CALL FUN_00512670                   ; 00516ceb
        ;   XREF to: 00512670 (UNCONDITIONAL_CALL)  ; undefined FUN_00512670()
    CMP EBP,0x2710                      ; 00516cf0
    JG 0x00516d98                       ; 00516cf6
        ;   XREF to: 00516d98 (CONDITIONAL_JUMP)  ; LAB_00516d98
    MOV ESI,dword ptr [ESP + 0x18]      ; 00516cfc
        ;   Label: LAB_00516cfc
    MOV EBX,dword ptr [0x01d227e4]      ; 00516d00 | DAT_01d227e4
    XOR EDI,EDI                         ; 00516d06
    MOV EAX,[0x01d25f14]                ; 00516d08 | DAT_01d25f14
    MOV dword ptr [ESP],EDI             ; 00516d0d
    CMP EAX,0x1                         ; 00516d10
    JNZ 0x00516dc1                      ; 00516d13
        ;   XREF to: 00516dc1 (CONDITIONAL_JUMP)  ; LAB_00516dc1
    TEST EBP,EBP                        ; 00516d19
    JLE 0x00516d40                      ; 00516d1b
        ;   XREF to: 00516d40 (CONDITIONAL_JUMP)  ; LAB_00516d40
    PUSH EBX                            ; 00516d1d
        ;   Label: LAB_00516d1d
    PUSH ESI                            ; 00516d1e
    INC EDI                             ; 00516d1f
    CALL FUN_00513370                   ; 00516d20
        ;   XREF to: 00513370 (UNCONDITIONAL_CALL)  ; undefined FUN_00513370()
    ADD ESP,0x8                         ; 00516d25
    MOV EAX,dword ptr [EBX + 0x10]      ; 00516d28
    MOV EDX,dword ptr [ESP]             ; 00516d2b
    ADD EBX,0x20                        ; 00516d2e
    OR EDX,EAX                          ; 00516d31
    ADD ESI,0x20                        ; 00516d33
    MOV dword ptr [ESP],EDX             ; 00516d36
    CMP EDI,EBP                         ; 00516d39
    JL 0x00516d1d                       ; 00516d3b
        ;   XREF to: 00516d1d (CONDITIONAL_JUMP)  ; LAB_00516d1d
    LEA EAX,[EAX]                       ; 00516d3d
    CMP dword ptr [ESP],0x0             ; 00516d40
        ;   Label: LAB_00516d40
    JNZ 0x00516de3                      ; 00516d44
        ;   XREF to: 00516de3 (CONDITIONAL_JUMP)  ; LAB_00516de3
    MOV ESI,dword ptr [ESP + 0x24]      ; 00516d4a
    XOR EDI,EDI                         ; 00516d4e
    TEST ESI,ESI                        ; 00516d50
    JLE 0x00516d90                      ; 00516d52
        ;   XREF to: 00516d90 (CONDITIONAL_JUMP)  ; LAB_00516d90
    MOV EBX,dword ptr [ESP + 0x20]      ; 00516d54
    MOVZX EBP,word ptr [EBX + 0x4]      ; 00516d58
        ;   Label: LAB_00516d58
    MOV ESI,dword ptr [0x01d227e4]      ; 00516d5c | DAT_01d227e4
    SHL EBP,0x5                         ; 00516d62
    ADD EBP,ESI                         ; 00516d65
    PUSH EBP                            ; 00516d67
    MOVZX EBP,word ptr [EBX + 0x2]      ; 00516d68
    SHL EBP,0x5                         ; 00516d6c
    ADD EBP,ESI                         ; 00516d6f
    PUSH EBP                            ; 00516d71
    MOVZX EBP,word ptr [EBX]            ; 00516d72
    SHL EBP,0x5                         ; 00516d75
    ADD ESI,EBP                         ; 00516d78
    PUSH ESI                            ; 00516d7a
    CALL FUN_00516fd0                   ; 00516d7b
        ;   XREF to: 00516fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00516fd0()
    ADD ESP,0xc                         ; 00516d80
    INC EDI                             ; 00516d83
    MOV EAX,dword ptr [ESP + 0x24]      ; 00516d84
    ADD EBX,0x6                         ; 00516d88
    CMP EDI,EAX                         ; 00516d8b
    JL 0x00516d58                       ; 00516d8d
        ;   XREF to: 00516d58 (CONDITIONAL_JUMP)  ; LAB_00516d58
    NOP                                 ; 00516d8f
    ADD ESP,0x4                         ; 00516d90
        ;   Label: LAB_00516d90
    POP EBP                             ; 00516d93
    POP EDI                             ; 00516d94
    POP ESI                             ; 00516d95
    POP EBX                             ; 00516d96
    RET                                 ; 00516d97
    PUSH EBP                            ; 00516d98
        ;   Label: LAB_00516d98
    MOV EBX,0x5e8f4b                    ; 00516d99 | = "..\\engine\\mini3d.cpp"
    MOV ESI,0x12de                      ; 00516d9e
    PUSH 0x5e8f60                       ; 00516da3 | = "CMini3D::polyList - Too many verticie..."
    MOV dword ptr [0x01d1d400],EBX      ; 00516da8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00516dae | DAT_01d1d404
    CALL FUN_005030e0                   ; 00516db4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00516db9
    JMP 0x00516cfc                      ; 00516dbc
        ;   XREF to: 00516cfc (UNCONDITIONAL_JUMP)  ; LAB_00516cfc
    TEST EBP,EBP                        ; 00516dc1
        ;   Label: LAB_00516dc1
    JLE 0x00516d40                      ; 00516dc3
        ;   XREF to: 00516d40 (CONDITIONAL_JUMP)  ; LAB_00516d40
    PUSH EBX                            ; 00516dc9
        ;   Label: LAB_00516dc9
    PUSH ESI                            ; 00516dca
    INC EDI                             ; 00516dcb
    CALL FUN_00513480                   ; 00516dcc
        ;   XREF to: 00513480 (UNCONDITIONAL_CALL)  ; undefined FUN_00513480()
    ADD EBX,0x20                        ; 00516dd1
    ADD ESP,0x8                         ; 00516dd4
    ADD ESI,0x20                        ; 00516dd7
    CMP EDI,EBP                         ; 00516dda
    JL 0x00516dc9                       ; 00516ddc
        ;   XREF to: 00516dc9 (CONDITIONAL_JUMP)  ; LAB_00516dc9
    JMP 0x00516d40                      ; 00516dde
        ;   XREF to: 00516d40 (UNCONDITIONAL_JUMP)  ; LAB_00516d40
    MOV EBX,dword ptr [ESP + 0x24]      ; 00516de3
        ;   Label: LAB_00516de3
    XOR EDI,EDI                         ; 00516de7
    TEST EBX,EBX                        ; 00516de9
    JLE 0x00516d90                      ; 00516deb
        ;   XREF to: 00516d90 (CONDITIONAL_JUMP)  ; LAB_00516d90
    MOV EBX,dword ptr [ESP + 0x20]      ; 00516ded
    XOR ESI,ESI                         ; 00516df1
        ;   Label: LAB_00516df1
    MOV SI,word ptr [EBX + 0x4]         ; 00516df3
    MOV EBP,ESI                         ; 00516df7
    MOV ESI,dword ptr [0x01d227e4]      ; 00516df9 | DAT_01d227e4
    SHL EBP,0x5                         ; 00516dff
    ADD EBP,ESI                         ; 00516e02
    PUSH EBP                            ; 00516e04
    MOVZX EBP,word ptr [EBX + 0x2]      ; 00516e05
    SHL EBP,0x5                         ; 00516e09
    ADD EBP,ESI                         ; 00516e0c
    PUSH EBP                            ; 00516e0e
    MOVZX EBP,word ptr [EBX]            ; 00516e0f
    SHL EBP,0x5                         ; 00516e12
    ADD ESI,EBP                         ; 00516e15
    PUSH ESI                            ; 00516e17
    CALL FUN_00517240                   ; 00516e18
        ;   XREF to: 00517240 (UNCONDITIONAL_CALL)  ; undefined FUN_00517240()
    ADD ESP,0xc                         ; 00516e1d
    INC EDI                             ; 00516e20
    MOV EBP,dword ptr [ESP + 0x24]      ; 00516e21
    ADD EBX,0x6                         ; 00516e25
    CMP EDI,EBP                         ; 00516e28
    JL 0x00516df1                       ; 00516e2a
        ;   XREF to: 00516df1 (CONDITIONAL_JUMP)  ; LAB_00516df1
    ADD ESP,0x4                         ; 00516e2c
    POP EBP                             ; 00516e2f
    POP EDI                             ; 00516e30
    POP ESI                             ; 00516e31
    POP EBX                             ; 00516e32
    RET                                 ; 00516e33

