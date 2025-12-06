; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonPod * core_podmain.cpp_CDemonPod_dtor_FUN_00551b20(CDemonPod * this_ptr, uint d1, uint d2)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonPodTypeInfo
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   engine_pod.cpp_CPod_dtor_FUN_005509b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551b20
        ;   Label: core_podmain.cpp_CDemonPod_dtor_FUN_00551b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00551b21
    TEST byte ptr [ESP + 0xc],0x4       ; 00551b25
    JNZ 0x00551b46                      ; 00551b2a | LAB_00551b46
        ;   XREF to: 00551b46 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00551b2c
    PUSH EBX                            ; 00551b2e
    CALL engine_pod.cpp_CPod_dtor_FUN_005509b0 ; 00551b2f | CPod * engine_pod.cpp_CPod_dtor_FUN_005509b0(CPod * this_ptr, uint d1, uint d2)
        ;   XREF to: 005509b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00551b34
    MOV DL,byte ptr [ESP + 0xc]         ; 00551b37
    MOV EBX,EAX                         ; 00551b3b
    TEST DL,0x2                         ; 00551b3d
    JNZ 0x00551b61                      ; 00551b40 | LAB_00551b61
        ;   XREF to: 00551b61 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 00551b42
    POP EBX                             ; 00551b44
    RET                                 ; 00551b45
    PUSH 0x662420                       ; 00551b46 | WatcomTypeInfo g_CDemonPodTypeInfo
        ;   Label: LAB_00551b46
    PUSH EBX                            ; 00551b4b
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 00551b4c | void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00551b51
    PUSH EAX                            ; 00551b54
    CALL crt_memory.c_free_FUN_005fe659 ; 00551b55 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00551b5a
    MOV EAX,EBX                         ; 00551b5d
    POP EBX                             ; 00551b5f
    RET                                 ; 00551b60
    PUSH EAX                            ; 00551b61
        ;   Label: LAB_00551b61
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00551b62 | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00551b67
    MOV EAX,EBX                         ; 00551b6a
    POP EBX                             ; 00551b6c
    RET                                 ; 00551b6d

