; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bodypart_cpp_addVector_FUN_0041b540(CVector3f *a,CVector3f *dst,CVector3f *b)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   a
; CVector3f *      Stack[0x8]:4   dst
; CVector3f *      Stack[0xc]:4   b
;
; XREF[3]:
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40 at 0041ce45
;   core_mobster.cpp_CMobster_processWeaponPickup_FUN_00526d90 at 00526fc6
;   core_zombie.cpp_CZombie_processPickup_FUN_005fb530 at 005fb79f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041b540
        ;   Label: core_bodypart.cpp_addVector_FUN_0041b540
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

