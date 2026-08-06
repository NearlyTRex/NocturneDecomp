; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_004f8840(CPod *this_ptr,uint flags)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_dtor_FUN_004f93e0 at 004f93ef
;
; Referenced Globals:
;   CPod_vtable g_CPodVTable
;   WatcomTypeInfo g_CPodTypeInfo_005a14a0
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   engine_pod.cpp_CPod_cleanup_FUN_004f8b40
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8840
        ;   Label: engine_pod.cpp_CPod_dtor_FUN_004f8840
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f8841
    TEST byte ptr [ESP + 0xc],0x4       ; 004f8845
    JNZ 0x004f8871                      ; 004f884a
        ;   XREF to: 004f8871 (CONDITIONAL_JUMP)  ; LAB_004f8871
    PUSH EBX                            ; 004f884c
    MOV dword ptr [EBX + 0x194],0x5a1484 ; 004f884d | g_CPodVTable
    CALL engine_pod.cpp_CPod_cleanup_FUN_004f8b40 ; 004f8857
        ;   XREF to: 004f8b40 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_004f8b40(CPod * this_ptr)
    ADD ESP,0x4                         ; 004f885c
    TEST byte ptr [ESP + 0xc],0x2       ; 004f885f
    JNZ 0x004f888c                      ; 004f8864
        ;   XREF to: 004f888c (CONDITIONAL_JUMP)  ; LAB_004f888c
    MOV EAX,EBX                         ; 004f8866
    POP EBX                             ; 004f8868
    LEA EAX,[EAX]                       ; 004f8869
    NOP                                 ; 004f886f
    PUSH 0x5a14a0                       ; 004f8871 | g_CPodTypeInfo_005a14a0
        ;   Label: LAB_004f8871
    PUSH EBX                            ; 004f8876
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004f8877
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f887c
    PUSH EAX                            ; 004f887f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004f8880
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004f8885
    MOV EAX,EBX                         ; 004f8888
    POP EBX                             ; 004f888a
    RET                                 ; 004f888b
    PUSH EBX                            ; 004f888c
        ;   Label: LAB_004f888c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004f888d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004f8892
    MOV EAX,EBX                         ; 004f8895
    POP EBX                             ; 004f8897
    RET                                 ; 004f8898

