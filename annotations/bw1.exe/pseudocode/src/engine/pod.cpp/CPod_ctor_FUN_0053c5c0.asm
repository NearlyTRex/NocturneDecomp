; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_0053c5c0(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_podmain.cpp_CDemonPod_ctor_FUN_0053d710 at 0053d715
;   core_podmain.cpp_staticInit_FUN_0053d550 at 0053d555
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0053c5c0
        ;   Label: engine_pod.cpp_CPod_ctor_FUN_0053c5c0
    MOV dword ptr [ECX],0x0             ; 0053c5c4
    MOV EAX,ECX                         ; 0053c5ca
    MOV dword ptr [ECX + 0x194],0x604a34 ; 0053c5cc
    LEA EDX,[ECX + 0x190]               ; 0053c5d6
    ADD EAX,0x4                         ; 0053c5dc
        ;   Label: LAB_0053c5dc
    MOV dword ptr [EAX],0x0             ; 0053c5df
    CMP EAX,EDX                         ; 0053c5e5
    JNZ 0x0053c5dc                      ; 0053c5e7
        ;   XREF to: 0053c5dc (CONDITIONAL_JUMP)  ; LAB_0053c5dc
    MOV EAX,ECX                         ; 0053c5e9
    RET                                 ; 0053c5eb

