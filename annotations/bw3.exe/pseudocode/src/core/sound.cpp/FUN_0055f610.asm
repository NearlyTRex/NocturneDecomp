; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0055f610(void)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_02cf5f74
;   undefined4 DAT_02cf5f78
;   undefined4 DAT_02cf5f7c
;   undefined4 DAT_02cf5f84
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055f610
        ;   Label: core_sound.cpp_FUN_0055f610
    PUSH EDI                            ; 0055f611
    SUB ESP,0x18                        ; 0055f612
    MOV EAX,[0x00603b28]                ; 0055f615 | g_CDemonSetPtr
    MOV EDI,ESP                         ; 0055f61a
    LEA ESI,[ESP + 0xc]                 ; 0055f61c
    FLD float ptr [EAX + 0x15ac70]      ; 0055f620
    FLD float ptr [EAX + 0x15ac74]      ; 0055f626
    FLD float ptr [EAX + 0x15ac78]      ; 0055f62c
    FXCH ST2                            ; 0055f632
    FCHS                                ; 0055f634
    FXCH                                ; 0055f636
    FCHS                                ; 0055f638
    FXCH ST2                            ; 0055f63a
    FCHS                                ; 0055f63c
    MOV EAX,ESP                         ; 0055f63e
    FXCH                                ; 0055f640
    FSTP float ptr [ESP + 0xc]          ; 0055f642
    FXCH                                ; 0055f646
    FSTP float ptr [ESP + 0x10]         ; 0055f648
    FSTP float ptr [ESP + 0x14]         ; 0055f64c
    MOVSD ES:EDI,ESI                    ; 0055f650
    MOVSD ES:EDI,ESI                    ; 0055f651
    MOVSD ES:EDI,ESI                    ; 0055f652
    CMP EAX,0x2cf5f74                   ; 0055f653
    JNZ 0x0055f66a                      ; 0055f658
        ;   XREF to: 0055f66a (CONDITIONAL_JUMP)  ; LAB_0055f66a
    MOV dword ptr [0x02cf5f84],0xffffffff ; 0055f65a | DAT_02cf5f84
    ADD ESP,0x18                        ; 0055f664
    POP EDI                             ; 0055f667
    POP ESI                             ; 0055f668
    RET                                 ; 0055f669
    MOV EAX,dword ptr [ESP]             ; 0055f66a
        ;   Label: LAB_0055f66a
    MOV [0x02cf5f74],EAX                ; 0055f66d | DAT_02cf5f74
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055f672
    MOV [0x02cf5f78],EAX                ; 0055f676 | DAT_02cf5f78
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055f67b
    MOV [0x02cf5f7c],EAX                ; 0055f67f | DAT_02cf5f7c
    MOV dword ptr [0x02cf5f84],0xffffffff ; 0055f684 | DAT_02cf5f84
    ADD ESP,0x18                        ; 0055f68e
    POP EDI                             ; 0055f691
    POP ESI                             ; 0055f692
    RET                                 ; 0055f693

