; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl sound_sndmain_cpp_startSfxAtStaticPosition_FUN_005a9580(char *filename,double pos_x,double pos_y,double pos_z)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; double           Stack[0x8]:8   pos_x
; double           Stack[0x10]:8   pos_y
; double           Stack[0x18]:8   pos_z
;
; Called Functions:
;   sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
;   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
;   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9580
        ;   Label: sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580
    PUSH ESI                            ; 005a9581
    PUSH EDI                            ; 005a9582
    PUSH EBP                            ; 005a9583
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005a9584
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x1                            ; 005a9589
    CALL sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0 ; 005a958b
        ;   XREF to: 005a8bb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)
    ADD ESP,0x4                         ; 005a9590
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005a9593
    PUSH EDX                            ; 005a9597
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005a9598
    PUSH ECX                            ; 005a959c
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005a959d
    PUSH EBX                            ; 005a95a1
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005a95a2
    PUSH ESI                            ; 005a95a6
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a95a7
    PUSH EDI                            ; 005a95ab
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005a95ac
    PUSH EBP                            ; 005a95b0
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0 ; 005a95b1
        ;   XREF to: 005a88e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 005a95b6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a95b9
    PUSH EAX                            ; 005a95bd
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005a95be
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005a95c3
    MOV EBX,EAX                         ; 005a95c6
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005a95c8
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV EAX,EBX                         ; 005a95cd
    POP EBP                             ; 005a95cf
    POP EDI                             ; 005a95d0
    POP ESI                             ; 005a95d1
    POP EBX                             ; 005a95d2
    RET                                 ; 005a95d3

