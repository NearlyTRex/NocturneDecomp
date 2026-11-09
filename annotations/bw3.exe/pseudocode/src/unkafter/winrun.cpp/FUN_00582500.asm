; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_00582500(float param_1)
;
;
; XREF[1]:
;   unkafter_winrun.cpp_FUN_0058236e at 00582394
;
; Referenced Globals:
;   undefined4 DAT_02d224f0
;   undefined4 DAT_02d224f4
;
; *****************************************************************************

section .text

    FLD float ptr [0x02d224f0]          ; 00582500 | DAT_02d224f0
        ;   Label: unkafter_winrun.cpp_FUN_00582500
    FLD float ptr [0x02d224f4]          ; 00582506 | DAT_02d224f4
    MOV EAX,0x2d22c24                   ; 0058250c
    FXCH                                ; 00582511
    FLD float ptr [ESP + 0x4]           ; 00582513
    FXCH                                ; 00582517
    FADD ST0,ST1                        ; 00582519
    FXCH ST2                            ; 0058251b
    FADDP                               ; 0058251d
    LEA EDX,[EAX + 0x2b0]               ; 0058251f
    FSTP float ptr [0x02d224f4]         ; 00582525 | DAT_02d224f4
    FSTP float ptr [0x02d224f0]         ; 0058252b | DAT_02d224f0
    MOV ECX,dword ptr [EAX]             ; 00582531
        ;   Label: LAB_00582531
    TEST ECX,ECX                        ; 00582533
    JNZ 0x00582541                      ; 00582535
        ;   XREF to: 00582541 (CONDITIONAL_JUMP)  ; LAB_00582541
    ADD EAX,0xac                        ; 00582537
    CMP EAX,EDX                         ; 0058253c
    JNZ 0x00582531                      ; 0058253e
        ;   XREF to: 00582531 (CONDITIONAL_JUMP)  ; LAB_00582531
    RET                                 ; 00582540
    CMP ECX,0x4                         ; 00582541
        ;   Label: LAB_00582541
    JNZ 0x0058255c                      ; 00582544
        ;   XREF to: 0058255c (CONDITIONAL_JUMP)  ; LAB_0058255c
    MOV ECX,dword ptr [0x02d224f0]      ; 00582546 | DAT_02d224f0
    MOV dword ptr [EAX + 0xa8],ECX      ; 0058254c
    ADD EAX,0xac                        ; 00582552
    CMP EAX,EDX                         ; 00582557
    JNZ 0x00582531                      ; 00582559
        ;   XREF to: 00582531 (CONDITIONAL_JUMP)  ; LAB_00582531
    RET                                 ; 0058255b
    FLD float ptr [EAX + 0xa8]          ; 0058255c
        ;   Label: LAB_0058255c
    FADD float ptr [ESP + 0x4]          ; 00582562
    FSTP float ptr [EAX + 0xa8]         ; 00582566
    ADD EAX,0xac                        ; 0058256c
    CMP EAX,EDX                         ; 00582571
    JNZ 0x00582531                      ; 00582573
        ;   XREF to: 00582531 (CONDITIONAL_JUMP)  ; LAB_00582531
    RET                                 ; 00582575

