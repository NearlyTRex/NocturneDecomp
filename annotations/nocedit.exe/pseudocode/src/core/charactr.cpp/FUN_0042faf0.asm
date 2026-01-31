; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl core_charactr_cpp_FUN_0042faf0(void)
;
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004958c5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042faf0
        ;   Label: core_charactr.cpp_FUN_0042faf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042faf4
    MOV EAX,dword ptr [EAX]             ; 0042faf8
    MOV dword ptr [EDX],EAX             ; 0042fafa
    MOV EAX,EDX                         ; 0042fafc
    RET                                 ; 0042fafe

