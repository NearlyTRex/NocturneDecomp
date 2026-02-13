; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c140(CDemonMission *this_ptr,int param_2)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[12]:
;   core_msnedit.cpp_CDemonMission_FUN_0053bcf0 at 0053bd20
;   core_msnedit.cpp_CDemonMission_FUN_0053bd80 at 0053bfa7
;   core_msnedit.cpp_CDemonMission_FUN_0053d8b0 at 0053dbae
;   core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030 at 0053b2f0
;   core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510 at 0053b7d0
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 005392ad
;   core_msnedit.cpp_CDemonMission_importActorsFrom_FUN_0053b9f0 at 0053bc07
;   core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50 at 0053af7b
;   core_script.cpp_CScript_FUN_005677a0 at 00567bae
;   core_script.cpp_CScript_executeContextAction_FUN_00565d00 at 00565dc3
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_msnedit_cpp_0063c825
;   TerminatedCString s_wt_0063c839
;   TerminatedCString s_core_msnedit_cpp_0063c83c
;   TerminatedCString s_UNDO_TMP_00680800
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int INT_02f7c52c
;   undefined4 DAT_02f7c53c
;   undefined4 g_CEdCheckInstance.checked_state
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_save_FUN_0040af30
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
;   crt_stdio.c_remove_FUN_005ff9d0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c140
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053c140
    PUSH ESI                            ; 0053c141
    PUSH EDI                            ; 0053c142
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053c143
    PUSH 0x680800                       ; 0053c147 | = "$$UNDO$$.TMP"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0053c14c
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0053c151
    MOV EDX,0xffffffff                  ; 0053c154
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053c159
    MOV dword ptr [0x02f7c52c],EDX      ; 0053c15d | INT_02f7c52c
    MOV dword ptr [EBX + 0x28],EAX      ; 0053c163
    TEST EAX,EAX                        ; 0053c166
    JZ 0x0053c1cb                       ; 0053c168
        ;   XREF to: 0053c1cb (CONDITIONAL_JUMP)  ; LAB_0053c1cb
    MOV dword ptr [EAX + 0x148],0x0     ; 0053c16a
    MOV ESI,dword ptr [EBX + 0x28]      ; 0053c174
    MOV EDI,dword ptr [EBX]             ; 0053c177
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0053c179
    CMP EAX,EDI                         ; 0053c17c
    JNZ 0x0053c1cf                      ; 0053c17e
        ;   XREF to: 0053c1cf (CONDITIONAL_JUMP)  ; LAB_0053c1cf
    CMP dword ptr [0x02f7c53c],0x0      ; 0053c180 | DAT_02f7c53c
        ;   Label: LAB_0053c180
    JNZ 0x0053c1a7                      ; 0053c187
        ;   XREF to: 0053c1a7 (CONDITIONAL_JUMP)  ; LAB_0053c1a7
    CMP dword ptr [0x02f7c548],0x0      ; 0053c189 | g_CEdCheckInstance.checked_state
    JZ 0x0053c1a7                       ; 0053c190
        ;   XREF to: 0053c1a7 (CONDITIONAL_JUMP)  ; LAB_0053c1a7
    PUSH 0x1                            ; 0053c192
    MOV ECX,dword ptr [EBX + 0x28]      ; 0053c194
    PUSH ECX                            ; 0053c197
    MOV ESI,dword ptr [0x006810c8]      ; 0053c198 | g_CDemonSetPtr
    PUSH ESI                            ; 0053c19e | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 0053c19f
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 0053c1a4
    PUSH 0x9fe                          ; 0053c1a7
        ;   Label: LAB_0053c1a7
    PUSH 0x63c825                       ; 0053c1ac | = "..\\core\\msnedit.cpp"
    PUSH 0x63c839                       ; 0053c1b1 | = "wt"
    PUSH 0x0                            ; 0053c1b6
    PUSH 0x680800                       ; 0053c1b8 | = "$$UNDO$$.TMP"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0053c1bd
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 0053c1c2
    ADD ESP,0x14                        ; 0053c1c4
    TEST EAX,EAX                        ; 0053c1c7
    JNZ 0x0053c1db                      ; 0053c1c9
        ;   XREF to: 0053c1db (CONDITIONAL_JUMP)  ; LAB_0053c1db
    POP EDI                             ; 0053c1cb
        ;   Label: LAB_0053c1cb
    POP ESI                             ; 0053c1cc
    POP EBX                             ; 0053c1cd
    RET                                 ; 0053c1ce
    PUSH EAX                            ; 0053c1cf
        ;   Label: LAB_0053c1cf
    PUSH EBX                            ; 0053c1d0
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 0053c1d1
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 0053c1d6
    JMP 0x0053c180                      ; 0053c1d9
        ;   XREF to: 0053c180 (UNCONDITIONAL_JUMP)  ; LAB_0053c180
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0 ; 0053c1db
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0()
        ;   Label: LAB_0053c1db
    PUSH ESI                            ; 0053c1e0
    MOV EDI,dword ptr [EBX + 0x28]      ; 0053c1e1
    PUSH EDI                            ; 0053c1e4
    CALL core_actor.cpp_CDemonActor_save_FUN_0040af30 ; 0053c1e5
        ;   XREF to: 0040af30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0053c1ea
    PUSH 0xa02                          ; 0053c1ed
    PUSH 0x63c83c                       ; 0053c1f2 | = "..\\core\\msnedit.cpp"
    PUSH ESI                            ; 0053c1f7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0053c1f8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0053c1fd
    POP EDI                             ; 0053c200
    POP ESI                             ; 0053c201
    POP EBX                             ; 0053c202
    RET                                 ; 0053c203

