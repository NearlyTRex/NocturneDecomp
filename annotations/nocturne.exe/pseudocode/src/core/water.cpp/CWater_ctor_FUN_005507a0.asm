; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005507a0(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_water.cpp_staticInit_FUN_00550730 at 00550735
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005507a0
        ;   Label: core_water.cpp_CWater_ctor_FUN_005507a0
    MOV dword ptr [EAX + 0x8],0x42000000 ; 005507a4
    MOV dword ptr [EAX],0x0             ; 005507ab
    MOV dword ptr [EAX + 0x4],0x0       ; 005507b1
    RET                                 ; 005507b8

