; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_openFile_FUN_00600e85(ifstream *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)
;
; Parameters:
; ifstream *       Stack[0x4]:4   stream_obj
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   open_mode
; SIZE_T           Stack[0x10]:4   buffer_size
;
; XREF[3]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e15ba
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0fcf
;   engine_dosio.c_reopenFileStream_FUN_00481b50 at 00481bc3
;
; Called Functions:
;   crt_fstream.cpp_filebuf_open_FUN_00608c15
;   crt_stdio.c_clear_and_preserve_state_FUN_00600e64
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600e85
        ;   Label: crt_fstream.cpp_openFile_FUN_00600e85
    PUSH ESI                            ; 00600e86
    PUSH EDI                            ; 00600e87
    PUSH EBP                            ; 00600e88
    MOV EBX,dword ptr [ESP + 0x14]      ; 00600e89
    MOV EAX,dword ptr [EBX]             ; 00600e8d
    MOV EAX,dword ptr [EAX + 0x4]       ; 00600e8f
    ADD EAX,EBX                         ; 00600e92
    MOV EDX,dword ptr [EAX + 0x4]       ; 00600e94
    TEST EDX,EDX                        ; 00600e97
    JZ 0x00600ece                       ; 00600e99
        ;   XREF to: 00600ece (CONDITIONAL_JUMP)  ; LAB_00600ece
    MOV ECX,dword ptr [ESP + 0x20]      ; 00600e9b
    PUSH ECX                            ; 00600e9f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00600ea0
    PUSH ESI                            ; 00600ea4
    MOV EDI,dword ptr [ESP + 0x20]      ; 00600ea5
    PUSH EDI                            ; 00600ea9
    PUSH EDX                            ; 00600eaa
    CALL crt_fstream.cpp_filebuf_open_FUN_00608c15 ; 00600eab
        ;   XREF to: 00608c15 (UNCONDITIONAL_CALL)  ; int crt_fstream.cpp_filebuf_open_FUN_00608c15(filebuf * this_ptr, char * filename, int mode, int permissions)
    ADD ESP,0x10                        ; 00600eb0
    TEST EAX,EAX                        ; 00600eb3
    JNZ 0x00600ed3                      ; 00600eb5
        ;   XREF to: 00600ed3 (CONDITIONAL_JUMP)  ; LAB_00600ed3
    MOV EAX,dword ptr [EBX]             ; 00600eb7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00600eb9
    PUSH 0x2                            ; 00600ebc
    ADD EBX,EDX                         ; 00600ebe
    PUSH EBX                            ; 00600ec0
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00600ec1
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
        ;   Label: LAB_00600ec1
    ADD ESP,0x8                         ; 00600ec6
        ;   Label: LAB_00600ec6
    POP EBP                             ; 00600ec9
    POP EDI                             ; 00600eca
    POP ESI                             ; 00600ecb
    POP EBX                             ; 00600ecc
    RET                                 ; 00600ecd
    PUSH 0x2                            ; 00600ece
        ;   Label: LAB_00600ece
    PUSH EAX                            ; 00600ed0
    JMP 0x00600ec1                      ; 00600ed1
        ;   XREF to: 00600ec1 (UNCONDITIONAL_JUMP)  ; LAB_00600ec1
    MOV EAX,dword ptr [EBX]             ; 00600ed3
        ;   Label: LAB_00600ed3
    MOV EBP,dword ptr [EAX + 0x4]       ; 00600ed5
    PUSH 0x0                            ; 00600ed8
    ADD EBX,EBP                         ; 00600eda
    PUSH EBX                            ; 00600edc
    CALL crt_stdio.c_clear_and_preserve_state_FUN_00600e64 ; 00600edd
        ;   XREF to: 00600e64 (UNCONDITIONAL_CALL)  ; uint crt_stdio.c_clear_and_preserve_state_FUN_00600e64(FileEmbeddedData * embedded_data, uint error_code)
    JMP 0x00600ec6                      ; 00600ee2
        ;   XREF to: 00600ec6 (UNCONDITIONAL_JUMP)  ; LAB_00600ec6

