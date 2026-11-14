; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a7cf0(CAlphaBitmap *param_1,char *param_2,int param_3,int param_4)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   engine_dosio.cpp_splitPath_FUN_00465e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7cf0
        ;   Label: core_flashlit.cpp_FUN_004a7cf0
    PUSH ESI                            ; 004a7cf1
    SUB ESP,0x200                       ; 004a7cf2
    PUSH 0x0                            ; 004a7cf8
    LEA EAX,[ESP + 0x4]                 ; 004a7cfa
    PUSH EAX                            ; 004a7cfe
    PUSH 0x0                            ; 004a7cff
    PUSH 0x0                            ; 004a7d01
    MOV EDX,dword ptr [ESP + 0x220]     ; 004a7d03
    PUSH EDX                            ; 004a7d0a
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004a7d0b
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a7d10
    PUSH 0x1d0cfa8                      ; 004a7d13
    LEA EAX,[ESP + 0x4]                 ; 004a7d18
    PUSH EAX                            ; 004a7d1c
    PUSH 0x5c0d12                       ; 004a7d1d
    LEA EAX,[ESP + 0x10c]               ; 004a7d22
    PUSH EAX                            ; 004a7d29
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004a7d2a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a7d2f
    MOV ECX,dword ptr [ESP + 0x218]     ; 004a7d32
    PUSH ECX                            ; 004a7d39
    MOV EBX,dword ptr [ESP + 0x218]     ; 004a7d3a
    PUSH EBX                            ; 004a7d41
    LEA EAX,[ESP + 0x108]               ; 004a7d42
    PUSH EAX                            ; 004a7d49
    MOV ESI,dword ptr [ESP + 0x218]     ; 004a7d4a
    PUSH ESI                            ; 004a7d51
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004a7d52
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a7d57
    ADD ESP,0x200                       ; 004a7d5a
    POP ESI                             ; 004a7d60
    POP EBX                             ; 004a7d61
    RET                                 ; 004a7d62

