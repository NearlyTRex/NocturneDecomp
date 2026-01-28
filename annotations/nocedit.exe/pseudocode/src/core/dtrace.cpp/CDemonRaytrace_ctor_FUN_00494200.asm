; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00494200(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_staticInit_FUN_00569040 at 00569079
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00494200
        ;   Label: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
    MOV dword ptr [EAX + 0xc],0x0       ; 00494204
    MOV dword ptr [EAX + 0x4],0x0       ; 0049420b
    MOV dword ptr [EAX + 0x4c],0x0      ; 00494212
    MOV dword ptr [EAX + 0x40],0x0      ; 00494219
    MOV dword ptr [EAX + 0x44],0x0      ; 00494220
    MOV dword ptr [EAX + 0x48],0x0      ; 00494227
    MOV dword ptr [EAX],0x0             ; 0049422e
    MOV dword ptr [EAX + 0x8],0x0       ; 00494234
    RET                                 ; 0049423b

