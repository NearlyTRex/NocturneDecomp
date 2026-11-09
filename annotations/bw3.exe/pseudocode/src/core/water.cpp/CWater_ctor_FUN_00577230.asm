; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00577230(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_water.cpp_staticInit_FUN_005771c0 at 005771c5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00577230
        ;   Label: core_water.cpp_CWater_ctor_FUN_00577230
    MOV dword ptr [EAX + 0x8],0x42000000 ; 00577234
    MOV dword ptr [EAX],0x0             ; 0057723b
    MOV dword ptr [EAX + 0x4],0x0       ; 00577241
    RET                                 ; 00577248

