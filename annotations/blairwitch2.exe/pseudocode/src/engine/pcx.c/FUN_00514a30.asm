; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00514a30(undefined4 param_1)
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
;   FUN_004b5190 at 004b5518
;
; Referenced Globals:
;   undefined4 DAT_005e19cd
;   TerminatedCString s_engine_pcx_c_005e19d0
;   TerminatedCString s_Cannot_write_PCX_005e19e0
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005145f0
;   FUN_005146c0
;   FUN_00514880
;   FUN_005b77c0
;   FUN_005b89c0
;   FUN_005b910c
;   FUN_005b9690
;   FUN_005bab40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514a30
        ;   Label: FUN_00514a30
    PUSH EBP                            ; 00514a31
    SUB ESP,0x80                        ; 00514a32
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00514a38
    MOV EDX,dword ptr [0x006141c0]      ; 00514a3f | DAT_006141c0
    CMP EDX,0x10                        ; 00514a45
    JZ 0x00514bd9                       ; 00514a48
        ;   XREF to: 00514bd9 (CONDITIONAL_JUMP)  ; LAB_00514bd9
    CMP EDX,0x20                        ; 00514a4e
    JZ 0x00514be4                       ; 00514a51
        ;   XREF to: 00514be4 (CONDITIONAL_JUMP)  ; LAB_00514be4
    PUSH EDI                            ; 00514a57
    PUSH ESI                            ; 00514a58
    PUSH 0x80                           ; 00514a59
    PUSH 0x0                            ; 00514a5e
    LEA EAX,[ESP + 0x10]                ; 00514a60
    PUSH EAX                            ; 00514a64
    MOV ESI,0x1                         ; 00514a65
    CALL FUN_005b77c0                   ; 00514a6a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV AH,0xa                          ; 00514a6f
    MOV DL,0x5                          ; 00514a71
    ADD ESP,0xc                         ; 00514a73
    MOV CL,0x8                          ; 00514a76
    MOV byte ptr [ESP + 0x8],AH         ; 00514a78
    MOV byte ptr [ESP + 0x9],DL         ; 00514a7c
    MOV byte ptr [ESP + 0xb],CL         ; 00514a80
    MOV word ptr [ESP + 0x4c],SI        ; 00514a84
    MOV DH,0x1                          ; 00514a89
    MOV CH,0x1                          ; 00514a8b
    MOV AX,[0x006141b8]                 ; 00514a8d | DAT_006141b8
    MOV ESI,dword ptr [0x006141b8]      ; 00514a93 | DAT_006141b8
    DEC EAX                             ; 00514a99
    MOV byte ptr [ESP + 0xa],DH         ; 00514a9a
    MOV word ptr [ESP + 0x10],AX        ; 00514a9e
    MOV AX,[0x006141bc]                 ; 00514aa3 | DAT_006141bc
    MOV byte ptr [ESP + 0x49],CH        ; 00514aa9
    DEC EAX                             ; 00514aad
    XOR EDX,EDX                         ; 00514aae
    MOV word ptr [ESP + 0x12],AX        ; 00514ab0
    MOV AX,[0x006141b8]                 ; 00514ab5 | DAT_006141b8
    MOV word ptr [ESP + 0xc],DX         ; 00514abb
    MOV word ptr [ESP + 0x4a],AX        ; 00514ac0
    MOV word ptr [ESP + 0x4e],AX        ; 00514ac5
    MOV AX,[0x006141bc]                 ; 00514aca | DAT_006141bc
    MOV word ptr [ESP + 0xe],DX         ; 00514ad0
    MOV word ptr [ESP + 0x50],AX        ; 00514ad5
    CMP ESI,0x280                       ; 00514ada
    JNZ 0x00514aff                      ; 00514ae0
        ;   XREF to: 00514aff (CONDITIONAL_JUMP)  ; LAB_00514aff
    CMP dword ptr [0x006141bc],0xf0     ; 00514ae2 | DAT_006141bc
    JNZ 0x00514aff                      ; 00514aec
        ;   XREF to: 00514aff (CONDITIONAL_JUMP)  ; LAB_00514aff
    MOV EDI,EAX                         ; 00514aee
    ADD EDI,EAX                         ; 00514af0
    ADD EAX,EAX                         ; 00514af2
    DEC EAX                             ; 00514af4
    MOV word ptr [ESP + 0x50],DI        ; 00514af5
    MOV word ptr [ESP + 0x12],AX        ; 00514afa
    PUSH 0x5e19cd                       ; 00514aff | DAT_005e19cd
        ;   Label: LAB_00514aff
    PUSH EBX                            ; 00514b04
    CALL FUN_005b910c                   ; 00514b05
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined FUN_005b910c()
    ADD ESP,0x8                         ; 00514b0a
    MOV EBX,EAX                         ; 00514b0d
    TEST EAX,EAX                        ; 00514b0f
    JNZ 0x00514b35                      ; 00514b11
        ;   XREF to: 00514b35 (CONDITIONAL_JUMP)  ; LAB_00514b35
    MOV EBP,0x5e19d0                    ; 00514b13 | = "..\\engine\\pcx.c"
    MOV EAX,0xed                        ; 00514b18
    PUSH 0x5e19e0                       ; 00514b1d | = "Cannot write .PCX"
    MOV dword ptr [0x01d046a0],EBP      ; 00514b22 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00514b28 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00514b2d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00514b32
    PUSH EBX                            ; 00514b35
        ;   Label: LAB_00514b35
    PUSH 0x80                           ; 00514b36
    PUSH 0x1                            ; 00514b3b
    LEA EAX,[ESP + 0x14]                ; 00514b3d
    PUSH EAX                            ; 00514b41
    XOR ESI,ESI                         ; 00514b42
    CALL FUN_005b9690                   ; 00514b44
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9690()
    MOV EDX,dword ptr [0x006141bc]      ; 00514b49 | DAT_006141bc
    ADD ESP,0x10                        ; 00514b4f
    TEST EDX,EDX                        ; 00514b52
    JLE 0x00514b8d                      ; 00514b54
        ;   XREF to: 00514b8d (CONDITIONAL_JUMP)  ; LAB_00514b8d
    PUSH EBX                            ; 00514b56
        ;   Label: LAB_00514b56
    PUSH ESI                            ; 00514b57
    CALL FUN_005145f0                   ; 00514b58
        ;   XREF to: 005145f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005145f0()
    MOV EAX,[0x006141b8]                ; 00514b5d | DAT_006141b8
    ADD ESP,0x8                         ; 00514b62
    CMP EAX,0x280                       ; 00514b65
    JNZ 0x00514b82                      ; 00514b6a
        ;   XREF to: 00514b82 (CONDITIONAL_JUMP)  ; LAB_00514b82
    CMP dword ptr [0x006141bc],0xf0     ; 00514b6c | DAT_006141bc
    JNZ 0x00514b82                      ; 00514b76
        ;   XREF to: 00514b82 (CONDITIONAL_JUMP)  ; LAB_00514b82
    PUSH EBX                            ; 00514b78
    PUSH ESI                            ; 00514b79
    CALL FUN_005145f0                   ; 00514b7a
        ;   XREF to: 005145f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005145f0()
    ADD ESP,0x8                         ; 00514b7f
    MOV ECX,dword ptr [0x006141bc]      ; 00514b82 | DAT_006141bc
        ;   Label: LAB_00514b82
    INC ESI                             ; 00514b88
    CMP ESI,ECX                         ; 00514b89
    JL 0x00514b56                       ; 00514b8b
        ;   XREF to: 00514b56 (CONDITIONAL_JUMP)  ; LAB_00514b56
    TEST byte ptr [EBX + 0xd],0x4       ; 00514b8d
        ;   Label: LAB_00514b8d
    JZ 0x00514bef                       ; 00514b91
        ;   XREF to: 00514bef (CONDITIONAL_JUMP)  ; LAB_00514bef
    PUSH EBX                            ; 00514b93
        ;   Label: LAB_00514b93
    PUSH 0xc                            ; 00514b94
    CALL FUN_005bab40                   ; 00514b96
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bab40()
        ;   Label: LAB_00514b96
    ADD ESP,0x8                         ; 00514b9b
    XOR ESI,ESI                         ; 00514b9e
        ;   Label: LAB_00514b9e
    TEST byte ptr [EBX + 0xd],0x4       ; 00514ba0
        ;   Label: LAB_00514ba0
    JZ 0x00514c2a                       ; 00514ba4
        ;   XREF to: 00514c2a (CONDITIONAL_JUMP)  ; LAB_00514c2a
    XOR EAX,EAX                         ; 00514baa
        ;   Label: LAB_00514baa
    PUSH EBX                            ; 00514bac
    MOV AL,byte ptr [ESI + 0x1c35838]   ; 00514bad | DAT_01c35838 | DAT_01c35839
    PUSH EAX                            ; 00514bb3
    CALL FUN_005bab40                   ; 00514bb4
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bab40()
        ;   Label: LAB_00514bb4
    ADD ESP,0x8                         ; 00514bb9
    INC ESI                             ; 00514bbc
        ;   Label: LAB_00514bbc
    CMP ESI,0x300                       ; 00514bbd
    JL 0x00514ba0                       ; 00514bc3
        ;   XREF to: 00514ba0 (CONDITIONAL_JUMP)  ; LAB_00514ba0
    PUSH EBX                            ; 00514bc5
    CALL FUN_005b89c0                   ; 00514bc6
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 00514bcb
    POP ESI                             ; 00514bce
    POP EDI                             ; 00514bcf
    ADD ESP,0x80                        ; 00514bd0
        ;   Label: LAB_00514bd0
    POP EBP                             ; 00514bd6
    POP EBX                             ; 00514bd7
    RET                                 ; 00514bd8
    PUSH EBX                            ; 00514bd9
        ;   Label: LAB_00514bd9
    CALL FUN_005146c0                   ; 00514bda
        ;   XREF to: 005146c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005146c0()
    ADD ESP,0x4                         ; 00514bdf
    JMP 0x00514bd0                      ; 00514be2
        ;   XREF to: 00514bd0 (UNCONDITIONAL_JUMP)  ; LAB_00514bd0
    PUSH EBX                            ; 00514be4
        ;   Label: LAB_00514be4
    CALL FUN_00514880                   ; 00514be5
        ;   XREF to: 00514880 (UNCONDITIONAL_CALL)  ; undefined FUN_00514880()
    ADD ESP,0x4                         ; 00514bea
    JMP 0x00514bd0                      ; 00514bed
        ;   XREF to: 00514bd0 (UNCONDITIONAL_JUMP)  ; LAB_00514bd0
    MOV ESI,dword ptr [EBX + 0x4]       ; 00514bef
        ;   Label: LAB_00514bef
    MOV EAX,dword ptr [EBX + 0x14]      ; 00514bf2
    SUB EAX,ESI                         ; 00514bf5
    CMP EAX,0x1                         ; 00514bf7
    JBE 0x00514b93                      ; 00514bfa
        ;   XREF to: 00514b93 (CONDITIONAL_JUMP)  ; LAB_00514b93
    MOV EAX,dword ptr [EBX]             ; 00514bfc
    MOV byte ptr [EAX],0xc              ; 00514bfe
    MOV EAX,dword ptr [EBX]             ; 00514c01
    CMP byte ptr [EAX],0xa              ; 00514c03
    JZ 0x00514c22                       ; 00514c06
        ;   XREF to: 00514c22 (CONDITIONAL_JUMP)  ; LAB_00514c22
    MOV EDI,dword ptr [EBX + 0x4]       ; 00514c08
    MOV EBP,dword ptr [EBX]             ; 00514c0b
    MOV DH,byte ptr [EBX + 0xd]         ; 00514c0d
    INC EDI                             ; 00514c10
    INC EBP                             ; 00514c11
    MOV dword ptr [EBX + 0x4],EDI       ; 00514c12
    OR DH,0x10                          ; 00514c15
    MOV dword ptr [EBX],EBP             ; 00514c18
    MOV byte ptr [EBX + 0xd],DH         ; 00514c1a
    JMP 0x00514b9e                      ; 00514c1d
        ;   XREF to: 00514b9e (UNCONDITIONAL_JUMP)  ; LAB_00514b9e
    PUSH EBX                            ; 00514c22
        ;   Label: LAB_00514c22
    PUSH 0xa                            ; 00514c23
    JMP 0x00514b96                      ; 00514c25
        ;   XREF to: 00514b96 (UNCONDITIONAL_JUMP)  ; LAB_00514b96
    MOV ECX,dword ptr [EBX + 0x4]       ; 00514c2a
        ;   Label: LAB_00514c2a
    MOV EAX,dword ptr [EBX + 0x14]      ; 00514c2d
    SUB EAX,ECX                         ; 00514c30
    CMP EAX,0x1                         ; 00514c32
    JBE 0x00514baa                      ; 00514c35
        ;   XREF to: 00514baa (CONDITIONAL_JUMP)  ; LAB_00514baa
    MOV EDX,dword ptr [EBX]             ; 00514c3b
    MOV AL,byte ptr [ESI + 0x1c35838]   ; 00514c3d | DAT_01c35839
    MOV byte ptr [EDX],AL               ; 00514c43
    MOV EAX,dword ptr [EBX]             ; 00514c45
    CMP byte ptr [EAX],0xa              ; 00514c47
    JZ 0x00514c65                       ; 00514c4a
        ;   XREF to: 00514c65 (CONDITIONAL_JUMP)  ; LAB_00514c65
    MOV EDI,dword ptr [EBX + 0x4]       ; 00514c4c
    MOV EBP,dword ptr [EBX]             ; 00514c4f
    MOV AL,byte ptr [EBX + 0xd]         ; 00514c51
    INC EDI                             ; 00514c54
    INC EBP                             ; 00514c55
    MOV dword ptr [EBX + 0x4],EDI       ; 00514c56
    OR AL,0x10                          ; 00514c59
    MOV dword ptr [EBX],EBP             ; 00514c5b
    MOV byte ptr [EBX + 0xd],AL         ; 00514c5d
    JMP 0x00514bbc                      ; 00514c60
        ;   XREF to: 00514bbc (UNCONDITIONAL_JUMP)  ; LAB_00514bbc
    PUSH EBX                            ; 00514c65
        ;   Label: LAB_00514c65
    PUSH 0xa                            ; 00514c66
    JMP 0x00514bb4                      ; 00514c68
        ;   XREF to: 00514bb4 (UNCONDITIONAL_JUMP)  ; LAB_00514bb4

