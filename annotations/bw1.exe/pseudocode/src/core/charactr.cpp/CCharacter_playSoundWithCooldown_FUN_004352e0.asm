; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0(CCharacter *this_ptr,char *sound_name)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; XREF[14]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170 at 0041238e
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413c40 at 00413ddb
;   core_bride.cpp_CBride_processDismemberment_FUN_004248e0 at 00424a05
;   core_carved.cpp_FUN_0042b580 at 0042b716
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00448b70 at 00448cf3
;   core_demnfolk.cpp_FUN_0045c4a0 at 0045c636
;   core_djien.cpp_CDjien_damageSack_FUN_00460f90 at 0046103c
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e05b0 at 004e0746
;   core_imp.cpp_CImp_processDismemberment_FUN_004f3cb0 at 004f3e4b
;   core_mobster.cpp_CMobster_processDismemberment_FUN_0051ec80 at 0051ee86
;   ... and 4 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004352e0
        ;   Label: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
    FLD float ptr [EDX + 0x2fe4]        ; 004352e4
    FLDZ                                ; 004352ea
    FCOMPP                              ; 004352ec
    FNSTSW AX                           ; 004352ee
    SAHF                                ; 004352f0
    JNC 0x004352f4                      ; 004352f1
        ;   XREF to: 004352f4 (CONDITIONAL_JUMP)  ; LAB_004352f4
    RET                                 ; 004352f3
    MOV ECX,dword ptr [ESP + 0x8]       ; 004352f4
        ;   Label: LAB_004352f4
    PUSH ECX                            ; 004352f8
    MOV EAX,dword ptr [EDX + 0x154]     ; 004352f9
    PUSH EDX                            ; 004352ff
    MOV dword ptr [EDX + 0x2fe4],0x3dcccccd ; 00435300
    CALL dword ptr [EAX + 0x2c]         ; 0043530a
    ADD ESP,0x8                         ; 0043530d
    RET                                 ; 00435310

