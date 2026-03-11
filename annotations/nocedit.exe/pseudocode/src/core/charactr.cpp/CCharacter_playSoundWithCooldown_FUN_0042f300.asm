; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300(CCharacter *this_ptr,char *sound_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[9]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0 at 00415fee
;   core_batman.cpp_CBatman_processDismemberment_FUN_00417660 at 004177fb
;   core_bride.cpp_CBride_processDismemberment_FUN_00424600 at 00424725
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004448c0 at 00444a43
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e8520 at 004e86b6
;   core_imp.cpp_CImp_processDismemberment_FUN_004fab60 at 004facfb
;   core_mobster.cpp_CMobster_processDismemberment_FUN_00527380 at 00527586
;   core_smiley.cpp_CSmiley_processDismemberment_FUN_005a32a0 at 005a3455
;   core_zombie.cpp_CZombie_processDismemberment_FUN_005fc220 at 005fc3b6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042f300
        ;   Label: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
    FLD float ptr [EDX + 0x2dd8]        ; 0042f304
    FLDZ                                ; 0042f30a
    FCOMPP                              ; 0042f30c
    FNSTSW AX                           ; 0042f30e
    SAHF                                ; 0042f310
    JNC 0x0042f314                      ; 0042f311
        ;   XREF to: 0042f314 (CONDITIONAL_JUMP)  ; LAB_0042f314
    RET                                 ; 0042f313
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042f314
        ;   Label: LAB_0042f314
    PUSH ECX                            ; 0042f318
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042f319
    PUSH EDX                            ; 0042f31f
    MOV dword ptr [EDX + 0x2dd8],0x3dcccccd ; 0042f320
    CALL dword ptr [EAX + 0x24]         ; 0042f32a
    ADD ESP,0x8                         ; 0042f32d
    RET                                 ; 0042f330

