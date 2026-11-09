; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_005100b0(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e4d67
;
; Referenced Globals:
;   TerminatedCString s_crsr_d_005e1490
;   TerminatedCString s_flame_d_005e1497
;   TerminatedCString s_crsrskll_d_005e149f
;   TerminatedCString s_crsrskll7_005e14aa
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005100b0
        ;   Label: engine_ncursfx.cpp_CMouse_load_FUN_005100b0
    PUSH ESI                            ; 005100b1
    PUSH EDI                            ; 005100b2
    SUB ESP,0x30                        ; 005100b3
    MOV EDI,dword ptr [ESP + 0x40]      ; 005100b6
    MOV ESI,EDI                         ; 005100ba
    XOR EBX,EBX                         ; 005100bc
    INC EBX                             ; 005100be
        ;   Label: LAB_005100be
    PUSH EBX                            ; 005100bf
    PUSH 0x5e1490                       ; 005100c0 | = "crsr%d"
    LEA EAX,[ESP + 0x28]                ; 005100c5
    PUSH EAX                            ; 005100c9
    CALL crt_unknown.c_FUN_005b7790     ; 005100ca
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 005100cf
    PUSH 0x37                           ; 005100d2
    PUSH 0x36                           ; 005100d4
    LEA EAX,[ESP + 0x28]                ; 005100d6
    PUSH EAX                            ; 005100da
    PUSH ESI                            ; 005100db
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 005100dc
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 005100e1
    ADD ESI,0x14                        ; 005100e4
    CMP EBX,0x8                         ; 005100e7
    JL 0x005100be                       ; 005100ea
        ;   XREF to: 005100be (CONDITIONAL_JUMP)  ; LAB_005100be
    LEA ESI,[EDI + 0xa0]                ; 005100ec
    XOR EBX,EBX                         ; 005100f2
    INC EBX                             ; 005100f4
        ;   Label: LAB_005100f4
    PUSH EBX                            ; 005100f5
    PUSH 0x5e1497                       ; 005100f6 | = "flame%d"
    LEA EAX,[ESP + 0x8]                 ; 005100fb
    PUSH EAX                            ; 005100ff
    CALL crt_unknown.c_FUN_005b7790     ; 00510100
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00510105
    PUSH 0x37                           ; 00510108
    PUSH 0x36                           ; 0051010a
    LEA EAX,[ESP + 0x8]                 ; 0051010c
    PUSH EAX                            ; 00510110
    PUSH ESI                            ; 00510111
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 00510112
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00510117
    ADD ESI,0x14                        ; 0051011a
    CMP EBX,0x7                         ; 0051011d
    JL 0x005100f4                       ; 00510120
        ;   XREF to: 005100f4 (CONDITIONAL_JUMP)  ; LAB_005100f4
    LEA ESI,[EDI + 0x12c]               ; 00510122
    XOR EBX,EBX                         ; 00510128
    INC EBX                             ; 0051012a
        ;   Label: LAB_0051012a
    PUSH EBX                            ; 0051012b
    PUSH 0x5e149f                       ; 0051012c | = "crsrskll%d"
    LEA EAX,[ESP + 0x18]                ; 00510131
    PUSH EAX                            ; 00510135
    CALL crt_unknown.c_FUN_005b7790     ; 00510136
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0051013b
    PUSH 0x37                           ; 0051013e
    PUSH 0x36                           ; 00510140
    LEA EAX,[ESP + 0x18]                ; 00510142
    PUSH EAX                            ; 00510146
    PUSH ESI                            ; 00510147
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 00510148
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0051014d
    ADD ESI,0x14                        ; 00510150
    CMP EBX,0x7                         ; 00510153
    JL 0x0051012a                       ; 00510156
        ;   XREF to: 0051012a (CONDITIONAL_JUMP)  ; LAB_0051012a
    LEA EBX,[EDI + 0x1b8]               ; 00510158
    LEA ESI,[EDI + 0x258]               ; 0051015e
    PUSH 0x37                           ; 00510164
        ;   Label: LAB_00510164
    PUSH 0x36                           ; 00510166
    PUSH 0x5e14aa                       ; 00510168 | = "crsrskll7"
    PUSH EBX                            ; 0051016d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 0051016e
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD EBX,0x14                        ; 00510173
    ADD ESP,0x10                        ; 00510176
    CMP EBX,ESI                         ; 00510179
    JNZ 0x00510164                      ; 0051017b
        ;   XREF to: 00510164 (CONDITIONAL_JUMP)  ; LAB_00510164
    ADD ESP,0x30                        ; 0051017d
    POP EDI                             ; 00510180
    POP ESI                             ; 00510181
    POP EBX                             ; 00510182
    LEA EAX,[EAX]                       ; 00510183
    LEA EDX,[EDX]                       ; 00510189
    NOP                                 ; 0051018f

