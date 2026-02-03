; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_005509b0(CPod *this_ptr,uint flags)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_dtor_FUN_00551b20 at 00551b2f
;
; Referenced Globals:
;   CPod_vtable g_CPodVTable
;   WatcomTypeInfo g_CPodTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005fe632
;   engine_pod.cpp_CPod_cleanup_FUN_00550c80
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005509b0
        ;   Label: engine_pod.cpp_CPod_dtor_FUN_005509b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005509b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005509b5
    JNZ 0x005509e1                      ; 005509ba
        ;   XREF to: 005509e1 (CONDITIONAL_JUMP)  ; LAB_005509e1
    PUSH EBX                            ; 005509bc
    MOV dword ptr [EBX + 0x194],0x6623b4 ; 005509bd | g_CPodVTable
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 005509c7
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 005509cc
    TEST byte ptr [ESP + 0xc],0x2       ; 005509cf
    JNZ 0x005509fc                      ; 005509d4
        ;   XREF to: 005509fc (CONDITIONAL_JUMP)  ; LAB_005509fc
    MOV EAX,EBX                         ; 005509d6
    POP EBX                             ; 005509d8
    LEA EAX,[EAX]                       ; 005509d9
    NOP                                 ; 005509df
    PUSH 0x6623d0                       ; 005509e1 | g_CPodTypeInfo
        ;   Label: LAB_005509e1
    PUSH EBX                            ; 005509e6
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 005509e7
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005509ec
    PUSH EAX                            ; 005509ef
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005509f0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005509f5
    MOV EAX,EBX                         ; 005509f8
    POP EBX                             ; 005509fa
    RET                                 ; 005509fb
    PUSH EBX                            ; 005509fc
        ;   Label: LAB_005509fc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005509fd
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00550a02
    MOV EAX,EBX                         ; 00550a05
    POP EBX                             ; 00550a07
    RET                                 ; 00550a08

