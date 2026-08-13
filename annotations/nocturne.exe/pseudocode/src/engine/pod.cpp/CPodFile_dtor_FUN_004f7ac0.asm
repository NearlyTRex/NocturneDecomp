; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(CPodFile *this_ptr,uint flags)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   engine_pod.cpp_CPod_cleanup_FUN_004f8b40 at 004f8b76
;   engine_pod.cpp_CPod_dismount_FUN_004f8a10 at 004f8aa9
;   engine_pod.cpp_CPod_verifyIntegrity_FUN_004f9100 at 004f913f
;   engine_pod.cpp_FUN_004f8eb0 at 004f9099
;
; Called Functions:
;   engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7ac0
        ;   Label: engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f7ac1
    PUSH EBX                            ; 004f7ac5
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0 ; 004f7ac6
        ;   XREF to: 004f80e0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004f7acb
    MOV EAX,EBX                         ; 004f7ace
    POP EBX                             ; 004f7ad0
    RET                                 ; 004f7ad1

