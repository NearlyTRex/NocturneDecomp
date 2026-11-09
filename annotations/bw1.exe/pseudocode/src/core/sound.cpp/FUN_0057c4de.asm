; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0057c4de(void)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_02c83354
;   undefined4 DAT_02c83358
;   undefined4 DAT_02c8335c
;   undefined4 DAT_02c83364
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0057c4de
        ;   Label: core_sound.cpp_FUN_0057c4de
    PUSH ESI                            ; 0057c4e0
    PUSH EDI                            ; 0057c4e1
    SUB ESP,0x18                        ; 0057c4e2
    MOV EAX,[0x00622c18]                ; 0057c4e5 | g_CDemonSetPtr
    MOV EDI,ESP                         ; 0057c4ea
    LEA ESI,[ESP + 0xc]                 ; 0057c4ec
    FLD float ptr [EAX + 0x15ac70]      ; 0057c4f0
    FLD float ptr [EAX + 0x15ac74]      ; 0057c4f6
    FLD float ptr [EAX + 0x15ac78]      ; 0057c4fc
    FXCH ST2                            ; 0057c502
    FCHS                                ; 0057c504
    FXCH                                ; 0057c506
    FCHS                                ; 0057c508
    FXCH ST2                            ; 0057c50a
    FCHS                                ; 0057c50c
    MOV EAX,ESP                         ; 0057c50e
    FXCH                                ; 0057c510
    FSTP float ptr [ESP + 0xc]          ; 0057c512
    FXCH                                ; 0057c516
    FSTP float ptr [ESP + 0x10]         ; 0057c518
    FSTP float ptr [ESP + 0x14]         ; 0057c51c
    MOVSD ES:EDI,ESI                    ; 0057c520
    MOVSD ES:EDI,ESI                    ; 0057c521
    MOVSD ES:EDI,ESI                    ; 0057c522
    CMP EAX,0x2c83354                   ; 0057c523
    JNZ 0x0057c53a                      ; 0057c528
        ;   XREF to: 0057c53a (CONDITIONAL_JUMP)  ; LAB_0057c53a
    MOV dword ptr [0x02c83364],0xffffffff ; 0057c52a | DAT_02c83364
    ADD ESP,0x18                        ; 0057c534
    POP EDI                             ; 0057c537
    POP ESI                             ; 0057c538
    RET                                 ; 0057c539
    MOV EAX,dword ptr [ESP]             ; 0057c53a
        ;   Label: LAB_0057c53a
    MOV [0x02c83354],EAX                ; 0057c53d | DAT_02c83354
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057c542
    MOV [0x02c83358],EAX                ; 0057c546 | DAT_02c83358
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057c54b
    MOV [0x02c8335c],EAX                ; 0057c54f | DAT_02c8335c
    MOV dword ptr [0x02c83364],0xffffffff ; 0057c554 | DAT_02c83364
    ADD ESP,0x18                        ; 0057c55e
    POP EDI                             ; 0057c561
    POP ESI                             ; 0057c562
    RET                                 ; 0057c563

