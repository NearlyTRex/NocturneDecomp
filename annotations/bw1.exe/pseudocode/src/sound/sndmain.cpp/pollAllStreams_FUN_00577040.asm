; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_00577040(int paused_mode)
;
; Parameters:
; int              Stack[0x4]:4   paused_mode
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_sound.cpp_FUN_0057ce10 at 0057d413
;   sound_sndmain.cpp_FUN_00575fb0 at 00575fff
;
; Referenced Globals:
;   undefined4 DAT_005f4620
;   undefined4 DAT_005f4628
;   undefined4 DAT_005f4630
;   undefined4 DAT_00605b10
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00570460
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577040
        ;   Label: sound_sndmain.cpp_pollAllStreams_FUN_00577040
    PUSH ESI                            ; 00577041
    PUSH EBP                            ; 00577042
    MOV EBP,ESP                         ; 00577043
    SUB ESP,0x10                        ; 00577045
    AND ESP,0xfffffff8                  ; 00577048
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 0057704b
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    FLD float ptr [0x00605b10]          ; 00577050 | DAT_00605b10
    MOV EDX,dword ptr [EBP + 0x10]      ; 00577056
    FST double ptr [ESP]                ; 00577059
    FLD ST0                             ; 0057705c
    FADD double ptr [0x005f4620]        ; 0057705e | DAT_005f4620
    FXCH                                ; 00577064
    FADD double ptr [0x005f4628]        ; 00577066 | DAT_005f4628
    FXCH                                ; 0057706c
    FSTP float ptr [ESP + 0xc]          ; 0057706e
    FSTP float ptr [ESP + 0x8]          ; 00577072
    TEST EDX,EDX                        ; 00577076
    JNZ 0x005770ab                      ; 00577078
        ;   XREF to: 005770ab (CONDITIONAL_JUMP)  ; LAB_005770ab
    MOV EBX,0x2c78ff4                   ; 0057707a
        ;   Label: LAB_0057707a
    LEA ESI,[EBX + 0x6c00]              ; 0057707f
    PUSH dword ptr [ESP + 0x8]          ; 00577085
        ;   Label: LAB_00577085
    PUSH dword ptr [ESP + 0x10]         ; 00577089
    PUSH EBX                            ; 0057708d
    CALL sound_sndmain.cpp_FUN_00570460 ; 0057708e
        ;   XREF to: 00570460 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00570460()
    ADD EBX,0x1b0                       ; 00577093
    ADD ESP,0xc                         ; 00577099
    CMP EBX,ESI                         ; 0057709c
    JNZ 0x00577085                      ; 0057709e
        ;   XREF to: 00577085 (CONDITIONAL_JUMP)  ; LAB_00577085
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005770a0
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV ESP,EBP                         ; 005770a5
    POP EBP                             ; 005770a7
    POP ESI                             ; 005770a8
    POP EBX                             ; 005770a9
    RET                                 ; 005770aa
    FLD double ptr [ESP]                ; 005770ab
        ;   Label: LAB_005770ab
    MOV EBX,dword ptr [0x00605b10]      ; 005770ae | DAT_00605b10
    FADD double ptr [0x005f4630]        ; 005770b4 | DAT_005f4630
    MOV dword ptr [ESP + 0x8],EBX       ; 005770ba
    FSTP float ptr [ESP + 0xc]          ; 005770be
    JMP 0x0057707a                      ; 005770c2
        ;   XREF to: 0057707a (UNCONDITIONAL_JUMP)  ; LAB_0057707a

