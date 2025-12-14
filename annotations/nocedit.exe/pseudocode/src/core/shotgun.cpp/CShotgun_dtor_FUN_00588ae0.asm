; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CShotgun * core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0(CShotgun * this_ptr, uint d1, uint d2)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CShotgunTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588ae0
        ;   Label: core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00588ae1
    TEST byte ptr [ESP + 0xc],0x4       ; 00588ae5
    JNZ 0x00588b06                      ; 00588aea
        ;   XREF to: 00588b06 (CONDITIONAL_JUMP)  ; LAB_00588b06
    PUSH 0x1                            ; 00588aec
    PUSH EBX                            ; 00588aee
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 00588aef
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
    ADD ESP,0x8                         ; 00588af4
    MOV DL,byte ptr [ESP + 0xc]         ; 00588af7
    MOV EBX,EAX                         ; 00588afb
    TEST DL,0x2                         ; 00588afd
    JNZ 0x00588b21                      ; 00588b00
        ;   XREF to: 00588b21 (CONDITIONAL_JUMP)  ; LAB_00588b21
    MOV EAX,EBX                         ; 00588b02
    POP EBX                             ; 00588b04
    RET                                 ; 00588b05
    PUSH 0x662b90                       ; 00588b06 | g_CShotgunTypeInfo
        ;   Label: LAB_00588b06
    PUSH EBX                            ; 00588b0b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00588b0c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00588b11
    PUSH EAX                            ; 00588b14
    CALL crt_memory.c_free_FUN_005fe659 ; 00588b15
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00588b1a
    MOV EAX,EBX                         ; 00588b1d
    POP EBX                             ; 00588b1f
    RET                                 ; 00588b20
    PUSH EAX                            ; 00588b21
        ;   Label: LAB_00588b21
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00588b22
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00588b27
    MOV EAX,EBX                         ; 00588b2a
    POP EBX                             ; 00588b2c
    RET                                 ; 00588b2d

