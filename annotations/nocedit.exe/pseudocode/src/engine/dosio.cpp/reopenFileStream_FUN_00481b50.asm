; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00481b50(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   filename
; uint             Stack[0xc]:4   mode_flags
; ifstream *       Stack[0x10]:4   file_stream
; Local Variables:
; SFoundFileInfo   Stack[-0x220]:532  local_220
;
; Referenced Globals:
;   int g_DefaultStreamBufferSize = 0x1a4
;
; Called Functions:
;   crt_fstream.cpp_istream_seekg_FUN_00600ee4
;   crt_fstream.cpp_openFile_FUN_00600e85
;   crt_iostream.cpp_ios_clear_FUN_00600e64
;   crt_stdio.c_fflush_FUN_00600e29
;   crt_watcom.c__mkdir_FUN_00600e10
;   engine_dosio.cpp_findFile_FUN_00481760
;   engine_dosio.cpp_getRelativeFilePath_FUN_004816c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481b50
        ;   Label: engine_dosio.cpp_reopenFileStream_FUN_00481b50
    PUSH ESI                            ; 00481b51
    PUSH EBP                            ; 00481b52
    SUB ESP,0x214                       ; 00481b53
    MOV ESI,dword ptr [ESP + 0x224]     ; 00481b59
    MOV EBX,dword ptr [ESP + 0x230]     ; 00481b60
    PUSH EBX                            ; 00481b67
    CALL crt_stdio.c_fflush_FUN_00600e29 ; 00481b68
        ;   XREF to: 00600e29 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_fflush_FUN_00600e29(_FILE * stream)
    MOV EAX,dword ptr [EBX]             ; 00481b6d
    ADD ESP,0x4                         ; 00481b6f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00481b72
    PUSH 0x0                            ; 00481b75
    ADD EAX,EBX                         ; 00481b77
    PUSH EAX                            ; 00481b79
    CALL crt_iostream.cpp_ios_clear_FUN_00600e64 ; 00481b7a
        ;   XREF to: 00600e64 (UNCONDITIONAL_CALL)  ; uint crt_iostream.cpp_ios_clear_FUN_00600e64(ios * this_ptr, uint state_flags)
    ADD ESP,0x8                         ; 00481b7f
    MOV EDX,dword ptr [ESP + 0x228]     ; 00481b82
    PUSH EDX                            ; 00481b89
    PUSH ESI                            ; 00481b8a
    LEA EAX,[ESP + 0x8]                 ; 00481b8b
    PUSH EAX                            ; 00481b8f
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_004816c0 ; 00481b90
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
    ADD ESP,0xc                         ; 00481b95
    TEST byte ptr [ESP + 0x22c],0x52    ; 00481b98
    JZ 0x00481bd5                       ; 00481ba0
        ;   XREF to: 00481bd5 (CONDITIONAL_JUMP)  ; LAB_00481bd5
    TEST ESI,ESI                        ; 00481ba2
    JZ 0x00481baf                       ; 00481ba4
        ;   XREF to: 00481baf (CONDITIONAL_JUMP)  ; LAB_00481baf
    PUSH ESI                            ; 00481ba6
    CALL crt_watcom.c__mkdir_FUN_00600e10 ; 00481ba7
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_00600e10(char * path)
    ADD ESP,0x4                         ; 00481bac
    MOV EAX,[0x00665c50]                ; 00481baf | g_DefaultStreamBufferSize
        ;   Label: LAB_00481baf
    PUSH EAX                            ; 00481bb4
    MOV EBP,dword ptr [ESP + 0x230]     ; 00481bb5
    PUSH EBP                            ; 00481bbc
    LEA EAX,[ESP + 0x8]                 ; 00481bbd
    PUSH EAX                            ; 00481bc1
    PUSH EBX                            ; 00481bc2
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 00481bc3
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00600e85(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 00481bc8
    ADD ESP,0x214                       ; 00481bcb
        ;   Label: LAB_00481bcb
    POP EBP                             ; 00481bd1
    POP ESI                             ; 00481bd2
    POP EBX                             ; 00481bd3
    RET                                 ; 00481bd4
    MOV EAX,ESP                         ; 00481bd5
        ;   Label: LAB_00481bd5
    PUSH EAX                            ; 00481bd7
    CALL engine_dosio.cpp_findFile_FUN_00481760 ; 00481bd8
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 00481bdd
    TEST EAX,EAX                        ; 00481be0
    JZ 0x00481bcb                       ; 00481be2
        ;   XREF to: 00481bcb (CONDITIONAL_JUMP)  ; LAB_00481bcb
    MOV EAX,[0x00665c50]                ; 00481be4 | g_DefaultStreamBufferSize
    PUSH EAX                            ; 00481be9
    MOV ECX,dword ptr [ESP + 0x230]     ; 00481bea
    PUSH ECX                            ; 00481bf1
    LEA EAX,[ESP + 0x108]               ; 00481bf2
    PUSH EAX                            ; 00481bf9
    PUSH EBX                            ; 00481bfa
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 00481bfb
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00600e85(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 00481c00
    MOV ESI,dword ptr [ESP + 0x200]     ; 00481c03
    TEST ESI,ESI                        ; 00481c0a
    JZ 0x00481bcb                       ; 00481c0c
        ;   XREF to: 00481bcb (CONDITIONAL_JUMP)  ; LAB_00481bcb
    PUSH ESI                            ; 00481c0e
    ADD EBX,0x44                        ; 00481c0f
    PUSH EBX                            ; 00481c12
    CALL crt_fstream.cpp_istream_seekg_FUN_00600ee4 ; 00481c13
        ;   XREF to: 00600ee4 (UNCONDITIONAL_CALL)  ; _istream * crt_fstream.cpp_istream_seekg_FUN_00600ee4(void * this_ptr, int offset)
    ADD ESP,0x8                         ; 00481c18
    ADD ESP,0x214                       ; 00481c1b
    POP EBP                             ; 00481c21
    POP ESI                             ; 00481c22
    POP EBX                             ; 00481c23
    RET                                 ; 00481c24

