; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b260(CCharacter *this_ptr,char *sound_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[9]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412500 at 0041271e
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 at 004140db
;   core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0 at 0041e9c5
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0 at 00439a33
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30 at 004c3fc6
;   core_imp.cpp_CImp_processDismemberment_FUN_004d7ab0 at 004d7c4b
;   core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0 at 004ffec6
;   core_smiley.cpp_CSmiley_processDismemberment_FUN_0054a790 at 0054a945
;   core_zombie.cpp_CZombie_processDismemberment_FUN_00599400 at 00599596
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b260
        ;   Label: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b260
    FLD float ptr [EDX + 0x3050]        ; 0042b264
    FLDZ                                ; 0042b26a
    FCOMPP                              ; 0042b26c
    FNSTSW AX                           ; 0042b26e
    SAHF                                ; 0042b270
    JNC 0x0042b274                      ; 0042b271
        ;   XREF to: 0042b274 (CONDITIONAL_JUMP)  ; LAB_0042b274
    RET                                 ; 0042b273
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042b274
        ;   Label: LAB_0042b274
    PUSH ECX                            ; 0042b278
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0042b279
    PUSH EDX                            ; 0042b27f
    MOV dword ptr [EDX + 0x3050],0x3dcccccd ; 0042b280
    CALL dword ptr [EAX + 0x34]         ; 0042b28a
    ADD ESP,0x8                         ; 0042b28d
    RET                                 ; 0042b290

