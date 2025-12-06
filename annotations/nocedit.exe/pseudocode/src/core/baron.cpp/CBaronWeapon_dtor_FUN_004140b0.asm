; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBaronWeapon * core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon * this_ptr, uint d1, uint d2)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronWeaponTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_005edf80
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004140b0
        ;   Label: core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004140b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004140b5
    JNZ 0x004140d6                      ; 004140ba | LAB_004140d6
        ;   XREF to: 004140d6 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004140bc
    PUSH EBX                            ; 004140be
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005edf80 ; 004140bf | CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)
        ;   XREF to: 005edf80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004140c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004140c7
    MOV EBX,EAX                         ; 004140cb
    TEST DL,0x2                         ; 004140cd
    JNZ 0x004140f1                      ; 004140d0 | LAB_004140f1
        ;   XREF to: 004140f1 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 004140d2
    POP EBX                             ; 004140d4
    RET                                 ; 004140d5
    PUSH 0x65a2f0                       ; 004140d6 | WatcomTypeInfo g_CBaronWeaponTypeInfo
        ;   Label: LAB_004140d6
    PUSH EBX                            ; 004140db
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 004140dc | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004140e1
    PUSH EAX                            ; 004140e4
    CALL crt_memory.c_free_FUN_005fe659 ; 004140e5 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004140ea
    MOV EAX,EBX                         ; 004140ed
    POP EBX                             ; 004140ef
    RET                                 ; 004140f0
    PUSH EAX                            ; 004140f1
        ;   Label: LAB_004140f1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004140f2 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004140f7
    MOV EAX,EBX                         ; 004140fa
    POP EBX                             ; 004140fc
    RET                                 ; 004140fd

