; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00482110(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494bea
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00482110
        ;   Label: core_dpart.cpp_CDemonPart_ctor_FUN_00482110
    MOV dword ptr [EAX + 0x2c],0x0      ; 00482114
    MOV dword ptr [EAX + 0x34],0x0      ; 0048211b
    MOV dword ptr [EAX + 0x30],0x0      ; 00482122
    MOV dword ptr [EAX + 0x28],0x0      ; 00482129
    MOV dword ptr [EAX + 0x20],0x0      ; 00482130
    MOV dword ptr [EAX + 0x24],0x0      ; 00482137
    MOV dword ptr [EAX + 0x38],0x0      ; 0048213e
    MOV dword ptr [EAX + 0x384],0x0     ; 00482145
    MOV byte ptr [EAX],0x0              ; 0048214f
    RET                                 ; 00482152

