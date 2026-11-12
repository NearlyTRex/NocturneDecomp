; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * core_bugs_cpp_CBugs_dtor_FUN_00422150(CBugs *this_ptr,uint flags)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBugsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422150
        ;   Label: core_bugs.cpp_CBugs_dtor_FUN_00422150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422151
    TEST byte ptr [ESP + 0xc],0x4       ; 00422155
    JNZ 0x004221bd                      ; 0042215a
        ;   XREF to: 004221bd (CONDITIONAL_JUMP)  ; LAB_004221bd
    PUSH 0x0                            ; 0042215c
    ADD EBX,0x3a20                      ; 0042215e
    PUSH EBX                            ; 00422164
    CALL core_armour.cpp_FUN_0040f2b0   ; 00422165
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0042216a
    PUSH 0x0                            ; 0042216d
    SUB EAX,0x9c8                       ; 0042216f
    PUSH EAX                            ; 00422174
    CALL core_muzzle.cpp_FUN_0059df70   ; 00422175
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0042217a
    PUSH 0x0                            ; 0042217d
    SUB EAX,0x34c                       ; 0042217f
    PUSH EAX                            ; 00422184
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00422185
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042218a
    PUSH 0x0                            ; 0042218d
    SUB EAX,0x2a58                      ; 0042218f
    PUSH EAX                            ; 00422194
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00422195
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042219a
    PUSH 0x1                            ; 0042219d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0042219f
    PUSH EBX                            ; 004221a5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004221a6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004221ab
    MOV DL,byte ptr [ESP + 0xc]         ; 004221ae
    MOV EBX,EAX                         ; 004221b2
    TEST DL,0x2                         ; 004221b4
    JNZ 0x004221d8                      ; 004221b7
        ;   XREF to: 004221d8 (CONDITIONAL_JUMP)  ; LAB_004221d8
    MOV EAX,EBX                         ; 004221b9
    POP EBX                             ; 004221bb
    RET                                 ; 004221bc
    PUSH 0x5f3fe0                       ; 004221bd | g_CBugsTypeInfo
        ;   Label: LAB_004221bd
    PUSH EBX                            ; 004221c2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004221c3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004221c8
    PUSH EAX                            ; 004221cb
    CALL crt_unknown.c_FUN_005b7fce     ; 004221cc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004221d1
    MOV EAX,EBX                         ; 004221d4
    POP EBX                             ; 004221d6
    RET                                 ; 004221d7
    PUSH EAX                            ; 004221d8
        ;   Label: LAB_004221d8
    CALL crt_unknown.c_FUN_005b7fdc     ; 004221d9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004221de
    MOV EAX,EBX                         ; 004221e1
    POP EBX                             ; 004221e3
    RET                                 ; 004221e4

