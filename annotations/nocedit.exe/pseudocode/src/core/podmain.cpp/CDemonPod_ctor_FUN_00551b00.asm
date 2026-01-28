; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_00551b00(CDemonPod *this_ptr)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonPod_vtable g_CDemonPodVTable
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_00550980
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00551b00
        ;   Label: core_podmain.cpp_CDemonPod_ctor_FUN_00551b00
    PUSH EDX                            ; 00551b04
    CALL engine_pod.cpp_CPod_ctor_FUN_00550980 ; 00551b05
        ;   XREF to: 00550980 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_00550980(CPod * this_ptr)
    ADD ESP,0x4                         ; 00551b0a
    MOV dword ptr [EAX + 0x194],0x662404 ; 00551b0d | g_CDemonPodVTable
    RET                                 ; 00551b17

