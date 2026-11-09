; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
;
; Parameters:
; int              Stack[0x4]:4   alpha_color_value
;
; XREF[25]:
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c03a0
;   core_game.cpp_FUN_004b47d0 at 004b4a25
;   core_game.cpp_FUN_004b51e0 at 004b51fc
;   core_game.cpp_FUN_004bfb50 at 004bfe20
;   core_game.cpp_FUN_004bfee0 at 004c01d1
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004de21b
;   core_menu.cpp_FUN_004e7860 at 004e796c
;   core_script.cpp_FUN_00528fc0 at 00529169
;   engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0 at 0040613b
;   engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0 at 0040592a
;   ... and 15 more
;
; Referenced Globals:
;   undefined4 DAT_005f07c0
;   undefined4 DAT_005fba38
;   undefined4 DAT_00730400
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406bf0
        ;   Label: engine_3d.c_setRenderAlpha_FUN_00406bf0
    SAR EDX,0x8                         ; 00406bf4
    TEST EDX,EDX                        ; 00406bf7
    JL 0x00406c31                       ; 00406bf9
        ;   XREF to: 00406c31 (CONDITIONAL_JUMP)  ; LAB_00406c31
    CMP EDX,0xff                        ; 00406bfb
    JLE 0x00406c08                      ; 00406c01
        ;   XREF to: 00406c08 (CONDITIONAL_JUMP)  ; LAB_00406c08
    MOV EDX,0xff                        ; 00406c03
    MOV EAX,EDX                         ; 00406c08
        ;   Label: LAB_00406c08
    MOV ECX,EDX                         ; 00406c0a
    SHL EAX,0x8                         ; 00406c0c
    OR ECX,EAX                          ; 00406c0f
    MOV EAX,EDX                         ; 00406c11
    SHL EAX,0x10                        ; 00406c13
    OR ECX,EAX                          ; 00406c16
    MOV EAX,ECX                         ; 00406c18
    XOR EAX,0xffffff                    ; 00406c1a
    MOV dword ptr [0x005f07c0],ECX      ; 00406c1f | DAT_005f07c0
    MOV [0x00730400],EAX                ; 00406c25 | DAT_00730400
    MOV dword ptr [0x005fba38],EDX      ; 00406c2a | DAT_005fba38
    RET                                 ; 00406c30
    XOR EDX,EDX                         ; 00406c31
        ;   Label: LAB_00406c31
    JMP 0x00406c08                      ; 00406c33
        ;   XREF to: 00406c08 (UNCONDITIONAL_JUMP)  ; LAB_00406c08

