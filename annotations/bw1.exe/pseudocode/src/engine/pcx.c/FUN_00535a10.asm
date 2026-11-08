; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00535a10(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
; undefined1       Stack[-0x6d]:1  local_6d
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00535d80 at 00535f2a
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_005ecb4a
;   TerminatedCString s_saveScreenRaw16_No_ext_f_005ecb5a
;   TerminatedCString s_RAW_005ecb79
;   undefined4 s_RAW_005ecb79+1
;   undefined4 s_RAW_005ecb79+2
;   undefined4 s_RAW_005ecb79+3
;   undefined4 DAT_005ecb7e
;   TerminatedCString s_engine_pcx_c_005ecb81
;   TerminatedCString s_saveScreenRaw16_Unable_t_005ecb91
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   ... and 6 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c0d10
;   FUN_005c157c
;   FUN_005c2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535a10
        ;   Label: FUN_00535a10
    PUSH ESI                            ; 00535a11
    PUSH EDI                            ; 00535a12
    PUSH EBP                            ; 00535a13
    SUB ESP,0x60                        ; 00535a14
    MOV ESI,dword ptr [ESP + 0x74]      ; 00535a17
    MOV EDI,ESP                         ; 00535a1b
    MOV DL,0x2e                         ; 00535a1d
    PUSH EDI                            ; 00535a1f
    MOV AL,byte ptr [ESI]               ; 00535a20
        ;   Label: LAB_00535a20
    MOV byte ptr [EDI],AL               ; 00535a22
    CMP AL,0x0                          ; 00535a24
    JZ 0x00535a38                       ; 00535a26
        ;   XREF to: 00535a38 (CONDITIONAL_JUMP)  ; LAB_00535a38
    MOV AL,byte ptr [ESI + 0x1]         ; 00535a28
    ADD ESI,0x2                         ; 00535a2b
    MOV byte ptr [EDI + 0x1],AL         ; 00535a2e
    ADD EDI,0x2                         ; 00535a31
    CMP AL,0x0                          ; 00535a34
    JNZ 0x00535a20                      ; 00535a36
        ;   XREF to: 00535a20 (CONDITIONAL_JUMP)  ; LAB_00535a20
    POP EDI                             ; 00535a38
        ;   Label: LAB_00535a38
    MOV ESI,ESP                         ; 00535a39
    MOV AL,byte ptr [ESI]               ; 00535a3b
        ;   Label: LAB_00535a3b
    CMP AL,DL                           ; 00535a3d
    JZ 0x00535a53                       ; 00535a3f
        ;   XREF to: 00535a53 (CONDITIONAL_JUMP)  ; LAB_00535a53
    CMP AL,0x0                          ; 00535a41
    JZ 0x00535a51                       ; 00535a43
        ;   XREF to: 00535a51 (CONDITIONAL_JUMP)  ; LAB_00535a51
    INC ESI                             ; 00535a45
    MOV AL,byte ptr [ESI]               ; 00535a46
    CMP AL,DL                           ; 00535a48
    JZ 0x00535a53                       ; 00535a4a
        ;   XREF to: 00535a53 (CONDITIONAL_JUMP)  ; LAB_00535a53
    INC ESI                             ; 00535a4c
    CMP AL,0x0                          ; 00535a4d
    JNZ 0x00535a3b                      ; 00535a4f
        ;   XREF to: 00535a3b (CONDITIONAL_JUMP)  ; LAB_00535a3b
    SUB ESI,ESI                         ; 00535a51
        ;   Label: LAB_00535a51
    MOV EDI,ESI                         ; 00535a53
        ;   Label: LAB_00535a53
    TEST ESI,ESI                        ; 00535a55
    JZ 0x00535ba7                       ; 00535a57
        ;   XREF to: 00535ba7 (CONDITIONAL_JUMP)  ; LAB_00535ba7
    MOV ESI,0x5ecb79                    ; 00535a5d | = ".RAW"
        ;   Label: LAB_00535a5d
    PUSH EDI                            ; 00535a62
    MOV AL,byte ptr [ESI]               ; 00535a63 | = ".RAW" | s_RAW_005ecb79+2
        ;   Label: LAB_00535a63
    MOV byte ptr [EDI],AL               ; 00535a65
    CMP AL,0x0                          ; 00535a67
    JZ 0x00535a7b                       ; 00535a69
        ;   XREF to: 00535a7b (CONDITIONAL_JUMP)  ; LAB_00535a7b
    MOV AL,byte ptr [ESI + 0x1]         ; 00535a6b | s_RAW_005ecb79+1 | s_RAW_005ecb79+3
    ADD ESI,0x2                         ; 00535a6e
    MOV byte ptr [EDI + 0x1],AL         ; 00535a71
    ADD EDI,0x2                         ; 00535a74
    CMP AL,0x0                          ; 00535a77
    JNZ 0x00535a63                      ; 00535a79
        ;   XREF to: 00535a63 (CONDITIONAL_JUMP)  ; LAB_00535a63
    POP EDI                             ; 00535a7b
        ;   Label: LAB_00535a7b
    PUSH 0x5ecb7e                       ; 00535a7c | DAT_005ecb7e
    LEA EAX,[ESP + 0x4]                 ; 00535a81
    PUSH EAX                            ; 00535a85
    CALL FUN_005c157c                   ; 00535a86
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 00535a8b
    MOV EDI,EAX                         ; 00535a8e
    TEST EAX,EAX                        ; 00535a90
    JNZ 0x00535ab7                      ; 00535a92
        ;   XREF to: 00535ab7 (CONDITIONAL_JUMP)  ; LAB_00535ab7
    MOV EBX,0x5ecb81                    ; 00535a94 | = "..\\engine\\pcx.c"
    MOV ESI,0x6d                        ; 00535a99
    PUSH 0x5ecb91                       ; 00535a9e | = "saveScreenRaw16 - Unable to open output"
    MOV dword ptr [0x01d1d400],EBX      ; 00535aa3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00535aa9 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00535aaf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00535ab4
    XOR EBP,EBP                         ; 00535ab7
        ;   Label: LAB_00535ab7
    MOV EAX,[0x0061b49c]                ; 00535ab9 | DAT_0061b49c
    MOV dword ptr [ESP + 0x5c],EBP      ; 00535abe
    TEST EAX,EAX                        ; 00535ac2
    JLE 0x00535b96                      ; 00535ac4
        ;   XREF to: 00535b96 (CONDITIONAL_JUMP)  ; LAB_00535b96
    MOV dword ptr [ESP + 0x58],EBP      ; 00535aca
    MOV ESI,dword ptr [ESP + 0x58]      ; 00535ace
        ;   Label: LAB_00535ace
    MOV EBP,dword ptr [0x0061b498]      ; 00535ad2 | DAT_0061b498
    XOR EBX,EBX                         ; 00535ad8
    MOV ESI,dword ptr [ESI + 0x1c4354c] ; 00535ada | DAT_01c4354c | DAT_01c43550
    TEST EBP,EBP                        ; 00535ae0
    JLE 0x00535b74                      ; 00535ae2
        ;   XREF to: 00535b74 (CONDITIONAL_JUMP)  ; LAB_00535b74
    XOR EAX,EAX                         ; 00535ae8
        ;   Label: LAB_00535ae8
    MOV AX,word ptr [ESI]               ; 00535aea
    MOV CL,byte ptr [0x01c4e9d4]        ; 00535aed | DAT_01c4e9d4
    MOV EDX,EAX                         ; 00535af3
    SHR EDX,CL                          ; 00535af5
    IMUL EDX,dword ptr [0x01c4e9d8]     ; 00535af7 | DAT_01c4e9d8
    AND EDX,0xff                        ; 00535afe
    MOV CL,byte ptr [0x01c4e9e0]        ; 00535b04 | DAT_01c4e9e0
    MOV dword ptr [ESP + 0x50],EDX      ; 00535b0a
    MOV EDX,EAX                         ; 00535b0e
    MOV EBP,dword ptr [0x01c4e9e4]      ; 00535b10 | DAT_01c4e9e4
    SHR EDX,CL                          ; 00535b16
    IMUL EDX,EBP                        ; 00535b18
    MOV CL,byte ptr [0x01c4e9ec]        ; 00535b1b | DAT_01c4e9ec
    AND EDX,0xff                        ; 00535b21
    MOV EBP,EAX                         ; 00535b27
    MOV dword ptr [ESP + 0x54],EDX      ; 00535b29
    SHR EBP,CL                          ; 00535b2d
    IMUL EBP,dword ptr [0x01c4e9f0]     ; 00535b2f | DAT_01c4e9f0
    PUSH EDI                            ; 00535b36
    MOV ECX,dword ptr [ESP + 0x54]      ; 00535b37
    PUSH ECX                            ; 00535b3b
    CALL FUN_005c2f00                   ; 00535b3c
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2f00()
    ADD ESP,0x8                         ; 00535b41
    PUSH EDI                            ; 00535b44
    MOV EAX,dword ptr [ESP + 0x58]      ; 00535b45
    PUSH EAX                            ; 00535b49
    CALL FUN_005c2f00                   ; 00535b4a
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2f00()
    ADD ESP,0x8                         ; 00535b4f
    PUSH EDI                            ; 00535b52
    AND EBP,0xff                        ; 00535b53
    PUSH EBP                            ; 00535b59
    ADD ESI,0x2                         ; 00535b5a
    INC EBX                             ; 00535b5d
    CALL FUN_005c2f00                   ; 00535b5e
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2f00()
    MOV EDX,dword ptr [0x0061b498]      ; 00535b63 | DAT_0061b498
    ADD ESP,0x8                         ; 00535b69
    CMP EBX,EDX                         ; 00535b6c
    JL 0x00535ae8                       ; 00535b6e
        ;   XREF to: 00535ae8 (CONDITIONAL_JUMP)  ; LAB_00535ae8
    MOV EDX,dword ptr [ESP + 0x58]      ; 00535b74
        ;   Label: LAB_00535b74
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00535b78
    MOV EBX,dword ptr [0x0061b49c]      ; 00535b7c | DAT_0061b49c
    ADD EDX,0x4                         ; 00535b82
    INC ECX                             ; 00535b85
    MOV dword ptr [ESP + 0x58],EDX      ; 00535b86
    MOV dword ptr [ESP + 0x5c],ECX      ; 00535b8a
    CMP ECX,EBX                         ; 00535b8e
    JL 0x00535ace                       ; 00535b90
        ;   XREF to: 00535ace (CONDITIONAL_JUMP)  ; LAB_00535ace
    PUSH EDI                            ; 00535b96
        ;   Label: LAB_00535b96
    CALL FUN_005c0d10                   ; 00535b97
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 00535b9c
    ADD ESP,0x60                        ; 00535b9f
    POP EBP                             ; 00535ba2
    POP EDI                             ; 00535ba3
    POP ESI                             ; 00535ba4
    POP EBX                             ; 00535ba5
    RET                                 ; 00535ba6
    MOV EDX,0x5ecb4a                    ; 00535ba7 | = "..\\engine\\pcx.c"
        ;   Label: LAB_00535ba7
    MOV ECX,0x67                        ; 00535bac
    PUSH 0x5ecb5a                       ; 00535bb1 | = "saveScreenRaw16 - No ext found"
    MOV dword ptr [0x01d1d400],EDX      ; 00535bb6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00535bbc | DAT_01d1d404
    CALL FUN_005030e0                   ; 00535bc2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00535bc7
    JMP 0x00535a5d                      ; 00535bca
        ;   XREF to: 00535a5d (UNCONDITIONAL_JUMP)  ; LAB_00535a5d

