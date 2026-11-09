; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * core_bugs_cpp_CBugs_dtor_FUN_00428180(CBugs *this_ptr,uint flags)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBugsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_cloth.cpp_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkafter_armour.cpp_FUN_0040ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428180
        ;   Label: core_bugs.cpp_CBugs_dtor_FUN_00428180
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428181
    TEST byte ptr [ESP + 0xc],0x4       ; 00428185
    JNZ 0x004281dd                      ; 0042818a
        ;   XREF to: 004281dd (CONDITIONAL_JUMP)  ; LAB_004281dd
    PUSH 0x0                            ; 0042818c
    ADD EBX,0x35dc                      ; 0042818e
    PUSH EBX                            ; 00428194
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 00428195
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0042819a
    PUSH 0x0                            ; 0042819d
    SUB EAX,0x93c                       ; 0042819f
    PUSH EAX                            ; 004281a4
    CALL core_cloth.cpp_FUN_00441ca0    ; 004281a5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004281aa
    PUSH 0x0                            ; 004281ad
    SUB EAX,0x2b48                      ; 004281af
    PUSH EAX                            ; 004281b4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004281b5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004281ba
    PUSH 0x1                            ; 004281bd
    LEA EBX,[EAX + 0xfffffea8]          ; 004281bf
    PUSH EBX                            ; 004281c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004281c6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004281cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004281ce
    MOV EBX,EAX                         ; 004281d2
    TEST DL,0x2                         ; 004281d4
    JNZ 0x004281f8                      ; 004281d7
        ;   XREF to: 004281f8 (CONDITIONAL_JUMP)  ; LAB_004281f8
    MOV EAX,EBX                         ; 004281d9
    POP EBX                             ; 004281db
    RET                                 ; 004281dc
    PUSH 0x5fd3d0                       ; 004281dd | g_CBugsTypeInfo
        ;   Label: LAB_004281dd
    PUSH EBX                            ; 004281e2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004281e3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004281e8
    PUSH EAX                            ; 004281eb
    CALL crt_unknown.c_FUN_005c0336     ; 004281ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004281f1
    MOV EAX,EBX                         ; 004281f4
    POP EBX                             ; 004281f6
    RET                                 ; 004281f7
    PUSH EAX                            ; 004281f8
        ;   Label: LAB_004281f8
    CALL crt_unknown.c_FUN_005c0344     ; 004281f9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004281fe
    MOV EAX,EBX                         ; 00428201
    POP EBX                             ; 00428203
    RET                                 ; 00428204

