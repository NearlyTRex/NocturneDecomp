; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00508b90(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e4bb7
;
; Referenced Globals:
;   TerminatedCString s_crsr_d_005cb4fc
;   TerminatedCString s_flame_d_005cb503
;   TerminatedCString s_crsrskll_d_005cb50b
;   TerminatedCString s_crsrskll7_005cb516
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508b90
        ;   Label: engine_ncursfx.cpp_CMouse_load_FUN_00508b90
    PUSH ESI                            ; 00508b91
    PUSH EDI                            ; 00508b92
    SUB ESP,0x30                        ; 00508b93
    MOV EDI,dword ptr [ESP + 0x40]      ; 00508b96
    MOV ESI,EDI                         ; 00508b9a
    XOR EBX,EBX                         ; 00508b9c
    INC EBX                             ; 00508b9e
        ;   Label: LAB_00508b9e
    PUSH EBX                            ; 00508b9f
    PUSH 0x5cb4fc                       ; 00508ba0 | = "crsr%d"
    LEA EAX,[ESP + 0x28]                ; 00508ba5
    PUSH EAX                            ; 00508ba9
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00508baa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00508baf
    PUSH 0x37                           ; 00508bb2
    PUSH 0x36                           ; 00508bb4
    LEA EAX,[ESP + 0x28]                ; 00508bb6
    PUSH EAX                            ; 00508bba
    PUSH ESI                            ; 00508bbb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00508bbc
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00508bc1
    ADD ESI,0x14                        ; 00508bc4
    CMP EBX,0x8                         ; 00508bc7
    JL 0x00508b9e                       ; 00508bca
        ;   XREF to: 00508b9e (CONDITIONAL_JUMP)  ; LAB_00508b9e
    LEA ESI,[EDI + 0xa0]                ; 00508bcc
    XOR EBX,EBX                         ; 00508bd2
    INC EBX                             ; 00508bd4
        ;   Label: LAB_00508bd4
    PUSH EBX                            ; 00508bd5
    PUSH 0x5cb503                       ; 00508bd6 | = "flame%d"
    LEA EAX,[ESP + 0x8]                 ; 00508bdb
    PUSH EAX                            ; 00508bdf
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00508be0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00508be5
    PUSH 0x37                           ; 00508be8
    PUSH 0x36                           ; 00508bea
    LEA EAX,[ESP + 0x8]                 ; 00508bec
    PUSH EAX                            ; 00508bf0
    PUSH ESI                            ; 00508bf1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00508bf2
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00508bf7
    ADD ESI,0x14                        ; 00508bfa
    CMP EBX,0x7                         ; 00508bfd
    JL 0x00508bd4                       ; 00508c00
        ;   XREF to: 00508bd4 (CONDITIONAL_JUMP)  ; LAB_00508bd4
    LEA ESI,[EDI + 0x12c]               ; 00508c02
    XOR EBX,EBX                         ; 00508c08
    INC EBX                             ; 00508c0a
        ;   Label: LAB_00508c0a
    PUSH EBX                            ; 00508c0b
    PUSH 0x5cb50b                       ; 00508c0c | = "crsrskll%d"
    LEA EAX,[ESP + 0x18]                ; 00508c11
    PUSH EAX                            ; 00508c15
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00508c16
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00508c1b
    PUSH 0x37                           ; 00508c1e
    PUSH 0x36                           ; 00508c20
    LEA EAX,[ESP + 0x18]                ; 00508c22
    PUSH EAX                            ; 00508c26
    PUSH ESI                            ; 00508c27
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00508c28
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00508c2d
    ADD ESI,0x14                        ; 00508c30
    CMP EBX,0x7                         ; 00508c33
    JL 0x00508c0a                       ; 00508c36
        ;   XREF to: 00508c0a (CONDITIONAL_JUMP)  ; LAB_00508c0a
    LEA EBX,[EDI + 0x1b8]               ; 00508c38
    LEA ESI,[EDI + 0x258]               ; 00508c3e
    PUSH 0x37                           ; 00508c44
        ;   Label: LAB_00508c44
    PUSH 0x36                           ; 00508c46
    PUSH 0x5cb516                       ; 00508c48 | = "crsrskll7"
    PUSH EBX                            ; 00508c4d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 00508c4e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD EBX,0x14                        ; 00508c53
    ADD ESP,0x10                        ; 00508c56
    CMP EBX,ESI                         ; 00508c59
    JNZ 0x00508c44                      ; 00508c5b
        ;   XREF to: 00508c44 (CONDITIONAL_JUMP)  ; LAB_00508c44
    ADD ESP,0x30                        ; 00508c5d
    POP EDI                             ; 00508c60
    POP ESI                             ; 00508c61
    POP EBX                             ; 00508c62
    LEA EAX,[EAX]                       ; 00508c63
    LEA EDX,[EDX]                       ; 00508c69
    NOP                                 ; 00508c6f

