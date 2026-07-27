; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_ctor_FUN_004bedc0(undefined4 *param_1)
;
;
; XREF[1]:
;   core_hero.cpp_FUN_004b46d0 at 004b46f2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bedc0
        ;   Label: core_inv.cpp_CInventory_ctor_FUN_004bedc0
    MOV dword ptr [EAX + 0x32c],0x0     ; 004bedc4
    MOV dword ptr [EAX + 0x330],0x0     ; 004bedce
    MOV dword ptr [EAX + 0x334],0x0     ; 004bedd8
    MOV dword ptr [EAX],0x42c80000      ; 004bede2
    MOV dword ptr [EAX + 0x4],0x0       ; 004bede8
    MOV dword ptr [EAX + 0x338],0x0     ; 004bedef
    MOV dword ptr [EAX + 0x33c],0x0     ; 004bedf9
    MOV dword ptr [EAX + 0x340],0x0     ; 004bee03
    MOV dword ptr [EAX + 0x44c],0x0     ; 004bee0d
    MOV dword ptr [EAX + 0x450],0x0     ; 004bee17
    MOV dword ptr [EAX + 0x454],0x0     ; 004bee21
    MOV dword ptr [EAX + 0x344],0x0     ; 004bee2b
    MOV byte ptr [EAX + 0x34c],0x0      ; 004bee35
    MOV dword ptr [EAX + 0x458],0x0     ; 004bee3c
    MOV dword ptr [EAX + 0x45c],0x0     ; 004bee46
    MOV dword ptr [EAX + 0x8],0x0       ; 004bee50
    RET                                 ; 004bee57

