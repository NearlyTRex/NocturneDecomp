; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c5c78(int param_1,int *param_2)
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
;   FUN_005c5450 at 005c5643
;
; Referenced Globals:
;   undefined4 DAT_00626114
;   void* PTR_FUN_006269e0 = 005ca4f0
;
; Called Functions:
;   FUN_005c5430
;   FUN_005c543c
;   FUN_005c6418
;   FUN_005ca4f0
;   FUN_005cb79c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5c78
        ;   Label: FUN_005c5c78
    PUSH ESI                            ; 005c5c79
    PUSH EDI                            ; 005c5c7a
    PUSH ES                             ; 005c5c7b
    PUSH EBP                            ; 005c5c7c
    SUB ESP,0x6c                        ; 005c5c7d
    MOV EBP,dword ptr [ESP + 0x84]      ; 005c5c80
    XOR EDI,EDI                         ; 005c5c87
    MOV ESI,ESP                         ; 005c5c89
    MOV dword ptr [ESP + 0x5c],EDI      ; 005c5c8b
    PUSH EBP                            ; 005c5c8f
        ;   Label: LAB_005c5c8f
    CALL FUN_005c5430                   ; 005c5c90
        ;   XREF to: 005c5430 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5430()
    ADD ESP,0x4                         ; 005c5c95
    MOV CL,AL                           ; 005c5c98
    MOV EBX,EAX                         ; 005c5c9a
    INC CL                              ; 005c5c9c
    AND ECX,0xff                        ; 005c5c9e
    TEST byte ptr [ECX + 0x626114],0x2  ; 005c5ca4 | DAT_00626114
    JZ 0x005c5cb3                       ; 005c5cab
        ;   XREF to: 005c5cb3 (CONDITIONAL_JUMP)  ; LAB_005c5cb3
    INC dword ptr [ESP + 0x5c]          ; 005c5cad
    JMP 0x005c5c8f                      ; 005c5cb1
        ;   XREF to: 005c5c8f (UNCONDITIONAL_JUMP)  ; LAB_005c5c8f
    TEST byte ptr [EBP + 0x10],0x2      ; 005c5cb3
        ;   Label: LAB_005c5cb3
    JNZ 0x005c5ead                      ; 005c5cb7
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    MOV ECX,dword ptr [EBP + 0xc]       ; 005c5cbd
    LEA EDX,[ECX + -0x1]                ; 005c5cc0
    MOV dword ptr [EBP + 0xc],EDX       ; 005c5cc3
    TEST ECX,ECX                        ; 005c5cc6
    JZ 0x005c5ea3                       ; 005c5cc8
        ;   XREF to: 005c5ea3 (CONDITIONAL_JUMP)  ; LAB_005c5ea3
    CMP EAX,0x2b                        ; 005c5cce
    JZ 0x005c5cd8                       ; 005c5cd1
        ;   XREF to: 005c5cd8 (CONDITIONAL_JUMP)  ; LAB_005c5cd8
    CMP EAX,0x2d                        ; 005c5cd3
    JNZ 0x005c5cf8                      ; 005c5cd6
        ;   XREF to: 005c5cf8 (CONDITIONAL_JUMP)  ; LAB_005c5cf8
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005c5cd8
        ;   Label: LAB_005c5cd8
    PUSH EBP                            ; 005c5cdc
    MOV byte ptr [ESI],BL               ; 005c5cdd
    INC ECX                             ; 005c5cdf
    INC ESI                             ; 005c5ce0
    MOV dword ptr [ESP + 0x60],ECX      ; 005c5ce1
    CALL FUN_005c6418                   ; 005c5ce5
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5cea
    MOV EBX,EAX                         ; 005c5ced
    CMP EAX,-0x1                        ; 005c5cef
    JZ 0x005c5ead                       ; 005c5cf2
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    MOV AL,BL                           ; 005c5cf8
        ;   Label: LAB_005c5cf8
    INC AL                              ; 005c5cfa
    AND EAX,0xff                        ; 005c5cfc
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5d01 | DAT_00626114
    JNZ 0x005c5d13                      ; 005c5d08
        ;   XREF to: 005c5d13 (CONDITIONAL_JUMP)  ; LAB_005c5d13
    CMP EBX,0x2e                        ; 005c5d0a
    JNZ 0x005c5ea3                      ; 005c5d0d
        ;   XREF to: 005c5ea3 (CONDITIONAL_JUMP)  ; LAB_005c5ea3
    XOR EAX,EAX                         ; 005c5d13
        ;   Label: LAB_005c5d13
    MOV dword ptr [ESP + 0x64],EAX      ; 005c5d15
    MOV dword ptr [ESP + 0x58],EAX      ; 005c5d19
    MOV AL,BL                           ; 005c5d1d
    INC AL                              ; 005c5d1f
    AND EAX,0xff                        ; 005c5d21
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5d26 | DAT_00626114
    JZ 0x005c5d75                       ; 005c5d2d
        ;   XREF to: 005c5d75 (CONDITIONAL_JUMP)  ; LAB_005c5d75
    MOV dword ptr [ESP + 0x58],0x1      ; 005c5d2f
    MOV byte ptr [ESI],BL               ; 005c5d37
        ;   Label: LAB_005c5d37
    MOV AL,byte ptr [EBP + 0x10]        ; 005c5d39
    INC ESI                             ; 005c5d3c
    TEST AL,0x10                        ; 005c5d3d
    JZ 0x005c5d50                       ; 005c5d3f
        ;   XREF to: 005c5d50 (CONDITIONAL_JUMP)  ; LAB_005c5d50
    IMUL EAX,dword ptr [ESP + 0x66],0xa ; 005c5d41
    ADD EBX,EAX                         ; 005c5d46
    SUB EBX,0x30                        ; 005c5d48
    MOV word ptr [ESP + 0x66],BX        ; 005c5d4b
    PUSH EBP                            ; 005c5d50
        ;   Label: LAB_005c5d50
    INC EDI                             ; 005c5d51
    CALL FUN_005c6418                   ; 005c5d52
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5d57
    MOV EBX,EAX                         ; 005c5d5a
    CMP EAX,-0x1                        ; 005c5d5c
    JZ 0x005c5ead                       ; 005c5d5f
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    INC AL                              ; 005c5d65
    AND EAX,0xff                        ; 005c5d67
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5d6c | DAT_00626114
    JNZ 0x005c5d37                      ; 005c5d73
        ;   XREF to: 005c5d37 (CONDITIONAL_JUMP)  ; LAB_005c5d37
    CMP EBX,0x2e                        ; 005c5d75
        ;   Label: LAB_005c5d75
    JNZ 0x005c5e1f                      ; 005c5d78
        ;   XREF to: 005c5e1f (CONDITIONAL_JUMP)  ; LAB_005c5e1f
    PUSH EBP                            ; 005c5d7e
    MOV byte ptr [ESI],BL               ; 005c5d7f
    INC ESI                             ; 005c5d81
    CALL FUN_005c6418                   ; 005c5d82
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5d87
    MOV EBX,EAX                         ; 005c5d8a
    CMP EAX,-0x1                        ; 005c5d8c
    JZ 0x005c5ead                       ; 005c5d8f
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    CMP dword ptr [ESP + 0x58],0x0      ; 005c5d95
    JNZ 0x005c5db2                      ; 005c5d9a
        ;   XREF to: 005c5db2 (CONDITIONAL_JUMP)  ; LAB_005c5db2
    MOV AL,BL                           ; 005c5d9c
    INC AL                              ; 005c5d9e
    AND EAX,0xff                        ; 005c5da0
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5da5 | DAT_00626114
    JZ 0x005c5ea3                       ; 005c5dac
        ;   XREF to: 005c5ea3 (CONDITIONAL_JUMP)  ; LAB_005c5ea3
    INC EDI                             ; 005c5db2
        ;   Label: LAB_005c5db2
    MOV AL,BL                           ; 005c5db3
        ;   Label: LAB_005c5db3
    INC AL                              ; 005c5db5
    AND EAX,0xff                        ; 005c5db7
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5dbc | DAT_00626114
    JZ 0x005c5dd9                       ; 005c5dc3
        ;   XREF to: 005c5dd9 (CONDITIONAL_JUMP)  ; LAB_005c5dd9
    PUSH EBP                            ; 005c5dc5
    INC EDI                             ; 005c5dc6
    MOV byte ptr [ESI],BL               ; 005c5dc7
    INC ESI                             ; 005c5dc9
    CALL FUN_005c6418                   ; 005c5dca
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5dcf
    MOV EBX,EAX                         ; 005c5dd2
    CMP EAX,-0x1                        ; 005c5dd4
    JNZ 0x005c5db3                      ; 005c5dd7
        ;   XREF to: 005c5db3 (CONDITIONAL_JUMP)  ; LAB_005c5db3
    TEST byte ptr [EBP + 0x10],0x10     ; 005c5dd9
        ;   Label: LAB_005c5dd9
    JZ 0x005c5e16                       ; 005c5ddd
        ;   XREF to: 005c5e16 (CONDITIONAL_JUMP)  ; LAB_005c5e16
    XOR EDX,EDX                         ; 005c5ddf
    MOV ECX,ESI                         ; 005c5de1
    MOV dword ptr [ESP + 0x68],EDX      ; 005c5de3
    MOV AL,byte ptr [ECX + -0x1]        ; 005c5de7
        ;   Label: LAB_005c5de7
    DEC ECX                             ; 005c5dea
    CMP AL,0x2e                         ; 005c5deb
    JZ 0x005c5e0d                       ; 005c5ded
        ;   XREF to: 005c5e0d (CONDITIONAL_JUMP)  ; LAB_005c5e0d
    SUB AL,0x30                         ; 005c5def
    MOV dword ptr [ESP + 0x60],0xa      ; 005c5df1
    MOV byte ptr [ESP + 0x6a],AL        ; 005c5df9
    XOR EDX,EDX                         ; 005c5dfd
    MOV EAX,dword ptr [ESP + 0x68]      ; 005c5dff
    DIV dword ptr [ESP + 0x60]          ; 005c5e03
    MOV dword ptr [ESP + 0x68],EAX      ; 005c5e07
    JMP 0x005c5de7                      ; 005c5e0b
        ;   XREF to: 005c5de7 (UNCONDITIONAL_JUMP)  ; LAB_005c5de7
    MOV EAX,dword ptr [ESP + 0x68]      ; 005c5e0d
        ;   Label: LAB_005c5e0d
    MOV word ptr [ESP + 0x64],AX        ; 005c5e11
    CMP EBX,-0x1                        ; 005c5e16
        ;   Label: LAB_005c5e16
    JZ 0x005c5ead                       ; 005c5e19
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    TEST byte ptr [EBP + 0x10],0x10     ; 005c5e1f
        ;   Label: LAB_005c5e1f
    JNZ 0x005c5ea3                      ; 005c5e23
        ;   XREF to: 005c5ea3 (CONDITIONAL_JUMP)  ; LAB_005c5ea3
    CMP EBX,0x65                        ; 005c5e29
    JZ 0x005c5e37                       ; 005c5e2c
        ;   XREF to: 005c5e37 (CONDITIONAL_JUMP)  ; LAB_005c5e37
    CMP EBX,0x45                        ; 005c5e2e
    JNZ 0x005c5ea3                      ; 005c5e31
        ;   XREF to: 005c5ea3 (CONDITIONAL_JUMP)  ; LAB_005c5ea3
    PUSH EBP                            ; 005c5e37
        ;   Label: LAB_005c5e37
    INC EDI                             ; 005c5e38
    MOV byte ptr [ESI],BL               ; 005c5e39
    INC ESI                             ; 005c5e3b
    CALL FUN_005c6418                   ; 005c5e3c
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5e41
    MOV EBX,EAX                         ; 005c5e44
    CMP EAX,-0x1                        ; 005c5e46
    JZ 0x005c5ead                       ; 005c5e49
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    CMP EAX,0x2b                        ; 005c5e4b
    JZ 0x005c5e55                       ; 005c5e4e
        ;   XREF to: 005c5e55 (CONDITIONAL_JUMP)  ; LAB_005c5e55
    CMP EAX,0x2d                        ; 005c5e50
    JNZ 0x005c5e69                      ; 005c5e53
        ;   XREF to: 005c5e69 (CONDITIONAL_JUMP)  ; LAB_005c5e69
    PUSH EBP                            ; 005c5e55
        ;   Label: LAB_005c5e55
    INC EDI                             ; 005c5e56
    MOV byte ptr [ESI],BL               ; 005c5e57
    INC ESI                             ; 005c5e59
    CALL FUN_005c6418                   ; 005c5e5a
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5e5f
    MOV EBX,EAX                         ; 005c5e62
    CMP EAX,-0x1                        ; 005c5e64
    JZ 0x005c5ead                       ; 005c5e67
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    MOV AL,BL                           ; 005c5e69
        ;   Label: LAB_005c5e69
    INC AL                              ; 005c5e6b
    AND EAX,0xff                        ; 005c5e6d
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5e72 | DAT_00626114
    JNZ 0x005c5e7f                      ; 005c5e79
        ;   XREF to: 005c5e7f (CONDITIONAL_JUMP)  ; LAB_005c5e7f
    XOR EDI,EDI                         ; 005c5e7b
    JMP 0x005c5ea3                      ; 005c5e7d
        ;   XREF to: 005c5ea3 (UNCONDITIONAL_JUMP)  ; LAB_005c5ea3
    PUSH EBP                            ; 005c5e7f
        ;   Label: LAB_005c5e7f
    INC EDI                             ; 005c5e80
    MOV byte ptr [ESI],BL               ; 005c5e81
    INC ESI                             ; 005c5e83
    CALL FUN_005c6418                   ; 005c5e84
        ;   XREF to: 005c6418 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6418()
    ADD ESP,0x4                         ; 005c5e89
    MOV EBX,EAX                         ; 005c5e8c
    CMP EAX,-0x1                        ; 005c5e8e
    JZ 0x005c5ead                       ; 005c5e91
        ;   XREF to: 005c5ead (CONDITIONAL_JUMP)  ; LAB_005c5ead
    INC AL                              ; 005c5e93
    AND EAX,0xff                        ; 005c5e95
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c5e9a | DAT_00626114
    JNZ 0x005c5e7f                      ; 005c5ea1
        ;   XREF to: 005c5e7f (CONDITIONAL_JUMP)  ; LAB_005c5e7f
    PUSH EBP                            ; 005c5ea3
        ;   Label: LAB_005c5ea3
    PUSH EBX                            ; 005c5ea4
    CALL FUN_005c543c                   ; 005c5ea5
        ;   XREF to: 005c543c (UNCONDITIONAL_CALL)  ; undefined FUN_005c543c()
    ADD ESP,0x8                         ; 005c5eaa
    TEST EDI,EDI                        ; 005c5ead
        ;   Label: LAB_005c5ead
    JLE 0x005c5f70                      ; 005c5eaf
        ;   XREF to: 005c5f70 (CONDITIONAL_JUMP)  ; LAB_005c5f70
    ADD EDI,dword ptr [ESP + 0x5c]      ; 005c5eb5
    TEST byte ptr [EBP + 0x10],0x1      ; 005c5eb9
    JZ 0x005c5f70                       ; 005c5ebd
        ;   XREF to: 005c5f70 (CONDITIONAL_JUMP)  ; LAB_005c5f70
    MOV byte ptr [ESI],0x0              ; 005c5ec3
    TEST byte ptr [EBP + 0x10],0x10     ; 005c5ec6
    JZ 0x005c5ed8                       ; 005c5eca
        ;   XREF to: 005c5ed8 (CONDITIONAL_JUMP)  ; LAB_005c5ed8
    CMP byte ptr [ESP],0x2d             ; 005c5ecc
    JNZ 0x005c5eeb                      ; 005c5ed0
        ;   XREF to: 005c5eeb (CONDITIONAL_JUMP)  ; LAB_005c5eeb
    NEG dword ptr [ESP + 0x64]          ; 005c5ed2
    JMP 0x005c5eeb                      ; 005c5ed6
        ;   XREF to: 005c5eeb (UNCONDITIONAL_JUMP)  ; LAB_005c5eeb
    LEA EAX,[ESP + 0x50]                ; 005c5ed8
        ;   Label: LAB_005c5ed8
    PUSH EAX                            ; 005c5edc
    LEA EAX,[ESP + 0x4]                 ; 005c5edd
    PUSH EAX                            ; 005c5ee1
    CALL dword ptr [0x006269e0]         ; 005c5ee2 | PTR_FUN_006269e0
    ADD ESP,0x8                         ; 005c5ee8
    MOV CH,byte ptr [EBP + 0x10]        ; 005c5eeb
        ;   Label: LAB_005c5eeb
    TEST CH,0x4                         ; 005c5eee
    JZ 0x005c5f06                       ; 005c5ef1
        ;   XREF to: 005c5f06 (CONDITIONAL_JUMP)  ; LAB_005c5f06
    MOV EAX,dword ptr [ESP + 0x88]      ; 005c5ef3
    MOV EBX,dword ptr [EAX]             ; 005c5efa
    ADD EBX,0x8                         ; 005c5efc
    MOV dword ptr [EAX],EBX             ; 005c5eff
    LES EBX,[EBX + -0x8]                ; 005c5f01
    JMP 0x005c5f37                      ; 005c5f04
        ;   XREF to: 005c5f37 (UNCONDITIONAL_JUMP)  ; LAB_005c5f37
    TEST CH,0x8                         ; 005c5f06
        ;   Label: LAB_005c5f06
    JZ 0x005c5f22                       ; 005c5f09
        ;   XREF to: 005c5f22 (CONDITIONAL_JUMP)  ; LAB_005c5f22
    MOV EAX,dword ptr [ESP + 0x88]      ; 005c5f0b
    MOV EDX,dword ptr [EAX]             ; 005c5f12
    ADD EDX,0x4                         ; 005c5f14
    MOV dword ptr [EAX],EDX             ; 005c5f17
    MOV AX,DS                           ; 005c5f19
    MOV ES,AX                           ; 005c5f1b
    MOV EBX,dword ptr [EDX + -0x4]      ; 005c5f1d
    JMP 0x005c5f37                      ; 005c5f20
        ;   XREF to: 005c5f37 (UNCONDITIONAL_JUMP)  ; LAB_005c5f37
    MOV EAX,dword ptr [ESP + 0x88]      ; 005c5f22
        ;   Label: LAB_005c5f22
    MOV ESI,dword ptr [EAX]             ; 005c5f29
    ADD ESI,0x4                         ; 005c5f2b
    MOV dword ptr [EAX],ESI             ; 005c5f2e
    MOV AX,DS                           ; 005c5f30
    MOV ES,AX                           ; 005c5f32
    MOV EBX,dword ptr [ESI + -0x4]      ; 005c5f34
    MOV AH,byte ptr [EBP + 0x10]        ; 005c5f37
        ;   Label: LAB_005c5f37
    TEST AH,0x10                        ; 005c5f3a
    JZ 0x005c5f45                       ; 005c5f3d
        ;   XREF to: 005c5f45 (CONDITIONAL_JUMP)  ; LAB_005c5f45
    MOV EAX,dword ptr [ESP + 0x64]      ; 005c5f3f
    JMP 0x005c5f6d                      ; 005c5f43
        ;   XREF to: 005c5f6d (UNCONDITIONAL_JUMP)  ; LAB_005c5f6d
    TEST AH,0x20                        ; 005c5f45
        ;   Label: LAB_005c5f45
    JNZ 0x005c5f4f                      ; 005c5f48
        ;   XREF to: 005c5f4f (CONDITIONAL_JUMP)  ; LAB_005c5f4f
    TEST AH,0x40                        ; 005c5f4a
    JZ 0x005c5f60                       ; 005c5f4d
        ;   XREF to: 005c5f60 (CONDITIONAL_JUMP)  ; LAB_005c5f60
    MOV EAX,dword ptr [ESP + 0x50]      ; 005c5f4f
        ;   Label: LAB_005c5f4f
    MOV dword ptr ES:[EBX],EAX          ; 005c5f53
    MOV EAX,dword ptr [ESP + 0x54]      ; 005c5f56
    MOV dword ptr ES:[EBX + 0x4],EAX    ; 005c5f5a
    JMP 0x005c5f70                      ; 005c5f5e
        ;   XREF to: 005c5f70 (UNCONDITIONAL_JUMP)  ; LAB_005c5f70
    MOV EAX,dword ptr [ESP + 0x50]      ; 005c5f60
        ;   Label: LAB_005c5f60
    MOV EDX,dword ptr [ESP + 0x54]      ; 005c5f64
    CALL FUN_005cb79c                   ; 005c5f68
        ;   XREF to: 005cb79c (UNCONDITIONAL_CALL)  ; undefined FUN_005cb79c()
    MOV dword ptr ES:[EBX],EAX          ; 005c5f6d
        ;   Label: LAB_005c5f6d
    MOV EAX,EDI                         ; 005c5f70
        ;   Label: LAB_005c5f70
    ADD ESP,0x6c                        ; 005c5f72
    POP EBP                             ; 005c5f75
    POP ES                              ; 005c5f76
    POP EDI                             ; 005c5f77
    POP ESI                             ; 005c5f78
    POP EBX                             ; 005c5f79
    RET                                 ; 005c5f7a

