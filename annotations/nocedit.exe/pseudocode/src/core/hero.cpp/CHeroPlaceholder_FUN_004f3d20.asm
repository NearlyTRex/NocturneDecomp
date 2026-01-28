; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3d20(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3d20
        ;   Label: core_hero.cpp_CHeroPlaceholder_FUN_004f3d20
    MOV dword ptr [EAX + 0x4],0x0       ; 004f3d24
    MOV dword ptr [EAX + 0x8],0xbf800000 ; 004f3d2b
    MOV dword ptr [EAX + 0xc],0x3f800000 ; 004f3d32
    MOV dword ptr [EAX + 0x10],0x40c00000 ; 004f3d39
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 004f3d40
    MOV dword ptr [EAX],0xbf800000      ; 004f3d47
    RET                                 ; 004f3d4d

