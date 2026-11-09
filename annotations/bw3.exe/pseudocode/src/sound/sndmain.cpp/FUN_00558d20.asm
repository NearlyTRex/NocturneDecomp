; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00558d20(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00558d70 at 00558da4
;
; Referenced Globals:
;   undefined4 DAT_02cf340c
;   undefined4 DAT_02cf3410
;   undefined4 DAT_02cf3414
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00559120
;   wincore_winrun.cpp_sleep_FUN_00581a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558d20
        ;   Label: sound_sndmain.cpp_FUN_00558d20
    PUSH EDI                            ; 00558d21
    MOV EDX,0x1                         ; 00558d22
    MOV ECX,dword ptr [0x02cf3414]      ; 00558d27 | DAT_02cf3414
    MOV dword ptr [0x02cf3410],EDX      ; 00558d2d | DAT_02cf3410
    TEST ECX,ECX                        ; 00558d33
    JNZ 0x00558d45                      ; 00558d35
        ;   XREF to: 00558d45 (CONDITIONAL_JUMP)  ; LAB_00558d45
        ;   Label: LAB_00558d35
    CALL sound_sndmain.cpp_FUN_00559120 ; 00558d37
        ;   XREF to: 00559120 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00559120()
    CMP dword ptr [0x02cf3414],0x0      ; 00558d3c | DAT_02cf3414
    JZ 0x00558d52                       ; 00558d43
        ;   XREF to: 00558d52 (CONDITIONAL_JUMP)  ; LAB_00558d52
    XOR EDI,EDI                         ; 00558d45
        ;   Label: LAB_00558d45
    XOR EAX,EAX                         ; 00558d47
    MOV dword ptr [0x02cf3410],EDI      ; 00558d49 | DAT_02cf3410
    POP EDI                             ; 00558d4f
    POP EBX                             ; 00558d50
    RET                                 ; 00558d51
    SUB ESP,0x8                         ; 00558d52
        ;   Label: LAB_00558d52
    FLD float ptr [0x02cf340c]          ; 00558d55 | DAT_02cf340c
    FSTP double ptr [ESP]               ; 00558d5b
    CALL wincore_winrun.cpp_sleep_FUN_00581a40 ; 00558d5e
        ;   XREF to: 00581a40 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_00581a40(double seconds)
    MOV EBX,dword ptr [0x02cf3414]      ; 00558d63 | DAT_02cf3414
    ADD ESP,0x8                         ; 00558d69
    TEST EBX,EBX                        ; 00558d6c
    JMP 0x00558d35                      ; 00558d6e
        ;   XREF to: 00558d35 (UNCONDITIONAL_JUMP)  ; LAB_00558d35

