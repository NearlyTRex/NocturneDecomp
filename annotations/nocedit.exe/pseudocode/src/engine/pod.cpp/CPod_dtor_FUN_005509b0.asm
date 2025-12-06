; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPod * engine_pod.cpp_CPod_dtor_FUN_005509b0(CPod * this_ptr, uint d1, uint d2)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_dtor_FUN_00551b20 at 00551b2f
;
; Referenced Globals:
;   CPod_vtable g_CPodVTable
;   WatcomTypeInfo g_CPodTypeInfo
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   engine_pod.cpp_CPod_cleanup_FUN_00550c80
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005509b0
        ;   Label: engine_pod.cpp_CPod_dtor_FUN_005509b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005509b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005509b5
    JNZ 0x005509e1                      ; 005509ba | LAB_005509e1
        ;   XREF to: 005509e1 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005509bc
    MOV dword ptr [EBX + 0x194],0x6623b4 ; 005509bd | CPod_vtable g_CPodVTable
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 005509c7 | void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005509cc
    TEST byte ptr [ESP + 0xc],0x2       ; 005509cf
    JNZ 0x005509fc                      ; 005509d4 | LAB_005509fc
        ;   XREF to: 005509fc (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005509d6
    POP EBX                             ; 005509d8
    LEA EAX,[EAX]                       ; 005509d9
    NOP                                 ; 005509df
    PUSH 0x6623d0                       ; 005509e1 | WatcomTypeInfo g_CPodTypeInfo
        ;   Label: LAB_005509e1
    PUSH EBX                            ; 005509e6
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 005509e7 | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005509ec
    PUSH EAX                            ; 005509ef
    CALL crt_memory.c_free_FUN_005fe659 ; 005509f0 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005509f5
    MOV EAX,EBX                         ; 005509f8
    POP EBX                             ; 005509fa
    RET                                 ; 005509fb
    PUSH EBX                            ; 005509fc
        ;   Label: LAB_005509fc
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005509fd | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00550a02
    MOV EAX,EBX                         ; 00550a05
    POP EBX                             ; 00550a07
    RET                                 ; 00550a08

