; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_FUN_0041b540(void)
;
;
; XREF[3]:
;   core_boneguy.cpp_CBoneGuy_FUN_0041cc40 at 0041ce45
;   core_mobster.cpp_CMobster_FUN_00526d90 at 00526fc6
;   core_zombie.cpp_CZombie_FUN_005fb530 at 005fb79f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041b540
        ;   Label: core_bodypart.cpp_FUN_0041b540
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b544
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041b548
    FLD float ptr [EDX]                 ; 0041b54c
    FADD float ptr [ECX]                ; 0041b54e
    FSTP float ptr [EAX]                ; 0041b550
    FLD float ptr [EDX + 0x4]           ; 0041b552
    FADD float ptr [ECX + 0x4]          ; 0041b555
    FSTP float ptr [EAX + 0x4]          ; 0041b558
    FLD float ptr [EDX + 0x8]           ; 0041b55b
    FADD float ptr [ECX + 0x8]          ; 0041b55e
    FSTP float ptr [EAX + 0x8]          ; 0041b561
    RET                                 ; 0041b564

