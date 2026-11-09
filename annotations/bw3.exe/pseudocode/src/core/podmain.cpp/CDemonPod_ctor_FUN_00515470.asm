; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_00515470(CDemonPod *this_ptr)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_00514320
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00515470
        ;   Label: core_podmain.cpp_CDemonPod_ctor_FUN_00515470
    PUSH EDX                            ; 00515474
    CALL engine_pod.cpp_CPod_ctor_FUN_00514320 ; 00515475
        ;   XREF to: 00514320 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_00514320(CPod * this_ptr)
    ADD ESP,0x4                         ; 0051547a
    MOV dword ptr [EAX + 0x194],0x5e3494 ; 0051547d
    RET                                 ; 00515487

