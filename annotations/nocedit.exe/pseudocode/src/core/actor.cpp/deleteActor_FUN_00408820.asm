; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_deleteActor_FUN_00408820(CDemonActor *actor_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe601
;   core_inv.cpp_CInventory_removeItem_FUN_004fea70 at 004feafa
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 at 00523f41
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613554
;   TerminatedCString s_core_actor_cpp_00613566
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408820
        ;   Label: core_actor.cpp_deleteActor_FUN_00408820
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408821
    TEST EBX,EBX                        ; 00408825
    JNZ 0x0040882b                      ; 00408827
        ;   XREF to: 0040882b (CONDITIONAL_JUMP)  ; LAB_0040882b
    POP EBX                             ; 00408829
        ;   Label: LAB_00408829
    RET                                 ; 0040882a
    PUSH 0x141                          ; 0040882b
        ;   Label: LAB_0040882b
    PUSH 0x613554                       ; 00408830 | = "..\\core\\actor.cpp"
    PUSH EBX                            ; 00408835
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408836
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV EDX,0x613566                    ; 0040883b | = "..\\core\\actor.cpp"
    MOV ECX,0x149                       ; 00408840
    ADD ESP,0xc                         ; 00408845
    MOV dword ptr [0x0067d20c],EDX      ; 00408848 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0040884e | g_CurrentDebugLine
    TEST EBX,EBX                        ; 00408854
    JZ 0x00408829                       ; 00408856
        ;   XREF to: 00408829 (CONDITIONAL_JUMP)  ; LAB_00408829
    PUSH 0x2                            ; 00408858
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040885a
    PUSH EBX                            ; 00408860
    CALL dword ptr [EAX + 0xe4]         ; 00408861
    ADD ESP,0x8                         ; 00408867
    POP EBX                             ; 0040886a
    RET                                 ; 0040886b

