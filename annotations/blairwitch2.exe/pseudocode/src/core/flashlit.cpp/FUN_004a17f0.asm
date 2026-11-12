; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a17f0(CAlphaBitmap *param_1,char *param_2,int param_3,int param_4)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a17f0
        ;   Label: core_flashlit.cpp_FUN_004a17f0
    PUSH ESI                            ; 004a17f1
    SUB ESP,0x200                       ; 004a17f2
    PUSH 0x0                            ; 004a17f8
    LEA EAX,[ESP + 0x4]                 ; 004a17fa
    PUSH EAX                            ; 004a17fe
    PUSH 0x0                            ; 004a17ff
    PUSH 0x0                            ; 004a1801
    MOV EDX,dword ptr [ESP + 0x220]     ; 004a1803
    PUSH EDX                            ; 004a180a
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a180b
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a1810
    PUSH 0x1cab788                      ; 004a1813
    LEA EAX,[ESP + 0x4]                 ; 004a1818
    PUSH EAX                            ; 004a181c
    PUSH 0x5d59e3                       ; 004a181d
    LEA EAX,[ESP + 0x10c]               ; 004a1822
    PUSH EAX                            ; 004a1829
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a182a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a182f
    MOV ECX,dword ptr [ESP + 0x218]     ; 004a1832
    PUSH ECX                            ; 004a1839
    MOV EBX,dword ptr [ESP + 0x218]     ; 004a183a
    PUSH EBX                            ; 004a1841
    LEA EAX,[ESP + 0x108]               ; 004a1842
    PUSH EAX                            ; 004a1849
    MOV ESI,dword ptr [ESP + 0x218]     ; 004a184a
    PUSH ESI                            ; 004a1851
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a1852
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a1857
    ADD ESP,0x200                       ; 004a185a
    POP ESI                             ; 004a1860
    POP EBX                             ; 004a1861
    RET                                 ; 004a1862

