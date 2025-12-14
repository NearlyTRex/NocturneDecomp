; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db26a
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2253
;   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 at 0053cfa4
;   core_script.cpp_CScript_FreeSomething1_FUN_00559870 at 005598ac
;   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 at 0055a157
;   core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0 at 0055a4d3
;   core_script.cpp_FUN_00566080 at 005660f4
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 at 00576e87
;   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 at 00578686
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 at 004a3c94
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623d8c
;   TerminatedCString s_shape_edittool_cpp_00623da2
;
; Called Functions:
;   shape_edittool.cpp_CStrList_clear_FUN_004a2b10
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5770
        ;   Label: shape_edittool.cpp_CPickList_clear_FUN_004a5770
    PUSH ESI                            ; 004a5771
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a5772
    MOV EDX,dword ptr [EBX + 0x198]     ; 004a5776
    TEST EDX,EDX                        ; 004a577c
    JNZ 0x004a57aa                      ; 004a577e
        ;   XREF to: 004a57aa (CONDITIONAL_JUMP)  ; LAB_004a57aa
    MOV ESI,dword ptr [EBX + 0x1a0]     ; 004a5780
        ;   Label: LAB_004a5780
    MOV dword ptr [EBX + 0x194],0x0     ; 004a5786
    TEST ESI,ESI                        ; 004a5790
    JNZ 0x004a57c9                      ; 004a5792
        ;   XREF to: 004a57c9 (CONDITIONAL_JUMP)  ; LAB_004a57c9
    PUSH EBX                            ; 004a5794
        ;   Label: LAB_004a5794
    MOV dword ptr [EBX + 0x19c],0x0     ; 004a5795
    CALL shape_edittool.cpp_CStrList_clear_FUN_004a2b10 ; 004a579f
        ;   XREF to: 004a2b10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_004a2b10(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004a57a4
    POP ESI                             ; 004a57a7
    POP EBX                             ; 004a57a8
    RET                                 ; 004a57a9
    PUSH 0x1080                         ; 004a57aa
        ;   Label: LAB_004a57aa
    PUSH 0x623d8c                       ; 004a57af | = "..\\shape\\edittool.cpp"
    PUSH EDX                            ; 004a57b4
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a57b5
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a57ba
    MOV dword ptr [EBX + 0x198],0x0     ; 004a57bd
    JMP 0x004a5780                      ; 004a57c7
        ;   XREF to: 004a5780 (UNCONDITIONAL_JUMP)  ; LAB_004a5780
    PUSH 0x1085                         ; 004a57c9
        ;   Label: LAB_004a57c9
    PUSH 0x623da2                       ; 004a57ce | = "..\\shape\\edittool.cpp"
    PUSH ESI                            ; 004a57d3
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004a57d4
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004a57d9
    MOV dword ptr [EBX + 0x1a0],0x0     ; 004a57dc
    JMP 0x004a5794                      ; 004a57e6
        ;   XREF to: 004a5794 (UNCONDITIONAL_JUMP)  ; LAB_004a5794

