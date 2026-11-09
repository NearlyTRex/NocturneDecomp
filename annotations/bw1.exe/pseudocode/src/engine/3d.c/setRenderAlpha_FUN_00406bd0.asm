; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
;
; Parameters:
; int              Stack[0x4]:4   alpha_color_value
;
; XREF[26]:
;   core_baron.cpp_FUN_004101f0 at 00410285
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d8f94
;   core_game.cpp_FUN_004cc2b0 at 004cc385
;   core_game.cpp_FUN_004ccc40 at 004ccc5c
;   core_game.cpp_FUN_004d8700 at 004d89d0
;   core_game.cpp_FUN_004d8a90 at 004d8d81
;   core_inv.cpp_FUN_004fae10 at 004fb6b2
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20 at 00509eed
;   core_script.cpp_FUN_005439b0 at 00543b59
;   engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0 at 00406140
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_006104f0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00713a80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406bd0
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00406bd0
    SAR EDX,0x8                         ; 00406bd4
    TEST EDX,EDX                        ; 00406bd7
    JL 0x00406c11                       ; 00406bd9
        ;   XREF to: 00406c11 (CONDITIONAL_JUMP)  ; LAB_00406c11
    CMP EDX,0xff                        ; 00406bdb
    JLE 0x00406be8                      ; 00406be1
        ;   XREF to: 00406be8 (CONDITIONAL_JUMP)  ; LAB_00406be8
    MOV EDX,0xff                        ; 00406be3
    MOV EAX,EDX                         ; 00406be8
        ;   Label: LAB_00406be8
    MOV ECX,EDX                         ; 00406bea
    SHL EAX,0x8                         ; 00406bec
    OR ECX,EAX                          ; 00406bef
    MOV EAX,EDX                         ; 00406bf1
    SHL EAX,0x10                        ; 00406bf3
    OR ECX,EAX                          ; 00406bf6
    MOV EAX,ECX                         ; 00406bf8
    XOR EAX,0xffffff                    ; 00406bfa
    MOV dword ptr [0x006104f0],ECX      ; 00406bff | DAT_006104f0
    MOV [0x00713a80],EAX                ; 00406c05 | DAT_00713a80
    MOV dword ptr [0x0061b4b8],EDX      ; 00406c0a | DAT_0061b4b8
    RET                                 ; 00406c10
    XOR EDX,EDX                         ; 00406c11
        ;   Label: LAB_00406c11
    JMP 0x00406be8                      ; 00406c13
        ;   XREF to: 00406be8 (UNCONDITIONAL_JUMP)  ; LAB_00406be8

