; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c600(CDemonActor *actor_ptr,uint class_name_hash)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; uint             Stack[0x8]:4   class_name_hash
;
; XREF[135]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a00 at 00408a72
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a17d
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640 at 0041067f
;   core_baron.cpp_CBaron_attachToOwner_FUN_0040fa70 at 0040faa1
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00 at 0040fca5
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 0041365a
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004263d0 at 00426466
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00427b40 at 00427b6b
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240 at 00432502
;   core_charactr.cpp_FUN_00432f10 at 004331ea
;   ... and 125 more
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c600
        ;   Label: core_actor.cpp_castToClassHash_FUN_0040c600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c601
    TEST EBX,EBX                        ; 0040c605
    JNZ 0x0040c60d                      ; 0040c607
        ;   XREF to: 0040c60d (CONDITIONAL_JUMP)  ; LAB_0040c60d
    XOR EAX,EAX                         ; 0040c609
    POP EBX                             ; 0040c60b
        ;   Label: LAB_0040c60b
    RET                                 ; 0040c60c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c60d
        ;   Label: LAB_0040c60d
    PUSH EDX                            ; 0040c611
    PUSH EBX                            ; 0040c612
    CALL core_actor.cpp_isOfClassHash_FUN_0040c5d0 ; 0040c613
        ;   XREF to: 0040c5d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040c5d0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0040c618
    TEST EAX,EAX                        ; 0040c61b
    JZ 0x0040c60b                       ; 0040c61d
        ;   XREF to: 0040c60b (CONDITIONAL_JUMP)  ; LAB_0040c60b
    MOV EAX,EBX                         ; 0040c61f
    POP EBX                             ; 0040c621
    RET                                 ; 0040c622

