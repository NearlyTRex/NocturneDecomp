; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_toupper_FUN_005a4120(int c)
;
; Parameters:
; int              Stack[0x4]:4   c
;
; XREF[16]:
;   core_event.cpp_FUN_0048c2e0 at 0048c4fc
;   core_flashlit.cpp_FUN_004a7950 at 004a7981
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aab71
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bb233
;   core_game.cpp_checkCheatCode_FUN_004baf50 at 004baf88
;   core_main.c_FUN_004e4400 at 004e4457
;   core_texlist.cpp_CTextureList_load_FUN_005690c0 at 00569288
;   crt_unknown.c_FUN_005a70dc at 005a70ec
;   crt_unknown.c_FUN_005b1610 at 005b1631
;   engine_dosio.cpp_FUN_004659c0 at 004659fa
;   ... and 6 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4120
        ;   Label: crt_ctype.c_toupper_FUN_005a4120
    CMP EAX,0x61                        ; 005a4124
    JL 0x005a4131                       ; 005a4127
        ;   XREF to: 005a4131 (CONDITIONAL_JUMP)  ; LAB_005a4131
    CMP EAX,0x7a                        ; 005a4129
    JG 0x005a4131                       ; 005a412c
        ;   XREF to: 005a4131 (CONDITIONAL_JUMP)  ; LAB_005a4131
    SUB EAX,0x20                        ; 005a412e
    RET                                 ; 005a4131
        ;   Label: LAB_005a4131

