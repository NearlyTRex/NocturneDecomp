; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sound_cpp_FUN_0057dab0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dab0
        ;   Label: core_sound.cpp_FUN_0057dab0
    TEST EAX,EAX                        ; 0057dab4
    JL 0x0057dabd                       ; 0057dab6
        ;   XREF to: 0057dabd (CONDITIONAL_JUMP)  ; LAB_0057dabd
    CMP EAX,0x1b                        ; 0057dab8
    JL 0x0057dac3                       ; 0057dabb
        ;   XREF to: 0057dac3 (CONDITIONAL_JUMP)  ; LAB_0057dac3
    MOV EAX,0x5f5b26                    ; 0057dabd
        ;   Label: LAB_0057dabd
    RET                                 ; 0057dac2
    SHL EAX,0x4                         ; 0057dac3
        ;   Label: LAB_0057dac3
    MOV EAX,dword ptr [EAX + 0x6236bc]  ; 0057dac6
    RET                                 ; 0057dacc

