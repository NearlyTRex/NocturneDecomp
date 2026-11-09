; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_0051c110(CDemonPod *this_ptr)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_0051b080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051c110
        ;   Label: core_podmain.cpp_CDemonPod_ctor_FUN_0051c110
    PUSH EDX                            ; 0051c114
    CALL engine_pod.cpp_CPod_ctor_FUN_0051b080 ; 0051c115
        ;   XREF to: 0051b080 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_0051b080(CPod * this_ptr)
    ADD ESP,0x4                         ; 0051c11a
    MOV dword ptr [EAX + 0x194],0x5fadd4 ; 0051c11d
    RET                                 ; 0051c127

