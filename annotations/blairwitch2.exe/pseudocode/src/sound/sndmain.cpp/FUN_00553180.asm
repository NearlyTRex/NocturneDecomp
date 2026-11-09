; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00553180(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_005531d0 at 00553204
;
; Referenced Globals:
;   undefined4 DAT_0264900c
;   undefined4 DAT_02649010
;   undefined4 DAT_02649014
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00553580
;   wincore_winrun.cpp_sleep_FUN_0058fd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553180
        ;   Label: sound_sndmain.cpp_FUN_00553180
    PUSH EDI                            ; 00553181
    MOV EDX,0x1                         ; 00553182
    MOV ECX,dword ptr [0x02649014]      ; 00553187 | DAT_02649014
    MOV dword ptr [0x02649010],EDX      ; 0055318d | DAT_02649010
    TEST ECX,ECX                        ; 00553193
    JNZ 0x005531a5                      ; 00553195
        ;   XREF to: 005531a5 (CONDITIONAL_JUMP)  ; LAB_005531a5
        ;   Label: LAB_00553195
    CALL sound_sndmain.cpp_FUN_00553580 ; 00553197
        ;   XREF to: 00553580 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00553580()
    CMP dword ptr [0x02649014],0x0      ; 0055319c | DAT_02649014
    JZ 0x005531b2                       ; 005531a3
        ;   XREF to: 005531b2 (CONDITIONAL_JUMP)  ; LAB_005531b2
    XOR EDI,EDI                         ; 005531a5
        ;   Label: LAB_005531a5
    XOR EAX,EAX                         ; 005531a7
    MOV dword ptr [0x02649010],EDI      ; 005531a9 | DAT_02649010
    POP EDI                             ; 005531af
    POP EBX                             ; 005531b0
    RET                                 ; 005531b1
    SUB ESP,0x8                         ; 005531b2
        ;   Label: LAB_005531b2
    FLD float ptr [0x0264900c]          ; 005531b5 | DAT_0264900c
    FSTP double ptr [ESP]               ; 005531bb
    CALL wincore_winrun.cpp_sleep_FUN_0058fd90 ; 005531be
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_0058fd90(double seconds)
    MOV EBX,dword ptr [0x02649014]      ; 005531c3 | DAT_02649014
    ADD ESP,0x8                         ; 005531c9
    TEST EBX,EBX                        ; 005531cc
    JMP 0x00553195                      ; 005531ce
        ;   XREF to: 00553195 (UNCONDITIONAL_JUMP)  ; LAB_00553195

