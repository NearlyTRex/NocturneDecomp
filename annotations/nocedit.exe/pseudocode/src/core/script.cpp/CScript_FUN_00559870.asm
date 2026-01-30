; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00559870(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_FUN_005243a0 at 005243eb
;   core_script.cpp_CScript_FUN_00559f80 at 0055a2f1
;   core_script.cpp_CScript_dtor_FUN_00559840 at 00559846
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_006416d4
;   TerminatedCString s_core_script_cpp_006416e7
;   CPickList DAT_0310f4b0
;
; Called Functions:
;   core_script.cpp_CScript_FUN_005598f0
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;   shape_edittool.cpp_CStrList_clear_FUN_004a2b10
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559870
        ;   Label: core_script.cpp_CScript_FUN_00559870
    PUSH ESI                            ; 00559871
    MOV EBX,dword ptr [ESP + 0xc]       ; 00559872
    LEA EAX,[EBX + 0x38]                ; 00559876
    PUSH EAX                            ; 00559879
    CALL shape_edittool.cpp_CStrList_clear_FUN_004a2b10 ; 0055987a
        ;   XREF to: 004a2b10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_004a2b10(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0055987f
    PUSH EBX                            ; 00559882
    CALL core_script.cpp_CScript_FUN_005598f0 ; 00559883
        ;   XREF to: 005598f0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_005598f0(CScript * this_ptr)
    MOV EDX,dword ptr [EBX + 0x20]      ; 00559888
    ADD ESP,0x4                         ; 0055988b
    TEST EDX,EDX                        ; 0055988e
    JNZ 0x005598b7                      ; 00559890
        ;   XREF to: 005598b7 (CONDITIONAL_JUMP)  ; LAB_005598b7
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00559892
        ;   Label: LAB_00559892
    MOV dword ptr [EBX + 0x1c],0x0      ; 00559895
    TEST ESI,ESI                        ; 0055989c
    JNZ 0x005598d3                      ; 0055989e
        ;   XREF to: 005598d3 (CONDITIONAL_JUMP)  ; LAB_005598d3
    PUSH 0x310f4b0                      ; 005598a0 | DAT_0310f4b0
        ;   Label: LAB_005598a0
    MOV dword ptr [EBX + 0x28],0x0      ; 005598a5
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 005598ac
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005598b1
    POP ESI                             ; 005598b4
    POP EBX                             ; 005598b5
    RET                                 ; 005598b6
    PUSH 0x1b5                          ; 005598b7
        ;   Label: LAB_005598b7
    PUSH 0x6416d4                       ; 005598bc | = "..\\core\\script.cpp"
    PUSH EDX                            ; 005598c1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005598c2
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005598c7
    MOV dword ptr [EBX + 0x20],0x0      ; 005598ca
    JMP 0x00559892                      ; 005598d1
        ;   XREF to: 00559892 (UNCONDITIONAL_JUMP)  ; LAB_00559892
    PUSH 0x1bc                          ; 005598d3
        ;   Label: LAB_005598d3
    PUSH 0x6416e7                       ; 005598d8 | = "..\\core\\script.cpp"
    PUSH ESI                            ; 005598dd
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005598de
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005598e3
    MOV dword ptr [EBX + 0x2c],0x0      ; 005598e6
    JMP 0x005598a0                      ; 005598ed
        ;   XREF to: 005598a0 (UNCONDITIONAL_JUMP)  ; LAB_005598a0

