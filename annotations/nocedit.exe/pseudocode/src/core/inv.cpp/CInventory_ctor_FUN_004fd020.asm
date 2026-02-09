; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CInventory * __cdecl core_inv_cpp_CInventory_ctor_FUN_004fd020(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_ctor_FUN_004f2340 at 004f2362
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd020
        ;   Label: core_inv.cpp_CInventory_ctor_FUN_004fd020
    MOV dword ptr [EAX + 0x32c],0x0     ; 004fd024
    MOV dword ptr [EAX + 0x330],0x0     ; 004fd02e
    MOV dword ptr [EAX + 0x334],0x0     ; 004fd038
    MOV dword ptr [EAX],0x42c80000      ; 004fd042
    MOV dword ptr [EAX + 0x4],0x0       ; 004fd048
    MOV dword ptr [EAX + 0x338],0x0     ; 004fd04f
    MOV dword ptr [EAX + 0x33c],0x0     ; 004fd059
    MOV dword ptr [EAX + 0x340],0x0     ; 004fd063
    MOV dword ptr [EAX + 0x44c],0x0     ; 004fd06d
    MOV dword ptr [EAX + 0x450],0x0     ; 004fd077
    MOV dword ptr [EAX + 0x454],0x0     ; 004fd081
    MOV dword ptr [EAX + 0x344],0x0     ; 004fd08b
    MOV byte ptr [EAX + 0x34c],0x0      ; 004fd095
    MOV dword ptr [EAX + 0x458],0x0     ; 004fd09c
    MOV dword ptr [EAX + 0x45c],0x0     ; 004fd0a6
    MOV dword ptr [EAX + 0x8],0x0       ; 004fd0b0
    RET                                 ; 004fd0b7

