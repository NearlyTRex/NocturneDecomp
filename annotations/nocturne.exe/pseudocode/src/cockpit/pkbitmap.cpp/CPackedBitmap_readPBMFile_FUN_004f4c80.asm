; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   skip_data_load
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 at 004f4eb5
;   cockpit_pkbitmap.cpp_FUN_004f4f90 at 004f50a6
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d252
;   TerminatedCString s_IO_error_reading_PBM_pos_0058d26a
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d298
;   TerminatedCString s_Corrupt_data_detected_re_0058d2b0
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d2d3
;   TerminatedCString s_Out_of_memory_reading_PB_0058d2eb
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f3f50
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4c80
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
    PUSH ESI                            ; 004f4c81
    PUSH EDI                            ; 004f4c82
    PUSH EBP                            ; 004f4c83
    SUB ESP,0x1c                        ; 004f4c84
    MOV EBX,dword ptr [ESP + 0x30]      ; 004f4c87
    MOV EBP,dword ptr [ESP + 0x34]      ; 004f4c8b
    PUSH EBX                            ; 004f4c8f
    CALL cockpit_pkbitmap.cpp_FUN_004f3f50 ; 004f4c90
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f3f50()
    ADD ESP,0x4                         ; 004f4c95
        ;   Label: LAB_004f4c95
    PUSH EBP                            ; 004f4c98
    PUSH 0x1                            ; 004f4c99
    PUSH 0x1c                           ; 004f4c9b
    LEA EAX,[ESP + 0xc]                 ; 004f4c9d
    PUSH EAX                            ; 004f4ca1
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f4ca2
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4ca7
    CMP EAX,0x1                         ; 004f4caa
    JNZ 0x004f4d0f                      ; 004f4cad
        ;   XREF to: 004f4d0f (CONDITIONAL_JUMP)  ; LAB_004f4d0f
    MOV ECX,0x4                         ; 004f4caf
    MOV EDI,0x5be17c                    ; 004f4cb4
    MOV ESI,ESP                         ; 004f4cb9
    XOR EAX,EAX                         ; 004f4cbb
    CMPSB.REPE ES:EDI,ESI               ; 004f4cbd
    JZ 0x004f4cc6                       ; 004f4cbf
        ;   XREF to: 004f4cc6 (CONDITIONAL_JUMP)  ; LAB_004f4cc6
    SBB EAX,EAX                         ; 004f4cc1
    SBB EAX,-0x1                        ; 004f4cc3
    TEST EAX,EAX                        ; 004f4cc6
        ;   Label: LAB_004f4cc6
    JZ 0x004f4d33                       ; 004f4cc8
        ;   XREF to: 004f4d33 (CONDITIONAL_JUMP)  ; LAB_004f4d33
    MOV EDX,0x58d298                    ; 004f4cca | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f4cca
    MOV ECX,0x4b1                       ; 004f4ccf
    PUSH 0x58d2b0                       ; 004f4cd4 | = "Corrupt data detected reading PBM."
    MOV dword ptr [0x01cc4800],EDX      ; 004f4cd9 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f4cdf | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4ce5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4cea
    MOV ESI,0x58d2d3                    ; 004f4ced | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f4ced
    MOV EDI,0x4b2                       ; 004f4cf2
    PUSH 0x58d2eb                       ; 004f4cf7 | = "Out of memory reading PBM"
    MOV dword ptr [0x01cc4800],ESI      ; 004f4cfc | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004f4d02 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4d08
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    JMP 0x004f4c95                      ; 004f4d0d
        ;   XREF to: 004f4c95 (UNCONDITIONAL_JUMP)  ; LAB_004f4c95
    MOV EDI,0x58d252                    ; 004f4d0f | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f4d0f
    MOV EAX,0x4b0                       ; 004f4d14
    PUSH 0x58d26a                       ; 004f4d19 | = "IO error reading PBM (possibly corrup..."
    MOV dword ptr [0x01cc4800],EDI      ; 004f4d1e | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004f4d24 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f4d29
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4d2e
    JMP 0x004f4cca                      ; 004f4d31
        ;   XREF to: 004f4cca (UNCONDITIONAL_JUMP)  ; LAB_004f4cca
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f4d33
        ;   Label: LAB_004f4d33
    CMP EDX,0x1                         ; 004f4d37
    JC 0x004f4cca                       ; 004f4d3a
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    CMP dword ptr [ESP + 0x8],0x1       ; 004f4d3c
    JC 0x004f4cca                       ; 004f4d41
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    MOV dword ptr [EBX + 0x18],EDX      ; 004f4d43
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f4d46
    MOV dword ptr [EBX + 0x1c],EAX      ; 004f4d4a
    CMP dword ptr [ESP + 0xc],0x0       ; 004f4d4d
    JNZ 0x004f4cca                      ; 004f4d52
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    CMP dword ptr [ESP + 0x10],0x0      ; 004f4d58
    JNZ 0x004f4cca                      ; 004f4d5d
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    MOV EAX,dword ptr [EBX + 0x18]      ; 004f4d63
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f4d66
    DEC EAX                             ; 004f4d6a
    CMP EAX,EDX                         ; 004f4d6b
    JNZ 0x004f4cca                      ; 004f4d6d
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4d73
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f4d76
    DEC EAX                             ; 004f4d7a
    CMP EAX,ECX                         ; 004f4d7b
    JNZ 0x004f4cca                      ; 004f4d7d
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4d83
    INC EAX                             ; 004f4d86
    SHL EAX,0x2                         ; 004f4d87
    PUSH EAX                            ; 004f4d8a
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004f4d8b
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 004f4d90
    MOV dword ptr [EBX + 0x20],EAX      ; 004f4d93
    TEST EAX,EAX                        ; 004f4d96
    JZ 0x004f4ced                       ; 004f4d98
        ;   XREF to: 004f4ced (CONDITIONAL_JUMP)  ; LAB_004f4ced
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4d9e
    PUSH EBP                            ; 004f4da1
    INC EAX                             ; 004f4da2
    PUSH 0x1                            ; 004f4da3
    SHL EAX,0x2                         ; 004f4da5
    PUSH EAX                            ; 004f4da8
    MOV EDI,dword ptr [EBX + 0x20]      ; 004f4da9
    PUSH EDI                            ; 004f4dac
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f4dad
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4db2
    CMP EAX,0x1                         ; 004f4db5
    JNZ 0x004f4d0f                      ; 004f4db8
        ;   XREF to: 004f4d0f (CONDITIONAL_JUMP)  ; LAB_004f4d0f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004f4dbe
    XOR EDX,EDX                         ; 004f4dc1
    TEST EAX,EAX                        ; 004f4dc3
    JLE 0x004f4de0                      ; 004f4dc5
        ;   XREF to: 004f4de0 (CONDITIONAL_JUMP)  ; LAB_004f4de0
    MOV EAX,dword ptr [EBX + 0x20]      ; 004f4dc7
    MOV ESI,dword ptr [EAX + 0x4]       ; 004f4dca
        ;   Label: LAB_004f4dca
    CMP ESI,dword ptr [EAX]             ; 004f4dcd
    JL 0x004f4cca                       ; 004f4dcf
        ;   XREF to: 004f4cca (CONDITIONAL_JUMP)  ; LAB_004f4cca
    INC EDX                             ; 004f4dd5
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004f4dd6
    ADD EAX,0x4                         ; 004f4dd9
    CMP EDX,ECX                         ; 004f4ddc
    JL 0x004f4dca                       ; 004f4dde
        ;   XREF to: 004f4dca (CONDITIONAL_JUMP)  ; LAB_004f4dca
    MOV EAX,dword ptr [EBX + 0x20]      ; 004f4de0
        ;   Label: LAB_004f4de0
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004f4de3
    MOV EDI,dword ptr [ESP + 0x38]      ; 004f4de6
    MOV ESI,dword ptr [EAX + EDX*0x4]   ; 004f4dea
    TEST EDI,EDI                        ; 004f4ded
    JNZ 0x004f4e23                      ; 004f4def
        ;   XREF to: 004f4e23 (CONDITIONAL_JUMP)  ; LAB_004f4e23
    PUSH ESI                            ; 004f4df1
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004f4df2
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004f4df7
    MOV dword ptr [EBX + 0x14],EAX      ; 004f4dfa
    TEST EAX,EAX                        ; 004f4dfd
    JZ 0x004f4ced                       ; 004f4dff
        ;   XREF to: 004f4ced (CONDITIONAL_JUMP)  ; LAB_004f4ced
    PUSH EBP                            ; 004f4e05
    PUSH 0x1                            ; 004f4e06
    PUSH ESI                            ; 004f4e08
    PUSH EAX                            ; 004f4e09
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f4e0a
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f4e0f
    CMP EAX,0x1                         ; 004f4e12
    JNZ 0x004f4d0f                      ; 004f4e15
        ;   XREF to: 004f4d0f (CONDITIONAL_JUMP)  ; LAB_004f4d0f
    ADD ESP,0x1c                        ; 004f4e1b
    POP EBP                             ; 004f4e1e
    POP EDI                             ; 004f4e1f
    POP ESI                             ; 004f4e20
    POP EBX                             ; 004f4e21
    RET                                 ; 004f4e22
    PUSH 0x1                            ; 004f4e23
        ;   Label: LAB_004f4e23
    PUSH ESI                            ; 004f4e25
    PUSH EBP                            ; 004f4e26
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f4e27
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f4e2c
    ADD ESP,0x1c                        ; 004f4e2f
    POP EBP                             ; 004f4e32
    POP EDI                             ; 004f4e33
    POP ESI                             ; 004f4e34
    POP EBX                             ; 004f4e35
    RET                                 ; 004f4e36

