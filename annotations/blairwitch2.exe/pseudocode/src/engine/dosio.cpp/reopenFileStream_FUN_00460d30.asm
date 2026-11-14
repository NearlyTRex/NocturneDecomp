; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00460d30(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   filename
; uint             Stack[0xc]:4   mode_flags
; ifstream *       Stack[0x10]:4   file_stream
;
; Referenced Globals:
;   undefined4 DAT_006013f0
;
; Called Functions:
;   crt_unknown.c_fflush_FUN_005b9bbc
;   crt_unknown.c_ios_clear_FUN_005b9bf7
;   crt_unknown.c_istream_seekg_FUN_005b9c98
;   crt_unknown.c_openFile_FUN_005b9c39
;   crt_watcom.c__mkdir_FUN_005b9c20
;   engine_dosio.cpp_findFile_FUN_00460980
;   engine_dosio.cpp_FUN_00460910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460d30
        ;   Label: engine_dosio.cpp_reopenFileStream_FUN_00460d30
    PUSH ESI                            ; 00460d31
    PUSH EBP                            ; 00460d32
    SUB ESP,0x214                       ; 00460d33
    MOV ESI,dword ptr [ESP + 0x224]     ; 00460d39
    MOV EBX,dword ptr [ESP + 0x230]     ; 00460d40
    PUSH EBX                            ; 00460d47
    CALL crt_unknown.c_fflush_FUN_005b9bbc ; 00460d48
        ;   XREF to: 005b9bbc (UNCONDITIONAL_CALL)  ; void crt_unknown.c_fflush_FUN_005b9bbc(_FILE * stream)
    MOV EAX,dword ptr [EBX]             ; 00460d4d
    ADD ESP,0x4                         ; 00460d4f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00460d52
    PUSH 0x0                            ; 00460d55
    ADD EAX,EBX                         ; 00460d57
    PUSH EAX                            ; 00460d59
    CALL crt_unknown.c_ios_clear_FUN_005b9bf7 ; 00460d5a
        ;   XREF to: 005b9bf7 (UNCONDITIONAL_CALL)  ; uint crt_unknown.c_ios_clear_FUN_005b9bf7(ios * this_ptr, uint state_flags)
    ADD ESP,0x8                         ; 00460d5f
    MOV EDX,dword ptr [ESP + 0x228]     ; 00460d62
    PUSH EDX                            ; 00460d69
    PUSH ESI                            ; 00460d6a
    LEA EAX,[ESP + 0x8]                 ; 00460d6b
    PUSH EAX                            ; 00460d6f
    CALL engine_dosio.cpp_FUN_00460910  ; 00460d70
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 00460d75
    TEST byte ptr [ESP + 0x22c],0x52    ; 00460d78
    JZ 0x00460db5                       ; 00460d80
        ;   XREF to: 00460db5 (CONDITIONAL_JUMP)  ; LAB_00460db5
    TEST ESI,ESI                        ; 00460d82
    JZ 0x00460d8f                       ; 00460d84
        ;   XREF to: 00460d8f (CONDITIONAL_JUMP)  ; LAB_00460d8f
    PUSH ESI                            ; 00460d86
    CALL crt_watcom.c__mkdir_FUN_005b9c20 ; 00460d87
        ;   XREF to: 005b9c20 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005b9c20(char * path)
    ADD ESP,0x4                         ; 00460d8c
    MOV EAX,[0x006013f0]                ; 00460d8f | DAT_006013f0
        ;   Label: LAB_00460d8f
    PUSH EAX                            ; 00460d94
    MOV EBP,dword ptr [ESP + 0x230]     ; 00460d95
    PUSH EBP                            ; 00460d9c
    LEA EAX,[ESP + 0x8]                 ; 00460d9d
    PUSH EAX                            ; 00460da1
    PUSH EBX                            ; 00460da2
    CALL crt_unknown.c_openFile_FUN_005b9c39 ; 00460da3
        ;   XREF to: 005b9c39 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_openFile_FUN_005b9c39(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 00460da8
    ADD ESP,0x214                       ; 00460dab
        ;   Label: LAB_00460dab
    POP EBP                             ; 00460db1
    POP ESI                             ; 00460db2
    POP EBX                             ; 00460db3
    RET                                 ; 00460db4
    MOV EAX,ESP                         ; 00460db5
        ;   Label: LAB_00460db5
    PUSH EAX                            ; 00460db7
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 00460db8
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00460980(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 00460dbd
    TEST EAX,EAX                        ; 00460dc0
    JZ 0x00460dab                       ; 00460dc2
        ;   XREF to: 00460dab (CONDITIONAL_JUMP)  ; LAB_00460dab
    MOV EAX,[0x006013f0]                ; 00460dc4 | DAT_006013f0
    PUSH EAX                            ; 00460dc9
    MOV ECX,dword ptr [ESP + 0x230]     ; 00460dca
    PUSH ECX                            ; 00460dd1
    LEA EAX,[ESP + 0x108]               ; 00460dd2
    PUSH EAX                            ; 00460dd9
    PUSH EBX                            ; 00460dda
    CALL crt_unknown.c_openFile_FUN_005b9c39 ; 00460ddb
        ;   XREF to: 005b9c39 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_openFile_FUN_005b9c39(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 00460de0
    MOV ESI,dword ptr [ESP + 0x200]     ; 00460de3
    TEST ESI,ESI                        ; 00460dea
    JZ 0x00460dab                       ; 00460dec
        ;   XREF to: 00460dab (CONDITIONAL_JUMP)  ; LAB_00460dab
    PUSH ESI                            ; 00460dee
    ADD EBX,0x44                        ; 00460def
    PUSH EBX                            ; 00460df2
    CALL crt_unknown.c_istream_seekg_FUN_005b9c98 ; 00460df3
        ;   XREF to: 005b9c98 (UNCONDITIONAL_CALL)  ; _istream * crt_unknown.c_istream_seekg_FUN_005b9c98(void * this_ptr, int offset)
    ADD ESP,0x8                         ; 00460df8
    ADD ESP,0x214                       ; 00460dfb
    POP EBP                             ; 00460e01
    POP ESI                             ; 00460e02
    POP EBX                             ; 00460e03
    RET                                 ; 00460e04

