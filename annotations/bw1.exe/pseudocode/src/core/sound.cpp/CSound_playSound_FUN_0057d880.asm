; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playSound_FUN_0057d880(CSound *this_ptr,void *user_data,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   user_data
; char *           Stack[0xc]:4   sound_name
;
; XREF[13]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_playClip_FUN_00417230 at 00417549
;   core_event.cpp_FUN_004a1d00 at 004a4a8d
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d282f
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004d2690 at 004d272b
;   core_inv.cpp_FUN_004f6b50 at 004f6b88
;   core_inv.cpp_FUN_004f6bb0 at 004f6cfe
;   core_inv.cpp_FUN_004f9f10 at 004fa2de
;   core_script.cpp_CScript_startDialogLine_FUN_0054aa60 at 0054abda
;   core_sound.cpp_CSound_playAmbientSound_FUN_0057d810 at 0057d862
;   core_sound.cpp_FUN_0057cc00 at 0057ccf5
;   ... and 3 more
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0057bef0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0057d880
        ;   Label: core_sound.cpp_CSound_playSound_FUN_0057d880
    PUSH 0x0                            ; 0057d882
    PUSH 0x0                            ; 0057d884
    PUSH 0x0                            ; 0057d886
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057d888
    PUSH 0x0                            ; 0057d88c
    PUSH EDX                            ; 0057d88e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d88f
    PUSH ECX                            ; 0057d893
    CALL core_sound.cpp_playSfxInternal_FUN_0057bef0 ; 0057d894
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0057bef0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0057d899
    RET                                 ; 0057d89c

