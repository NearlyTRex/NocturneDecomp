; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_free_FUN_00521d50(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_menu.cpp_FUN_0050c990 at 0050cc51
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050d007
;   core_moon.cpp_CMoon_dtor_FUN_00521c00 at 00521c06
;
; Called Functions:
;   core_dmodel.cpp_FUN_00467160
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521d50
        ;   Label: core_moon.cpp_CMoon_free_FUN_00521d50
    PUSH EDI                            ; 00521d51
    MOV EDI,dword ptr [ESP + 0xc]       ; 00521d52
    CMP dword ptr [EDI],0x0             ; 00521d56
    JNZ 0x00521d88                      ; 00521d59
        ;   XREF to: 00521d88 (CONDITIONAL_JUMP)  ; LAB_00521d88
    LEA EBX,[EDI + 0x8]                 ; 00521d5b
        ;   Label: LAB_00521d5b
    PUSH EBX                            ; 00521d5e
    CALL core_dmodel.cpp_FUN_00467160   ; 00521d5f
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 00521d64
    LEA EBX,[EDI + 0x3a0]               ; 00521d67
    PUSH EBX                            ; 00521d6d
    CALL core_dmodel.cpp_FUN_00467160   ; 00521d6e
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 00521d73
    ADD EDI,0x738                       ; 00521d76
    PUSH EDI                            ; 00521d7c
    CALL core_dmodel.cpp_FUN_00467160   ; 00521d7d
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 00521d82
    POP EDI                             ; 00521d85
    POP EBX                             ; 00521d86
    RET                                 ; 00521d87
    PUSH ESI                            ; 00521d88
        ;   Label: LAB_00521d88
    PUSH 0x1d33ce4                      ; 00521d89
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00521d8e
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00521d93
    MOV EBX,0x1d33cf8                   ; 00521d96
    PUSH 0x1d33f50                      ; 00521d9b
    LEA ESI,[EBX + 0x258]               ; 00521da0
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00521da6
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00521dab
    PUSH EBX                            ; 00521dae
        ;   Label: LAB_00521dae
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 00521daf
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 00521db4
    ADD ESP,0x4                         ; 00521db7
    CMP EBX,ESI                         ; 00521dba
    JNZ 0x00521dae                      ; 00521dbc
        ;   XREF to: 00521dae (CONDITIONAL_JUMP)  ; LAB_00521dae
    MOV dword ptr [EDI],0x0             ; 00521dbe
    POP ESI                             ; 00521dc4
    JMP 0x00521d5b                      ; 00521dc5
        ;   XREF to: 00521d5b (UNCONDITIONAL_JUMP)  ; LAB_00521d5b

