; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIZE_T __cdecl crt_stdio_c_fread_FUN_005c0b10(void *buffer,SIZE_T size,SIZE_T count,_FILE *file)
;
; Parameters:
; void *           Stack[0x4]:4   buffer
; SIZE_T           Stack[0x8]:4   size
; SIZE_T           Stack[0xc]:4   count
; _FILE *          Stack[0x10]:4   file
;
; XREF[27]:
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438c40
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 at 005382a2
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0 at 005385e9
;   cockpit_pkbmpset.cpp_FUN_00538b30 at 00538c8e
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538f03
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004500af
;   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00455e60 at 00455e78
;   core_dcube.cpp_CDemonCube_load_FUN_00457e50 at 00457e65
;   core_dfilter.cpp_CDemonFilter_load_FUN_0045da30 at 0045db53
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0 at 0045de8f
;   ... and 17 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c0630
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c64a0
;   crt_unknown.c_FUN_005c65d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0b10
        ;   Label: crt_stdio.c_fread_FUN_005c0b10
    PUSH ESI                            ; 005c0b11
    PUSH EDI                            ; 005c0b12
    PUSH EBP                            ; 005c0b13
    SUB ESP,0x4                         ; 005c0b14
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c0b17
    MOV EBX,dword ptr [ESP + 0x24]      ; 005c0b1b
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c0b1f
    PUSH EDX                            ; 005c0b22
    CALL dword ptr [0x00626600]         ; 005c0b23 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV AH,byte ptr [EBX + 0xc]         ; 005c0b29
    ADD ESP,0x4                         ; 005c0b2c
    TEST AH,0x1                         ; 005c0b2f
    JNZ 0x005c0b56                      ; 005c0b32
        ;   XREF to: 005c0b56 (CONDITIONAL_JUMP)  ; LAB_005c0b56
    PUSH 0x4                            ; 005c0b34
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c0b36
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    OR byte ptr [EBX + 0xc],0x20        ; 005c0b3b
    ADD ESP,0x4                         ; 005c0b3f
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c0b42
    PUSH EDX                            ; 005c0b45
    CALL dword ptr [0x00626604]         ; 005c0b46 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c0b4c
    XOR EAX,EAX                         ; 005c0b4f
    JMP 0x005c0cff                      ; 005c0b51
        ;   XREF to: 005c0cff (UNCONDITIONAL_JUMP)  ; LAB_005c0cff
    IMUL ESI,dword ptr [ESP + 0x1c]     ; 005c0b56
        ;   Label: LAB_005c0b56
    TEST ESI,ESI                        ; 005c0b5b
    JNZ 0x005c0b76                      ; 005c0b5d
        ;   XREF to: 005c0b76 (CONDITIONAL_JUMP)  ; LAB_005c0b76
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c0b5f
    PUSH EAX                            ; 005c0b62
    CALL dword ptr [0x00626604]         ; 005c0b63 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c0b69
    MOV EAX,ESI                         ; 005c0b6c
    ADD ESP,0x4                         ; 005c0b6e
    POP EBP                             ; 005c0b71
    POP EDI                             ; 005c0b72
    POP ESI                             ; 005c0b73
    POP EBX                             ; 005c0b74
    RET                                 ; 005c0b75
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c0b76
        ;   Label: LAB_005c0b76
    CMP dword ptr [EAX + 0x8],0x0       ; 005c0b79
    JNZ 0x005c0b88                      ; 005c0b7d
        ;   XREF to: 005c0b88 (CONDITIONAL_JUMP)  ; LAB_005c0b88
    PUSH EBX                            ; 005c0b7f
    CALL crt_unknown.c_FUN_005c64a0     ; 005c0b80
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c64a0()
    ADD ESP,0x4                         ; 005c0b85
    XOR EBP,EBP                         ; 005c0b88
        ;   Label: LAB_005c0b88
    MOV DL,byte ptr [EBX + 0xc]         ; 005c0b8a
    MOV dword ptr [ESP],EBP             ; 005c0b8d
    TEST DL,0x40                        ; 005c0b90
    JZ 0x005c0c78                       ; 005c0b93
        ;   XREF to: 005c0c78 (CONDITIONAL_JUMP)  ; LAB_005c0c78
    MOV EBP,ESI                         ; 005c0b99
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c0b9b
        ;   Label: LAB_005c0b9b
    TEST ECX,ECX                        ; 005c0b9e
    JZ 0x005c0be6                       ; 005c0ba0
        ;   XREF to: 005c0be6 (CONDITIONAL_JUMP)  ; LAB_005c0be6
    MOV EDX,ECX                         ; 005c0ba2
    CMP ECX,EBP                         ; 005c0ba4
    JBE 0x005c0baa                      ; 005c0ba6
        ;   XREF to: 005c0baa (CONDITIONAL_JUMP)  ; LAB_005c0baa
    MOV EDX,EBP                         ; 005c0ba8
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c0baa
        ;   Label: LAB_005c0baa
    MOV ECX,EDX                         ; 005c0bae
    MOV ESI,dword ptr [EBX]             ; 005c0bb0
    PUSH ES                             ; 005c0bb2
    MOV AX,DS                           ; 005c0bb3
    MOV ES,AX                           ; 005c0bb5
    PUSH EDI                            ; 005c0bb7
    MOV EAX,ECX                         ; 005c0bb8
    SHR ECX,0x2                         ; 005c0bba
    MOVSD.REP ES:EDI,ESI                ; 005c0bbd
    MOV CL,AL                           ; 005c0bbf
    AND CL,0x3                          ; 005c0bc1
    MOVSB.REP ES:EDI,ESI                ; 005c0bc4
    POP EDI                             ; 005c0bc6
    POP ES                              ; 005c0bc7
    SUB EBP,EDX                         ; 005c0bc8
    MOV ECX,dword ptr [ESP]             ; 005c0bca
    MOV ESI,dword ptr [EBX]             ; 005c0bcd
    ADD EDI,EDX                         ; 005c0bcf
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c0bd1
    MOV dword ptr [ESP + 0x18],EDI      ; 005c0bd4
    ADD ESI,EDX                         ; 005c0bd8
    SUB EAX,EDX                         ; 005c0bda
    ADD ECX,EDX                         ; 005c0bdc
    MOV dword ptr [EBX],ESI             ; 005c0bde
    MOV dword ptr [ESP],ECX             ; 005c0be0
    MOV dword ptr [EBX + 0x4],EAX       ; 005c0be3
    TEST EBP,EBP                        ; 005c0be6
        ;   Label: LAB_005c0be6
    JZ 0x005c0ce9                       ; 005c0be8
        ;   XREF to: 005c0ce9 (CONDITIONAL_JUMP)  ; LAB_005c0ce9
    CMP EBP,dword ptr [EBX + 0x14]      ; 005c0bee
    JNC 0x005c0bf9                      ; 005c0bf1
        ;   XREF to: 005c0bf9 (CONDITIONAL_JUMP)  ; LAB_005c0bf9
    TEST byte ptr [EBX + 0xd],0x4       ; 005c0bf3
    JZ 0x005c0c62                       ; 005c0bf7
        ;   XREF to: 005c0c62 (CONDITIONAL_JUMP)  ; LAB_005c0c62
    MOV EDX,dword ptr [EBX + 0x8]       ; 005c0bf9
        ;   Label: LAB_005c0bf9
    MOV EDX,dword ptr [EDX + 0x8]       ; 005c0bfc
    MOV dword ptr [EBX],EDX             ; 005c0bff
    MOV EAX,EBP                         ; 005c0c01
    MOV DL,byte ptr [EBX + 0xd]         ; 005c0c03
    MOV dword ptr [EBX + 0x4],0x0       ; 005c0c06
    TEST DL,0x4                         ; 005c0c0d
    JNZ 0x005c0c1f                      ; 005c0c10
        ;   XREF to: 005c0c1f (CONDITIONAL_JUMP)  ; LAB_005c0c1f
    CMP EBP,0x200                       ; 005c0c12
    JBE 0x005c0c1f                      ; 005c0c18
        ;   XREF to: 005c0c1f (CONDITIONAL_JUMP)  ; LAB_005c0c1f
    XOR AL,AL                           ; 005c0c1a
    AND AH,0xfe                         ; 005c0c1c
    PUSH EAX                            ; 005c0c1f
        ;   Label: LAB_005c0c1f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c0c20
    PUSH EDI                            ; 005c0c24
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c0c25
    PUSH EAX                            ; 005c0c28
    CALL crt_unknown.c_FUN_005c65d0     ; 005c0c29
        ;   XREF to: 005c65d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c65d0()
    ADD ESP,0xc                         ; 005c0c2e
    CMP EAX,-0x1                        ; 005c0c31
    JNZ 0x005c0c3f                      ; 005c0c34
        ;   XREF to: 005c0c3f (CONDITIONAL_JUMP)  ; LAB_005c0c3f
    OR byte ptr [EBX + 0xc],0x20        ; 005c0c36
    JMP 0x005c0ce9                      ; 005c0c3a
        ;   XREF to: 005c0ce9 (UNCONDITIONAL_JUMP)  ; LAB_005c0ce9
    TEST EAX,EAX                        ; 005c0c3f
        ;   Label: LAB_005c0c3f
    JNZ 0x005c0c4c                      ; 005c0c41
        ;   XREF to: 005c0c4c (CONDITIONAL_JUMP)  ; LAB_005c0c4c
    OR byte ptr [EBX + 0xc],0x10        ; 005c0c43
    JMP 0x005c0ce9                      ; 005c0c47
        ;   XREF to: 005c0ce9 (UNCONDITIONAL_JUMP)  ; LAB_005c0ce9
    MOV ECX,dword ptr [ESP]             ; 005c0c4c
        ;   Label: LAB_005c0c4c
    LEA EDX,[EDI + EAX*0x1]             ; 005c0c4f
    SUB EBP,EAX                         ; 005c0c52
    ADD ECX,EAX                         ; 005c0c54
    MOV dword ptr [ESP + 0x18],EDX      ; 005c0c56
    MOV dword ptr [ESP],ECX             ; 005c0c5a
    JMP 0x005c0b9b                      ; 005c0c5d
        ;   XREF to: 005c0b9b (UNCONDITIONAL_JUMP)  ; LAB_005c0b9b
    PUSH EBX                            ; 005c0c62
        ;   Label: LAB_005c0c62
    CALL crt_unknown.c_FUN_005c0630     ; 005c0c63
        ;   XREF to: 005c0630 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0630()
    ADD ESP,0x4                         ; 005c0c68
    TEST EAX,EAX                        ; 005c0c6b
    JZ 0x005c0ce9                       ; 005c0c6d
        ;   XREF to: 005c0ce9 (CONDITIONAL_JUMP)  ; LAB_005c0ce9
    JMP 0x005c0b9b                      ; 005c0c73
        ;   XREF to: 005c0b9b (UNCONDITIONAL_JUMP)  ; LAB_005c0b9b
    MOV EBP,dword ptr [ESP + 0x18]      ; 005c0c78
        ;   Label: LAB_005c0c78
    ADD ESI,EBP                         ; 005c0c7c
    XOR EDI,EDI                         ; 005c0c7e
    CMP EDI,dword ptr [EBX + 0x4]       ; 005c0c80
        ;   Label: LAB_005c0c80
    JNZ 0x005c0c92                      ; 005c0c83
        ;   XREF to: 005c0c92 (CONDITIONAL_JUMP)  ; LAB_005c0c92
    PUSH EBX                            ; 005c0c85
    CALL crt_unknown.c_FUN_005c0630     ; 005c0c86
        ;   XREF to: 005c0630 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0630()
    ADD ESP,0x4                         ; 005c0c8b
    TEST EAX,EAX                        ; 005c0c8e
    JZ 0x005c0ce9                       ; 005c0c90
        ;   XREF to: 005c0ce9 (CONDITIONAL_JUMP)  ; LAB_005c0ce9
    MOV EDX,dword ptr [EBX + 0x4]       ; 005c0c92
        ;   Label: LAB_005c0c92
    DEC EDX                             ; 005c0c95
    MOV EAX,dword ptr [EBX]             ; 005c0c96
    MOV dword ptr [EBX + 0x4],EDX       ; 005c0c98
    LEA EDX,[EAX + 0x1]                 ; 005c0c9b
    MOV dword ptr [EBX],EDX             ; 005c0c9e
    MOV AL,byte ptr [EAX]               ; 005c0ca0
    AND EAX,0xff                        ; 005c0ca2
    CMP EAX,0xd                         ; 005c0ca7
    JNZ 0x005c0ccf                      ; 005c0caa
        ;   XREF to: 005c0ccf (CONDITIONAL_JUMP)  ; LAB_005c0ccf
    CMP EDI,dword ptr [EBX + 0x4]       ; 005c0cac
    JNZ 0x005c0cbe                      ; 005c0caf
        ;   XREF to: 005c0cbe (CONDITIONAL_JUMP)  ; LAB_005c0cbe
    PUSH EBX                            ; 005c0cb1
    CALL crt_unknown.c_FUN_005c0630     ; 005c0cb2
        ;   XREF to: 005c0630 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0630()
    ADD ESP,0x4                         ; 005c0cb7
    TEST EAX,EAX                        ; 005c0cba
    JZ 0x005c0ce9                       ; 005c0cbc
        ;   XREF to: 005c0ce9 (CONDITIONAL_JUMP)  ; LAB_005c0ce9
    DEC dword ptr [EBX + 0x4]           ; 005c0cbe
        ;   Label: LAB_005c0cbe
    MOV EAX,dword ptr [EBX]             ; 005c0cc1
    LEA EDX,[EAX + 0x1]                 ; 005c0cc3
    MOV dword ptr [EBX],EDX             ; 005c0cc6
    MOV AL,byte ptr [EAX]               ; 005c0cc8
    AND EAX,0xff                        ; 005c0cca
    CMP EAX,0x1a                        ; 005c0ccf
        ;   Label: LAB_005c0ccf
    JNZ 0x005c0cda                      ; 005c0cd2
        ;   XREF to: 005c0cda (CONDITIONAL_JUMP)  ; LAB_005c0cda
    OR byte ptr [EBX + 0xc],0x10        ; 005c0cd4
    JMP 0x005c0ce9                      ; 005c0cd8
        ;   XREF to: 005c0ce9 (UNCONDITIONAL_JUMP)  ; LAB_005c0ce9
    MOV EDX,dword ptr [ESP]             ; 005c0cda
        ;   Label: LAB_005c0cda
    INC EBP                             ; 005c0cdd
    INC EDX                             ; 005c0cde
    MOV byte ptr [EBP + -0x1],AL        ; 005c0cdf
    MOV dword ptr [ESP],EDX             ; 005c0ce2
    CMP EBP,ESI                         ; 005c0ce5
    JNZ 0x005c0c80                      ; 005c0ce7
        ;   XREF to: 005c0c80 (CONDITIONAL_JUMP)  ; LAB_005c0c80
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c0ce9
        ;   Label: LAB_005c0ce9
    PUSH ESI                            ; 005c0cec
    CALL dword ptr [0x00626604]         ; 005c0ced | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c0cf3
    XOR EDX,EDX                         ; 005c0cf6
    MOV EAX,dword ptr [ESP]             ; 005c0cf8
    DIV dword ptr [ESP + 0x1c]          ; 005c0cfb
    ADD ESP,0x4                         ; 005c0cff
        ;   Label: LAB_005c0cff
    POP EBP                             ; 005c0d02
    POP EDI                             ; 005c0d03
    POP ESI                             ; 005c0d04
    POP EBX                             ; 005c0d05
    RET                                 ; 005c0d06

