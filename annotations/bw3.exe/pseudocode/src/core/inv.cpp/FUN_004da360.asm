; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInventory * __cdecl core_inv_cpp_FUN_004da360(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_FUN_004d24b0 at 004d24d2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004da360
        ;   Label: core_inv.cpp_FUN_004da360
    MOV dword ptr [EAX + 0x334],0x0     ; 004da364
    MOV dword ptr [EAX + 0x338],0x0     ; 004da36e
    MOV dword ptr [EAX + 0x33c],0x0     ; 004da378
    MOV dword ptr [EAX],0x42c80000      ; 004da382
    MOV dword ptr [EAX + 0x4],0x0       ; 004da388
    MOV dword ptr [EAX + 0x340],0x0     ; 004da38f
    MOV dword ptr [EAX + 0x344],0x0     ; 004da399
    MOV dword ptr [EAX + 0x348],0x0     ; 004da3a3
    MOV dword ptr [EAX + 0x454],0x1     ; 004da3ad
    MOV dword ptr [EAX + 0x458],0x0     ; 004da3b7
    MOV dword ptr [EAX + 0x45c],0x0     ; 004da3c1
    MOV dword ptr [EAX + 0x460],0x0     ; 004da3cb
    MOV dword ptr [EAX + 0x34c],0x0     ; 004da3d5
    MOV byte ptr [EAX + 0x354],0x0      ; 004da3df
    MOV dword ptr [EAX + 0x464],0x0     ; 004da3e6
    MOV dword ptr [EAX + 0x468],0x0     ; 004da3f0
    MOV dword ptr [EAX + 0x46c],0x0     ; 004da3fa
    MOV dword ptr [EAX + 0x8],0x0       ; 004da404
    MOV dword ptr [EAX + 0xc],0x0       ; 004da40b
    MOV dword ptr [EAX + 0x10],0x0      ; 004da412
    RET                                 ; 004da419

