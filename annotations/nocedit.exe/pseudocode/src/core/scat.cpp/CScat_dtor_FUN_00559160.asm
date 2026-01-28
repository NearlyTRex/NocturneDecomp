; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00559160(CScat *this_ptr,uint d1,uint d2)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CScatTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559160
        ;   Label: core_scat.cpp_CScat_dtor_FUN_00559160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00559161
    TEST byte ptr [ESP + 0xc],0x4       ; 00559165
    JNZ 0x00559186                      ; 0055916a
        ;   XREF to: 00559186 (CONDITIONAL_JUMP)  ; LAB_00559186
    PUSH 0x1                            ; 0055916c
    PUSH EBX                            ; 0055916e
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 0055916f
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00559174
    MOV DL,byte ptr [ESP + 0xc]         ; 00559177
    MOV EBX,EAX                         ; 0055917b
    TEST DL,0x2                         ; 0055917d
    JNZ 0x005591a1                      ; 00559180
        ;   XREF to: 005591a1 (CONDITIONAL_JUMP)  ; LAB_005591a1
    MOV EAX,EBX                         ; 00559182
    POP EBX                             ; 00559184
    RET                                 ; 00559185
    PUSH 0x6625d0                       ; 00559186 | g_CScatTypeInfo
        ;   Label: LAB_00559186
    PUSH EBX                            ; 0055918b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0055918c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00559191
    PUSH EAX                            ; 00559194
    CALL crt_memory.c_free_FUN_005fe659 ; 00559195
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0055919a
    MOV EAX,EBX                         ; 0055919d
    POP EBX                             ; 0055919f
    RET                                 ; 005591a0
    PUSH EAX                            ; 005591a1
        ;   Label: LAB_005591a1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005591a2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005591a7
    MOV EAX,EBX                         ; 005591aa
    POP EBX                             ; 005591ac
    RET                                 ; 005591ad

