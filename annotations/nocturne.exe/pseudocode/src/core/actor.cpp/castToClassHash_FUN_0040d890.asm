; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040d890(CDemonActor *actor_ptr,uint class_name_hash)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; uint             Stack[0x8]:4   class_name_hash
;
; XREF[116]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140 at 0040a1b2
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b4f6
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 at 0041156f
;   core_baron.cpp_CBaron_attachToOwner_FUN_00410a80 at 00410ab1
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0 at 00410c77
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00414086
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 004223fc
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790 at 004237bb
;   core_charactr.cpp_CCharacter_FUN_00428c00 at 00428e67
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 004299b7
;   ... and 106 more
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d890
        ;   Label: core_actor.cpp_castToClassHash_FUN_0040d890
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d891
    TEST EBX,EBX                        ; 0040d895
    JNZ 0x0040d89d                      ; 0040d897
        ;   XREF to: 0040d89d (CONDITIONAL_JUMP)  ; LAB_0040d89d
    XOR EAX,EAX                         ; 0040d899
    POP EBX                             ; 0040d89b
        ;   Label: LAB_0040d89b
    RET                                 ; 0040d89c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d89d
        ;   Label: LAB_0040d89d
    PUSH EDX                            ; 0040d8a1
    PUSH EBX                            ; 0040d8a2
    CALL core_actor.cpp_isOfClassHash_FUN_0040d860 ; 0040d8a3
        ;   XREF to: 0040d860 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040d860(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0040d8a8
    TEST EAX,EAX                        ; 0040d8ab
    JZ 0x0040d89b                       ; 0040d8ad
        ;   XREF to: 0040d89b (CONDITIONAL_JUMP)  ; LAB_0040d89b
    MOV EAX,EBX                         ; 0040d8af
    POP EBX                             ; 0040d8b1
    RET                                 ; 0040d8b2

