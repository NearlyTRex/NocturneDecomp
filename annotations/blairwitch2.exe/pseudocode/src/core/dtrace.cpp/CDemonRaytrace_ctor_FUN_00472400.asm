; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00472400(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_0052bbe0 at 0052bc19
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00472400
        ;   Label: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00472400
    MOV dword ptr [EAX + 0xc],0x0       ; 00472404
    MOV dword ptr [EAX + 0x4],0x0       ; 0047240b
    MOV dword ptr [EAX + 0x4c],0x0      ; 00472412
    MOV dword ptr [EAX + 0x40],0x0      ; 00472419
    MOV dword ptr [EAX + 0x44],0x0      ; 00472420
    MOV dword ptr [EAX + 0x48],0x0      ; 00472427
    MOV dword ptr [EAX],0x0             ; 0047242e
    MOV dword ptr [EAX + 0x8],0x0       ; 00472434
    RET                                 ; 0047243b

