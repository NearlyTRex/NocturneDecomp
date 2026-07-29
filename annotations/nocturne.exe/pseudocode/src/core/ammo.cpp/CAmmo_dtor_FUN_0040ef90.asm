; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040ef90(CAmmo *this_ptr,uint flags)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoTypeInfo_00599530
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ef90
        ;   Label: core_ammo.cpp_CAmmo_dtor_FUN_0040ef90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ef91
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ef95
    JNZ 0x0040efb6                      ; 0040ef9a
        ;   XREF to: 0040efb6 (CONDITIONAL_JUMP)  ; LAB_0040efb6
    PUSH 0x1                            ; 0040ef9c
    PUSH EBX                            ; 0040ef9e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040ef9f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040efa4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040efa7
    MOV EBX,EAX                         ; 0040efab
    TEST DL,0x2                         ; 0040efad
    JNZ 0x0040efd1                      ; 0040efb0
        ;   XREF to: 0040efd1 (CONDITIONAL_JUMP)  ; LAB_0040efd1
    MOV EAX,EBX                         ; 0040efb2
    POP EBX                             ; 0040efb4
    RET                                 ; 0040efb5
    PUSH 0x599530                       ; 0040efb6 | g_CAmmoTypeInfo_00599530
        ;   Label: LAB_0040efb6
    PUSH EBX                            ; 0040efbb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040efbc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040efc1
    PUSH EAX                            ; 0040efc4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040efc5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0040efca
    MOV EAX,EBX                         ; 0040efcd
    POP EBX                             ; 0040efcf
    RET                                 ; 0040efd0
    PUSH EAX                            ; 0040efd1
        ;   Label: LAB_0040efd1
    CALL crt_unknown.c_FUN_00564494     ; 0040efd2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0040efd7
    MOV EAX,EBX                         ; 0040efda
    POP EBX                             ; 0040efdc
    RET                                 ; 0040efdd

