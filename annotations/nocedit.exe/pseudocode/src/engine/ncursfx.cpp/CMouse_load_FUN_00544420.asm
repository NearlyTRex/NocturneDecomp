; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00544420(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; Local Variables:
; char[16]         Stack[-0x3c]:16  local_3c
; char[16]         Stack[-0x2c]:16  local_2c
; char[16]         Stack[-0x1c]:16  local_1c
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005081bc
;
; Referenced Globals:
;   TerminatedCString s_crsr_d_0063e2d0
;   TerminatedCString s_flame_d_0063e2d7
;   TerminatedCString s_crsrskll_d_0063e2df
;   TerminatedCString s_crsrskll7_0063e2ea
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544420
        ;   Label: engine_ncursfx.cpp_CMouse_load_FUN_00544420
    PUSH ESI                            ; 00544421
    PUSH EDI                            ; 00544422
    SUB ESP,0x30                        ; 00544423
    MOV EDI,dword ptr [ESP + 0x40]      ; 00544426
    MOV ESI,EDI                         ; 0054442a
    XOR EBX,EBX                         ; 0054442c
    INC EBX                             ; 0054442e
        ;   Label: LAB_0054442e
    PUSH EBX                            ; 0054442f
    PUSH 0x63e2d0                       ; 00544430 | = "crsr%d"
    LEA EAX,[ESP + 0x28]                ; 00544435
    PUSH EAX                            ; 00544439
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0054443a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054443f
    PUSH 0x37                           ; 00544442
    PUSH 0x36                           ; 00544444
    LEA EAX,[ESP + 0x28]                ; 00544446
    PUSH EAX                            ; 0054444a
    PUSH ESI                            ; 0054444b
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 0054444c
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00544451
    ADD ESI,0x14                        ; 00544454
    CMP EBX,0x8                         ; 00544457
    JL 0x0054442e                       ; 0054445a
        ;   XREF to: 0054442e (CONDITIONAL_JUMP)  ; LAB_0054442e
    LEA ESI,[EDI + 0xa0]                ; 0054445c
    XOR EBX,EBX                         ; 00544462
    INC EBX                             ; 00544464
        ;   Label: LAB_00544464
    PUSH EBX                            ; 00544465
    PUSH 0x63e2d7                       ; 00544466 | = "flame%d"
    LEA EAX,[ESP + 0x8]                 ; 0054446b
    PUSH EAX                            ; 0054446f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00544470
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00544475
    PUSH 0x37                           ; 00544478
    PUSH 0x36                           ; 0054447a
    LEA EAX,[ESP + 0x8]                 ; 0054447c
    PUSH EAX                            ; 00544480
    PUSH ESI                            ; 00544481
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00544482
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00544487
    ADD ESI,0x14                        ; 0054448a
    CMP EBX,0x7                         ; 0054448d
    JL 0x00544464                       ; 00544490
        ;   XREF to: 00544464 (CONDITIONAL_JUMP)  ; LAB_00544464
    LEA ESI,[EDI + 0x12c]               ; 00544492
    XOR EBX,EBX                         ; 00544498
    INC EBX                             ; 0054449a
        ;   Label: LAB_0054449a
    PUSH EBX                            ; 0054449b
    PUSH 0x63e2df                       ; 0054449c | = "crsrskll%d"
    LEA EAX,[ESP + 0x18]                ; 005444a1
    PUSH EAX                            ; 005444a5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005444a6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005444ab
    PUSH 0x37                           ; 005444ae
    PUSH 0x36                           ; 005444b0
    LEA EAX,[ESP + 0x18]                ; 005444b2
    PUSH EAX                            ; 005444b6
    PUSH ESI                            ; 005444b7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 005444b8
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 005444bd
    ADD ESI,0x14                        ; 005444c0
    CMP EBX,0x7                         ; 005444c3
    JL 0x0054449a                       ; 005444c6
        ;   XREF to: 0054449a (CONDITIONAL_JUMP)  ; LAB_0054449a
    LEA EBX,[EDI + 0x1b8]               ; 005444c8
    LEA ESI,[EDI + 0x258]               ; 005444ce
    PUSH 0x37                           ; 005444d4
        ;   Label: LAB_005444d4
    PUSH 0x36                           ; 005444d6
    PUSH 0x63e2ea                       ; 005444d8 | = "crsrskll7"
    PUSH EBX                            ; 005444dd
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 005444de
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD EBX,0x14                        ; 005444e3
    ADD ESP,0x10                        ; 005444e6
    CMP EBX,ESI                         ; 005444e9
    JNZ 0x005444d4                      ; 005444eb
        ;   XREF to: 005444d4 (CONDITIONAL_JUMP)  ; LAB_005444d4
    ADD ESP,0x30                        ; 005444ed
    POP EDI                             ; 005444f0
    POP ESI                             ; 005444f1
    POP EBX                             ; 005444f2
    LEA EAX,[EAX]                       ; 005444f3
    LEA EDX,[EDX]                       ; 005444f9
    NOP                                 ; 005444ff

