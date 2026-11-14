; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040e000(CAmmo *this_ptr,uint flags)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e000
        ;   Label: core_ammo.cpp_CAmmo_dtor_FUN_0040e000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e001
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e005
    JNZ 0x0040e026                      ; 0040e00a
        ;   XREF to: 0040e026 (CONDITIONAL_JUMP)  ; LAB_0040e026
    PUSH 0x1                            ; 0040e00c
    PUSH EBX                            ; 0040e00e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0040e00f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040e014
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e017
    MOV EBX,EAX                         ; 0040e01b
    TEST DL,0x2                         ; 0040e01d
    JNZ 0x0040e041                      ; 0040e020
        ;   XREF to: 0040e041 (CONDITIONAL_JUMP)  ; LAB_0040e041
    MOV EAX,EBX                         ; 0040e022
    POP EBX                             ; 0040e024
    RET                                 ; 0040e025
    PUSH 0x5fb550                       ; 0040e026 | g_CAmmoTypeInfo
        ;   Label: LAB_0040e026
    PUSH EBX                            ; 0040e02b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0040e02c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040e031
    PUSH EAX                            ; 0040e034
    CALL crt_unknown.c_FUN_005c0336     ; 0040e035
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0040e03a
    MOV EAX,EBX                         ; 0040e03d
    POP EBX                             ; 0040e03f
    RET                                 ; 0040e040
    PUSH EAX                            ; 0040e041
        ;   Label: LAB_0040e041
    CALL crt_unknown.c_FUN_005c0344     ; 0040e042
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0040e047
    MOV EAX,EBX                         ; 0040e04a
    POP EBX                             ; 0040e04c
    RET                                 ; 0040e04d

