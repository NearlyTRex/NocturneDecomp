; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005a99e0(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_water.cpp_staticInit_FUN_005a9970 at 005a9975
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a99e0
        ;   Label: core_water.cpp_CWater_ctor_FUN_005a99e0
    MOV dword ptr [EAX + 0x8],0x42000000 ; 005a99e4
    MOV dword ptr [EAX],0x0             ; 005a99eb
    MOV dword ptr [EAX + 0x4],0x0       ; 005a99f1
    RET                                 ; 005a99f8

