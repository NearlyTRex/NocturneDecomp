; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * shape_edittool_cpp_FUN_00474c90(CStrList *param_1)
;
;
; XREF[14]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049defd
;   core_game.cpp_FUN_004a4b50 at 004a4f3b
;   core_game.cpp_staticInit_FUN_0049a1e0 at 0049a223
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3af7
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d20db
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9c33
;   core_script.cpp_staticInit_FUN_004fde80 at 004fde85
;   core_sound.cpp_FUN_0052ed40 at 0052ed4c
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f8423
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 at 00470569
;   ... and 4 more
;
; Referenced Globals:
;   CPickList_full_vtable g_CPickListVTable
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450
;   shape_edittool.cpp_CStrList_ctor_FUN_00473b60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00474c90
        ;   Label: shape_edittool.cpp_FUN_00474c90
    PUSH EAX                            ; 00474c94
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00473b60 ; 00474c95
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00473b60(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00474c9a
    ADD EAX,0x138                       ; 00474c9d
    PUSH EAX                            ; 00474ca2
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450 ; 00474ca3
        ;   XREF to: 00476450 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450(CEdScrollBar * this_ptr)
    MOV dword ptr [EAX + 0xfffffed4],0x59ca94 ; 00474ca8 | g_CPickListVTable
    MOV dword ptr [EAX + 0xfffffed8],0x0 ; 00474cb2
    MOV byte ptr [EAX + 0xfffffedc],0x0 ; 00474cbc
    MOV dword ptr [EAX + 0x34],0x0      ; 00474cc3
    MOV dword ptr [EAX + 0xffffff40],0x0 ; 00474cca
    MOV dword ptr [EAX + -0x8],0x0      ; 00474cd4
    ADD ESP,0x4                         ; 00474cdb
    MOV dword ptr [EAX + -0x4],0x0      ; 00474cde
    SUB EAX,0x138                       ; 00474ce5
    RET                                 ; 00474cea

