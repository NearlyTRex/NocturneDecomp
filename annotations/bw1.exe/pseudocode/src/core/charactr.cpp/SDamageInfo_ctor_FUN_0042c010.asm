; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo *this_ptr)
;
; Parameters:
; SDamageInfo *    Stack[0x4]:4   this_ptr
;
; XREF[60]:
;   core_actor.cpp_FUN_00409f20 at 0040a1d9
;   core_anvil.cpp_FUN_0040e680 at 0040e765
;   core_baron.cpp_FUN_0040fcf0 at 0040fe1b
;   core_batcreat.cpp_FUN_004115b0 at 004119ae
;   core_batman.cpp_FUN_00412ba0 at 00413440
;   core_bodypart.cpp_FUN_00419740 at 004198df
;   core_boneguy.cpp_FUN_0041bb40 at 0041c253
;   core_boxactor.cpp_FUN_00422000 at 004224a7
;   core_bride.cpp_FUN_00423b70 at 00423ef3
;   core_bugs.cpp_FUN_004263d0 at 00426479
;   ... and 50 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c010
        ;   Label: core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
    MOV dword ptr [EAX + 0x28],0x0      ; 0042c014
    MOV dword ptr [EAX + 0x2c],0x0      ; 0042c01b
    MOV dword ptr [EAX],0xffffffff      ; 0042c022
    LEA EDX,[EAX + 0xc]                 ; 0042c028
    MOV dword ptr [EAX + 0x8],0x0       ; 0042c02b
    MOV dword ptr [EDX + 0x8],0x0       ; 0042c032
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042c039
    MOV dword ptr [EDX + 0x4],ECX       ; 0042c03c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042c03f
    MOV dword ptr [EDX],ECX             ; 0042c042
    LEA EDX,[EAX + 0x1c]                ; 0042c044
    MOV dword ptr [EAX + 0x18],0x41a00000 ; 0042c047
    MOV dword ptr [EDX + 0x8],0x0       ; 0042c04e
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042c055
    MOV dword ptr [EDX + 0x4],ECX       ; 0042c058
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042c05b
    MOV dword ptr [EDX],ECX             ; 0042c05e
    MOV dword ptr [EAX + 0x30],0x64     ; 0042c060
    MOV dword ptr [EAX + 0x34],0x0      ; 0042c067
    MOV dword ptr [EAX + 0x38],0x0      ; 0042c06e
    RET                                 ; 0042c075

