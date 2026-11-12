; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005c1a70(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; SIZE_T           Stack[0x8]:4   size
; SIZE_T           Stack[0xc]:4   count
; _FILE *          Stack[0x10]:4   file
;
; XREF[7]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_005381b0 at 0053820d
;   cockpit_pkbitmap.cpp_writePBGHeader_FUN_00538550 at 00538587
;   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455ee0 at 00455f26
;   core_setdir.cpp_FUN_0055b280 at 0055b2d7
;   engine_pcx.c_saveScreenshotGeneral_FUN_00535d80 at 00535e94
;   engine_pod.cpp_FUN_0053cc5c at 0053cdd1
;   support_trstream.cpp_COutStreamFile_write_FUN_005a18f0 at 005a1914
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_stdio.c_fputc_FUN_005c2f00
;   crt_unknown.c_FUN_005c50cc
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c64a0
;   crt_unknown.c_FUN_005c6d50
;   crt_unknown.c_FUN_005c7dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1a70
        ;   Label: crt_stdio.c_fwrite_FUN_005c1a70
    PUSH ESI                            ; 005c1a71
    PUSH EDI                            ; 005c1a72
    PUSH EBP                            ; 005c1a73
    SUB ESP,0x10                        ; 005c1a74
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005c1a77
    MOV EBX,dword ptr [ESP + 0x30]      ; 005c1a7b
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c1a7f
    PUSH EDX                            ; 005c1a82
    CALL dword ptr [0x00626600]         ; 005c1a83 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV AH,byte ptr [EBX + 0xc]         ; 005c1a89
    ADD ESP,0x4                         ; 005c1a8c
    TEST AH,0x2                         ; 005c1a8f
    JNZ 0x005c1abb                      ; 005c1a92
        ;   XREF to: 005c1abb (CONDITIONAL_JUMP)  ; LAB_005c1abb
    PUSH 0x4                            ; 005c1a94
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c1a96
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c1a9b
    MOV AH,byte ptr [EBX + 0xc]         ; 005c1a9e
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c1aa1
    OR AH,0x20                          ; 005c1aa4
    PUSH EDX                            ; 005c1aa7
    MOV byte ptr [EBX + 0xc],AH         ; 005c1aa8
    CALL dword ptr [0x00626604]         ; 005c1aab | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c1ab1
    XOR EAX,EAX                         ; 005c1ab4
    JMP 0x005c1ca1                      ; 005c1ab6
        ;   XREF to: 005c1ca1 (UNCONDITIONAL_JUMP)  ; LAB_005c1ca1
    IMUL EDI,dword ptr [ESP + 0x28]     ; 005c1abb
        ;   Label: LAB_005c1abb
    TEST EDI,EDI                        ; 005c1ac0
    JNZ 0x005c1adb                      ; 005c1ac2
        ;   XREF to: 005c1adb (CONDITIONAL_JUMP)  ; LAB_005c1adb
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c1ac4
    PUSH EAX                            ; 005c1ac7
    CALL dword ptr [0x00626604]         ; 005c1ac8 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c1ace
    MOV EAX,EDI                         ; 005c1ad1
    ADD ESP,0x10                        ; 005c1ad3
    POP EBP                             ; 005c1ad6
    POP EDI                             ; 005c1ad7
    POP ESI                             ; 005c1ad8
    POP EBX                             ; 005c1ad9
    RET                                 ; 005c1ada
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1adb
        ;   Label: LAB_005c1adb
    CMP dword ptr [EAX + 0x8],0x0       ; 005c1ade
    JNZ 0x005c1aed                      ; 005c1ae2
        ;   XREF to: 005c1aed (CONDITIONAL_JUMP)  ; LAB_005c1aed
    PUSH EBX                            ; 005c1ae4
    CALL crt_unknown.c_FUN_005c64a0     ; 005c1ae5
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c64a0()
    ADD ESP,0x4                         ; 005c1aea
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c1aed
        ;   Label: LAB_005c1aed
    MOV DL,byte ptr [EBX + 0xc]         ; 005c1af0
    XOR EBP,EBP                         ; 005c1af3
    AND EAX,0x30                        ; 005c1af5
    AND DL,0xcf                         ; 005c1af8
    MOV dword ptr [ESP + 0x8],EBP       ; 005c1afb
    MOV dword ptr [ESP],EAX             ; 005c1aff
    MOV byte ptr [EBX + 0xc],DL         ; 005c1b02
    TEST DL,0x40                        ; 005c1b05
    JZ 0x005c1bf3                       ; 005c1b08
        ;   XREF to: 005c1bf3 (CONDITIONAL_JUMP)  ; LAB_005c1bf3
    MOV dword ptr [ESP + 0xc],EDI       ; 005c1b0e
    CMP dword ptr [EBX + 0x4],0x0       ; 005c1b12
        ;   Label: LAB_005c1b12
    JNZ 0x005c1b62                      ; 005c1b16
        ;   XREF to: 005c1b62 (CONDITIONAL_JUMP)  ; LAB_005c1b62
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c1b18
    CMP EAX,dword ptr [EBX + 0x14]      ; 005c1b1c
    JC 0x005c1b62                       ; 005c1b1f
        ;   XREF to: 005c1b62 (CONDITIONAL_JUMP)  ; LAB_005c1b62
    XOR AL,AL                           ; 005c1b21
    AND AH,0xfe                         ; 005c1b23
    TEST EAX,EAX                        ; 005c1b26
    JNZ 0x005c1b2e                      ; 005c1b28
        ;   XREF to: 005c1b2e (CONDITIONAL_JUMP)  ; LAB_005c1b2e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c1b2a
    PUSH EAX                            ; 005c1b2e
        ;   Label: LAB_005c1b2e
    MOV ESI,dword ptr [ESP + 0x28]      ; 005c1b2f
    PUSH ESI                            ; 005c1b33
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c1b34
    PUSH EDI                            ; 005c1b37
    CALL crt_unknown.c_FUN_005c7dc0     ; 005c1b38
        ;   XREF to: 005c7dc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7dc0()
    ADD ESP,0xc                         ; 005c1b3d
    MOV EBP,EAX                         ; 005c1b40
    CMP EAX,-0x1                        ; 005c1b42
    JZ 0x005c1b5c                       ; 005c1b45
        ;   XREF to: 005c1b5c (CONDITIONAL_JUMP)  ; LAB_005c1b5c
    TEST EAX,EAX                        ; 005c1b47
    JNZ 0x005c1bc0                      ; 005c1b49
        ;   XREF to: 005c1bc0 (CONDITIONAL_JUMP)  ; LAB_005c1bc0
    CALL dword ptr [0x006265fc]         ; 005c1b4f | PTR_crt_unknown.c_FUN_005c50cc_006265fc
    MOV dword ptr [EAX + 0x4],0xc       ; 005c1b55
    OR byte ptr [EBX + 0xc],0x20        ; 005c1b5c
        ;   Label: LAB_005c1b5c
    JMP 0x005c1bc0                      ; 005c1b60
        ;   XREF to: 005c1bc0 (UNCONDITIONAL_JUMP)  ; LAB_005c1bc0
    MOV EBP,dword ptr [EBX + 0x14]      ; 005c1b62
        ;   Label: LAB_005c1b62
    MOV ESI,dword ptr [EBX + 0x4]       ; 005c1b65
    MOV EDI,dword ptr [ESP + 0xc]       ; 005c1b68
    SUB EBP,ESI                         ; 005c1b6c
    CMP EBP,EDI                         ; 005c1b6e
    JBE 0x005c1b74                      ; 005c1b70
        ;   XREF to: 005c1b74 (CONDITIONAL_JUMP)  ; LAB_005c1b74
    MOV EBP,EDI                         ; 005c1b72
    MOV ESI,dword ptr [ESP + 0x24]      ; 005c1b74
        ;   Label: LAB_005c1b74
    MOV ECX,EBP                         ; 005c1b78
    MOV EDI,dword ptr [EBX]             ; 005c1b7a
    PUSH ES                             ; 005c1b7c
    MOV AX,DS                           ; 005c1b7d
    MOV ES,AX                           ; 005c1b7f
    PUSH EDI                            ; 005c1b81
    MOV EAX,ECX                         ; 005c1b82
    SHR ECX,0x2                         ; 005c1b84
    MOVSD.REP ES:EDI,ESI                ; 005c1b87
    MOV CL,AL                           ; 005c1b89
    AND CL,0x3                          ; 005c1b8b
    MOVSB.REP ES:EDI,ESI                ; 005c1b8e
    POP EDI                             ; 005c1b90
    POP ES                              ; 005c1b91
    MOV EAX,dword ptr [EBX]             ; 005c1b92
    MOV EDX,dword ptr [EBX + 0x4]       ; 005c1b94
    MOV CH,byte ptr [EBX + 0xd]         ; 005c1b97
    ADD EAX,EBP                         ; 005c1b9a
    ADD EDX,EBP                         ; 005c1b9c
    MOV dword ptr [EBX],EAX             ; 005c1b9e
    OR CH,0x10                          ; 005c1ba0
    MOV dword ptr [EBX + 0x4],EDX       ; 005c1ba3
    MOV byte ptr [EBX + 0xd],CH         ; 005c1ba6
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c1ba9
    CMP EAX,dword ptr [EBX + 0x14]      ; 005c1bac
    JZ 0x005c1bb7                       ; 005c1baf
        ;   XREF to: 005c1bb7 (CONDITIONAL_JUMP)  ; LAB_005c1bb7
    TEST byte ptr [EBX + 0xd],0x4       ; 005c1bb1
    JZ 0x005c1bc0                       ; 005c1bb5
        ;   XREF to: 005c1bc0 (CONDITIONAL_JUMP)  ; LAB_005c1bc0
    PUSH EBX                            ; 005c1bb7
        ;   Label: LAB_005c1bb7
    CALL crt_unknown.c_FUN_005c6d50     ; 005c1bb8
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c1bbd
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c1bc0
        ;   Label: LAB_005c1bc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c1bc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c1bc8
    ADD EAX,EBP                         ; 005c1bcc
    ADD EDX,EBP                         ; 005c1bce
    MOV dword ptr [ESP + 0x24],EAX      ; 005c1bd0
    MOV dword ptr [ESP + 0x8],EDX       ; 005c1bd4
    SUB ECX,EBP                         ; 005c1bd8
    MOV dword ptr [ESP + 0xc],ECX       ; 005c1bda
    JZ 0x005c1c73                       ; 005c1bde
        ;   XREF to: 005c1c73 (CONDITIONAL_JUMP)  ; LAB_005c1c73
    TEST byte ptr [EBX + 0xc],0x20      ; 005c1be4
    JZ 0x005c1b12                       ; 005c1be8
        ;   XREF to: 005c1b12 (CONDITIONAL_JUMP)  ; LAB_005c1b12
    JMP 0x005c1c73                      ; 005c1bee
        ;   XREF to: 005c1c73 (UNCONDITIONAL_JUMP)  ; LAB_005c1c73
    MOV CL,byte ptr [EBX + 0xd]         ; 005c1bf3
        ;   Label: LAB_005c1bf3
    XOR ESI,ESI                         ; 005c1bf6
    TEST CL,0x4                         ; 005c1bf8
    JZ 0x005c1c11                       ; 005c1bfb
        ;   XREF to: 005c1c11 (CONDITIONAL_JUMP)  ; LAB_005c1c11
    MOV CH,CL                           ; 005c1bfd
    AND CH,0xfa                         ; 005c1bff
    MOV AL,CH                           ; 005c1c02
    MOV byte ptr [EBX + 0xd],CH         ; 005c1c04
    OR AL,0x1                           ; 005c1c07
    MOV ESI,0x1                         ; 005c1c09
    MOV byte ptr [EBX + 0xd],AL         ; 005c1c0e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1c11
        ;   Label: LAB_005c1c11
    MOV EBP,dword ptr [EAX + 0xc]       ; 005c1c14
    MOV dword ptr [ESP + 0x4],EBP       ; 005c1c17
    MOV dword ptr [EAX + 0xc],0x1       ; 005c1c1b
    MOV EBP,dword ptr [ESP + 0x24]      ; 005c1c22
    XOR EAX,EAX                         ; 005c1c26
        ;   Label: LAB_005c1c26
    PUSH EBX                            ; 005c1c28
    MOV AL,byte ptr [EBP]               ; 005c1c29
    PUSH EAX                            ; 005c1c2c
    INC EBP                             ; 005c1c2d
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 005c1c2e
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005c2f00(int character, _FILE * file)
    MOV DL,byte ptr [EBX + 0xc]         ; 005c1c33
    ADD ESP,0x8                         ; 005c1c36
    TEST DL,0x30                        ; 005c1c39
    JNZ 0x005c1c4b                      ; 005c1c3c
        ;   XREF to: 005c1c4b (CONDITIONAL_JUMP)  ; LAB_005c1c4b
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c1c3e
    INC ECX                             ; 005c1c42
    MOV dword ptr [ESP + 0x8],ECX       ; 005c1c43
    CMP EDI,ECX                         ; 005c1c47
    JNZ 0x005c1c26                      ; 005c1c49
        ;   XREF to: 005c1c26 (CONDITIONAL_JUMP)  ; LAB_005c1c26
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1c4b
        ;   Label: LAB_005c1c4b
    MOV EDI,dword ptr [ESP + 0x4]       ; 005c1c4e
    MOV dword ptr [EAX + 0xc],EDI       ; 005c1c52
    TEST ESI,ESI                        ; 005c1c55
    JZ 0x005c1c73                       ; 005c1c57
        ;   XREF to: 005c1c73 (CONDITIONAL_JUMP)  ; LAB_005c1c73
    MOV DH,byte ptr [EBX + 0xd]         ; 005c1c59
    AND DH,0xfa                         ; 005c1c5c
    MOV CL,DH                           ; 005c1c5f
    MOV byte ptr [EBX + 0xd],DH         ; 005c1c61
    OR CL,0x4                           ; 005c1c64
    PUSH EBX                            ; 005c1c67
    MOV byte ptr [EBX + 0xd],CL         ; 005c1c68
    CALL crt_unknown.c_FUN_005c6d50     ; 005c1c6b
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c1c70
    TEST byte ptr [EBX + 0xc],0x20      ; 005c1c73
        ;   Label: LAB_005c1c73
    JZ 0x005c1c7f                       ; 005c1c77
        ;   XREF to: 005c1c7f (CONDITIONAL_JUMP)  ; LAB_005c1c7f
    XOR EDI,EDI                         ; 005c1c79
    MOV dword ptr [ESP + 0x8],EDI       ; 005c1c7b
    MOV EAX,dword ptr [ESP]             ; 005c1c7f
        ;   Label: LAB_005c1c7f
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c1c82
    OR EBP,EAX                          ; 005c1c85
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c1c87
    PUSH EAX                            ; 005c1c8a
    MOV dword ptr [EBX + 0xc],EBP       ; 005c1c8b
    CALL dword ptr [0x00626604]         ; 005c1c8e | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c1c94
    XOR EDX,EDX                         ; 005c1c97
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c1c99
    DIV dword ptr [ESP + 0x28]          ; 005c1c9d
    ADD ESP,0x10                        ; 005c1ca1
        ;   Label: LAB_005c1ca1
    POP EBP                             ; 005c1ca4
    POP EDI                             ; 005c1ca5
    POP ESI                             ; 005c1ca6
    POP EBX                             ; 005c1ca7
    RET                                 ; 005c1ca8

