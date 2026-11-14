; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004ba0b0(CAlphaBitmap *param_1,char *param_2,int param_3,int param_4)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_dosio.cpp_splitPath_FUN_00479580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba0b0
        ;   Label: core_flashlit.cpp_FUN_004ba0b0
    PUSH ESI                            ; 004ba0b1
    SUB ESP,0x200                       ; 004ba0b2
    PUSH 0x0                            ; 004ba0b8
    LEA EAX,[ESP + 0x4]                 ; 004ba0ba
    PUSH EAX                            ; 004ba0be
    PUSH 0x0                            ; 004ba0bf
    PUSH 0x0                            ; 004ba0c1
    MOV EDX,dword ptr [ESP + 0x220]     ; 004ba0c3
    PUSH EDX                            ; 004ba0ca
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004ba0cb
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ba0d0
    PUSH 0x1cc4208                      ; 004ba0d3
    LEA EAX,[ESP + 0x4]                 ; 004ba0d8
    PUSH EAX                            ; 004ba0dc
    PUSH 0x5df825                       ; 004ba0dd
    LEA EAX,[ESP + 0x10c]               ; 004ba0e2
    PUSH EAX                            ; 004ba0e9
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ba0ea
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ba0ef
    MOV ECX,dword ptr [ESP + 0x218]     ; 004ba0f2
    PUSH ECX                            ; 004ba0f9
    MOV EBX,dword ptr [ESP + 0x218]     ; 004ba0fa
    PUSH EBX                            ; 004ba101
    LEA EAX,[ESP + 0x108]               ; 004ba102
    PUSH EAX                            ; 004ba109
    MOV ESI,dword ptr [ESP + 0x218]     ; 004ba10a
    PUSH ESI                            ; 004ba111
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004ba112
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ba117
    ADD ESP,0x200                       ; 004ba11a
    POP ESI                             ; 004ba120
    POP EBX                             ; 004ba121
    RET                                 ; 004ba122

