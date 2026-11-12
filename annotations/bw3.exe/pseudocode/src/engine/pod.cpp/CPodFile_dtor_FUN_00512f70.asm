; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_00512f70(CPodFile *this_ptr,uint flags)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   engine_pod.cpp_CPod_cleanup_FUN_00514650 at 00514686
;   engine_pod.cpp_CPod_dismountPod_FUN_005151f0 at 00515233
;   engine_pod.cpp_FUN_005143b0 at 005143ec
;   engine_pod.cpp_FUN_005149bc at 00514b49
;   engine_pod.cpp_FUN_00514bb0 at 00514bf1
;
; Called Functions:
;   engine_pod.cpp_CPodFile_cleanup_FUN_00513b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512f70
        ;   Label: engine_pod.cpp_CPodFile_dtor_FUN_00512f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00512f71
    PUSH EBX                            ; 00512f75
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00513b90 ; 00512f76
        ;   XREF to: 00513b90 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_00513b90(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00512f7b
    MOV EAX,EBX                         ; 00512f7e
    POP EBX                             ; 00512f80
    RET                                 ; 00512f81

