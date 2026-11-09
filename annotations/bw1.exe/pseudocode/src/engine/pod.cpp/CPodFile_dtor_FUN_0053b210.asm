; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_0053b210(CPodFile *this_ptr,uint flags)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   engine_pod.cpp_CPod_cleanup_FUN_0053c8f0 at 0053c926
;   engine_pod.cpp_CPod_dismountPod_FUN_0053d490 at 0053d4d3
;   engine_pod.cpp_FUN_0053c650 at 0053c68c
;   engine_pod.cpp_FUN_0053cc5c at 0053cde9
;
; Called Functions:
;   engine_pod.cpp_CPodFile_cleanup_FUN_0053be30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b210
        ;   Label: engine_pod.cpp_CPodFile_dtor_FUN_0053b210
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053b211
    PUSH EBX                            ; 0053b215
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_0053be30 ; 0053b216
        ;   XREF to: 0053be30 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_0053be30(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0053b21b
    MOV EAX,EBX                         ; 0053b21e
    POP EBX                             ; 0053b220
    RET                                 ; 0053b221

