; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_00519e50(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_pod.cpp_CPod_verifyIntegrity_FUN_0051b8d0 at 0051b8da
;   engine_pod.cpp_FUN_0051b110 at 0051b12e
;   engine_pod.cpp_FUN_0051b6e0 at 0051b709
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00519e50
        ;   Label: engine_pod.cpp_CPodFile_ctor_FUN_00519e50
    MOV dword ptr [EAX + 0x414],0x0     ; 00519e54
    MOV byte ptr [EAX + 0x4],0x0        ; 00519e5e
    MOV byte ptr [EAX + 0x108],0x0      ; 00519e62
    MOV byte ptr [EAX + 0x208],0x0      ; 00519e69
    MOV byte ptr [EAX + 0x308],0x0      ; 00519e70
    MOV dword ptr [EAX],0x0             ; 00519e77
    MOV dword ptr [EAX + 0x41c],0x0     ; 00519e7d
    MOV dword ptr [EAX + 0x424],0x0     ; 00519e87
    MOV dword ptr [EAX + 0x418],0x0     ; 00519e91
    MOV dword ptr [EAX + 0x408],0x3e8   ; 00519e9b
    MOV dword ptr [EAX + 0x40c],0x3e8   ; 00519ea5
    MOV dword ptr [EAX + 0x410],0x0     ; 00519eaf
    RET                                 ; 00519eb9

