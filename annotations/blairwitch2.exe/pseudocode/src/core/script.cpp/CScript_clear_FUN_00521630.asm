; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_clear_FUN_00521630(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_createFromSingleSet_FUN_004fca90 at 004fcad5
;   core_script.cpp_CScript_dtor_FUN_00521600 at 00521606
;   core_script.cpp_FUN_00521cf0 at 00521d02
;
; Called Functions:
;   core_script.cpp_CScript_freeParsedLines_FUN_00521680
;   crt_unknown.c_FUN_005b86a0
;   shape_edittool.cpp_CPickList_clear_FUN_00483d10
;   shape_edittool.cpp_CStrList_clear_FUN_00480e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521630
        ;   Label: core_script.cpp_CScript_clear_FUN_00521630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521631
    LEA EAX,[EBX + 0x34]                ; 00521635
    PUSH EAX                            ; 00521638
    CALL shape_edittool.cpp_CStrList_clear_FUN_00480e10 ; 00521639
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00480e10(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0052163e
    PUSH EBX                            ; 00521641
    CALL core_script.cpp_CScript_freeParsedLines_FUN_00521680 ; 00521642
        ;   XREF to: 00521680 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_freeParsedLines_FUN_00521680(CScript * this_ptr)
    MOV EDX,dword ptr [EBX + 0x24]      ; 00521647
    ADD ESP,0x4                         ; 0052164a
    TEST EDX,EDX                        ; 0052164d
    JNZ 0x00521667                      ; 0052164f
        ;   XREF to: 00521667 (CONDITIONAL_JUMP)  ; LAB_00521667
    PUSH 0x1e65910                      ; 00521651
        ;   Label: LAB_00521651
    MOV dword ptr [EBX + 0x20],0x0      ; 00521656
    CALL shape_edittool.cpp_CPickList_clear_FUN_00483d10 ; 0052165d
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_clear_FUN_00483d10(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00521662
    POP EBX                             ; 00521665
    RET                                 ; 00521666
    PUSH EDX                            ; 00521667
        ;   Label: LAB_00521667
    CALL crt_unknown.c_FUN_005b86a0     ; 00521668
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0052166d
    MOV dword ptr [EBX + 0x24],0x0      ; 00521670
    JMP 0x00521651                      ; 00521677
        ;   XREF to: 00521651 (UNCONDITIONAL_JUMP)  ; LAB_00521651

