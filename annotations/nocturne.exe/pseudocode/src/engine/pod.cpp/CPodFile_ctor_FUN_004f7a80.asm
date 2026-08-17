; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_004f8eb0 at 004f8ed9
;   engine_pod.cpp_CPod_mount_FUN_004f88a0 at 004f88be
;   engine_pod.cpp_CPod_verifyIntegrity_FUN_004f9100 at 004f910a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7a80
        ;   Label: engine_pod.cpp_CPodFile_ctor_FUN_004f7a80
    MOV dword ptr [EAX + 0x20c],0x0     ; 004f7a84
    MOV byte ptr [EAX + 0x4],0x0        ; 004f7a8e
    MOV dword ptr [EAX],0x0             ; 004f7a92
    MOV dword ptr [EAX + 0x214],0x0     ; 004f7a98
    MOV dword ptr [EAX + 0x210],0x0     ; 004f7aa2
    MOV dword ptr [EAX + 0x208],0x0     ; 004f7aac
    RET                                 ; 004f7ab6

