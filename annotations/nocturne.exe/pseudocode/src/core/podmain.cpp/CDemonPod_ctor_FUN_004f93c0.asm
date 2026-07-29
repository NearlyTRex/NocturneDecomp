; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_004f93c0(CDemonPod *this_ptr)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonPod_vtable g_CDemonPodVTable
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_004f8810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f93c0
        ;   Label: core_podmain.cpp_CDemonPod_ctor_FUN_004f93c0
    PUSH EDX                            ; 004f93c4
    CALL engine_pod.cpp_CPod_ctor_FUN_004f8810 ; 004f93c5
        ;   XREF to: 004f8810 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_004f8810(CPod * this_ptr)
    ADD ESP,0x4                         ; 004f93ca
    MOV dword ptr [EAX + 0x194],0x5a14f4 ; 004f93cd | g_CDemonPodVTable
    RET                                 ; 004f93d7

