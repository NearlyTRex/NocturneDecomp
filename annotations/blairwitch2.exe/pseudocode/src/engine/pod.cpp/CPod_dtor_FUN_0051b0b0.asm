; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_0051b0b0(CPod *this_ptr,uint flags)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_dtor_FUN_0051c130 at 0051c13f
;
; Referenced Globals:
;   undefined1* PTR_engine_pod.cpp_CPod_dtor_FUN_0051b0b0_005fad64 = 0051b0b0
;   WatcomTypeInfo g_CPodTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   engine_pod.cpp_CPod_cleanup_FUN_0051b370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b0b0
        ;   Label: engine_pod.cpp_CPod_dtor_FUN_0051b0b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b0b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0051b0b5
    JNZ 0x0051b0e1                      ; 0051b0ba
        ;   XREF to: 0051b0e1 (CONDITIONAL_JUMP)  ; LAB_0051b0e1
    PUSH EBX                            ; 0051b0bc
    MOV dword ptr [EBX + 0x194],0x5fad64 ; 0051b0bd | PTR_engine_pod.cpp_CPod_dtor_FUN_0051b0b0_005fad64
    CALL engine_pod.cpp_CPod_cleanup_FUN_0051b370 ; 0051b0c7
        ;   XREF to: 0051b370 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_0051b370(CPod * this_ptr)
    ADD ESP,0x4                         ; 0051b0cc
    TEST byte ptr [ESP + 0xc],0x2       ; 0051b0cf
    JNZ 0x0051b0fc                      ; 0051b0d4
        ;   XREF to: 0051b0fc (CONDITIONAL_JUMP)  ; LAB_0051b0fc
    MOV EAX,EBX                         ; 0051b0d6
    POP EBX                             ; 0051b0d8
    LEA EAX,[EAX]                       ; 0051b0d9
    NOP                                 ; 0051b0df
    RET                                 ; 0051b0e0
        ;   Label: LAB_0051b0e0
    PUSH 0x5fad80                       ; 0051b0e1 | g_CPodTypeInfo
        ;   Label: LAB_0051b0e1
    PUSH EBX                            ; 0051b0e6
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0051b0e7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0051b0ec
    PUSH EAX                            ; 0051b0ef
    CALL crt_unknown.c_FUN_005b7fce     ; 0051b0f0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0051b0f5
    MOV EAX,EBX                         ; 0051b0f8
    POP EBX                             ; 0051b0fa
    RET                                 ; 0051b0fb
    PUSH EBX                            ; 0051b0fc
        ;   Label: LAB_0051b0fc
    CALL crt_unknown.c_FUN_005b7fdc     ; 0051b0fd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0051b102
    MOV EAX,EBX                         ; 0051b105
    POP EBX                             ; 0051b107
    RET                                 ; 0051b108

