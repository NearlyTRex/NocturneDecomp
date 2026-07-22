; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(undefined4 *param_1)
;
;
; XREF[50]:
;   FUN_0040f610 at 0040f6f5
;   FUN_00418a00 at 0041908c
;   FUN_0041fe40 at 0042030d
;   FUN_0043d1c0 at 0043d5e8
;   FUN_00462300 at 0046243a
;   FUN_00477890 at 00477d93
;   FUN_004a9270 at 004a98a4
;   FUN_004b27c0 at 004b2d07
;   FUN_004b6d80 at 004b6eb4
;   FUN_004c71a0 at 004c78ab
;   ... and 40 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423ed0
        ;   Label: core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
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

