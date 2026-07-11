; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423ed0(undefined4 *param_1)
;
;
; XREF[15]:
;   FUN_00410cc0 at 00410dbb
;   FUN_0041e5e0 at 0041e9bb
;   FUN_00422370 at 0042240d
;   FUN_00424f40 at 00424f79
;   FUN_00497410 at 0049767a
;   FUN_004a0550 at 004a06e3
;   FUN_004b3f40 at 004b3f99
;   FUN_004bb3c0 at 004bb422
;   FUN_004d4f30 at 004d54a7
;   FUN_004fca50 at 004fcab3
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423ed0
        ;   Label: FUN_00423ed0
    MOV dword ptr [EAX + 0x28],0x0      ; 00423ed4
    MOV dword ptr [EAX + 0x2c],0x0      ; 00423edb
    MOV dword ptr [EAX],0xffffffff      ; 00423ee2
    LEA EDX,[EAX + 0xc]                 ; 00423ee8
    MOV dword ptr [EAX + 0x8],0x0       ; 00423eeb
    MOV dword ptr [EDX + 0x8],0x0       ; 00423ef2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00423ef9
    MOV dword ptr [EDX + 0x4],ECX       ; 00423efc
    MOV ECX,dword ptr [EDX + 0x4]       ; 00423eff
    MOV dword ptr [EDX],ECX             ; 00423f02
    LEA EDX,[EAX + 0x1c]                ; 00423f04
    MOV dword ptr [EAX + 0x18],0x41a00000 ; 00423f07
    MOV dword ptr [EDX + 0x8],0x0       ; 00423f0e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00423f15
    MOV dword ptr [EDX + 0x4],ECX       ; 00423f18
    MOV ECX,dword ptr [EDX + 0x4]       ; 00423f1b
    MOV dword ptr [EDX],ECX             ; 00423f1e
    MOV dword ptr [EAX + 0x30],0x64     ; 00423f20
    MOV dword ptr [EAX + 0x34],0x0      ; 00423f27
    MOV dword ptr [EAX + 0x38],0x0      ; 00423f2e
    RET                                 ; 00423f35

