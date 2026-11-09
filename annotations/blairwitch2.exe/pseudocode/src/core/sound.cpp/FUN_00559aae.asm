; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_00559aae(void)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0264bb84
;   undefined4 DAT_0264bb88
;   undefined4 DAT_0264bb8c
;   undefined4 DAT_0264bb94
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00559aae
        ;   Label: core_sound.cpp_FUN_00559aae
    PUSH ESI                            ; 00559ab0
    PUSH EDI                            ; 00559ab1
    SUB ESP,0x18                        ; 00559ab2
    MOV EAX,[0x0061b5a8]                ; 00559ab5 | g_CDemonSetPtr
    MOV EDI,ESP                         ; 00559aba
    LEA ESI,[ESP + 0xc]                 ; 00559abc
    FLD float ptr [EAX + 0x15ac70]      ; 00559ac0
    FLD float ptr [EAX + 0x15ac74]      ; 00559ac6
    FLD float ptr [EAX + 0x15ac78]      ; 00559acc
    FXCH ST2                            ; 00559ad2
    FCHS                                ; 00559ad4
    FXCH                                ; 00559ad6
    FCHS                                ; 00559ad8
    FXCH ST2                            ; 00559ada
    FCHS                                ; 00559adc
    MOV EAX,ESP                         ; 00559ade
    FXCH                                ; 00559ae0
    FSTP float ptr [ESP + 0xc]          ; 00559ae2
    FXCH                                ; 00559ae6
    FSTP float ptr [ESP + 0x10]         ; 00559ae8
    FSTP float ptr [ESP + 0x14]         ; 00559aec
    MOVSD ES:EDI,ESI                    ; 00559af0
    MOVSD ES:EDI,ESI                    ; 00559af1
    MOVSD ES:EDI,ESI                    ; 00559af2
    CMP EAX,0x264bb84                   ; 00559af3
    JNZ 0x00559b0a                      ; 00559af8
        ;   XREF to: 00559b0a (CONDITIONAL_JUMP)  ; LAB_00559b0a
    MOV dword ptr [0x0264bb94],0xffffffff ; 00559afa | DAT_0264bb94
    ADD ESP,0x18                        ; 00559b04
    POP EDI                             ; 00559b07
    POP ESI                             ; 00559b08
    RET                                 ; 00559b09
    MOV EAX,dword ptr [ESP]             ; 00559b0a
        ;   Label: LAB_00559b0a
    MOV [0x0264bb84],EAX                ; 00559b0d | DAT_0264bb84
    MOV EAX,dword ptr [ESP + 0x4]       ; 00559b12
    MOV [0x0264bb88],EAX                ; 00559b16 | DAT_0264bb88
    MOV EAX,dword ptr [ESP + 0x8]       ; 00559b1b
    MOV [0x0264bb8c],EAX                ; 00559b1f | DAT_0264bb8c
    MOV dword ptr [0x0264bb94],0xffffffff ; 00559b24 | DAT_0264bb94
    ADD ESP,0x18                        ; 00559b2e
    POP EDI                             ; 00559b31
    POP ESI                             ; 00559b32
    RET                                 ; 00559b33

