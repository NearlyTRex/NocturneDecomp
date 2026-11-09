; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00473470(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_005325b0 at 005325e9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00473470
        ;   Label: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00473470
    MOV dword ptr [EAX + 0xc],0x0       ; 00473474
    MOV dword ptr [EAX + 0x4],0x0       ; 0047347b
    MOV dword ptr [EAX + 0x4c],0x0      ; 00473482
    MOV dword ptr [EAX + 0x40],0x0      ; 00473489
    MOV dword ptr [EAX + 0x44],0x0      ; 00473490
    MOV dword ptr [EAX + 0x48],0x0      ; 00473497
    MOV dword ptr [EAX],0x0             ; 0047349e
    MOV dword ptr [EAX + 0x8],0x0       ; 004734a4
    RET                                 ; 004734ab

