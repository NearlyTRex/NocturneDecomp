; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_ctype_c_toupper_FUN_005ff9e0(int c)
;
; Parameters:
; int              Stack[0x4]:4   c
;
; XREF[38]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443157
;   core_event.cpp_CEventList_FUN_004aacc0 at 004aae5c
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be3ca
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004dee80
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004dd9d0 at 004dda0b
;   core_game.cpp_checkCheatCode_FUN_004dd7f0 at 004dd828
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005074fd
;   core_script.cpp_CCmdParse_parse_FUN_00561fd0 at 00562181
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 00594994
;   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 at 005dc392
;   ... and 28 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff9e0
        ;   Label: crt_ctype.c_toupper_FUN_005ff9e0
    CMP EAX,0x61                        ; 005ff9e4
    JL 0x005ff9f1                       ; 005ff9e7
        ;   XREF to: 005ff9f1 (CONDITIONAL_JUMP)  ; LAB_005ff9f1
    CMP EAX,0x7a                        ; 005ff9e9
    JG 0x005ff9f1                       ; 005ff9ec
        ;   XREF to: 005ff9f1 (CONDITIONAL_JUMP)  ; LAB_005ff9f1
    SUB EAX,0x20                        ; 005ff9ee
    RET                                 ; 005ff9f1
        ;   Label: LAB_005ff9f1

