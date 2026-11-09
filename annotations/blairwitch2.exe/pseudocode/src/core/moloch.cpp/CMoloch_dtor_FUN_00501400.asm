; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_00501400(CMoloch *this_ptr,uint flags)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 g_CMolochVTable
;   WatcomTypeInfo g_CMolochTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501400
        ;   Label: core_moloch.cpp_CMoloch_dtor_FUN_00501400
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501401
    TEST byte ptr [ESP + 0xc],0x4       ; 00501405
    JNZ 0x00501457                      ; 0050140a
        ;   XREF to: 00501457 (CONDITIONAL_JUMP)  ; LAB_00501457
    PUSH 0x0                            ; 0050140c
    ADD EBX,0x279c8                     ; 0050140e
    PUSH EBX                            ; 00501414
    MOV dword ptr [EBX + 0xfffd88e8],0x5fa3e4 ; 00501415 | g_CMolochVTable
    CALL core_morph.cpp_CMorph_dtor_FUN_005b6e80 ; 0050141f
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_005b6e80(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00501424
    PUSH 0x0                            ; 00501427
    SUB EAX,0x2388                      ; 00501429
    PUSH EAX                            ; 0050142e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0050142f
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00501434
    PUSH 0x1                            ; 00501437
    LEA EBX,[EAX + 0xfffda9c0]          ; 00501439
    PUSH EBX                            ; 0050143f
    CALL core_hero.cpp_CHero_dtor_FUN_004ce3d0 ; 00501440
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_dtor_FUN_004ce3d0(CHero * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00501445
    MOV DL,byte ptr [ESP + 0xc]         ; 00501448
    MOV EBX,EAX                         ; 0050144c
    TEST DL,0x2                         ; 0050144e
    JNZ 0x00501472                      ; 00501451
        ;   XREF to: 00501472 (CONDITIONAL_JUMP)  ; LAB_00501472
    MOV EAX,EBX                         ; 00501453
    POP EBX                             ; 00501455
    RET                                 ; 00501456
    PUSH 0x5fa560                       ; 00501457 | g_CMolochTypeInfo
        ;   Label: LAB_00501457
    PUSH EBX                            ; 0050145c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0050145d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00501462
    PUSH EAX                            ; 00501465
    CALL crt_unknown.c_FUN_005b7fce     ; 00501466
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0050146b
    MOV EAX,EBX                         ; 0050146e
    POP EBX                             ; 00501470
    RET                                 ; 00501471
    PUSH EAX                            ; 00501472
        ;   Label: LAB_00501472
    CALL crt_unknown.c_FUN_005b7fdc     ; 00501473
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00501478
    MOV EAX,EBX                         ; 0050147b
    POP EBX                             ; 0050147d
    RET                                 ; 0050147e

