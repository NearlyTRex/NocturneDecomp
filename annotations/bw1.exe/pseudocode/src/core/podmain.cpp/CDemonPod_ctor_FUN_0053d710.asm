; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_0053d710(CDemonPod *this_ptr)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_0053c5c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053d710
        ;   Label: core_podmain.cpp_CDemonPod_ctor_FUN_0053d710
    PUSH EDX                            ; 0053d714
    CALL engine_pod.cpp_CPod_ctor_FUN_0053c5c0 ; 0053d715
        ;   XREF to: 0053c5c0 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_0053c5c0(CPod * this_ptr)
    ADD ESP,0x4                         ; 0053d71a
    MOV dword ptr [EAX + 0x194],0x604aa4 ; 0053d71d
    RET                                 ; 0053d727

