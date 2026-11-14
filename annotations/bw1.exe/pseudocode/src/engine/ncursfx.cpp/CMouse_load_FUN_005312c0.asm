; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_005312c0(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503977
;
; Referenced Globals:
;   TerminatedCString s_crsr_d_005ec6eb
;   TerminatedCString s_flame_d_005ec6f2
;   TerminatedCString s_crsrskll_d_005ec6fa
;   TerminatedCString s_crsrskll7_005ec705
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005312c0
        ;   Label: engine_ncursfx.cpp_CMouse_load_FUN_005312c0
    PUSH ESI                            ; 005312c1
    PUSH EDI                            ; 005312c2
    SUB ESP,0x30                        ; 005312c3
    MOV EDI,dword ptr [ESP + 0x40]      ; 005312c6
    MOV ESI,EDI                         ; 005312ca
    XOR EBX,EBX                         ; 005312cc
    INC EBX                             ; 005312ce
        ;   Label: LAB_005312ce
    PUSH EBX                            ; 005312cf
    PUSH 0x5ec6eb                       ; 005312d0 | = "crsr%d"
    LEA EAX,[ESP + 0x28]                ; 005312d5
    PUSH EAX                            ; 005312d9
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005312da
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005312df
    PUSH 0x37                           ; 005312e2
    PUSH 0x36                           ; 005312e4
    LEA EAX,[ESP + 0x28]                ; 005312e6
    PUSH EAX                            ; 005312ea
    PUSH ESI                            ; 005312eb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 005312ec
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 005312f1
    ADD ESI,0x14                        ; 005312f4
    CMP EBX,0x8                         ; 005312f7
    JL 0x005312ce                       ; 005312fa
        ;   XREF to: 005312ce (CONDITIONAL_JUMP)  ; LAB_005312ce
    LEA ESI,[EDI + 0xa0]                ; 005312fc
    XOR EBX,EBX                         ; 00531302
    INC EBX                             ; 00531304
        ;   Label: LAB_00531304
    PUSH EBX                            ; 00531305
    PUSH 0x5ec6f2                       ; 00531306 | = "flame%d"
    LEA EAX,[ESP + 0x8]                 ; 0053130b
    PUSH EAX                            ; 0053130f
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00531310
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00531315
    PUSH 0x37                           ; 00531318
    PUSH 0x36                           ; 0053131a
    LEA EAX,[ESP + 0x8]                 ; 0053131c
    PUSH EAX                            ; 00531320
    PUSH ESI                            ; 00531321
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00531322
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00531327
    ADD ESI,0x14                        ; 0053132a
    CMP EBX,0x7                         ; 0053132d
    JL 0x00531304                       ; 00531330
        ;   XREF to: 00531304 (CONDITIONAL_JUMP)  ; LAB_00531304
    LEA ESI,[EDI + 0x12c]               ; 00531332
    XOR EBX,EBX                         ; 00531338
    INC EBX                             ; 0053133a
        ;   Label: LAB_0053133a
    PUSH EBX                            ; 0053133b
    PUSH 0x5ec6fa                       ; 0053133c | = "crsrskll%d"
    LEA EAX,[ESP + 0x18]                ; 00531341
    PUSH EAX                            ; 00531345
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00531346
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053134b
    PUSH 0x37                           ; 0053134e
    PUSH 0x36                           ; 00531350
    LEA EAX,[ESP + 0x18]                ; 00531352
    PUSH EAX                            ; 00531356
    PUSH ESI                            ; 00531357
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00531358
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0053135d
    ADD ESI,0x14                        ; 00531360
    CMP EBX,0x7                         ; 00531363
    JL 0x0053133a                       ; 00531366
        ;   XREF to: 0053133a (CONDITIONAL_JUMP)  ; LAB_0053133a
    LEA EBX,[EDI + 0x1b8]               ; 00531368
    LEA ESI,[EDI + 0x258]               ; 0053136e
    PUSH 0x37                           ; 00531374
        ;   Label: LAB_00531374
    PUSH 0x36                           ; 00531376
    PUSH 0x5ec705                       ; 00531378 | = "crsrskll7"
    PUSH EBX                            ; 0053137d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 0053137e
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD EBX,0x14                        ; 00531383
    ADD ESP,0x10                        ; 00531386
    CMP EBX,ESI                         ; 00531389
    JNZ 0x00531374                      ; 0053138b
        ;   XREF to: 00531374 (CONDITIONAL_JUMP)  ; LAB_00531374
    ADD ESP,0x30                        ; 0053138d
    POP EDI                             ; 00531390
    POP ESI                             ; 00531391
    POP EBX                             ; 00531392
    LEA EAX,[EAX]                       ; 00531393
    LEA EDX,[EDX]                       ; 00531399
    NOP                                 ; 0053139f

