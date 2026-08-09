; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_004ee5a0(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c8d2c
;
; Referenced Globals:
;   TerminatedCString s_crsr_d_0058ca97
;   TerminatedCString s_flame_d_0058ca9e
;   TerminatedCString s_crsrskll_d_0058caa6
;   TerminatedCString s_crsrskll7_0058cab1
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee5a0
        ;   Label: engine_ncursfx.cpp_CMouse_load_FUN_004ee5a0
    PUSH ESI                            ; 004ee5a1
    PUSH EDI                            ; 004ee5a2
    SUB ESP,0x30                        ; 004ee5a3
    MOV EDI,dword ptr [ESP + 0x40]      ; 004ee5a6
    MOV ESI,EDI                         ; 004ee5aa
    XOR EBX,EBX                         ; 004ee5ac
    INC EBX                             ; 004ee5ae
        ;   Label: LAB_004ee5ae
    PUSH EBX                            ; 004ee5af
    PUSH 0x58ca97                       ; 004ee5b0 | = "crsr%d"
    LEA EAX,[ESP + 0x28]                ; 004ee5b5
    PUSH EAX                            ; 004ee5b9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004ee5ba
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ee5bf
    PUSH 0x37                           ; 004ee5c2
    PUSH 0x36                           ; 004ee5c4
    LEA EAX,[ESP + 0x28]                ; 004ee5c6
    PUSH EAX                            ; 004ee5ca
    PUSH ESI                            ; 004ee5cb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004ee5cc
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee5d1
    ADD ESI,0x14                        ; 004ee5d4
    CMP EBX,0x8                         ; 004ee5d7
    JL 0x004ee5ae                       ; 004ee5da
        ;   XREF to: 004ee5ae (CONDITIONAL_JUMP)  ; LAB_004ee5ae
    LEA ESI,[EDI + 0xa0]                ; 004ee5dc
    XOR EBX,EBX                         ; 004ee5e2
    INC EBX                             ; 004ee5e4
        ;   Label: LAB_004ee5e4
    PUSH EBX                            ; 004ee5e5
    PUSH 0x58ca9e                       ; 004ee5e6 | = "flame%d"
    LEA EAX,[ESP + 0x8]                 ; 004ee5eb
    PUSH EAX                            ; 004ee5ef
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004ee5f0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ee5f5
    PUSH 0x37                           ; 004ee5f8
    PUSH 0x36                           ; 004ee5fa
    LEA EAX,[ESP + 0x8]                 ; 004ee5fc
    PUSH EAX                            ; 004ee600
    PUSH ESI                            ; 004ee601
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004ee602
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee607
    ADD ESI,0x14                        ; 004ee60a
    CMP EBX,0x7                         ; 004ee60d
    JL 0x004ee5e4                       ; 004ee610
        ;   XREF to: 004ee5e4 (CONDITIONAL_JUMP)  ; LAB_004ee5e4
    LEA ESI,[EDI + 0x12c]               ; 004ee612
    XOR EBX,EBX                         ; 004ee618
    INC EBX                             ; 004ee61a
        ;   Label: LAB_004ee61a
    PUSH EBX                            ; 004ee61b
    PUSH 0x58caa6                       ; 004ee61c | = "crsrskll%d"
    LEA EAX,[ESP + 0x18]                ; 004ee621
    PUSH EAX                            ; 004ee625
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004ee626
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ee62b
    PUSH 0x37                           ; 004ee62e
    PUSH 0x36                           ; 004ee630
    LEA EAX,[ESP + 0x18]                ; 004ee632
    PUSH EAX                            ; 004ee636
    PUSH ESI                            ; 004ee637
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004ee638
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004ee63d
    ADD ESI,0x14                        ; 004ee640
    CMP EBX,0x7                         ; 004ee643
    JL 0x004ee61a                       ; 004ee646
        ;   XREF to: 004ee61a (CONDITIONAL_JUMP)  ; LAB_004ee61a
    LEA EBX,[EDI + 0x1b8]               ; 004ee648
    LEA ESI,[EDI + 0x258]               ; 004ee64e
    PUSH 0x37                           ; 004ee654
        ;   Label: LAB_004ee654
    PUSH 0x36                           ; 004ee656
    PUSH 0x58cab1                       ; 004ee658 | = "crsrskll7"
    PUSH EBX                            ; 004ee65d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004ee65e
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD EBX,0x14                        ; 004ee663
    ADD ESP,0x10                        ; 004ee666
    CMP EBX,ESI                         ; 004ee669
    JNZ 0x004ee654                      ; 004ee66b
        ;   XREF to: 004ee654 (CONDITIONAL_JUMP)  ; LAB_004ee654
    ADD ESP,0x30                        ; 004ee66d
    POP EDI                             ; 004ee670
    POP ESI                             ; 004ee671
    POP EBX                             ; 004ee672
    LEA EAX,[EAX]                       ; 004ee673
    LEA EDX,[EDX]                       ; 004ee679
    NOP                                 ; 004ee67f

