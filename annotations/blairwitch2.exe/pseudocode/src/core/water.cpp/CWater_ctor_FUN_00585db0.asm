; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00585db0(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_water.cpp_staticInit_FUN_00585d40 at 00585d45
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585db0
        ;   Label: core_water.cpp_CWater_ctor_FUN_00585db0
    MOV dword ptr [EAX + 0x8],0x42000000 ; 00585db4
    MOV dword ptr [EAX],0x0             ; 00585dbb
    MOV dword ptr [EAX + 0x4],0x0       ; 00585dc1
    RET                                 ; 00585dc8

