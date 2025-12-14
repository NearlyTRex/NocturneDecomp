; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dimage.cpp_CDemonImage_load_FUN_00471ad0(CDemonImage * this_ptr, char * filename)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_rb_0061ecbd
;   TerminatedCString s_art_0061ecc0
;   TerminatedCString s_core_dimage_cpp_0061ecc4
;   TerminatedCString s_CDemonImage_load_Unable__0061ecd7
;   TerminatedCString s_core_dimage_cpp_0061ed01
;   TerminatedCString s_core_dimage_cpp_0061ed14
;   TerminatedCString s_CDemonImage_load_Unable__0061ed27
;   TerminatedCString s_ACT_0061ed55
;   undefined4 s_ACT_0061ed56
;   undefined4 s_CT_0061ed57
;   undefined4 s_T_0061ed58
;   TerminatedCString s_rb_0061ed5a
;   TerminatedCString s_art_0061ed5d
;   TerminatedCString s_core_dimage_cpp_0061ed61
;   TerminatedCString s_CDemonImage_load_Unable__0061ed74
;   ... and 4 more
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
;   core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471ad0
        ;   Label: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
    PUSH ESI                            ; 00471ad1
    PUSH EDI                            ; 00471ad2
    PUSH EBP                            ; 00471ad3
    SUB ESP,0x10c                       ; 00471ad4
    MOV ESI,dword ptr [ESP + 0x124]     ; 00471ada
    MOV EBP,dword ptr [ESP + 0x128]     ; 00471ae1
    MOV EDI,ESP                         ; 00471ae8
    PUSH EDI                            ; 00471aea
    MOV AL,byte ptr [ESI]               ; 00471aeb
        ;   Label: LAB_00471aeb
    MOV byte ptr [EDI],AL               ; 00471aed
    CMP AL,0x0                          ; 00471aef
    JZ 0x00471b03                       ; 00471af1
        ;   XREF to: 00471b03 (CONDITIONAL_JUMP)  ; LAB_00471b03
    MOV AL,byte ptr [ESI + 0x1]         ; 00471af3
    ADD ESI,0x2                         ; 00471af6
    MOV byte ptr [EDI + 0x1],AL         ; 00471af9
    ADD EDI,0x2                         ; 00471afc
    CMP AL,0x0                          ; 00471aff
    JNZ 0x00471aeb                      ; 00471b01
        ;   XREF to: 00471aeb (CONDITIONAL_JUMP)  ; LAB_00471aeb
    POP EDI                             ; 00471b03
        ;   Label: LAB_00471b03
    PUSH 0x61ecbd                       ; 00471b04 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00471b09
    PUSH EAX                            ; 00471b0d
    PUSH 0x61ecc0                       ; 00471b0e | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00471b13
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00471b18
    MOV EBX,EAX                         ; 00471b1b
    TEST EAX,EAX                        ; 00471b1d
    JZ 0x00471cd4                       ; 00471b1f
        ;   XREF to: 00471cd4 (CONDITIONAL_JUMP)  ; LAB_00471cd4
    MOV EAX,dword ptr [ESP + 0x120]     ; 00471b25
        ;   Label: LAB_00471b25
    MOV ESI,dword ptr [ESP + 0x120]     ; 00471b2c
    MOV dword ptr [EAX + 0x304],EBP     ; 00471b33
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00471b39
    PUSH ESI                            ; 00471b40
    MOV dword ptr [ESI + 0x308],EAX     ; 00471b41
    CALL core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0 ; 00471b47
        ;   XREF to: 004719e0 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage * this_ptr)
    ADD ESP,0x4                         ; 00471b4c
    PUSH EBX                            ; 00471b4f
    MOV EDI,dword ptr [ESP + 0x130]     ; 00471b50
    PUSH EDI                            ; 00471b57
    PUSH EBP                            ; 00471b58
    MOV EBP,dword ptr [ESI + 0x300]     ; 00471b59
    PUSH EBP                            ; 00471b5f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00471b60
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00471b65
    PUSH 0x76                           ; 00471b68
    PUSH 0x61ed01                       ; 00471b6a | = "..\\core\\dimage.cpp"
    PUSH EBX                            ; 00471b6f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00471b70
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00471b75
    MOV ESI,ESP                         ; 00471b78
    MOV DL,0x2e                         ; 00471b7a
    MOV AL,byte ptr [ESI]               ; 00471b7c
        ;   Label: LAB_00471b7c
    CMP AL,DL                           ; 00471b7e
    JZ 0x00471b94                       ; 00471b80
        ;   XREF to: 00471b94 (CONDITIONAL_JUMP)  ; LAB_00471b94
    CMP AL,0x0                          ; 00471b82
    JZ 0x00471b92                       ; 00471b84
        ;   XREF to: 00471b92 (CONDITIONAL_JUMP)  ; LAB_00471b92
    INC ESI                             ; 00471b86
    MOV AL,byte ptr [ESI]               ; 00471b87
    CMP AL,DL                           ; 00471b89
    JZ 0x00471b94                       ; 00471b8b
        ;   XREF to: 00471b94 (CONDITIONAL_JUMP)  ; LAB_00471b94
    INC ESI                             ; 00471b8d
    CMP AL,0x0                          ; 00471b8e
    JNZ 0x00471b7c                      ; 00471b90
        ;   XREF to: 00471b7c (CONDITIONAL_JUMP)  ; LAB_00471b7c
    SUB ESI,ESI                         ; 00471b92
        ;   Label: LAB_00471b92
    MOV EDI,ESI                         ; 00471b94
        ;   Label: LAB_00471b94
    TEST ESI,ESI                        ; 00471b96
    JNZ 0x00471bbc                      ; 00471b98
        ;   XREF to: 00471bbc (CONDITIONAL_JUMP)  ; LAB_00471bbc
    MOV EAX,0x61ed14                    ; 00471b9a | = "..\\core\\dimage.cpp"
    MOV EDX,0x7b                        ; 00471b9f
    PUSH 0x61ed27                       ; 00471ba4 | = "CDemonImage::load - Unable to find ex..."
    MOV [0x02f0ca48],EAX                ; 00471ba9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00471bae | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00471bb4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471bb9
    MOV ESI,0x61ed55                    ; 00471bbc | = ".ACT"
        ;   Label: LAB_00471bbc
    PUSH EDI                            ; 00471bc1
    MOV AL,byte ptr [ESI]               ; 00471bc2 | = ".ACT" | s_CT_0061ed57
        ;   Label: LAB_00471bc2
    MOV byte ptr [EDI],AL               ; 00471bc4
    CMP AL,0x0                          ; 00471bc6
    JZ 0x00471bda                       ; 00471bc8
        ;   XREF to: 00471bda (CONDITIONAL_JUMP)  ; LAB_00471bda
    MOV AL,byte ptr [ESI + 0x1]         ; 00471bca | s_ACT_0061ed56 | s_T_0061ed58
    ADD ESI,0x2                         ; 00471bcd
    MOV byte ptr [EDI + 0x1],AL         ; 00471bd0
    ADD EDI,0x2                         ; 00471bd3
    CMP AL,0x0                          ; 00471bd6
    JNZ 0x00471bc2                      ; 00471bd8
        ;   XREF to: 00471bc2 (CONDITIONAL_JUMP)  ; LAB_00471bc2
    POP EDI                             ; 00471bda
        ;   Label: LAB_00471bda
    PUSH 0x61ed5a                       ; 00471bdb | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00471be0
    PUSH EAX                            ; 00471be4
    PUSH 0x61ed5d                       ; 00471be5 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00471bea
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00471bef
    MOV EBX,EAX                         ; 00471bf2
    TEST EAX,EAX                        ; 00471bf4
    JZ 0x00471cfc                       ; 00471bf6
        ;   XREF to: 00471cfc (CONDITIONAL_JUMP)  ; LAB_00471cfc
    PUSH EBX                            ; 00471bfc
        ;   Label: LAB_00471bfc
    PUSH 0x3                            ; 00471bfd
    MOV EAX,dword ptr [ESP + 0x128]     ; 00471bff
    PUSH 0x100                          ; 00471c06
    ADD EAX,0x30c                       ; 00471c0b
    PUSH EAX                            ; 00471c10
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00471c11
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00471c16
    PUSH 0x81                           ; 00471c19
    PUSH 0x61eda0                       ; 00471c1e | = "..\\core\\dimage.cpp"
    PUSH EBX                            ; 00471c23
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00471c24
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00471c29
    MOV EDI,dword ptr [ESP + 0x120]     ; 00471c2c
    MOV ESI,EDI                         ; 00471c33
    MOV EBX,EDI                         ; 00471c35
    LEA EAX,[EDI + 0x200]               ; 00471c37
    MOV dword ptr [ESP + 0x108],EAX     ; 00471c3d
    XOR EAX,EAX                         ; 00471c44
        ;   Label: LAB_00471c44
    MOV AL,byte ptr [EBX + 0x30c]       ; 00471c46
    MOV dword ptr [ESP + 0x100],EAX     ; 00471c4c
    XOR EAX,EAX                         ; 00471c53
    MOV AL,byte ptr [EBX + 0x30e]       ; 00471c55
    PUSH EAX                            ; 00471c5b
    MOVZX EBP,byte ptr [EBX + 0x30d]    ; 00471c5c
    PUSH EBP                            ; 00471c63
    MOV EDX,dword ptr [ESP + 0x108]     ; 00471c64
    PUSH EDX                            ; 00471c6b
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00471c6c
    PUSH ECX                            ; 00471c73
    MOV dword ptr [ESP + 0x114],EAX     ; 00471c74
    CALL core_dimage.cpp_CDemonImage_packColor_FUN_00471a70 ; 00471c7b
        ;   XREF to: 00471a70 (UNCONDITIONAL_CALL)  ; ushort core_dimage.cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage * this_ptr, uint red, uint green, uint blue)
    ADD ESP,0x10                        ; 00471c80
    MOV word ptr [ESI + 0x100],AX       ; 00471c83
    MOV EAX,dword ptr [ESP + 0x100]     ; 00471c8a
    SHR EBP,0x3                         ; 00471c91
    SHR EAX,0x3                         ; 00471c94
    SHL EBP,0x5                         ; 00471c97
    SHL EAX,0xa                         ; 00471c9a
    INC EDI                             ; 00471c9d
    ADD EBP,EAX                         ; 00471c9e
    MOV EAX,dword ptr [ESP + 0x104]     ; 00471ca0
    ADD ESI,0x2                         ; 00471ca7
    SHR EAX,0x3                         ; 00471caa
    ADD EBX,0x3                         ; 00471cad
    MOV AL,byte ptr [EAX + EBP*0x1 + 0x2cf9020] ; 00471cb0 | g_ColorCubeLookup
    MOV EBP,dword ptr [ESP + 0x108]     ; 00471cb7
    MOV byte ptr [EDI + -0x1],AL        ; 00471cbe
    CMP ESI,EBP                         ; 00471cc1
    JNZ 0x00471c44                      ; 00471cc3
        ;   XREF to: 00471c44 (CONDITIONAL_JUMP)  ; LAB_00471c44
    ADD ESP,0x10c                       ; 00471cc9
    POP EBP                             ; 00471ccf
    POP EDI                             ; 00471cd0
    POP ESI                             ; 00471cd1
    POP EBX                             ; 00471cd2
    RET                                 ; 00471cd3
    MOV EDX,0x61ecc4                    ; 00471cd4 | = "..\\core\\dimage.cpp"
        ;   Label: LAB_00471cd4
    MOV ECX,0x68                        ; 00471cd9
    PUSH 0x61ecd7                       ; 00471cde | = "CDemonImage::load - Unable to load im..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00471ce3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00471ce9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00471cef
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471cf4
    JMP 0x00471b25                      ; 00471cf7
        ;   XREF to: 00471b25 (UNCONDITIONAL_JUMP)  ; LAB_00471b25
    MOV ECX,0x61ed61                    ; 00471cfc | = "..\\core\\dimage.cpp"
        ;   Label: LAB_00471cfc
    MOV ESI,0x7f                        ; 00471d01
    PUSH 0x61ed74                       ; 00471d06 | = "CDemonImage::load - Unable to load pa..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00471d0b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00471d11 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00471d17
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471d1c
    JMP 0x00471bfc                      ; 00471d1f
        ;   XREF to: 00471bfc (UNCONDITIONAL_JUMP)  ; LAB_00471bfc

