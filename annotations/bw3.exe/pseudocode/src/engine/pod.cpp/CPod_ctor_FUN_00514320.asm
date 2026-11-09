; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_00514320(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_podmain.cpp_CDemonPod_ctor_FUN_00515470 at 00515475
;   core_podmain.cpp_staticInit_FUN_005152b0 at 005152b5
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00514320
        ;   Label: engine_pod.cpp_CPod_ctor_FUN_00514320
    MOV dword ptr [ECX],0x0             ; 00514324
    MOV EAX,ECX                         ; 0051432a
    MOV dword ptr [ECX + 0x194],0x5e3424 ; 0051432c
    LEA EDX,[ECX + 0x190]               ; 00514336
    ADD EAX,0x4                         ; 0051433c
        ;   Label: LAB_0051433c
    MOV dword ptr [EAX],0x0             ; 0051433f
    CMP EAX,EDX                         ; 00514345
    JNZ 0x0051433c                      ; 00514347
        ;   XREF to: 0051433c (CONDITIONAL_JUMP)  ; LAB_0051433c
    MOV EAX,ECX                         ; 00514349
    RET                                 ; 0051434b

