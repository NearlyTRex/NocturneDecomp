; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a8ae8(int param_1,int *param_2)
;
; Local Variables:
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x7f]:1  local_7f
; undefined1       Stack[-0x7e]:1  local_7e
; undefined1       Stack[-0x7d]:1  local_7d
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined1       Stack[-0x7a]:1  local_7a
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005a82c0 at 005a84b3
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;   void* PTR_FUN_00607d84 = 005ad360
;
; Called Functions:
;   FUN_005a82a0
;   FUN_005a82ac
;   FUN_005a9288
;   FUN_005ad360
;   FUN_005ae60c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8ae8
        ;   Label: FUN_005a8ae8
    PUSH ESI                            ; 005a8ae9
    PUSH EDI                            ; 005a8aea
    PUSH ES                             ; 005a8aeb
    PUSH EBP                            ; 005a8aec
    SUB ESP,0x6c                        ; 005a8aed
    MOV EBP,dword ptr [ESP + 0x84]      ; 005a8af0
    XOR EDI,EDI                         ; 005a8af7
    MOV ESI,ESP                         ; 005a8af9
    MOV dword ptr [ESP + 0x5c],EDI      ; 005a8afb
    PUSH EBP                            ; 005a8aff
        ;   Label: LAB_005a8aff
    CALL FUN_005a82a0                   ; 005a8b00
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8b05
    MOV CL,AL                           ; 005a8b08
    MOV EBX,EAX                         ; 005a8b0a
    INC CL                              ; 005a8b0c
    AND ECX,0xff                        ; 005a8b0e
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 005a8b14 | DAT_006074b8
    JZ 0x005a8b23                       ; 005a8b1b
        ;   XREF to: 005a8b23 (CONDITIONAL_JUMP)  ; LAB_005a8b23
    INC dword ptr [ESP + 0x5c]          ; 005a8b1d
    JMP 0x005a8aff                      ; 005a8b21
        ;   XREF to: 005a8aff (UNCONDITIONAL_JUMP)  ; LAB_005a8aff
    TEST byte ptr [EBP + 0x10],0x2      ; 005a8b23
        ;   Label: LAB_005a8b23
    JNZ 0x005a8d1d                      ; 005a8b27
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    MOV ECX,dword ptr [EBP + 0xc]       ; 005a8b2d
    LEA EDX,[ECX + -0x1]                ; 005a8b30
    MOV dword ptr [EBP + 0xc],EDX       ; 005a8b33
    TEST ECX,ECX                        ; 005a8b36
    JZ 0x005a8d13                       ; 005a8b38
        ;   XREF to: 005a8d13 (CONDITIONAL_JUMP)  ; LAB_005a8d13
    CMP EAX,0x2b                        ; 005a8b3e
    JZ 0x005a8b48                       ; 005a8b41
        ;   XREF to: 005a8b48 (CONDITIONAL_JUMP)  ; LAB_005a8b48
    CMP EAX,0x2d                        ; 005a8b43
    JNZ 0x005a8b68                      ; 005a8b46
        ;   XREF to: 005a8b68 (CONDITIONAL_JUMP)  ; LAB_005a8b68
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005a8b48
        ;   Label: LAB_005a8b48
    PUSH EBP                            ; 005a8b4c
    MOV byte ptr [ESI],BL               ; 005a8b4d
    INC ECX                             ; 005a8b4f
    INC ESI                             ; 005a8b50
    MOV dword ptr [ESP + 0x60],ECX      ; 005a8b51
    CALL FUN_005a9288                   ; 005a8b55
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8b5a
    MOV EBX,EAX                         ; 005a8b5d
    CMP EAX,-0x1                        ; 005a8b5f
    JZ 0x005a8d1d                       ; 005a8b62
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    MOV AL,BL                           ; 005a8b68
        ;   Label: LAB_005a8b68
    INC AL                              ; 005a8b6a
    AND EAX,0xff                        ; 005a8b6c
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8b71 | DAT_006074b8
    JNZ 0x005a8b83                      ; 005a8b78
        ;   XREF to: 005a8b83 (CONDITIONAL_JUMP)  ; LAB_005a8b83
    CMP EBX,0x2e                        ; 005a8b7a
    JNZ 0x005a8d13                      ; 005a8b7d
        ;   XREF to: 005a8d13 (CONDITIONAL_JUMP)  ; LAB_005a8d13
    XOR EAX,EAX                         ; 005a8b83
        ;   Label: LAB_005a8b83
    MOV dword ptr [ESP + 0x64],EAX      ; 005a8b85
    MOV dword ptr [ESP + 0x58],EAX      ; 005a8b89
    MOV AL,BL                           ; 005a8b8d
    INC AL                              ; 005a8b8f
    AND EAX,0xff                        ; 005a8b91
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8b96 | DAT_006074b8
    JZ 0x005a8be5                       ; 005a8b9d
        ;   XREF to: 005a8be5 (CONDITIONAL_JUMP)  ; LAB_005a8be5
    MOV dword ptr [ESP + 0x58],0x1      ; 005a8b9f
    MOV byte ptr [ESI],BL               ; 005a8ba7
        ;   Label: LAB_005a8ba7
    MOV AL,byte ptr [EBP + 0x10]        ; 005a8ba9
    INC ESI                             ; 005a8bac
    TEST AL,0x10                        ; 005a8bad
    JZ 0x005a8bc0                       ; 005a8baf
        ;   XREF to: 005a8bc0 (CONDITIONAL_JUMP)  ; LAB_005a8bc0
    IMUL EAX,dword ptr [ESP + 0x66],0xa ; 005a8bb1
    ADD EBX,EAX                         ; 005a8bb6
    SUB EBX,0x30                        ; 005a8bb8
    MOV word ptr [ESP + 0x66],BX        ; 005a8bbb
    PUSH EBP                            ; 005a8bc0
        ;   Label: LAB_005a8bc0
    INC EDI                             ; 005a8bc1
    CALL FUN_005a9288                   ; 005a8bc2
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8bc7
    MOV EBX,EAX                         ; 005a8bca
    CMP EAX,-0x1                        ; 005a8bcc
    JZ 0x005a8d1d                       ; 005a8bcf
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    INC AL                              ; 005a8bd5
    AND EAX,0xff                        ; 005a8bd7
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8bdc | DAT_006074b8
    JNZ 0x005a8ba7                      ; 005a8be3
        ;   XREF to: 005a8ba7 (CONDITIONAL_JUMP)  ; LAB_005a8ba7
    CMP EBX,0x2e                        ; 005a8be5
        ;   Label: LAB_005a8be5
    JNZ 0x005a8c8f                      ; 005a8be8
        ;   XREF to: 005a8c8f (CONDITIONAL_JUMP)  ; LAB_005a8c8f
    PUSH EBP                            ; 005a8bee
    MOV byte ptr [ESI],BL               ; 005a8bef
    INC ESI                             ; 005a8bf1
    CALL FUN_005a9288                   ; 005a8bf2
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8bf7
    MOV EBX,EAX                         ; 005a8bfa
    CMP EAX,-0x1                        ; 005a8bfc
    JZ 0x005a8d1d                       ; 005a8bff
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    CMP dword ptr [ESP + 0x58],0x0      ; 005a8c05
    JNZ 0x005a8c22                      ; 005a8c0a
        ;   XREF to: 005a8c22 (CONDITIONAL_JUMP)  ; LAB_005a8c22
    MOV AL,BL                           ; 005a8c0c
    INC AL                              ; 005a8c0e
    AND EAX,0xff                        ; 005a8c10
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8c15 | DAT_006074b8
    JZ 0x005a8d13                       ; 005a8c1c
        ;   XREF to: 005a8d13 (CONDITIONAL_JUMP)  ; LAB_005a8d13
    INC EDI                             ; 005a8c22
        ;   Label: LAB_005a8c22
    MOV AL,BL                           ; 005a8c23
        ;   Label: LAB_005a8c23
    INC AL                              ; 005a8c25
    AND EAX,0xff                        ; 005a8c27
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8c2c | DAT_006074b8
    JZ 0x005a8c49                       ; 005a8c33
        ;   XREF to: 005a8c49 (CONDITIONAL_JUMP)  ; LAB_005a8c49
    PUSH EBP                            ; 005a8c35
    INC EDI                             ; 005a8c36
    MOV byte ptr [ESI],BL               ; 005a8c37
    INC ESI                             ; 005a8c39
    CALL FUN_005a9288                   ; 005a8c3a
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8c3f
    MOV EBX,EAX                         ; 005a8c42
    CMP EAX,-0x1                        ; 005a8c44
    JNZ 0x005a8c23                      ; 005a8c47
        ;   XREF to: 005a8c23 (CONDITIONAL_JUMP)  ; LAB_005a8c23
    TEST byte ptr [EBP + 0x10],0x10     ; 005a8c49
        ;   Label: LAB_005a8c49
    JZ 0x005a8c86                       ; 005a8c4d
        ;   XREF to: 005a8c86 (CONDITIONAL_JUMP)  ; LAB_005a8c86
    XOR EDX,EDX                         ; 005a8c4f
    MOV ECX,ESI                         ; 005a8c51
    MOV dword ptr [ESP + 0x68],EDX      ; 005a8c53
    MOV AL,byte ptr [ECX + -0x1]        ; 005a8c57
        ;   Label: LAB_005a8c57
    DEC ECX                             ; 005a8c5a
    CMP AL,0x2e                         ; 005a8c5b
    JZ 0x005a8c7d                       ; 005a8c5d
        ;   XREF to: 005a8c7d (CONDITIONAL_JUMP)  ; LAB_005a8c7d
    SUB AL,0x30                         ; 005a8c5f
    MOV dword ptr [ESP + 0x60],0xa      ; 005a8c61
    MOV byte ptr [ESP + 0x6a],AL        ; 005a8c69
    XOR EDX,EDX                         ; 005a8c6d
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a8c6f
    DIV dword ptr [ESP + 0x60]          ; 005a8c73
    MOV dword ptr [ESP + 0x68],EAX      ; 005a8c77
    JMP 0x005a8c57                      ; 005a8c7b
        ;   XREF to: 005a8c57 (UNCONDITIONAL_JUMP)  ; LAB_005a8c57
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a8c7d
        ;   Label: LAB_005a8c7d
    MOV word ptr [ESP + 0x64],AX        ; 005a8c81
    CMP EBX,-0x1                        ; 005a8c86
        ;   Label: LAB_005a8c86
    JZ 0x005a8d1d                       ; 005a8c89
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    TEST byte ptr [EBP + 0x10],0x10     ; 005a8c8f
        ;   Label: LAB_005a8c8f
    JNZ 0x005a8d13                      ; 005a8c93
        ;   XREF to: 005a8d13 (CONDITIONAL_JUMP)  ; LAB_005a8d13
    CMP EBX,0x65                        ; 005a8c99
    JZ 0x005a8ca7                       ; 005a8c9c
        ;   XREF to: 005a8ca7 (CONDITIONAL_JUMP)  ; LAB_005a8ca7
    CMP EBX,0x45                        ; 005a8c9e
    JNZ 0x005a8d13                      ; 005a8ca1
        ;   XREF to: 005a8d13 (CONDITIONAL_JUMP)  ; LAB_005a8d13
    PUSH EBP                            ; 005a8ca7
        ;   Label: LAB_005a8ca7
    INC EDI                             ; 005a8ca8
    MOV byte ptr [ESI],BL               ; 005a8ca9
    INC ESI                             ; 005a8cab
    CALL FUN_005a9288                   ; 005a8cac
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8cb1
    MOV EBX,EAX                         ; 005a8cb4
    CMP EAX,-0x1                        ; 005a8cb6
    JZ 0x005a8d1d                       ; 005a8cb9
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    CMP EAX,0x2b                        ; 005a8cbb
    JZ 0x005a8cc5                       ; 005a8cbe
        ;   XREF to: 005a8cc5 (CONDITIONAL_JUMP)  ; LAB_005a8cc5
    CMP EAX,0x2d                        ; 005a8cc0
    JNZ 0x005a8cd9                      ; 005a8cc3
        ;   XREF to: 005a8cd9 (CONDITIONAL_JUMP)  ; LAB_005a8cd9
    PUSH EBP                            ; 005a8cc5
        ;   Label: LAB_005a8cc5
    INC EDI                             ; 005a8cc6
    MOV byte ptr [ESI],BL               ; 005a8cc7
    INC ESI                             ; 005a8cc9
    CALL FUN_005a9288                   ; 005a8cca
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8ccf
    MOV EBX,EAX                         ; 005a8cd2
    CMP EAX,-0x1                        ; 005a8cd4
    JZ 0x005a8d1d                       ; 005a8cd7
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    MOV AL,BL                           ; 005a8cd9
        ;   Label: LAB_005a8cd9
    INC AL                              ; 005a8cdb
    AND EAX,0xff                        ; 005a8cdd
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8ce2 | DAT_006074b8
    JNZ 0x005a8cef                      ; 005a8ce9
        ;   XREF to: 005a8cef (CONDITIONAL_JUMP)  ; LAB_005a8cef
    XOR EDI,EDI                         ; 005a8ceb
    JMP 0x005a8d13                      ; 005a8ced
        ;   XREF to: 005a8d13 (UNCONDITIONAL_JUMP)  ; LAB_005a8d13
    PUSH EBP                            ; 005a8cef
        ;   Label: LAB_005a8cef
    INC EDI                             ; 005a8cf0
    MOV byte ptr [ESI],BL               ; 005a8cf1
    INC ESI                             ; 005a8cf3
    CALL FUN_005a9288                   ; 005a8cf4
        ;   XREF to: 005a9288 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9288()
    ADD ESP,0x4                         ; 005a8cf9
    MOV EBX,EAX                         ; 005a8cfc
    CMP EAX,-0x1                        ; 005a8cfe
    JZ 0x005a8d1d                       ; 005a8d01
        ;   XREF to: 005a8d1d (CONDITIONAL_JUMP)  ; LAB_005a8d1d
    INC AL                              ; 005a8d03
    AND EAX,0xff                        ; 005a8d05
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a8d0a | DAT_006074b8
    JNZ 0x005a8cef                      ; 005a8d11
        ;   XREF to: 005a8cef (CONDITIONAL_JUMP)  ; LAB_005a8cef
    PUSH EBP                            ; 005a8d13
        ;   Label: LAB_005a8d13
    PUSH EBX                            ; 005a8d14
    CALL FUN_005a82ac                   ; 005a8d15
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined FUN_005a82ac()
    ADD ESP,0x8                         ; 005a8d1a
    TEST EDI,EDI                        ; 005a8d1d
        ;   Label: LAB_005a8d1d
    JLE 0x005a8de0                      ; 005a8d1f
        ;   XREF to: 005a8de0 (CONDITIONAL_JUMP)  ; LAB_005a8de0
    ADD EDI,dword ptr [ESP + 0x5c]      ; 005a8d25
    TEST byte ptr [EBP + 0x10],0x1      ; 005a8d29
    JZ 0x005a8de0                       ; 005a8d2d
        ;   XREF to: 005a8de0 (CONDITIONAL_JUMP)  ; LAB_005a8de0
    MOV byte ptr [ESI],0x0              ; 005a8d33
    TEST byte ptr [EBP + 0x10],0x10     ; 005a8d36
    JZ 0x005a8d48                       ; 005a8d3a
        ;   XREF to: 005a8d48 (CONDITIONAL_JUMP)  ; LAB_005a8d48
    CMP byte ptr [ESP],0x2d             ; 005a8d3c
    JNZ 0x005a8d5b                      ; 005a8d40
        ;   XREF to: 005a8d5b (CONDITIONAL_JUMP)  ; LAB_005a8d5b
    NEG dword ptr [ESP + 0x64]          ; 005a8d42
    JMP 0x005a8d5b                      ; 005a8d46
        ;   XREF to: 005a8d5b (UNCONDITIONAL_JUMP)  ; LAB_005a8d5b
    LEA EAX,[ESP + 0x50]                ; 005a8d48
        ;   Label: LAB_005a8d48
    PUSH EAX                            ; 005a8d4c
    LEA EAX,[ESP + 0x4]                 ; 005a8d4d
    PUSH EAX                            ; 005a8d51
    CALL dword ptr [0x00607d84]         ; 005a8d52 | PTR_FUN_00607d84
    ADD ESP,0x8                         ; 005a8d58
    MOV CH,byte ptr [EBP + 0x10]        ; 005a8d5b
        ;   Label: LAB_005a8d5b
    TEST CH,0x4                         ; 005a8d5e
    JZ 0x005a8d76                       ; 005a8d61
        ;   XREF to: 005a8d76 (CONDITIONAL_JUMP)  ; LAB_005a8d76
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a8d63
    MOV EBX,dword ptr [EAX]             ; 005a8d6a
    ADD EBX,0x8                         ; 005a8d6c
    MOV dword ptr [EAX],EBX             ; 005a8d6f
    LES EBX,[EBX + -0x8]                ; 005a8d71
    JMP 0x005a8da7                      ; 005a8d74
        ;   XREF to: 005a8da7 (UNCONDITIONAL_JUMP)  ; LAB_005a8da7
    TEST CH,0x8                         ; 005a8d76
        ;   Label: LAB_005a8d76
    JZ 0x005a8d92                       ; 005a8d79
        ;   XREF to: 005a8d92 (CONDITIONAL_JUMP)  ; LAB_005a8d92
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a8d7b
    MOV EDX,dword ptr [EAX]             ; 005a8d82
    ADD EDX,0x4                         ; 005a8d84
    MOV dword ptr [EAX],EDX             ; 005a8d87
    MOV AX,DS                           ; 005a8d89
    MOV ES,AX                           ; 005a8d8b
    MOV EBX,dword ptr [EDX + -0x4]      ; 005a8d8d
    JMP 0x005a8da7                      ; 005a8d90
        ;   XREF to: 005a8da7 (UNCONDITIONAL_JUMP)  ; LAB_005a8da7
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a8d92
        ;   Label: LAB_005a8d92
    MOV ESI,dword ptr [EAX]             ; 005a8d99
    ADD ESI,0x4                         ; 005a8d9b
    MOV dword ptr [EAX],ESI             ; 005a8d9e
    MOV AX,DS                           ; 005a8da0
    MOV ES,AX                           ; 005a8da2
    MOV EBX,dword ptr [ESI + -0x4]      ; 005a8da4
    MOV AH,byte ptr [EBP + 0x10]        ; 005a8da7
        ;   Label: LAB_005a8da7
    TEST AH,0x10                        ; 005a8daa
    JZ 0x005a8db5                       ; 005a8dad
        ;   XREF to: 005a8db5 (CONDITIONAL_JUMP)  ; LAB_005a8db5
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a8daf
    JMP 0x005a8ddd                      ; 005a8db3
        ;   XREF to: 005a8ddd (UNCONDITIONAL_JUMP)  ; LAB_005a8ddd
    TEST AH,0x20                        ; 005a8db5
        ;   Label: LAB_005a8db5
    JNZ 0x005a8dbf                      ; 005a8db8
        ;   XREF to: 005a8dbf (CONDITIONAL_JUMP)  ; LAB_005a8dbf
    TEST AH,0x40                        ; 005a8dba
    JZ 0x005a8dd0                       ; 005a8dbd
        ;   XREF to: 005a8dd0 (CONDITIONAL_JUMP)  ; LAB_005a8dd0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005a8dbf
        ;   Label: LAB_005a8dbf
    MOV dword ptr ES:[EBX],EAX          ; 005a8dc3
    MOV EAX,dword ptr [ESP + 0x54]      ; 005a8dc6
    MOV dword ptr ES:[EBX + 0x4],EAX    ; 005a8dca
    JMP 0x005a8de0                      ; 005a8dce
        ;   XREF to: 005a8de0 (UNCONDITIONAL_JUMP)  ; LAB_005a8de0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005a8dd0
        ;   Label: LAB_005a8dd0
    MOV EDX,dword ptr [ESP + 0x54]      ; 005a8dd4
    CALL FUN_005ae60c                   ; 005a8dd8
        ;   XREF to: 005ae60c (UNCONDITIONAL_CALL)  ; undefined FUN_005ae60c()
    MOV dword ptr ES:[EBX],EAX          ; 005a8ddd
        ;   Label: LAB_005a8ddd
    MOV EAX,EDI                         ; 005a8de0
        ;   Label: LAB_005a8de0
    ADD ESP,0x6c                        ; 005a8de2
    POP EBP                             ; 005a8de5
    POP ES                              ; 005a8de6
    POP EDI                             ; 005a8de7
    POP ESI                             ; 005a8de8
    POP EBX                             ; 005a8de9
    RET                                 ; 005a8dea

