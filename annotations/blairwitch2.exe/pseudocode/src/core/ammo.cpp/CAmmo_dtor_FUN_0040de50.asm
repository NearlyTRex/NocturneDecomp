; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040de50(CAmmo *this_ptr,uint flags)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CAmmoVTable
;   WatcomTypeInfo g_CAmmoTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040de50
        ;   Label: core_ammo.cpp_CAmmo_dtor_FUN_0040de50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040de51
    TEST byte ptr [ESP + 0xc],0x4       ; 0040de55
    JNZ 0x0040de80                      ; 0040de5a
        ;   XREF to: 0040de80 (CONDITIONAL_JUMP)  ; LAB_0040de80
    PUSH 0x1                            ; 0040de5c
    PUSH EBX                            ; 0040de5e
    MOV dword ptr [EBX + 0x2b0],0x5f22f4 ; 0040de5f | g_CAmmoVTable
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0040de69
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040de6e
    MOV DL,byte ptr [ESP + 0xc]         ; 0040de71
    MOV EBX,EAX                         ; 0040de75
    TEST DL,0x2                         ; 0040de77
    JNZ 0x0040de9b                      ; 0040de7a
        ;   XREF to: 0040de9b (CONDITIONAL_JUMP)  ; LAB_0040de9b
    MOV EAX,EBX                         ; 0040de7c
    POP EBX                             ; 0040de7e
    RET                                 ; 0040de7f
    PUSH 0x5f23e0                       ; 0040de80 | g_CAmmoTypeInfo
        ;   Label: LAB_0040de80
    PUSH EBX                            ; 0040de85
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0040de86
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040de8b
    PUSH EAX                            ; 0040de8e
    CALL crt_unknown.c_FUN_005b7fce     ; 0040de8f
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0040de94
    MOV EAX,EBX                         ; 0040de97
    POP EBX                             ; 0040de99
    RET                                 ; 0040de9a
    PUSH EAX                            ; 0040de9b
        ;   Label: LAB_0040de9b
    CALL crt_unknown.c_FUN_005b7fdc     ; 0040de9c
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040dea1
    MOV EAX,EBX                         ; 0040dea4
    POP EBX                             ; 0040dea6
    RET                                 ; 0040dea7

