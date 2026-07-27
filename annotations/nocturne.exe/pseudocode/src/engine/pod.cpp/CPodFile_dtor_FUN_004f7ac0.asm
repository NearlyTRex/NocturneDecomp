; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(undefined4 param_1)
;
;
; XREF[4]:
;   engine_pod.cpp_CPod_cleanup_FUN_004f8b40 at 004f8b76
;   engine_pod.cpp_FUN_004f8a10 at 004f8aa9
;   engine_pod.cpp_FUN_004f8eb0 at 004f9099
;   engine_pod.cpp_FUN_004f9100 at 004f913f
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
        ;   XREF to: 004f80e0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0()
    ADD ESP,0x4                         ; 004f7acb
    MOV EAX,EBX                         ; 004f7ace
    POP EBX                             ; 004f7ad0
    RET                                 ; 004f7ad1

