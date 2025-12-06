; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWater * core_water.cpp_CWater_ctor_FUN_005e9e10(CWater * this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_water.cpp_staticInit_FUN_005e9da0 at 005e9da5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e9e10
        ;   Label: core_water.cpp_CWater_ctor_FUN_005e9e10
    MOV dword ptr [EAX + 0x8],0x42000000 ; 005e9e14
    MOV dword ptr [EAX],0x0             ; 005e9e1b
    MOV dword ptr [EAX + 0x4],0x0       ; 005e9e21
    RET                                 ; 005e9e28

