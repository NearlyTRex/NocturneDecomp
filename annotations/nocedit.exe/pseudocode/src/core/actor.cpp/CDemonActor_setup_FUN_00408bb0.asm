; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[42]:
;   core_ammo.cpp_CAmmo_setup_FUN_00410e50 at 00410e67
;   core_anvil.cpp_CAnvil_FUN_00411d70 at 00411d75
;   core_barrier.cpp_CBarrier_FUN_00414210 at 00414216
;   core_bat.cpp_CBat_FUN_004148a0 at 004148ce
;   core_battery.cpp_FUN_00417ef0 at 00417ef6
;   core_bodypart.cpp_CBodyPart_setup_FUN_00419810 at 00419818
;   core_boxactor.cpp_CBoxActor_setup_FUN_00421830 at 0042183a
;   core_chain.cpp_CChain_setup_FUN_0042fd20 at 0042fd2c
;   core_charactr.cpp_CCharacter_FUN_00428140 at 0042814c
;   core_crate.cpp_FUN_00448530 at 00448539
;   ... and 32 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061363c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408bb0
        ;   Label: core_actor.cpp_CDemonActor_setup_FUN_00408bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408bb1
    PUSH 0x23f                          ; 00408bb5
    PUSH 0x61363c                       ; 00408bba | = "..\\core\\actor.cpp"
    PUSH EBX                            ; 00408bbf
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408bc0
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408bc5
    PUSH EBX                            ; 00408bc8
    MOV dword ptr [EBX + 0x114],0x0     ; 00408bc9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00408bd3
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00408bd8
    MOV EAX,dword ptr [EBX + 0x154]     ; 00408bdb
    PUSH EBX                            ; 00408be1
    CALL dword ptr [EAX + 0xbc]         ; 00408be2
    ADD ESP,0x4                         ; 00408be8
    TEST EAX,EAX                        ; 00408beb
    JNZ 0x00408bf1                      ; 00408bed
        ;   XREF to: 00408bf1 (CONDITIONAL_JUMP)  ; LAB_00408bf1
    POP EBX                             ; 00408bef
    RET                                 ; 00408bf0
    PUSH 0x1                            ; 00408bf1
        ;   Label: LAB_00408bf1
    ADD EBX,0x20                        ; 00408bf3
    PUSH EBX                            ; 00408bf6
    PUSH EAX                            ; 00408bf7
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 ; 00408bf8
        ;   XREF to: 00546a60 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 00408bfd
    POP EBX                             ; 00408c00
    RET                                 ; 00408c01

