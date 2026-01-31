; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0 (CCharacter *this_ptr,CDemonActor *deleted_actor)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   deleted_actor
;
; XREF[9]:
;   core_baron.cpp_CBaron_onActorDeleted_FUN_00413ff0 at 00413ffa
;   core_colonel.cpp_FUN_004405f0 at 004405fa
;   core_gabriela.cpp_FUN_004d75e0 at 004d75eb
;   core_haystack.cpp_CHaystack_onActorDeleted_FUN_004f1cb0 at 004f1cba
;   core_icepick.cpp_CIcePick_onActorDeleted_FUN_004f9780 at 004f978a
;   core_mimic.cpp_CMimic_onActorDeleted_FUN_00520da0 at 00520dbc
;   core_scat.cpp_FUN_00559100 at 0055910a
;   core_stranger.cpp_CStranger_FUN_005c68a0 at 005c68ac
;   core_svetlana.cpp_CSvetlana_FUN_005d9ef0 at 005d9efa
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f8a0
        ;   Label: core_charactr.cpp_CCharacter_onActorDeleted_FUN_0042f8a0
    PUSH ESI                            ; 0042f8a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0042f8a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042f8a6
    PUSH EBX                            ; 0042f8aa
    PUSH ESI                            ; 0042f8ab
    CALL core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000 ; 0042f8ac
        ;   XREF to: 0040d000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onActorDeleted_FUN_0040d000(CDemonActor * this_ptr, CDemonActor * deleted_actor)
    ADD ESP,0x8                         ; 0042f8b1
    MOV EAX,ESI                         ; 0042f8b4
    LEA EDX,[ESI + 0x88]                ; 0042f8b6
    CMP EBX,dword ptr [EAX + 0x24b4]    ; 0042f8bc
        ;   Label: LAB_0042f8bc
    JZ 0x0042f8ce                       ; 0042f8c2
        ;   XREF to: 0042f8ce (CONDITIONAL_JUMP)  ; LAB_0042f8ce
    ADD EAX,0x44                        ; 0042f8c4
    CMP EAX,EDX                         ; 0042f8c7
    JNZ 0x0042f8bc                      ; 0042f8c9
        ;   XREF to: 0042f8bc (CONDITIONAL_JUMP)  ; LAB_0042f8bc
    POP ESI                             ; 0042f8cb
    POP EBX                             ; 0042f8cc
    RET                                 ; 0042f8cd
    MOV dword ptr [EAX + 0x24b4],0x0    ; 0042f8ce
        ;   Label: LAB_0042f8ce
    ADD EAX,0x44                        ; 0042f8d8
    CMP EAX,EDX                         ; 0042f8db
    JNZ 0x0042f8bc                      ; 0042f8dd
        ;   XREF to: 0042f8bc (CONDITIONAL_JUMP)  ; LAB_0042f8bc
    POP ESI                             ; 0042f8df
    POP EBX                             ; 0042f8e0
    RET                                 ; 0042f8e1

