; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_ctor_FUN_0051b080(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_podmain.cpp_CDemonPod_ctor_FUN_0051c110 at 0051c115
;   core_podmain.cpp_staticInit_FUN_0051bfd0 at 0051bfd5
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0051b080
        ;   Label: engine_pod.cpp_CPod_ctor_FUN_0051b080
    MOV dword ptr [ECX],0x0             ; 0051b084
    MOV EAX,ECX                         ; 0051b08a
    MOV dword ptr [ECX + 0x194],0x5fad64 ; 0051b08c
    LEA EDX,[ECX + 0x190]               ; 0051b096
    ADD EAX,0x4                         ; 0051b09c
        ;   Label: LAB_0051b09c
    MOV dword ptr [EAX],0x0             ; 0051b09f
    CMP EAX,EDX                         ; 0051b0a5
    JNZ 0x0051b09c                      ; 0051b0a7
        ;   XREF to: 0051b09c (CONDITIONAL_JUMP)  ; LAB_0051b09c
    MOV EAX,ECX                         ; 0051b0a9
    RET                                 ; 0051b0ab

