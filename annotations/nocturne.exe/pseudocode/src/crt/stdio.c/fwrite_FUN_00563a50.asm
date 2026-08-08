; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIZE_T __cdecl crt_stdio_c_fwrite_FUN_00563a50(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; SIZE_T           Stack[0x8]:4   size
; SIZE_T           Stack[0xc]:4   count
; _FILE *          Stack[0x10]:4   file
;
; XREF[10]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0 at 004f4c0d
;   cockpit_pkbitmap.cpp_FUN_004f4f10 at 004f4f47
;   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00448f40 at 00448f86
;   core_dtri.cpp_FUN_0046c410 at 0046c420
;   core_setdir.cpp_CDemonSet_FUN_00513670 at 005136c7
;   engine_2d.c_FUN_00403130 at 0040315b
;   engine_2d.c_FUN_00403500 at 0040352b
;   engine_2d.c_loadOrBuildColorMap_FUN_00403630 at 00403718
;   engine_pcx.c_FUN_004f2990 at 004f2aa4
;   engine_pod.cpp_FUN_004f8eb0 at 004f9081
;
; Referenced Globals:
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_stdio.c_fputc_FUN_00566cc0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_thread.c_GetTLS_FUN_005671dc
;   crt_unknown.c_FUN_00568890
;   crt_unknown.c_FUN_00568ed0
;   crt_unknown.c_FUN_00569fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563a50
        ;   Label: crt_stdio.c_fwrite_FUN_00563a50
    PUSH ESI                            ; 00563a51
    PUSH EDI                            ; 00563a52
    PUSH EBP                            ; 00563a53
    SUB ESP,0x10                        ; 00563a54
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00563a57
    MOV EBX,dword ptr [ESP + 0x30]      ; 00563a5b
    MOV EDX,dword ptr [EBX + 0x10]      ; 00563a5f
    PUSH EDX                            ; 00563a62
    CALL dword ptr [0x005c1ac0]         ; 00563a63 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV AH,byte ptr [EBX + 0xc]         ; 00563a69
    ADD ESP,0x4                         ; 00563a6c
    TEST AH,0x2                         ; 00563a6f
    JNZ 0x00563a9b                      ; 00563a72
        ;   XREF to: 00563a9b (CONDITIONAL_JUMP)  ; LAB_00563a9b
    PUSH 0x4                            ; 00563a74
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00563a76
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00563a7b
    MOV AH,byte ptr [EBX + 0xc]         ; 00563a7e
    MOV EDX,dword ptr [EBX + 0x10]      ; 00563a81
    OR AH,0x20                          ; 00563a84
    PUSH EDX                            ; 00563a87
    MOV byte ptr [EBX + 0xc],AH         ; 00563a88
    CALL dword ptr [0x005c1ac4]         ; 00563a8b | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00563a91
    XOR EAX,EAX                         ; 00563a94
    JMP 0x00563c81                      ; 00563a96
        ;   XREF to: 00563c81 (UNCONDITIONAL_JUMP)  ; LAB_00563c81
    IMUL EDI,dword ptr [ESP + 0x28]     ; 00563a9b
        ;   Label: LAB_00563a9b
    TEST EDI,EDI                        ; 00563aa0
    JNZ 0x00563abb                      ; 00563aa2
        ;   XREF to: 00563abb (CONDITIONAL_JUMP)  ; LAB_00563abb
    MOV EAX,dword ptr [EBX + 0x10]      ; 00563aa4
    PUSH EAX                            ; 00563aa7
    CALL dword ptr [0x005c1ac4]         ; 00563aa8 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00563aae
    MOV EAX,EDI                         ; 00563ab1
    ADD ESP,0x10                        ; 00563ab3
    POP EBP                             ; 00563ab6
    POP EDI                             ; 00563ab7
    POP ESI                             ; 00563ab8
    POP EBX                             ; 00563ab9
    RET                                 ; 00563aba
    MOV EAX,dword ptr [EBX + 0x8]       ; 00563abb
        ;   Label: LAB_00563abb
    CMP dword ptr [EAX + 0x8],0x0       ; 00563abe
    JNZ 0x00563acd                      ; 00563ac2
        ;   XREF to: 00563acd (CONDITIONAL_JUMP)  ; LAB_00563acd
    PUSH EBX                            ; 00563ac4
    CALL crt_unknown.c_FUN_00568ed0     ; 00563ac5
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568ed0()
    ADD ESP,0x4                         ; 00563aca
    MOV EAX,dword ptr [EBX + 0xc]       ; 00563acd
        ;   Label: LAB_00563acd
    MOV DL,byte ptr [EBX + 0xc]         ; 00563ad0
    XOR EBP,EBP                         ; 00563ad3
    AND EAX,0x30                        ; 00563ad5
    AND DL,0xcf                         ; 00563ad8
    MOV dword ptr [ESP + 0x8],EBP       ; 00563adb
    MOV dword ptr [ESP],EAX             ; 00563adf
    MOV byte ptr [EBX + 0xc],DL         ; 00563ae2
    TEST DL,0x40                        ; 00563ae5
    JZ 0x00563bd3                       ; 00563ae8
        ;   XREF to: 00563bd3 (CONDITIONAL_JUMP)  ; LAB_00563bd3
    MOV dword ptr [ESP + 0xc],EDI       ; 00563aee
    CMP dword ptr [EBX + 0x4],0x0       ; 00563af2
        ;   Label: LAB_00563af2
    JNZ 0x00563b42                      ; 00563af6
        ;   XREF to: 00563b42 (CONDITIONAL_JUMP)  ; LAB_00563b42
    MOV EAX,dword ptr [ESP + 0xc]       ; 00563af8
    CMP EAX,dword ptr [EBX + 0x14]      ; 00563afc
    JC 0x00563b42                       ; 00563aff
        ;   XREF to: 00563b42 (CONDITIONAL_JUMP)  ; LAB_00563b42
    XOR AL,AL                           ; 00563b01
    AND AH,0xfe                         ; 00563b03
    TEST EAX,EAX                        ; 00563b06
    JNZ 0x00563b0e                      ; 00563b08
        ;   XREF to: 00563b0e (CONDITIONAL_JUMP)  ; LAB_00563b0e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00563b0a
    PUSH EAX                            ; 00563b0e
        ;   Label: LAB_00563b0e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00563b0f
    PUSH ESI                            ; 00563b13
    MOV EDI,dword ptr [EBX + 0x10]      ; 00563b14
    PUSH EDI                            ; 00563b17
    CALL crt_unknown.c_FUN_00569fb0     ; 00563b18
        ;   XREF to: 00569fb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00569fb0()
    ADD ESP,0xc                         ; 00563b1d
    MOV EBP,EAX                         ; 00563b20
    CMP EAX,-0x1                        ; 00563b22
    JZ 0x00563b3c                       ; 00563b25
        ;   XREF to: 00563b3c (CONDITIONAL_JUMP)  ; LAB_00563b3c
    TEST EAX,EAX                        ; 00563b27
    JNZ 0x00563ba0                      ; 00563b29
        ;   XREF to: 00563ba0 (CONDITIONAL_JUMP)  ; LAB_00563ba0
    CALL dword ptr [0x005c1abc]         ; 00563b2f | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    MOV dword ptr [EAX + 0x4],0xc       ; 00563b35
    OR byte ptr [EBX + 0xc],0x20        ; 00563b3c
        ;   Label: LAB_00563b3c
    JMP 0x00563ba0                      ; 00563b40
        ;   XREF to: 00563ba0 (UNCONDITIONAL_JUMP)  ; LAB_00563ba0
    MOV EBP,dword ptr [EBX + 0x14]      ; 00563b42
        ;   Label: LAB_00563b42
    MOV ESI,dword ptr [EBX + 0x4]       ; 00563b45
    MOV EDI,dword ptr [ESP + 0xc]       ; 00563b48
    SUB EBP,ESI                         ; 00563b4c
    CMP EBP,EDI                         ; 00563b4e
    JBE 0x00563b54                      ; 00563b50
        ;   XREF to: 00563b54 (CONDITIONAL_JUMP)  ; LAB_00563b54
    MOV EBP,EDI                         ; 00563b52
    MOV ESI,dword ptr [ESP + 0x24]      ; 00563b54
        ;   Label: LAB_00563b54
    MOV ECX,EBP                         ; 00563b58
    MOV EDI,dword ptr [EBX]             ; 00563b5a
    PUSH ES                             ; 00563b5c
    MOV AX,DS                           ; 00563b5d
    MOV ES,AX                           ; 00563b5f
    PUSH EDI                            ; 00563b61
    MOV EAX,ECX                         ; 00563b62
    SHR ECX,0x2                         ; 00563b64
    MOVSD.REP ES:EDI,ESI                ; 00563b67
    MOV CL,AL                           ; 00563b69
    AND CL,0x3                          ; 00563b6b
    MOVSB.REP ES:EDI,ESI                ; 00563b6e
    POP EDI                             ; 00563b70
    POP ES                              ; 00563b71
    MOV EAX,dword ptr [EBX]             ; 00563b72
    MOV EDX,dword ptr [EBX + 0x4]       ; 00563b74
    MOV CH,byte ptr [EBX + 0xd]         ; 00563b77
    ADD EAX,EBP                         ; 00563b7a
    ADD EDX,EBP                         ; 00563b7c
    MOV dword ptr [EBX],EAX             ; 00563b7e
    OR CH,0x10                          ; 00563b80
    MOV dword ptr [EBX + 0x4],EDX       ; 00563b83
    MOV byte ptr [EBX + 0xd],CH         ; 00563b86
    MOV EAX,dword ptr [EBX + 0x4]       ; 00563b89
    CMP EAX,dword ptr [EBX + 0x14]      ; 00563b8c
    JZ 0x00563b97                       ; 00563b8f
        ;   XREF to: 00563b97 (CONDITIONAL_JUMP)  ; LAB_00563b97
    TEST byte ptr [EBX + 0xd],0x4       ; 00563b91
    JZ 0x00563ba0                       ; 00563b95
        ;   XREF to: 00563ba0 (CONDITIONAL_JUMP)  ; LAB_00563ba0
    PUSH EBX                            ; 00563b97
        ;   Label: LAB_00563b97
    CALL crt_unknown.c_FUN_00568890     ; 00563b98
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 00563b9d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00563ba0
        ;   Label: LAB_00563ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563ba4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00563ba8
    ADD EAX,EBP                         ; 00563bac
    ADD EDX,EBP                         ; 00563bae
    MOV dword ptr [ESP + 0x24],EAX      ; 00563bb0
    MOV dword ptr [ESP + 0x8],EDX       ; 00563bb4
    SUB ECX,EBP                         ; 00563bb8
    MOV dword ptr [ESP + 0xc],ECX       ; 00563bba
    JZ 0x00563c53                       ; 00563bbe
        ;   XREF to: 00563c53 (CONDITIONAL_JUMP)  ; LAB_00563c53
    TEST byte ptr [EBX + 0xc],0x20      ; 00563bc4
    JZ 0x00563af2                       ; 00563bc8
        ;   XREF to: 00563af2 (CONDITIONAL_JUMP)  ; LAB_00563af2
    JMP 0x00563c53                      ; 00563bce
        ;   XREF to: 00563c53 (UNCONDITIONAL_JUMP)  ; LAB_00563c53
    MOV CL,byte ptr [EBX + 0xd]         ; 00563bd3
        ;   Label: LAB_00563bd3
    XOR ESI,ESI                         ; 00563bd6
    TEST CL,0x4                         ; 00563bd8
    JZ 0x00563bf1                       ; 00563bdb
        ;   XREF to: 00563bf1 (CONDITIONAL_JUMP)  ; LAB_00563bf1
    MOV CH,CL                           ; 00563bdd
    AND CH,0xfa                         ; 00563bdf
    MOV AL,CH                           ; 00563be2
    MOV byte ptr [EBX + 0xd],CH         ; 00563be4
    OR AL,0x1                           ; 00563be7
    MOV ESI,0x1                         ; 00563be9
    MOV byte ptr [EBX + 0xd],AL         ; 00563bee
    MOV EAX,dword ptr [EBX + 0x8]       ; 00563bf1
        ;   Label: LAB_00563bf1
    MOV EBP,dword ptr [EAX + 0xc]       ; 00563bf4
    MOV dword ptr [ESP + 0x4],EBP       ; 00563bf7
    MOV dword ptr [EAX + 0xc],0x1       ; 00563bfb
    MOV EBP,dword ptr [ESP + 0x24]      ; 00563c02
    XOR EAX,EAX                         ; 00563c06
        ;   Label: LAB_00563c06
    PUSH EBX                            ; 00563c08
    MOV AL,byte ptr [EBP]               ; 00563c09
    PUSH EAX                            ; 00563c0c
    INC EBP                             ; 00563c0d
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 00563c0e
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
    MOV DL,byte ptr [EBX + 0xc]         ; 00563c13
    ADD ESP,0x8                         ; 00563c16
    TEST DL,0x30                        ; 00563c19
    JNZ 0x00563c2b                      ; 00563c1c
        ;   XREF to: 00563c2b (CONDITIONAL_JUMP)  ; LAB_00563c2b
    MOV ECX,dword ptr [ESP + 0x8]       ; 00563c1e
    INC ECX                             ; 00563c22
    MOV dword ptr [ESP + 0x8],ECX       ; 00563c23
    CMP EDI,ECX                         ; 00563c27
    JNZ 0x00563c06                      ; 00563c29
        ;   XREF to: 00563c06 (CONDITIONAL_JUMP)  ; LAB_00563c06
    MOV EAX,dword ptr [EBX + 0x8]       ; 00563c2b
        ;   Label: LAB_00563c2b
    MOV EDI,dword ptr [ESP + 0x4]       ; 00563c2e
    MOV dword ptr [EAX + 0xc],EDI       ; 00563c32
    TEST ESI,ESI                        ; 00563c35
    JZ 0x00563c53                       ; 00563c37
        ;   XREF to: 00563c53 (CONDITIONAL_JUMP)  ; LAB_00563c53
    MOV DH,byte ptr [EBX + 0xd]         ; 00563c39
    AND DH,0xfa                         ; 00563c3c
    MOV CL,DH                           ; 00563c3f
    MOV byte ptr [EBX + 0xd],DH         ; 00563c41
    OR CL,0x4                           ; 00563c44
    PUSH EBX                            ; 00563c47
    MOV byte ptr [EBX + 0xd],CL         ; 00563c48
    CALL crt_unknown.c_FUN_00568890     ; 00563c4b
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 00563c50
    TEST byte ptr [EBX + 0xc],0x20      ; 00563c53
        ;   Label: LAB_00563c53
    JZ 0x00563c5f                       ; 00563c57
        ;   XREF to: 00563c5f (CONDITIONAL_JUMP)  ; LAB_00563c5f
    XOR EDI,EDI                         ; 00563c59
    MOV dword ptr [ESP + 0x8],EDI       ; 00563c5b
    MOV EAX,dword ptr [ESP]             ; 00563c5f
        ;   Label: LAB_00563c5f
    MOV EBP,dword ptr [EBX + 0xc]       ; 00563c62
    OR EBP,EAX                          ; 00563c65
    MOV EAX,dword ptr [EBX + 0x10]      ; 00563c67
    PUSH EAX                            ; 00563c6a
    MOV dword ptr [EBX + 0xc],EBP       ; 00563c6b
    CALL dword ptr [0x005c1ac4]         ; 00563c6e | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00563c74
    XOR EDX,EDX                         ; 00563c77
    MOV EAX,dword ptr [ESP + 0x8]       ; 00563c79
    DIV dword ptr [ESP + 0x28]          ; 00563c7d
    ADD ESP,0x10                        ; 00563c81
        ;   Label: LAB_00563c81
    POP EBP                             ; 00563c84
    POP EDI                             ; 00563c85
    POP ESI                             ; 00563c86
    POP EBX                             ; 00563c87
    RET                                 ; 00563c88

