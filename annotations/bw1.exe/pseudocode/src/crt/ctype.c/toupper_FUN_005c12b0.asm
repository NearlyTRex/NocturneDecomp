; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_toupper_FUN_005c12b0(int c)
;
; Parameters:
; int              Stack[0x4]:4   c
;
; XREF[17]:
;   core_event.cpp_FUN_004a1d00 at 004a1f1c
;   core_flashlit.cpp_FUN_004b9d10 at 004b9d41
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bcef3
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d28e3
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004d2690 at 004d26cb
;   core_game.cpp_checkCheatCode_FUN_004d24c0 at 004d24f8
;   core_main.c_FUN_005031c0 at 0050321c
;   core_texlist.cpp_CTextureList_load_FUN_005960d0 at 00596298
;   crt_unknown.c_FUN_005c426c at 005c427c
;   crt_unknown.c_FUN_005ce880 at 005ce8a1
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c12b0
        ;   Label: crt_ctype.c_toupper_FUN_005c12b0
    CMP EAX,0x61                        ; 005c12b4
    JL 0x005c12c1                       ; 005c12b7
        ;   XREF to: 005c12c1 (CONDITIONAL_JUMP)  ; LAB_005c12c1
    CMP EAX,0x7a                        ; 005c12b9
    JG 0x005c12c1                       ; 005c12bc
        ;   XREF to: 005c12c1 (CONDITIONAL_JUMP)  ; LAB_005c12c1
    SUB EAX,0x20                        ; 005c12be
    RET                                 ; 005c12c1
        ;   Label: LAB_005c12c1

