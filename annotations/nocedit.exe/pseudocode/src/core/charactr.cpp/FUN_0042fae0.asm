; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl core_charactr_cpp_FUN_0042fae0(void)
;
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004959e9
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042fae0
        ;   Label: core_charactr.cpp_FUN_0042fae0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042fae4
    MOV EAX,dword ptr [EAX]             ; 0042fae8
    MOV dword ptr [EDX],EAX             ; 0042faea
    MOV EAX,EDX                         ; 0042faec
    RET                                 ; 0042faee

