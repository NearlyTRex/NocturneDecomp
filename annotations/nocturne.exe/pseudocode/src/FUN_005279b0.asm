; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005279b0(void)
;
;
; Called Functions:
;   FUN_00522480
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005279b0
        ;   Label: FUN_005279b0
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 005279b1
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_lockSound_FUN_00528800()
    MOV EDX,dword ptr [ESP + 0x8]       ; 005279b6
    PUSH EDX                            ; 005279ba
    XOR EBX,EBX                         ; 005279bb
    CALL FUN_00522480                   ; 005279bd
        ;   XREF to: 00522480 (UNCONDITIONAL_CALL)  ; undefined FUN_00522480()
    ADD ESP,0x4                         ; 005279c2
    TEST EAX,EAX                        ; 005279c5
    JZ 0x005279ce                       ; 005279c7
        ;   XREF to: 005279ce (CONDITIONAL_JUMP)  ; LAB_005279ce
    MOV EBX,0x1                         ; 005279c9
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 005279ce
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_005279ce
    MOV EAX,EBX                         ; 005279d3
    POP EBX                             ; 005279d5
    RET                                 ; 005279d6

