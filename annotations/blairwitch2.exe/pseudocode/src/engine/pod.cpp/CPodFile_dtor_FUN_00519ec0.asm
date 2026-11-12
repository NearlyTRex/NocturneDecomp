; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_00519ec0(CPodFile *this_ptr,uint flags)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   engine_pod.cpp_CPod_cleanup_FUN_0051b370 at 0051b3a6
;   engine_pod.cpp_CPod_dismountPod_FUN_0051bf10 at 0051bf53
;   engine_pod.cpp_CPod_verifyIntegrity_FUN_0051b8d0 at 0051b90f
;   engine_pod.cpp_FUN_0051b6dc at 0051b869
;
; Called Functions:
;   engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519ec0
        ;   Label: engine_pod.cpp_CPodFile_dtor_FUN_00519ec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00519ec1
    PUSH EBX                            ; 00519ec5
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0 ; 00519ec6
        ;   XREF to: 0051a8f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_0051a8f0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00519ecb
    MOV EAX,EBX                         ; 00519ece
    POP EBX                             ; 00519ed0
    RET                                 ; 00519ed1

