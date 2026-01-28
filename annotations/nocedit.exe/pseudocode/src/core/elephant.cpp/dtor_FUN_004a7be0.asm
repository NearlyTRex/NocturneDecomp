; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl core_elephant_cpp_dtor_FUN_004a7be0(CElephantGun *this_ptr,uint d1,uint d2)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CElephantGunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7be0
        ;   Label: core_elephant.cpp_dtor_FUN_004a7be0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a7be1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a7be5
    JNZ 0x004a7c06                      ; 004a7bea
        ;   XREF to: 004a7c06 (CONDITIONAL_JUMP)  ; LAB_004a7c06
    PUSH 0x1                            ; 004a7bec
    PUSH EBX                            ; 004a7bee
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 004a7bef
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 004a7bf4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a7bf7
    MOV EBX,EAX                         ; 004a7bfb
    TEST DL,0x2                         ; 004a7bfd
    JNZ 0x004a7c21                      ; 004a7c00
        ;   XREF to: 004a7c21 (CONDITIONAL_JUMP)  ; LAB_004a7c21
    MOV EAX,EBX                         ; 004a7c02
    POP EBX                             ; 004a7c04
    RET                                 ; 004a7c05
    PUSH 0x65d640                       ; 004a7c06 | g_CElephantGunTypeInfo
        ;   Label: LAB_004a7c06
    PUSH EBX                            ; 004a7c0b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004a7c0c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a7c11
    PUSH EAX                            ; 004a7c14
    CALL crt_memory.c_free_FUN_005fe659 ; 004a7c15
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004a7c1a
    MOV EAX,EBX                         ; 004a7c1d
    POP EBX                             ; 004a7c1f
    RET                                 ; 004a7c20
    PUSH EAX                            ; 004a7c21
        ;   Label: LAB_004a7c21
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004a7c22
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004a7c27
    MOV EAX,EBX                         ; 004a7c2a
    POP EBX                             ; 004a7c2c
    RET                                 ; 004a7c2d

