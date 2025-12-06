; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_teleport.cpp_CTeleportDest_FUN_005da790(CTeleportDest * this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005da790
        ;   Label: core_teleport.cpp_CTeleportDest_FUN_005da790
    MOV dword ptr [EAX + 0x4],0xbf800000 ; 005da794
    MOV dword ptr [EAX + 0x8],0xc0e00000 ; 005da79b
    MOV dword ptr [EAX + 0xc],0x40e00000 ; 005da7a2
    MOV dword ptr [EAX + 0x10],0x41000000 ; 005da7a9
    MOV dword ptr [EAX + 0x14],0x40e00000 ; 005da7b0
    MOV dword ptr [EAX],0xc0e00000      ; 005da7b7
    RET                                 ; 005da7bd

