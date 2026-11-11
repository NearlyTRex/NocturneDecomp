; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004820b0(CPickList *this_ptr,uint flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[9]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6c4e
;   core_menu.cpp_FUN_004ed260 at 004ee13e
;   core_menu.cpp_FUN_004eed60 at 004efadc
;   core_mission.cpp_FUN_004fd280 at 004fd3e8
;   core_sound.cpp_CSound_selectReverbPreset_FUN_0055b110 at 0055b17d
;   engine_pod.cpp_FUN_0051aa7e at 0051acb6
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970 at 0047cac2
;   shape_edittool.cpp_FUN_0047cb1e at 0047ce0e
;   unkaddr_0059c270.cpp_CGameHook_showDebugMenu_FUN_0059c3d0 at 0059c406
;
; Referenced Globals:
;   undefined1* g_CPickListVTable = 004820b0
;   WatcomTypeInfo g_CPickListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   shape_edittool.cpp_CEdButton_dtor_FUN_00484e50
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_00484350
;   shape_edittool.cpp_CPickList_clear_FUN_00483d10
;   shape_edittool.cpp_CStrList_dtor_FUN_00480d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004820b0
        ;   Label: shape_edittool.cpp_CPickList_dtor_FUN_004820b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004820b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004820b5
    JNZ 0x0048211b                      ; 004820ba
        ;   XREF to: 0048211b (CONDITIONAL_JUMP)  ; LAB_0048211b
    PUSH EBX                            ; 004820bc
    MOV dword ptr [EBX + 0xc],0x5f5d34  ; 004820bd | g_CPickListVTable
    CALL shape_edittool.cpp_CPickList_clear_FUN_00483d10 ; 004820c4
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00483d10(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004820c9
    PUSH 0x0                            ; 004820cc
    ADD EBX,0x2d8                       ; 004820ce
    PUSH EBX                            ; 004820d4
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00484e50 ; 004820d5
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00484e50(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004820da
    PUSH 0x0                            ; 004820dd
    SUB EAX,0xe4                        ; 004820df
    PUSH EAX                            ; 004820e4
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00484e50 ; 004820e5
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00484e50(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004820ea
    PUSH 0x0                            ; 004820ed
    SUB EAX,0x38                        ; 004820ef
    PUSH EAX                            ; 004820f2
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_00484350 ; 004820f3
        ;   XREF to: 00484350 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_00484350(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004820f8
    PUSH 0x1                            ; 004820fb
    LEA EBX,[EAX + 0xfffffe44]          ; 004820fd
    PUSH EBX                            ; 00482103
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00480d40 ; 00482104
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00480d40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00482109
    MOV DL,byte ptr [ESP + 0xc]         ; 0048210c
    MOV EBX,EAX                         ; 00482110
    TEST DL,0x2                         ; 00482112
    JNZ 0x00482136                      ; 00482115
        ;   XREF to: 00482136 (CONDITIONAL_JUMP)  ; LAB_00482136
    MOV EAX,EBX                         ; 00482117
    POP EBX                             ; 00482119
    RET                                 ; 0048211a
    PUSH 0x5f5db0                       ; 0048211b | g_CPickListTypeInfo
        ;   Label: LAB_0048211b
    PUSH EBX                            ; 00482120
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00482121
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00482126
    PUSH EAX                            ; 00482129
    CALL crt_unknown.c_FUN_005b7fce     ; 0048212a
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0048212f
    MOV EAX,EBX                         ; 00482132
    POP EBX                             ; 00482134
    RET                                 ; 00482135
    PUSH EAX                            ; 00482136
        ;   Label: LAB_00482136
    CALL crt_unknown.c_FUN_005b7fdc     ; 00482137
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0048213c
    MOV EAX,EBX                         ; 0048213f
    POP EBX                             ; 00482141
    RET                                 ; 00482142

