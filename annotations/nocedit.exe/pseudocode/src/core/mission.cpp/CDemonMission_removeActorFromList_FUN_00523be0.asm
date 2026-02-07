; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0 (CDemonMission *this_ptr,CDemonActor *actor_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor_ptr
;
; XREF[5]:
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe561
;   core_inv.cpp_CInventory_loadItems_FUN_004ff740 at 004ff762
;   core_mission.cpp_CDemonMission_removeActor_FUN_00523f20 at 00523f31
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 005244b4
;   core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0 at 0053d14a
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00639087
;   TerminatedCString s_core_mission_cpp_0063909b
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523be0
        ;   Label: core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
    PUSH ESI                            ; 00523be1
    PUSH EDI                            ; 00523be2
    PUSH EBP                            ; 00523be3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00523be4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00523be8
    TEST ESI,ESI                        ; 00523bec
    JNZ 0x00523bf5                      ; 00523bee
        ;   XREF to: 00523bf5 (CONDITIONAL_JUMP)  ; LAB_00523bf5
    POP EBP                             ; 00523bf0
    POP EDI                             ; 00523bf1
    POP ESI                             ; 00523bf2
    POP EBX                             ; 00523bf3
    RET                                 ; 00523bf4
    PUSH 0x2c8                          ; 00523bf5
        ;   Label: LAB_00523bf5
    PUSH 0x639087                       ; 00523bfa | = "..\\core\\mission.cpp"
    PUSH ESI                            ; 00523bff
    XOR EBP,EBP                         ; 00523c00
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00523c02
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV EBX,dword ptr [EDI + 0x548]     ; 00523c07
    ADD ESP,0xc                         ; 00523c0d
    TEST EBX,EBX                        ; 00523c10
    JZ 0x00523c6e                       ; 00523c12
        ;   XREF to: 00523c6e (CONDITIONAL_JUMP)  ; LAB_00523c6e
    PUSH 0x2ce                          ; 00523c14
        ;   Label: LAB_00523c14
    PUSH 0x63909b                       ; 00523c19 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 00523c1e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00523c1f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00523c24
    CMP EBX,ESI                         ; 00523c27
    JNZ 0x00523c64                      ; 00523c29
        ;   XREF to: 00523c64 (CONDITIONAL_JUMP)  ; LAB_00523c64
    MOV EDX,dword ptr [ESI + 0x150]     ; 00523c2b
        ;   Label: LAB_00523c2b
    TEST EDX,EDX                        ; 00523c31
    JNZ 0x00523c85                      ; 00523c33
        ;   XREF to: 00523c85 (CONDITIONAL_JUMP)  ; LAB_00523c85
    MOV EBX,dword ptr [ESI + 0x14c]     ; 00523c35
    TEST EBX,EBX                        ; 00523c3b
    JNZ 0x00523c77                      ; 00523c3d
        ;   XREF to: 00523c77 (CONDITIONAL_JUMP)  ; LAB_00523c77
    MOV dword ptr [EDI + 0x548],EDX     ; 00523c3f
    MOV dword ptr [EDI + 0x54c],EDX     ; 00523c45
    MOV dword ptr [ESI + 0x14c],0x0     ; 00523c4b
        ;   Label: LAB_00523c4b
    MOV dword ptr [ESI + 0x150],0x0     ; 00523c55
    POP EBP                             ; 00523c5f
    POP EDI                             ; 00523c60
    POP ESI                             ; 00523c61
    POP EBX                             ; 00523c62
    RET                                 ; 00523c63
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00523c64
        ;   Label: LAB_00523c64
    TEST EBX,EBX                        ; 00523c6a
    JNZ 0x00523c14                      ; 00523c6c
        ;   XREF to: 00523c14 (CONDITIONAL_JUMP)  ; LAB_00523c14
    TEST EBP,EBP                        ; 00523c6e
        ;   Label: LAB_00523c6e
    JNZ 0x00523c2b                      ; 00523c70
        ;   XREF to: 00523c2b (CONDITIONAL_JUMP)  ; LAB_00523c2b
    POP EBP                             ; 00523c72
    POP EDI                             ; 00523c73
    POP ESI                             ; 00523c74
    POP EBX                             ; 00523c75
    RET                                 ; 00523c76
    MOV dword ptr [EDI + 0x548],EBX     ; 00523c77
        ;   Label: LAB_00523c77
    MOV dword ptr [EBX + 0x150],EDX     ; 00523c7d
    JMP 0x00523c4b                      ; 00523c83
        ;   XREF to: 00523c4b (UNCONDITIONAL_JUMP)  ; LAB_00523c4b
    MOV ECX,dword ptr [ESI + 0x14c]     ; 00523c85
        ;   Label: LAB_00523c85
    TEST ECX,ECX                        ; 00523c8b
    JNZ 0x00523c9d                      ; 00523c8d
        ;   XREF to: 00523c9d (CONDITIONAL_JUMP)  ; LAB_00523c9d
    MOV dword ptr [EDI + 0x54c],EDX     ; 00523c8f
    MOV dword ptr [EDX + 0x14c],ECX     ; 00523c95
    JMP 0x00523c4b                      ; 00523c9b
        ;   XREF to: 00523c4b (UNCONDITIONAL_JUMP)  ; LAB_00523c4b
    MOV dword ptr [EDX + 0x14c],ECX     ; 00523c9d
        ;   Label: LAB_00523c9d
    MOV EBX,dword ptr [ESI + 0x150]     ; 00523ca3
    MOV dword ptr [ECX + 0x150],EBX     ; 00523ca9
    JMP 0x00523c4b                      ; 00523caf
        ;   XREF to: 00523c4b (UNCONDITIONAL_JUMP)  ; LAB_00523c4b

