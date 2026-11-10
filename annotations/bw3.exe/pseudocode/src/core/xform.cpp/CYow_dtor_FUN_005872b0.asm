; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CYow * core_xform_cpp_CYow_dtor_FUN_005872b0(CYow *this_ptr,uint flags)
;
; Parameters:
; CYow *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CYowTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005872b0
        ;   Label: core_xform.cpp_CYow_dtor_FUN_005872b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005872b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005872b5
    JNZ 0x0058730d                      ; 005872ba
        ;   XREF to: 0058730d (CONDITIONAL_JUMP)  ; LAB_0058730d
    PUSH 0x0                            ; 005872bc
    ADD EBX,0x385c                      ; 005872be
    PUSH EBX                            ; 005872c4
    CALL unkafter_armour.cpp_FUN_00410370 ; 005872c5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 005872ca
    PUSH 0x0                            ; 005872cd
    SUB EAX,0x954                       ; 005872cf
    PUSH EAX                            ; 005872d4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 005872d5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005872da
    PUSH 0x0                            ; 005872dd
    SUB EAX,0x2db0                      ; 005872df
    PUSH EAX                            ; 005872e4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 005872e5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005872ea
    PUSH 0x1                            ; 005872ed
    LEA EBX,[EAX + 0xfffffea8]          ; 005872ef
    PUSH EBX                            ; 005872f5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 005872f6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005872fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005872fe
    MOV EBX,EAX                         ; 00587302
    TEST DL,0x2                         ; 00587304
    JNZ 0x00587328                      ; 00587307
        ;   XREF to: 00587328 (CONDITIONAL_JUMP)  ; LAB_00587328
    MOV EAX,EBX                         ; 00587309
    POP EBX                             ; 0058730b
    RET                                 ; 0058730c
    PUSH 0x5e6740                       ; 0058730d | g_CYowTypeInfo
        ;   Label: LAB_0058730d
    PUSH EBX                            ; 00587312
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00587313
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00587318
    PUSH EAX                            ; 0058731b
    CALL crt_unknown.c_FUN_005a30b6     ; 0058731c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00587321
    MOV EAX,EBX                         ; 00587324
    POP EBX                             ; 00587326
    RET                                 ; 00587327
    PUSH EAX                            ; 00587328
        ;   Label: LAB_00587328
    CALL crt_unknown.c_FUN_005a30c4     ; 00587329
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0058732e
    MOV EAX,EBX                         ; 00587331
    POP EBX                             ; 00587333
    RET                                 ; 00587334

