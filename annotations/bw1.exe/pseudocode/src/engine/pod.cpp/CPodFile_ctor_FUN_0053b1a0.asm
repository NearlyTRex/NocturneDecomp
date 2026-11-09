; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_pod.cpp_FUN_0053c650 at 0053c6a5
;   engine_pod.cpp_FUN_0053cc5c at 0053cc89
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b1a0
        ;   Label: engine_pod.cpp_CPodFile_ctor_FUN_0053b1a0
    MOV dword ptr [EAX + 0x414],0x0     ; 0053b1a4
    MOV byte ptr [EAX + 0x4],0x0        ; 0053b1ae
    MOV byte ptr [EAX + 0x108],0x0      ; 0053b1b2
    MOV byte ptr [EAX + 0x208],0x0      ; 0053b1b9
    MOV byte ptr [EAX + 0x308],0x0      ; 0053b1c0
    MOV dword ptr [EAX],0x0             ; 0053b1c7
    MOV dword ptr [EAX + 0x41c],0x0     ; 0053b1cd
    MOV dword ptr [EAX + 0x424],0x0     ; 0053b1d7
    MOV dword ptr [EAX + 0x418],0x0     ; 0053b1e1
    MOV dword ptr [EAX + 0x408],0x3e8   ; 0053b1eb
    MOV dword ptr [EAX + 0x40c],0x3e8   ; 0053b1f5
    MOV dword ptr [EAX + 0x410],0x0     ; 0053b1ff
    RET                                 ; 0053b209

