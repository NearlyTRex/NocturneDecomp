; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bodypart_cpp_FUN_0041b4e0(void)
;
;
; XREF[3]:
;   core_boneguy.cpp_FUN_0041cc40 at 0041ce4e
;   core_mobster.cpp_CMobster_FUN_00526d90 at 00526fcf
;   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 at 005fb7a8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041b4e0
        ;   Label: core_bodypart.cpp_FUN_0041b4e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b4e4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041b4e8
    FLD float ptr [EDX]                 ; 0041b4ec
    FMUL float ptr [ECX]                ; 0041b4ee
    FSTP float ptr [EAX]                ; 0041b4f0
    FLD float ptr [EDX + 0x4]           ; 0041b4f2
    FMUL float ptr [ECX]                ; 0041b4f5
    FSTP float ptr [EAX + 0x4]          ; 0041b4f7
    FLD float ptr [EDX + 0x8]           ; 0041b4fa
    FMUL float ptr [ECX]                ; 0041b4fd
    FSTP float ptr [EAX + 0x8]          ; 0041b4ff
    RET                                 ; 0041b502

