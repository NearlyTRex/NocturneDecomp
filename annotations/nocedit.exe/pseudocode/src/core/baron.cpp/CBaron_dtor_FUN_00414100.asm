; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron *this_ptr,uint d1,uint d2)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaronTypeInfo
;
; Called Functions:
;   core_hero.cpp_CHero_dtor_FUN_004f2470
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414100
        ;   Label: core_baron.cpp_CBaron_dtor_FUN_00414100
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414101
    TEST byte ptr [ESP + 0xc],0x4       ; 00414105
    JNZ 0x00414126                      ; 0041410a
        ;   XREF to: 00414126 (CONDITIONAL_JUMP)  ; LAB_00414126
    PUSH 0x1                            ; 0041410c
    PUSH EBX                            ; 0041410e
    CALL core_hero.cpp_CHero_dtor_FUN_004f2470 ; 0041410f
        ;   XREF to: 004f2470 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 00414114
    MOV DL,byte ptr [ESP + 0xc]         ; 00414117
    MOV EBX,EAX                         ; 0041411b
    TEST DL,0x2                         ; 0041411d
    JNZ 0x00414141                      ; 00414120
        ;   XREF to: 00414141 (CONDITIONAL_JUMP)  ; LAB_00414141
    MOV EAX,EBX                         ; 00414122
    POP EBX                             ; 00414124
    RET                                 ; 00414125
    PUSH 0x65a310                       ; 00414126 | g_CBaronTypeInfo
        ;   Label: LAB_00414126
    PUSH EBX                            ; 0041412b
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0041412c
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00414131
    PUSH EAX                            ; 00414134
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00414135
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0041413a
    MOV EAX,EBX                         ; 0041413d
    POP EBX                             ; 0041413f
    RET                                 ; 00414140
    PUSH EAX                            ; 00414141
        ;   Label: LAB_00414141
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00414142
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00414147
    MOV EAX,EBX                         ; 0041414a
    POP EBX                             ; 0041414c
    RET                                 ; 0041414d

