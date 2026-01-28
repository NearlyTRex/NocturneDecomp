; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_FormatEngine_FUN_00602950 (void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)
;
; Parameters:
; void *           Stack[0x4]:4   output_context
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
; OUTPUT_CALLBACK  Stack[0x10]:4   callback
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x73]:1  local_73
; undefined1       Stack[-0x72]:1  local_72
; undefined2       Stack[-0x6c]:2  local_6c
; undefined2       Stack[-0x6a]:2  local_6a
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   crt_stdio.c_vfprintf_FUN_00604850 at 006048e0
;   crt_stdio.c_vsprintf_FUN_005fdba8 at 005fdbbd
;
; Called Functions:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238
;   crt_stdio.c_FormatWideString_FUN_006031c0
;   crt_stdio.c_ScanFormatSpec_FUN_00602d78
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602950
        ;   Label: crt_stdio.c_FormatEngine_FUN_00602950
    PUSH ESI                            ; 00602951
    PUSH EDI                            ; 00602952
    PUSH ES                             ; 00602953
    PUSH EBP                            ; 00602954
    SUB ESP,0x74                        ; 00602955
    MOV EAX,dword ptr [ESP + 0x90]      ; 00602958
    MOV EBX,dword ptr [ESP + 0x94]      ; 0060295f
    MOV ESI,dword ptr [ESP + 0x98]      ; 00602966
    XOR DL,DL                           ; 0060296d
    MOV byte ptr [ESP + 0x70],DL        ; 0060296f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00602973
    MOV dword ptr [ESP],EDX             ; 0060297a
    XOR EDX,EDX                         ; 0060297d
    MOV ECX,0x64                        ; 0060297f
    MOV word ptr [ESP + 0x1e],DX        ; 00602984
    XOR EDX,EDX                         ; 00602989
    MOV word ptr [ESP + 0x1c],CX        ; 0060298b
    MOV dword ptr [ESP + 0x10],EDX      ; 00602990
    MOV DH,byte ptr [EAX]               ; 00602994
    MOV EBP,EAX                         ; 00602996
    TEST DH,DH                          ; 00602998
    JZ 0x00602d6a                       ; 0060299a
        ;   XREF to: 00602d6a (CONDITIONAL_JUMP)  ; LAB_00602d6a
    MOV CH,byte ptr [EBP]               ; 006029a0
        ;   Label: LAB_006029a0
    LEA EDI,[EBP + 0x1]                 ; 006029a3
    CMP CH,0x25                         ; 006029a6
    JZ 0x006029c1                       ; 006029a9
        ;   XREF to: 006029c1 (CONDITIONAL_JUMP)  ; LAB_006029c1
    XOR EAX,EAX                         ; 006029ab
    MOV AL,CH                           ; 006029ad
    PUSH EAX                            ; 006029af
    LEA EAX,[ESP + 0x4]                 ; 006029b0
    PUSH EAX                            ; 006029b4
    MOV EBP,EDI                         ; 006029b5
    CALL ESI                            ; 006029b7
    ADD ESP,0x8                         ; 006029b9
    JMP 0x00602d41                      ; 006029bc
        ;   XREF to: 00602d41 (UNCONDITIONAL_JUMP)  ; LAB_00602d41
    MOV EAX,dword ptr [EBX]             ; 006029c1
        ;   Label: LAB_006029c1
    MOV dword ptr [ESP + 0x60],EAX      ; 006029c3
    MOV EAX,ESP                         ; 006029c7
    PUSH EAX                            ; 006029c9
    LEA EAX,[ESP + 0x64]                ; 006029ca
    PUSH EAX                            ; 006029ce
    PUSH EDI                            ; 006029cf
    CALL crt_stdio.c_ScanFormatSpec_FUN_00602d78 ; 006029d0
        ;   XREF to: 00602d78 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_ScanFormatSpec_FUN_00602d78(char * format, va_list_t * args, FormatSpec * spec_info)
    ADD ESP,0xc                         ; 006029d5
    MOV EBP,EAX                         ; 006029d8
    MOV EAX,dword ptr [ESP + 0x60]      ; 006029da
    MOV dword ptr [EBX],EAX             ; 006029de
    MOV AL,byte ptr [EBP]               ; 006029e0
    INC EBP                             ; 006029e3
    MOV byte ptr [ESP + 0x15],AL        ; 006029e4
    TEST AL,AL                          ; 006029e8
    JZ 0x00602d6a                       ; 006029ea
        ;   XREF to: 00602d6a (CONDITIONAL_JUMP)  ; LAB_00602d6a
    CMP AL,0x6e                         ; 006029f0
    JNZ 0x00602b71                      ; 006029f2
        ;   XREF to: 00602b71 (CONDITIONAL_JUMP)  ; LAB_00602b71
    MOV CL,byte ptr [ESP + 0x1e]        ; 006029f8
    TEST CL,0x20                        ; 006029fc
    JZ 0x00602a65                       ; 006029ff
        ;   XREF to: 00602a65 (CONDITIONAL_JUMP)  ; LAB_00602a65
    TEST CL,0x80                        ; 00602a01
    JZ 0x00602a22                       ; 00602a04
        ;   XREF to: 00602a22 (CONDITIONAL_JUMP)  ; LAB_00602a22
    MOV ECX,dword ptr [EBX]             ; 00602a06
    ADD ECX,0x8                         ; 00602a08
    MOV dword ptr [EBX],ECX             ; 00602a0b
    LES EDI,[ECX + -0x8]                ; 00602a0d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602a10
    MOV dword ptr ES:[EDI],EAX          ; 00602a14
    CMP byte ptr [EBP],0x0              ; 00602a17
    JNZ 0x006029a0                      ; 00602a1b
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    JMP 0x00602d6a                      ; 00602a1d
        ;   XREF to: 00602d6a (UNCONDITIONAL_JUMP)  ; LAB_00602d6a
    TEST CL,0x40                        ; 00602a22
        ;   Label: LAB_00602a22
    JZ 0x00602a46                       ; 00602a25
        ;   XREF to: 00602a46 (CONDITIONAL_JUMP)  ; LAB_00602a46
    MOV EDX,dword ptr [EBX]             ; 00602a27
    ADD EDX,0x4                         ; 00602a29
    MOV dword ptr [EBX],EDX             ; 00602a2c
    MOV EDI,dword ptr [EDX + -0x4]      ; 00602a2e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602a31
    MOV dword ptr [EDI],EAX             ; 00602a35
    CMP byte ptr [EBP],0x0              ; 00602a37
    JNZ 0x006029a0                      ; 00602a3b
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    JMP 0x00602d6a                      ; 00602a41
        ;   XREF to: 00602d6a (UNCONDITIONAL_JUMP)  ; LAB_00602d6a
    MOV EAX,dword ptr [EBX]             ; 00602a46
        ;   Label: LAB_00602a46
    ADD EAX,0x4                         ; 00602a48
    MOV dword ptr [EBX],EAX             ; 00602a4b
    MOV EDI,dword ptr [EAX + -0x4]      ; 00602a4d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602a50
    MOV dword ptr [EDI],EAX             ; 00602a54
    CMP byte ptr [EBP],0x0              ; 00602a56
    JNZ 0x006029a0                      ; 00602a5a
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    JMP 0x00602d6a                      ; 00602a60
        ;   XREF to: 00602d6a (UNCONDITIONAL_JUMP)  ; LAB_00602d6a
    TEST CL,0x10                        ; 00602a65
        ;   Label: LAB_00602a65
    JZ 0x00602af1                       ; 00602a68
        ;   XREF to: 00602af1 (CONDITIONAL_JUMP)  ; LAB_00602af1
    TEST CL,0x80                        ; 00602a6e
    JZ 0x00602a9c                       ; 00602a71
        ;   XREF to: 00602a9c (CONDITIONAL_JUMP)  ; LAB_00602a9c
    MOV EDI,dword ptr [EBX]             ; 00602a73
    ADD EDI,0x8                         ; 00602a75
    MOV dword ptr [EBX],EDI             ; 00602a78
    LES EDI,[EDI + -0x8]                ; 00602a7a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602a7d
    MOV word ptr ES:[EDI],AX            ; 00602a81
    CMP byte ptr [EBP],0x0              ; 00602a85
    JNZ 0x006029a0                      ; 00602a89
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602a8f
    ADD ESP,0x74                        ; 00602a93
    POP EBP                             ; 00602a96
    POP ES                              ; 00602a97
    POP EDI                             ; 00602a98
    POP ESI                             ; 00602a99
    POP EBX                             ; 00602a9a
    RET                                 ; 00602a9b
    TEST CL,0x40                        ; 00602a9c
        ;   Label: LAB_00602a9c
    JZ 0x00602ac9                       ; 00602a9f
        ;   XREF to: 00602ac9 (CONDITIONAL_JUMP)  ; LAB_00602ac9
    MOV ECX,dword ptr [EBX]             ; 00602aa1
    ADD ECX,0x4                         ; 00602aa3
    MOV dword ptr [EBX],ECX             ; 00602aa6
    MOV EDI,dword ptr [ECX + -0x4]      ; 00602aa8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602aab
    MOV word ptr [EDI],AX               ; 00602aaf
    CMP byte ptr [EBP],0x0              ; 00602ab2
    JNZ 0x006029a0                      ; 00602ab6
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602abc
    ADD ESP,0x74                        ; 00602ac0
    POP EBP                             ; 00602ac3
    POP ES                              ; 00602ac4
    POP EDI                             ; 00602ac5
    POP ESI                             ; 00602ac6
    POP EBX                             ; 00602ac7
    RET                                 ; 00602ac8
    MOV EDX,dword ptr [EBX]             ; 00602ac9
        ;   Label: LAB_00602ac9
    ADD EDX,0x4                         ; 00602acb
    MOV dword ptr [EBX],EDX             ; 00602ace
    MOV EDI,dword ptr [EDX + -0x4]      ; 00602ad0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602ad3
    MOV word ptr [EDI],AX               ; 00602ad7
    CMP byte ptr [EBP],0x0              ; 00602ada
    JNZ 0x006029a0                      ; 00602ade
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602ae4
    ADD ESP,0x74                        ; 00602ae8
    POP EBP                             ; 00602aeb
    POP ES                              ; 00602aec
    POP EDI                             ; 00602aed
    POP ESI                             ; 00602aee
    POP EBX                             ; 00602aef
    RET                                 ; 00602af0
    TEST CL,0x80                        ; 00602af1
        ;   Label: LAB_00602af1
    JZ 0x00602b1e                       ; 00602af4
        ;   XREF to: 00602b1e (CONDITIONAL_JUMP)  ; LAB_00602b1e
    MOV EAX,dword ptr [EBX]             ; 00602af6
    ADD EAX,0x8                         ; 00602af8
    MOV dword ptr [EBX],EAX             ; 00602afb
    LES EDI,[EAX + -0x8]                ; 00602afd
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602b00
    MOV dword ptr ES:[EDI],EAX          ; 00602b04
    CMP byte ptr [EBP],0x0              ; 00602b07
    JNZ 0x006029a0                      ; 00602b0b
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602b11
    ADD ESP,0x74                        ; 00602b15
    POP EBP                             ; 00602b18
    POP ES                              ; 00602b19
    POP EDI                             ; 00602b1a
    POP ESI                             ; 00602b1b
    POP EBX                             ; 00602b1c
    RET                                 ; 00602b1d
    TEST CL,0x40                        ; 00602b1e
        ;   Label: LAB_00602b1e
    JZ 0x00602b4a                       ; 00602b21
        ;   XREF to: 00602b4a (CONDITIONAL_JUMP)  ; LAB_00602b4a
    MOV EDI,dword ptr [EBX]             ; 00602b23
    ADD EDI,0x4                         ; 00602b25
    MOV dword ptr [EBX],EDI             ; 00602b28
    MOV EDI,dword ptr [EDI + -0x4]      ; 00602b2a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602b2d
    MOV dword ptr [EDI],EAX             ; 00602b31
    CMP byte ptr [EBP],0x0              ; 00602b33
    JNZ 0x006029a0                      ; 00602b37
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602b3d
    ADD ESP,0x74                        ; 00602b41
    POP EBP                             ; 00602b44
    POP ES                              ; 00602b45
    POP EDI                             ; 00602b46
    POP ESI                             ; 00602b47
    POP EBX                             ; 00602b48
    RET                                 ; 00602b49
    MOV ECX,dword ptr [EBX]             ; 00602b4a
        ;   Label: LAB_00602b4a
    ADD ECX,0x4                         ; 00602b4c
    MOV dword ptr [EBX],ECX             ; 00602b4f
    MOV EDI,dword ptr [ECX + -0x4]      ; 00602b51
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602b54
    MOV dword ptr [EDI],EAX             ; 00602b58
    CMP byte ptr [EBP],0x0              ; 00602b5a
    JNZ 0x006029a0                      ; 00602b5e
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602b64
    ADD ESP,0x74                        ; 00602b68
    POP EBP                             ; 00602b6b
    POP ES                              ; 00602b6c
    POP EDI                             ; 00602b6d
    POP ESI                             ; 00602b6e
    POP EBX                             ; 00602b6f
    RET                                 ; 00602b70
    MOV EAX,dword ptr [EBX]             ; 00602b71
        ;   Label: LAB_00602b71
    MOV dword ptr [ESP + 0x64],EAX      ; 00602b73
    LEA EAX,[ESP + 0x70]                ; 00602b77
    PUSH EAX                            ; 00602b7b
    LEA EAX,[ESP + 0x4]                 ; 00602b7c
    PUSH EAX                            ; 00602b80
    LEA EAX,[ESP + 0x6c]                ; 00602b81
    PUSH EAX                            ; 00602b85
    LEA EAX,[ESP + 0x44]                ; 00602b86
    PUSH EAX                            ; 00602b8a
    CALL crt_stdio.c_ConvertFormatSpec_FUN_00603238 ; 00602b8b
        ;   XREF to: 00603238 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_ConvertFormatSpec_FUN_00603238(char * output_buffer, va_list_t * args, FormatSpec * spec_info)
    ADD ESP,0x10                        ; 00602b90
    MOV EDI,EAX                         ; 00602b93
    MOV EAX,dword ptr [ESP + 0x64]      ; 00602b95
    MOV dword ptr [EBX],EAX             ; 00602b99
    MOV dword ptr [ESP + 0x6c],EDX      ; 00602b9b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00602b9f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00602ba3
    MOV EDX,dword ptr [ESP + 0x28]      ; 00602ba7
    ADD EAX,ECX                         ; 00602bab
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00602bad
    ADD EAX,EDX                         ; 00602bb1
    MOV EDX,dword ptr [ESP + 0x30]      ; 00602bb3
    ADD EAX,ECX                         ; 00602bb7
    MOV ECX,dword ptr [ESP + 0x34]      ; 00602bb9
    ADD EAX,EDX                         ; 00602bbd
    MOV EDX,dword ptr [ESP + 0x4]       ; 00602bbf
    ADD EAX,ECX                         ; 00602bc3
    SUB EDX,EAX                         ; 00602bc5
    MOV dword ptr [ESP + 0x4],EDX       ; 00602bc7
    TEST byte ptr [ESP + 0x1e],0x8      ; 00602bcb
    JNZ 0x00602bf2                      ; 00602bd0
        ;   XREF to: 00602bf2 (CONDITIONAL_JUMP)  ; LAB_00602bf2
    CMP byte ptr [ESP + 0x16],0x20      ; 00602bd2
    JNZ 0x00602bf2                      ; 00602bd7
        ;   XREF to: 00602bf2 (CONDITIONAL_JUMP)  ; LAB_00602bf2
    CMP dword ptr [ESP + 0x4],0x0       ; 00602bd9
        ;   Label: LAB_00602bd9
    JLE 0x00602bf2                      ; 00602bde
        ;   XREF to: 00602bf2 (CONDITIONAL_JUMP)  ; LAB_00602bf2
    PUSH 0x20                           ; 00602be0
    LEA EAX,[ESP + 0x4]                 ; 00602be2
    PUSH EAX                            ; 00602be6
    CALL ESI                            ; 00602be7
    ADD ESP,0x8                         ; 00602be9
    DEC dword ptr [ESP + 0x4]           ; 00602bec
    JMP 0x00602bd9                      ; 00602bf0
        ;   XREF to: 00602bd9 (UNCONDITIONAL_JUMP)  ; LAB_00602bd9
    LEA EAX,[ESP + 0x38]                ; 00602bf2
        ;   Label: LAB_00602bf2
    MOV ECX,dword ptr [ESP + 0x20]      ; 00602bf6
    MOV dword ptr [ESP + 0x68],EAX      ; 00602bfa
    TEST ECX,ECX                        ; 00602bfe
    JLE 0x00602c2b                      ; 00602c00
        ;   XREF to: 00602c2b (CONDITIONAL_JUMP)  ; LAB_00602c2b
    MOV EDX,dword ptr [ESP + 0x68]      ; 00602c02
        ;   Label: LAB_00602c02
    XOR EAX,EAX                         ; 00602c06
    MOV AL,byte ptr [EDX]               ; 00602c08
    PUSH EAX                            ; 00602c0a
    LEA EAX,[ESP + 0x4]                 ; 00602c0b
    PUSH EAX                            ; 00602c0f
    CALL ESI                            ; 00602c10
    ADD ESP,0x8                         ; 00602c12
    MOV EAX,dword ptr [ESP + 0x68]      ; 00602c15
    MOV EDX,dword ptr [ESP + 0x20]      ; 00602c19
    INC EAX                             ; 00602c1d
    DEC EDX                             ; 00602c1e
    MOV dword ptr [ESP + 0x68],EAX      ; 00602c1f
    MOV dword ptr [ESP + 0x20],EDX      ; 00602c23
    TEST EDX,EDX                        ; 00602c27
    JG 0x00602c02                       ; 00602c29
        ;   XREF to: 00602c02 (CONDITIONAL_JUMP)  ; LAB_00602c02
    CMP dword ptr [ESP + 0x24],0x0      ; 00602c2b
        ;   Label: LAB_00602c2b
    JLE 0x00602c44                      ; 00602c30
        ;   XREF to: 00602c44 (CONDITIONAL_JUMP)  ; LAB_00602c44
    PUSH 0x30                           ; 00602c32
    LEA EAX,[ESP + 0x4]                 ; 00602c34
    PUSH EAX                            ; 00602c38
    CALL ESI                            ; 00602c39
    ADD ESP,0x8                         ; 00602c3b
    DEC dword ptr [ESP + 0x24]          ; 00602c3e
    JMP 0x00602c2b                      ; 00602c42
        ;   XREF to: 00602c2b (UNCONDITIONAL_JUMP)  ; LAB_00602c2b
    MOV AL,byte ptr [ESP + 0x15]        ; 00602c44
        ;   Label: LAB_00602c44
    CMP AL,0x73                         ; 00602c48
    JNZ 0x00602c96                      ; 00602c4a
        ;   XREF to: 00602c96 (CONDITIONAL_JUMP)  ; LAB_00602c96
    TEST byte ptr [ESP + 0x1e],0x20     ; 00602c4c
    JZ 0x00602c6f                       ; 00602c51
        ;   XREF to: 00602c6f (CONDITIONAL_JUMP)  ; LAB_00602c6f
    PUSH ESI                            ; 00602c53
    LEA EAX,[ESP + 0x4]                 ; 00602c54
    PUSH EAX                            ; 00602c58
    XOR EAX,EAX                         ; 00602c59
    MOV AX,word ptr [ESP + 0x74]        ; 00602c5b
    PUSH EAX                            ; 00602c60
    PUSH EDI                            ; 00602c61
    CALL crt_stdio.c_FormatWideString_FUN_006031c0 ; 00602c62
        ;   XREF to: 006031c0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_FormatWideString_FUN_006031c0(wchar_t * wide_string_offset, ushort segment, FormatSpec * spec_info, OUTPUT_CALLBACK output_func)
    ADD ESP,0x10                        ; 00602c67
    JMP 0x00602cda                      ; 00602c6a
        ;   XREF to: 00602cda (UNCONDITIONAL_JUMP)  ; LAB_00602cda
    MOV ES,word ptr [ESP + 0x6c]        ; 00602c6f
        ;   Label: LAB_00602c6f
    CMP dword ptr [ESP + 0x28],0x0      ; 00602c73
        ;   Label: LAB_00602c73
    JLE 0x00602cda                      ; 00602c78
        ;   XREF to: 00602cda (CONDITIONAL_JUMP)  ; LAB_00602cda
    XOR EAX,EAX                         ; 00602c7a
    MOV AL,byte ptr ES:[EDI]            ; 00602c7c
    PUSH EAX                            ; 00602c7f
    LEA EAX,[ESP + 0x4]                 ; 00602c80
    PUSH EAX                            ; 00602c84
    CALL ESI                            ; 00602c85
    ADD ESP,0x8                         ; 00602c87
    MOV ECX,dword ptr [ESP + 0x28]      ; 00602c8a
    DEC ECX                             ; 00602c8e
    INC EDI                             ; 00602c8f
    MOV dword ptr [ESP + 0x28],ECX      ; 00602c90
    JMP 0x00602c73                      ; 00602c94
        ;   XREF to: 00602c73 (UNCONDITIONAL_JUMP)  ; LAB_00602c73
    CMP AL,0x53                         ; 00602c96
        ;   Label: LAB_00602c96
    JNZ 0x00602cb3                      ; 00602c98
        ;   XREF to: 00602cb3 (CONDITIONAL_JUMP)  ; LAB_00602cb3
    PUSH ESI                            ; 00602c9a
    LEA EAX,[ESP + 0x4]                 ; 00602c9b
    PUSH EAX                            ; 00602c9f
    XOR EAX,EAX                         ; 00602ca0
    MOV AX,word ptr [ESP + 0x74]        ; 00602ca2
    PUSH EAX                            ; 00602ca7
    PUSH EDI                            ; 00602ca8
    CALL crt_stdio.c_FormatWideString_FUN_006031c0 ; 00602ca9
        ;   XREF to: 006031c0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_FormatWideString_FUN_006031c0(wchar_t * wide_string_offset, ushort segment, FormatSpec * spec_info, OUTPUT_CALLBACK output_func)
    ADD ESP,0x10                        ; 00602cae
    JMP 0x00602cda                      ; 00602cb1
        ;   XREF to: 00602cda (UNCONDITIONAL_JUMP)  ; LAB_00602cda
    MOV ES,word ptr [ESP + 0x6c]        ; 00602cb3
        ;   Label: LAB_00602cb3
    CMP dword ptr [ESP + 0x28],0x0      ; 00602cb7
        ;   Label: LAB_00602cb7
    JLE 0x00602cda                      ; 00602cbc
        ;   XREF to: 00602cda (CONDITIONAL_JUMP)  ; LAB_00602cda
    XOR EAX,EAX                         ; 00602cbe
    MOV AL,byte ptr ES:[EDI]            ; 00602cc0
    PUSH EAX                            ; 00602cc3
    LEA EAX,[ESP + 0x4]                 ; 00602cc4
    PUSH EAX                            ; 00602cc8
    CALL ESI                            ; 00602cc9
    ADD ESP,0x8                         ; 00602ccb
    MOV EAX,dword ptr [ESP + 0x28]      ; 00602cce
    DEC EAX                             ; 00602cd2
    INC EDI                             ; 00602cd3
    MOV dword ptr [ESP + 0x28],EAX      ; 00602cd4
    JMP 0x00602cb7                      ; 00602cd8
        ;   XREF to: 00602cb7 (UNCONDITIONAL_JUMP)  ; LAB_00602cb7
    CMP dword ptr [ESP + 0x2c],0x0      ; 00602cda
        ;   Label: LAB_00602cda
    JLE 0x00602cf3                      ; 00602cdf
        ;   XREF to: 00602cf3 (CONDITIONAL_JUMP)  ; LAB_00602cf3
    PUSH 0x30                           ; 00602ce1
    LEA EAX,[ESP + 0x4]                 ; 00602ce3
    PUSH EAX                            ; 00602ce7
    CALL ESI                            ; 00602ce8
    ADD ESP,0x8                         ; 00602cea
    DEC dword ptr [ESP + 0x2c]          ; 00602ced
    JMP 0x00602cda                      ; 00602cf1
        ;   XREF to: 00602cda (UNCONDITIONAL_JUMP)  ; LAB_00602cda
    MOV ES,word ptr [ESP + 0x6c]        ; 00602cf3
        ;   Label: LAB_00602cf3
    CMP dword ptr [ESP + 0x30],0x0      ; 00602cf7
        ;   Label: LAB_00602cf7
    JLE 0x00602d1a                      ; 00602cfc
        ;   XREF to: 00602d1a (CONDITIONAL_JUMP)  ; LAB_00602d1a
    XOR EAX,EAX                         ; 00602cfe
    MOV AL,byte ptr ES:[EDI]            ; 00602d00
    PUSH EAX                            ; 00602d03
    LEA EAX,[ESP + 0x4]                 ; 00602d04
    PUSH EAX                            ; 00602d08
    CALL ESI                            ; 00602d09
    ADD ESP,0x8                         ; 00602d0b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00602d0e
    DEC EAX                             ; 00602d12
    INC EDI                             ; 00602d13
    MOV dword ptr [ESP + 0x30],EAX      ; 00602d14
    JMP 0x00602cf7                      ; 00602d18
        ;   XREF to: 00602cf7 (UNCONDITIONAL_JUMP)  ; LAB_00602cf7
    CMP dword ptr [ESP + 0x34],0x0      ; 00602d1a
        ;   Label: LAB_00602d1a
    JLE 0x00602d33                      ; 00602d1f
        ;   XREF to: 00602d33 (CONDITIONAL_JUMP)  ; LAB_00602d33
    PUSH 0x30                           ; 00602d21
    LEA EAX,[ESP + 0x4]                 ; 00602d23
    PUSH EAX                            ; 00602d27
    CALL ESI                            ; 00602d28
    ADD ESP,0x8                         ; 00602d2a
    DEC dword ptr [ESP + 0x34]          ; 00602d2d
    JMP 0x00602d1a                      ; 00602d31
        ;   XREF to: 00602d1a (UNCONDITIONAL_JUMP)  ; LAB_00602d1a
    TEST byte ptr [ESP + 0x1e],0x8      ; 00602d33
        ;   Label: LAB_00602d33
    JZ 0x00602d41                       ; 00602d38
        ;   XREF to: 00602d41 (CONDITIONAL_JUMP)  ; LAB_00602d41
    CMP dword ptr [ESP + 0x4],0x0       ; 00602d3a
        ;   Label: LAB_00602d3a
    JG 0x00602d58                       ; 00602d3f
        ;   XREF to: 00602d58 (CONDITIONAL_JUMP)  ; LAB_00602d58
    CMP byte ptr [EBP],0x0              ; 00602d41
        ;   Label: LAB_00602d41
    JNZ 0x006029a0                      ; 00602d45
        ;   XREF to: 006029a0 (CONDITIONAL_JUMP)  ; LAB_006029a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602d4b
    ADD ESP,0x74                        ; 00602d4f
    POP EBP                             ; 00602d52
    POP ES                              ; 00602d53
    POP EDI                             ; 00602d54
    POP ESI                             ; 00602d55
    POP EBX                             ; 00602d56
    RET                                 ; 00602d57
    PUSH 0x20                           ; 00602d58
        ;   Label: LAB_00602d58
    LEA EAX,[ESP + 0x4]                 ; 00602d5a
    PUSH EAX                            ; 00602d5e
    CALL ESI                            ; 00602d5f
    ADD ESP,0x8                         ; 00602d61
    DEC dword ptr [ESP + 0x4]           ; 00602d64
    JMP 0x00602d3a                      ; 00602d68
        ;   XREF to: 00602d3a (UNCONDITIONAL_JUMP)  ; LAB_00602d3a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00602d6a
        ;   Label: LAB_00602d6a
    ADD ESP,0x74                        ; 00602d6e
    POP EBP                             ; 00602d71
    POP ES                              ; 00602d72
        ;   Label: LAB_00602d72
    POP EDI                             ; 00602d73
    POP ESI                             ; 00602d74
    POP EBX                             ; 00602d75
    RET                                 ; 00602d76

