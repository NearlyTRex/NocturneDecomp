; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_toupper_FUN_00565e20(int c)
;
; Parameters:
; int              Stack[0x4]:4   c
;
; XREF[13]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047adec
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0683
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004a0430 at 004a046b
;   core_game.cpp_checkCheatCode_FUN_004a0260 at 004a0298
;   core_main.c_showDeveloperToolsMenu_FUN_004c8510 at 004c8567
;   core_texlist.cpp_CTextureList_load_FUN_00544950 at 00544b18
;   crt_env.c_findEnvVar_FUN_00573ca0 at 00573cc1
;   crt_unknown.c_FUN_00569f8c at 00569f9c
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456a9a
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0 at 004c41db
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565e20
        ;   Label: crt_ctype.c_toupper_FUN_00565e20
    CMP EAX,0x61                        ; 00565e24
    JL 0x00565e31                       ; 00565e27
        ;   XREF to: 00565e31 (CONDITIONAL_JUMP)  ; LAB_00565e31
    CMP EAX,0x7a                        ; 00565e29
    JG 0x00565e31                       ; 00565e2c
        ;   XREF to: 00565e31 (CONDITIONAL_JUMP)  ; LAB_00565e31
    SUB EAX,0x20                        ; 00565e2e
    RET                                 ; 00565e31
        ;   Label: LAB_00565e31

