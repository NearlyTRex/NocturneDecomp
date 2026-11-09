; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritEagle * core_spireagl_cpp_CSpiritEagle_dtor_FUN_00599e40(CSpiritEagle *this_ptr,uint flags)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpiritEagleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043f900
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0
;   core_path.cpp_CPathMap_dtor_FUN_0050ad40
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599e40
        ;   Label: core_spireagl.cpp_CSpiritEagle_dtor_FUN_00599e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599e41
    TEST byte ptr [ESP + 0xc],0x4       ; 00599e45
    JNZ 0x00599ed1                      ; 00599e4a
        ;   XREF to: 00599ed1 (CONDITIONAL_JUMP)  ; LAB_00599ed1
    PUSH 0x0                            ; 00599e50
    ADD EBX,0x20874                     ; 00599e52
    PUSH EBX                            ; 00599e58
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 00599e59
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599e5e
    PUSH 0x0                            ; 00599e61
    SUB EAX,0x1cc                       ; 00599e63
    PUSH EAX                            ; 00599e68
    CALL core_cloth.cpp_FUN_0043f900    ; 00599e69
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599e6e
    PUSH 0x0                            ; 00599e71
    SUB EAX,0x138dc                     ; 00599e73
    PUSH EAX                            ; 00599e78
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 00599e79
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599e7e
    PUSH 0x0                            ; 00599e81
    SUB EAX,0x9570                      ; 00599e83
    PUSH EAX                            ; 00599e88
    CALL unkafter_armour.cpp_FUN_00410370 ; 00599e89
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00599e8e
    PUSH 0x0                            ; 00599e91
    SUB EAX,0x954                       ; 00599e93
    PUSH EAX                            ; 00599e98
    CALL core_cloth.cpp_FUN_0043f900    ; 00599e99
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599e9e
    PUSH 0x0                            ; 00599ea1
    SUB EAX,0x2db0                      ; 00599ea3
    PUSH EAX                            ; 00599ea8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00599ea9
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599eae
    PUSH 0x1                            ; 00599eb1
    LEA EBX,[EAX + 0xfffffea8]          ; 00599eb3
    PUSH EBX                            ; 00599eb9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00599eba
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00599ebf
    MOV DL,byte ptr [ESP + 0xc]         ; 00599ec2
    MOV EBX,EAX                         ; 00599ec6
    TEST DL,0x2                         ; 00599ec8
    JNZ 0x00599eec                      ; 00599ecb
        ;   XREF to: 00599eec (CONDITIONAL_JUMP)  ; LAB_00599eec
    MOV EAX,EBX                         ; 00599ecd
    POP EBX                             ; 00599ecf
    RET                                 ; 00599ed0
    PUSH 0x5e7e50                       ; 00599ed1 | g_CSpiritEagleTypeInfo
        ;   Label: LAB_00599ed1
    PUSH EBX                            ; 00599ed6
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00599ed7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00599edc
    PUSH EAX                            ; 00599edf
    CALL crt_unknown.c_FUN_005a30b6     ; 00599ee0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00599ee5
    MOV EAX,EBX                         ; 00599ee8
    POP EBX                             ; 00599eea
    RET                                 ; 00599eeb
    PUSH EAX                            ; 00599eec
        ;   Label: LAB_00599eec
    CALL crt_unknown.c_FUN_005a30c4     ; 00599eed
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00599ef2
    MOV EAX,EBX                         ; 00599ef5
    POP EBX                             ; 00599ef7
    RET                                 ; 00599ef8

