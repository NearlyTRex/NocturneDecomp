; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00535d80(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined1       Stack[-0x87]:1  local_87
; undefined1       Stack[-0x86]:1  local_86
; undefined1       Stack[-0x85]:1  local_85
; undefined2       Stack[-0x84]:2  local_84
; undefined2       Stack[-0x82]:2  local_82
; undefined2       Stack[-0x80]:2  local_80
; undefined2       Stack[-0x7e]:2  local_7e
; undefined1       Stack[-0x47]:1  local_47
; undefined2       Stack[-0x46]:2  local_46
; undefined2       Stack[-0x44]:2  local_44
; undefined2       Stack[-0x42]:2  local_42
; undefined2       Stack[-0x40]:2  local_40
;
; XREF[1]:
;   FUN_004ce580 at 004ce94f
;
; Referenced Globals:
;   TerminatedCString s_wb_005ecc28
;   TerminatedCString s_engine_pcx_c_005ecc2b
;   TerminatedCString s_Cannot_write_PCX_005ecc3b
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00535940
;   FUN_00535a10
;   FUN_00535bd0
;   FUN_005bfb70
;   FUN_005c0d10
;   FUN_005c157c
;   FUN_005c1a70
;   FUN_005c2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535d80
        ;   Label: FUN_00535d80
    PUSH EBP                            ; 00535d81
    SUB ESP,0x80                        ; 00535d82
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00535d88
    MOV EDX,dword ptr [0x0061b4a0]      ; 00535d8f | DAT_0061b4a0
    CMP EDX,0x10                        ; 00535d95
    JZ 0x00535f29                       ; 00535d98
        ;   XREF to: 00535f29 (CONDITIONAL_JUMP)  ; LAB_00535f29
    CMP EDX,0x20                        ; 00535d9e
    JZ 0x00535f34                       ; 00535da1
        ;   XREF to: 00535f34 (CONDITIONAL_JUMP)  ; LAB_00535f34
    PUSH EDI                            ; 00535da7
    PUSH ESI                            ; 00535da8
    PUSH 0x80                           ; 00535da9
    PUSH 0x0                            ; 00535dae
    LEA EAX,[ESP + 0x10]                ; 00535db0
    PUSH EAX                            ; 00535db4
    MOV ESI,0x1                         ; 00535db5
    CALL FUN_005bfb70                   ; 00535dba
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV AH,0xa                          ; 00535dbf
    MOV DL,0x5                          ; 00535dc1
    ADD ESP,0xc                         ; 00535dc3
    MOV CL,0x8                          ; 00535dc6
    MOV byte ptr [ESP + 0x8],AH         ; 00535dc8
    MOV byte ptr [ESP + 0x9],DL         ; 00535dcc
    MOV byte ptr [ESP + 0xb],CL         ; 00535dd0
    MOV word ptr [ESP + 0x4c],SI        ; 00535dd4
    MOV DH,0x1                          ; 00535dd9
    MOV CH,0x1                          ; 00535ddb
    MOV AX,[0x0061b498]                 ; 00535ddd | DAT_0061b498
    MOV ESI,dword ptr [0x0061b498]      ; 00535de3 | DAT_0061b498
    DEC EAX                             ; 00535de9
    MOV byte ptr [ESP + 0xa],DH         ; 00535dea
    MOV word ptr [ESP + 0x10],AX        ; 00535dee
    MOV AX,[0x0061b49c]                 ; 00535df3 | DAT_0061b49c
    MOV byte ptr [ESP + 0x49],CH        ; 00535df9
    DEC EAX                             ; 00535dfd
    XOR EDX,EDX                         ; 00535dfe
    MOV word ptr [ESP + 0x12],AX        ; 00535e00
    MOV AX,[0x0061b498]                 ; 00535e05 | DAT_0061b498
    MOV word ptr [ESP + 0xc],DX         ; 00535e0b
    MOV word ptr [ESP + 0x4a],AX        ; 00535e10
    MOV word ptr [ESP + 0x4e],AX        ; 00535e15
    MOV AX,[0x0061b49c]                 ; 00535e1a | DAT_0061b49c
    MOV word ptr [ESP + 0xe],DX         ; 00535e20
    MOV word ptr [ESP + 0x50],AX        ; 00535e25
    CMP ESI,0x280                       ; 00535e2a
    JNZ 0x00535e4f                      ; 00535e30
        ;   XREF to: 00535e4f (CONDITIONAL_JUMP)  ; LAB_00535e4f
    CMP dword ptr [0x0061b49c],0xf0     ; 00535e32 | DAT_0061b49c
    JNZ 0x00535e4f                      ; 00535e3c
        ;   XREF to: 00535e4f (CONDITIONAL_JUMP)  ; LAB_00535e4f
    MOV EDI,EAX                         ; 00535e3e
    ADD EDI,EAX                         ; 00535e40
    ADD EAX,EAX                         ; 00535e42
    DEC EAX                             ; 00535e44
    MOV word ptr [ESP + 0x50],DI        ; 00535e45
    MOV word ptr [ESP + 0x12],AX        ; 00535e4a
    PUSH 0x5ecc28                       ; 00535e4f | = "wb"
        ;   Label: LAB_00535e4f
    PUSH EBX                            ; 00535e54
    CALL FUN_005c157c                   ; 00535e55
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 00535e5a
    MOV EBX,EAX                         ; 00535e5d
    TEST EAX,EAX                        ; 00535e5f
    JNZ 0x00535e85                      ; 00535e61
        ;   XREF to: 00535e85 (CONDITIONAL_JUMP)  ; LAB_00535e85
    MOV EBP,0x5ecc2b                    ; 00535e63 | = "..\\engine\\pcx.c"
    MOV EAX,0xed                        ; 00535e68
    PUSH 0x5ecc3b                       ; 00535e6d | = "Cannot write .PCX"
    MOV dword ptr [0x01d1d400],EBP      ; 00535e72 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00535e78 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00535e7d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00535e82
    PUSH EBX                            ; 00535e85
        ;   Label: LAB_00535e85
    PUSH 0x80                           ; 00535e86
    PUSH 0x1                            ; 00535e8b
    LEA EAX,[ESP + 0x14]                ; 00535e8d
    PUSH EAX                            ; 00535e91
    XOR ESI,ESI                         ; 00535e92
    CALL FUN_005c1a70                   ; 00535e94
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1a70()
    MOV EDX,dword ptr [0x0061b49c]      ; 00535e99 | DAT_0061b49c
    ADD ESP,0x10                        ; 00535e9f
    TEST EDX,EDX                        ; 00535ea2
    JLE 0x00535edd                      ; 00535ea4
        ;   XREF to: 00535edd (CONDITIONAL_JUMP)  ; LAB_00535edd
    PUSH EBX                            ; 00535ea6
        ;   Label: LAB_00535ea6
    PUSH ESI                            ; 00535ea7
    CALL FUN_00535940                   ; 00535ea8
        ;   XREF to: 00535940 (UNCONDITIONAL_CALL)  ; undefined FUN_00535940()
    MOV EAX,[0x0061b498]                ; 00535ead | DAT_0061b498
    ADD ESP,0x8                         ; 00535eb2
    CMP EAX,0x280                       ; 00535eb5
    JNZ 0x00535ed2                      ; 00535eba
        ;   XREF to: 00535ed2 (CONDITIONAL_JUMP)  ; LAB_00535ed2
    CMP dword ptr [0x0061b49c],0xf0     ; 00535ebc | DAT_0061b49c
    JNZ 0x00535ed2                      ; 00535ec6
        ;   XREF to: 00535ed2 (CONDITIONAL_JUMP)  ; LAB_00535ed2
    PUSH EBX                            ; 00535ec8
    PUSH ESI                            ; 00535ec9
    CALL FUN_00535940                   ; 00535eca
        ;   XREF to: 00535940 (UNCONDITIONAL_CALL)  ; undefined FUN_00535940()
    ADD ESP,0x8                         ; 00535ecf
    MOV ECX,dword ptr [0x0061b49c]      ; 00535ed2 | DAT_0061b49c
        ;   Label: LAB_00535ed2
    INC ESI                             ; 00535ed8
    CMP ESI,ECX                         ; 00535ed9
    JL 0x00535ea6                       ; 00535edb
        ;   XREF to: 00535ea6 (CONDITIONAL_JUMP)  ; LAB_00535ea6
    TEST byte ptr [EBX + 0xd],0x4       ; 00535edd
        ;   Label: LAB_00535edd
    JZ 0x00535f3f                       ; 00535ee1
        ;   XREF to: 00535f3f (CONDITIONAL_JUMP)  ; LAB_00535f3f
    PUSH EBX                            ; 00535ee3
        ;   Label: LAB_00535ee3
    PUSH 0xc                            ; 00535ee4
    CALL FUN_005c2f00                   ; 00535ee6
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2f00()
        ;   Label: LAB_00535ee6
    ADD ESP,0x8                         ; 00535eeb
    XOR ESI,ESI                         ; 00535eee
        ;   Label: LAB_00535eee
    TEST byte ptr [EBX + 0xd],0x4       ; 00535ef0
        ;   Label: LAB_00535ef0
    JZ 0x00535f7a                       ; 00535ef4
        ;   XREF to: 00535f7a (CONDITIONAL_JUMP)  ; LAB_00535f7a
    XOR EAX,EAX                         ; 00535efa
        ;   Label: LAB_00535efa
    PUSH EBX                            ; 00535efc
    MOV AL,byte ptr [ESI + 0x1c4e9f8]   ; 00535efd | DAT_01c4e9f8 | DAT_01c4e9f9
    PUSH EAX                            ; 00535f03
    CALL FUN_005c2f00                   ; 00535f04
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2f00()
        ;   Label: LAB_00535f04
    ADD ESP,0x8                         ; 00535f09
    INC ESI                             ; 00535f0c
        ;   Label: LAB_00535f0c
    CMP ESI,0x300                       ; 00535f0d
    JL 0x00535ef0                       ; 00535f13
        ;   XREF to: 00535ef0 (CONDITIONAL_JUMP)  ; LAB_00535ef0
    PUSH EBX                            ; 00535f15
    CALL FUN_005c0d10                   ; 00535f16
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 00535f1b
    POP ESI                             ; 00535f1e
    POP EDI                             ; 00535f1f
    ADD ESP,0x80                        ; 00535f20
        ;   Label: LAB_00535f20
    POP EBP                             ; 00535f26
    POP EBX                             ; 00535f27
    RET                                 ; 00535f28
    PUSH EBX                            ; 00535f29
        ;   Label: LAB_00535f29
    CALL FUN_00535a10                   ; 00535f2a
        ;   XREF to: 00535a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00535a10()
    ADD ESP,0x4                         ; 00535f2f
    JMP 0x00535f20                      ; 00535f32
        ;   XREF to: 00535f20 (UNCONDITIONAL_JUMP)  ; LAB_00535f20
    PUSH EBX                            ; 00535f34
        ;   Label: LAB_00535f34
    CALL FUN_00535bd0                   ; 00535f35
        ;   XREF to: 00535bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535bd0()
    ADD ESP,0x4                         ; 00535f3a
    JMP 0x00535f20                      ; 00535f3d
        ;   XREF to: 00535f20 (UNCONDITIONAL_JUMP)  ; LAB_00535f20
    MOV ESI,dword ptr [EBX + 0x4]       ; 00535f3f
        ;   Label: LAB_00535f3f
    MOV EAX,dword ptr [EBX + 0x14]      ; 00535f42
    SUB EAX,ESI                         ; 00535f45
    CMP EAX,0x1                         ; 00535f47
    JBE 0x00535ee3                      ; 00535f4a
        ;   XREF to: 00535ee3 (CONDITIONAL_JUMP)  ; LAB_00535ee3
    MOV EAX,dword ptr [EBX]             ; 00535f4c
    MOV byte ptr [EAX],0xc              ; 00535f4e
    MOV EAX,dword ptr [EBX]             ; 00535f51
    CMP byte ptr [EAX],0xa              ; 00535f53
    JZ 0x00535f72                       ; 00535f56
        ;   XREF to: 00535f72 (CONDITIONAL_JUMP)  ; LAB_00535f72
    MOV EDI,dword ptr [EBX + 0x4]       ; 00535f58
    MOV EBP,dword ptr [EBX]             ; 00535f5b
    MOV DH,byte ptr [EBX + 0xd]         ; 00535f5d
    INC EDI                             ; 00535f60
    INC EBP                             ; 00535f61
    MOV dword ptr [EBX + 0x4],EDI       ; 00535f62
    OR DH,0x10                          ; 00535f65
    MOV dword ptr [EBX],EBP             ; 00535f68
    MOV byte ptr [EBX + 0xd],DH         ; 00535f6a
    JMP 0x00535eee                      ; 00535f6d
        ;   XREF to: 00535eee (UNCONDITIONAL_JUMP)  ; LAB_00535eee
    PUSH EBX                            ; 00535f72
        ;   Label: LAB_00535f72
    PUSH 0xa                            ; 00535f73
    JMP 0x00535ee6                      ; 00535f75
        ;   XREF to: 00535ee6 (UNCONDITIONAL_JUMP)  ; LAB_00535ee6
    MOV ECX,dword ptr [EBX + 0x4]       ; 00535f7a
        ;   Label: LAB_00535f7a
    MOV EAX,dword ptr [EBX + 0x14]      ; 00535f7d
    SUB EAX,ECX                         ; 00535f80
    CMP EAX,0x1                         ; 00535f82
    JBE 0x00535efa                      ; 00535f85
        ;   XREF to: 00535efa (CONDITIONAL_JUMP)  ; LAB_00535efa
    MOV EDX,dword ptr [EBX]             ; 00535f8b
    MOV AL,byte ptr [ESI + 0x1c4e9f8]   ; 00535f8d | DAT_01c4e9f9
    MOV byte ptr [EDX],AL               ; 00535f93
    MOV EAX,dword ptr [EBX]             ; 00535f95
    CMP byte ptr [EAX],0xa              ; 00535f97
    JZ 0x00535fb5                       ; 00535f9a
        ;   XREF to: 00535fb5 (CONDITIONAL_JUMP)  ; LAB_00535fb5
    MOV EDI,dword ptr [EBX + 0x4]       ; 00535f9c
    MOV EBP,dword ptr [EBX]             ; 00535f9f
    MOV AL,byte ptr [EBX + 0xd]         ; 00535fa1
    INC EDI                             ; 00535fa4
    INC EBP                             ; 00535fa5
    MOV dword ptr [EBX + 0x4],EDI       ; 00535fa6
    OR AL,0x10                          ; 00535fa9
    MOV dword ptr [EBX],EBP             ; 00535fab
    MOV byte ptr [EBX + 0xd],AL         ; 00535fad
    JMP 0x00535f0c                      ; 00535fb0
        ;   XREF to: 00535f0c (UNCONDITIONAL_JUMP)  ; LAB_00535f0c
    PUSH EBX                            ; 00535fb5
        ;   Label: LAB_00535fb5
    PUSH 0xa                            ; 00535fb6
    JMP 0x00535f04                      ; 00535fb8
        ;   XREF to: 00535f04 (UNCONDITIONAL_JUMP)  ; LAB_00535f04

