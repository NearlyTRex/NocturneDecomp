; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_dosio.c_reopenFileStream_FUN_00481b50(char * directory_path, char * filename, byte file_mode_flags, ifstream * file_stream)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   filename
; byte             Stack[0xc]:1   file_mode_flags
; ifstream *       Stack[0x10]:4   file_stream
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   int g_DefaultStreamBufferSize = 0x1a4
;
; Called Functions:
;   crt_file.c_create_directory_FUN_00600e10
;   crt_fstream.cpp_openFile_FUN_00600e85
;   crt_stdio.c_clear_and_preserve_state_FUN_00600e64
;   crt_stdio.c_fflush_FUN_00600e29
;   crt_unknown.c_FUN_00600ee4
;   engine_dosio.c_findFile_FUN_00481760
;   engine_dosio.c_getRelativeFilePath_FUN_004816c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481b50
        ;   Label: engine_dosio.c_reopenFileStream_FUN_00481b50
    PUSH ESI                            ; 00481b51
    PUSH EBP                            ; 00481b52
    SUB ESP,0x214                       ; 00481b53
    MOV ESI,dword ptr [ESP + 0x224]     ; 00481b59
    MOV EBX,dword ptr [ESP + 0x230]     ; 00481b60
    PUSH EBX                            ; 00481b67
    CALL crt_stdio.c_fflush_FUN_00600e29 ; 00481b68 | int crt_stdio.c_fflush_FUN_00600e29(FILE * stream)
        ;   XREF to: 00600e29 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX]             ; 00481b6d
    ADD ESP,0x4                         ; 00481b6f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00481b72
    PUSH 0x0                            ; 00481b75
    ADD EAX,EBX                         ; 00481b77
    PUSH EAX                            ; 00481b79
    CALL crt_stdio.c_clear_and_preserve_state_FUN_00600e64 ; 00481b7a | uint crt_stdio.c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData * embedded_data, uint error_code)
        ;   XREF to: 00600e64 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00481b7f
    MOV EDX,dword ptr [ESP + 0x228]     ; 00481b82
    PUSH EDX                            ; 00481b89
    PUSH ESI                            ; 00481b8a
    LEA EAX,[ESP + 0x8]                 ; 00481b8b
    PUSH EAX                            ; 00481b8f
    CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0 ; 00481b90 | void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00481b95
    TEST byte ptr [ESP + 0x22c],0x52    ; 00481b98
    JZ 0x00481bd5                       ; 00481ba0 | LAB_00481bd5
        ;   XREF to: 00481bd5 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00481ba2
    JZ 0x00481baf                       ; 00481ba4 | LAB_00481baf
        ;   XREF to: 00481baf (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00481ba6
    CALL crt_file.c_create_directory_FUN_00600e10 ; 00481ba7 | int crt_file.c_create_directory_FUN_00600e10(char * path)
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00481bac
    MOV EAX,[0x00665c50]                ; 00481baf | int g_DefaultStreamBufferSize
        ;   Label: LAB_00481baf
    PUSH EAX                            ; 00481bb4
    MOV EBP,dword ptr [ESP + 0x230]     ; 00481bb5
    PUSH EBP                            ; 00481bbc
    LEA EAX,[ESP + 0x8]                 ; 00481bbd
    PUSH EAX                            ; 00481bc1
    PUSH EBX                            ; 00481bc2
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 00481bc3 | void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)
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
    CALL engine_dosio.c_findFile_FUN_00481760 ; 00481bd8 | int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00481bdd
    TEST EAX,EAX                        ; 00481be0
    JZ 0x00481bcb                       ; 00481be2 | LAB_00481bcb
        ;   XREF to: 00481bcb (CONDITIONAL_JUMP)
    MOV EAX,[0x00665c50]                ; 00481be4 | int g_DefaultStreamBufferSize
    PUSH EAX                            ; 00481be9
    MOV ECX,dword ptr [ESP + 0x230]     ; 00481bea
    PUSH ECX                            ; 00481bf1
    LEA EAX,[ESP + 0x108]               ; 00481bf2
    PUSH EAX                            ; 00481bf9
    PUSH EBX                            ; 00481bfa
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 00481bfb | void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00481c00
    MOV ESI,dword ptr [ESP + 0x200]     ; 00481c03
    TEST ESI,ESI                        ; 00481c0a
    JZ 0x00481bcb                       ; 00481c0c | LAB_00481bcb
        ;   XREF to: 00481bcb (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00481c0e
    ADD EBX,0x44                        ; 00481c0f
    PUSH EBX                            ; 00481c12
    CALL crt_unknown.c_FUN_00600ee4     ; 00481c13 | undefined crt_unknown.c_FUN_00600ee4()
        ;   XREF to: 00600ee4 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00481c18
    ADD ESP,0x214                       ; 00481c1b
    POP EBP                             ; 00481c21
    POP ESI                             ; 00481c22
    POP EBX                             ; 00481c23
    RET                                 ; 00481c24

