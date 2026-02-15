; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_remove_FUN_005ff9d0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[34]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e17ce
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e1116
;   core_msnedit.cpp_CDemonMission_FUN_0053bd80 at 0053be9e
;   core_msnedit.cpp_CDemonMission_FUN_0053c140 at 0053c14c
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539104
;   core_msnedit.cpp_CDemonMission_playMission_FUN_00538ba0 at 00538d1f
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 0053850e
;   core_netgame.cpp_CNetGame_FUN_0053f780 at 0053f787
;   core_setedit.cpp_CDemonSet_FUN_00578a20 at 00578b91
;   core_setedit.cpp_CDemonSet_FUN_0057e7c0 at 0057f4f0
;   ... and 24 more
;
; Called Functions:
;   crt_stdio.c_remove_FUN_00606600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ff9d0
        ;   Label: crt_stdio.c_remove_FUN_005ff9d0
    PUSH EDX                            ; 005ff9d4
    CALL crt_stdio.c_remove_FUN_00606600 ; 005ff9d5
        ;   XREF to: 00606600 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_00606600(char * filename)
    ADD ESP,0x4                         ; 005ff9da
    RET                                 ; 005ff9dd

