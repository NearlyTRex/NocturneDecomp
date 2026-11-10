; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_0049a710(CPickList *this_ptr,uint flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[9]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d0172
;   core_game.cpp_FUN_004d7250 at 004d76ac
;   core_menu.cpp_FUN_0050ba70 at 0050c92d
;   core_menu.cpp_FUN_0050d640 at 0050e6ce
;   core_mission.cpp_FUN_0051c240 at 0051c3a8
;   core_sound.cpp_CSound_selectReverbPreset_FUN_0057db60 at 0057dbcd
;   engine_pod.cpp_FUN_0053bfbe at 0053c1f6
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0 at 00495122
;   shape_edittool.cpp_FUN_0049517e at 0049546e
;
; Referenced Globals:
;   undefined1* g_CPickListVTable = 0049a710
;   WatcomTypeInfo g_CPickListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_0049c9b0
;   shape_edittool.cpp_CPickList_clear_FUN_0049c370
;   shape_edittool.cpp_CStrList_dtor_FUN_004993a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a710
        ;   Label: shape_edittool.cpp_CPickList_dtor_FUN_0049a710
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a711
    TEST byte ptr [ESP + 0xc],0x4       ; 0049a715
    JNZ 0x0049a77b                      ; 0049a71a
        ;   XREF to: 0049a77b (CONDITIONAL_JUMP)  ; LAB_0049a77b
    PUSH EBX                            ; 0049a71c
    MOV dword ptr [EBX + 0xc],0x5ff834  ; 0049a71d | g_CPickListVTable
    CALL shape_edittool.cpp_CPickList_clear_FUN_0049c370 ; 0049a724
        ;   XREF to: 0049c370 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_0049c370(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049a729
    PUSH 0x0                            ; 0049a72c
    ADD EBX,0x2d8                       ; 0049a72e
    PUSH EBX                            ; 0049a734
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0 ; 0049a735
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049a73a
    PUSH 0x0                            ; 0049a73d
    SUB EAX,0xe4                        ; 0049a73f
    PUSH EAX                            ; 0049a744
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0 ; 0049a745
        ;   XREF to: 0049d4b0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049a74a
    PUSH 0x0                            ; 0049a74d
    SUB EAX,0x38                        ; 0049a74f
    PUSH EAX                            ; 0049a752
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_0049c9b0 ; 0049a753
        ;   XREF to: 0049c9b0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_0049c9b0(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049a758
    PUSH 0x1                            ; 0049a75b
    LEA EBX,[EAX + 0xfffffe44]          ; 0049a75d
    PUSH EBX                            ; 0049a763
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 0049a764
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049a769
    MOV DL,byte ptr [ESP + 0xc]         ; 0049a76c
    MOV EBX,EAX                         ; 0049a770
    TEST DL,0x2                         ; 0049a772
    JNZ 0x0049a796                      ; 0049a775
        ;   XREF to: 0049a796 (CONDITIONAL_JUMP)  ; LAB_0049a796
    MOV EAX,EBX                         ; 0049a777
    POP EBX                             ; 0049a779
    RET                                 ; 0049a77a
    PUSH 0x5ff8b0                       ; 0049a77b | g_CPickListTypeInfo
        ;   Label: LAB_0049a77b
    PUSH EBX                            ; 0049a780
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0049a781
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0049a786
    PUSH EAX                            ; 0049a789
    CALL crt_unknown.c_FUN_005c0336     ; 0049a78a
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0049a78f
    MOV EAX,EBX                         ; 0049a792
    POP EBX                             ; 0049a794
    RET                                 ; 0049a795
    PUSH EAX                            ; 0049a796
        ;   Label: LAB_0049a796
    CALL crt_unknown.c_FUN_005c0344     ; 0049a797
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0049a79c
    MOV EAX,EBX                         ; 0049a79f
    POP EBX                             ; 0049a7a1
    RET                                 ; 0049a7a2

