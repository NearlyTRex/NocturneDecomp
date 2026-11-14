; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   trigger_frame
; char *           Stack[0xc]:4   sfx_filename
;
; Referenced Globals:
;   undefined4 DAT_01cc90b0
;
; Called Functions:
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004c59f0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
    FCOMP float ptr [0x01cc90b0]        ; 004c59f4 | DAT_01cc90b0
    FNSTSW AX                           ; 004c59fa
    SAHF                                ; 004c59fc
    JC 0x004c5a12                       ; 004c59fd
        ;   XREF to: 004c5a12 (CONDITIONAL_JUMP)  ; LAB_004c5a12
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c59ff
    FLD float ptr [ESP + 0x8]           ; 004c5a03
    FCOMP float ptr [EAX + 0x15c]       ; 004c5a07
    FNSTSW AX                           ; 004c5a0d
    SAHF                                ; 004c5a0f
    JC 0x004c5a13                       ; 004c5a10
        ;   XREF to: 004c5a13 (CONDITIONAL_JUMP)  ; LAB_004c5a13
    RET                                 ; 004c5a12
        ;   Label: LAB_004c5a12
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 004c5a13
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_004c5a13
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5a18
    ADD EAX,0x490                       ; 004c5a1c
    PUSH EAX                            ; 004c5a21
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0 ; 004c5a22
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 004c5a27
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c5a2a
    PUSH EDX                            ; 004c5a2e
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 004c5a2f
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 004c5a34
    JMP 0x00572b40                      ; 004c5a37
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)

