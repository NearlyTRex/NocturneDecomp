; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCarved * core_carved_cpp_CCarved_dtor_FUN_0042bf50(CCarved *this_ptr,uint flags)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCarvedTypeInfo
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

    PUSH EBX                            ; 0042bf50
        ;   Label: core_carved.cpp_CCarved_dtor_FUN_0042bf50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042bf51
    TEST byte ptr [ESP + 0xc],0x4       ; 0042bf55
    JNZ 0x0042bfad                      ; 0042bf5a
        ;   XREF to: 0042bfad (CONDITIONAL_JUMP)  ; LAB_0042bfad
    PUSH 0x0                            ; 0042bf5c
    ADD EBX,0x35dc                      ; 0042bf5e
    PUSH EBX                            ; 0042bf64
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 0042bf65
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0042bf6a
    PUSH 0x0                            ; 0042bf6d
    SUB EAX,0x93c                       ; 0042bf6f
    PUSH EAX                            ; 0042bf74
    CALL core_cloth.cpp_FUN_00441ca0    ; 0042bf75
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042bf7a
    PUSH 0x0                            ; 0042bf7d
    SUB EAX,0x2b48                      ; 0042bf7f
    PUSH EAX                            ; 0042bf84
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0042bf85
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042bf8a
    PUSH 0x1                            ; 0042bf8d
    LEA EBX,[EAX + 0xfffffea8]          ; 0042bf8f
    PUSH EBX                            ; 0042bf95
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0042bf96
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042bf9b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042bf9e
    MOV EBX,EAX                         ; 0042bfa2
    TEST DL,0x2                         ; 0042bfa4
    JNZ 0x0042bfc8                      ; 0042bfa7
        ;   XREF to: 0042bfc8 (CONDITIONAL_JUMP)  ; LAB_0042bfc8
    MOV EAX,EBX                         ; 0042bfa9
    POP EBX                             ; 0042bfab
    RET                                 ; 0042bfac
    PUSH 0x5fd5d0                       ; 0042bfad | g_CCarvedTypeInfo
        ;   Label: LAB_0042bfad
    PUSH EBX                            ; 0042bfb2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0042bfb3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0042bfb8
    PUSH EAX                            ; 0042bfbb
    CALL crt_unknown.c_FUN_005c0336     ; 0042bfbc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0042bfc1
    MOV EAX,EBX                         ; 0042bfc4
    POP EBX                             ; 0042bfc6
    RET                                 ; 0042bfc7
    PUSH EAX                            ; 0042bfc8
        ;   Label: LAB_0042bfc8
    CALL crt_unknown.c_FUN_005c0344     ; 0042bfc9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0042bfce
    MOV EAX,EBX                         ; 0042bfd1
    POP EBX                             ; 0042bfd3
    RET                                 ; 0042bfd4

