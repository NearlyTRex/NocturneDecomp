; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b4320(float param_1)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005b4190 at 005b41b4
;
; Referenced Globals:
;   undefined4 DAT_02c9c7e0
;   undefined4 DAT_02c9c7e4
;
; *****************************************************************************

section .text

    FLD float ptr [0x02c9c7e0]          ; 005b4320 | DAT_02c9c7e0
        ;   Label: wincore_winrun.cpp_FUN_005b4320
    FLD float ptr [0x02c9c7e4]          ; 005b4326 | DAT_02c9c7e4
    MOV EAX,0x2c9cf14                   ; 005b432c
    FXCH                                ; 005b4331
    FLD float ptr [ESP + 0x4]           ; 005b4333
    FXCH                                ; 005b4337
    FADD ST0,ST1                        ; 005b4339
    FXCH ST2                            ; 005b433b
    FADDP                               ; 005b433d
    LEA EDX,[EAX + 0x2b0]               ; 005b433f
    FSTP float ptr [0x02c9c7e4]         ; 005b4345 | DAT_02c9c7e4
    FSTP float ptr [0x02c9c7e0]         ; 005b434b | DAT_02c9c7e0
    MOV ECX,dword ptr [EAX]             ; 005b4351
        ;   Label: LAB_005b4351
    TEST ECX,ECX                        ; 005b4353
    JNZ 0x005b4361                      ; 005b4355
        ;   XREF to: 005b4361 (CONDITIONAL_JUMP)  ; LAB_005b4361
    ADD EAX,0xac                        ; 005b4357
    CMP EAX,EDX                         ; 005b435c
    JNZ 0x005b4351                      ; 005b435e
        ;   XREF to: 005b4351 (CONDITIONAL_JUMP)  ; LAB_005b4351
    RET                                 ; 005b4360
    CMP ECX,0x4                         ; 005b4361
        ;   Label: LAB_005b4361
    JNZ 0x005b437c                      ; 005b4364
        ;   XREF to: 005b437c (CONDITIONAL_JUMP)  ; LAB_005b437c
    MOV ECX,dword ptr [0x02c9c7e0]      ; 005b4366 | DAT_02c9c7e0
    MOV dword ptr [EAX + 0xa8],ECX      ; 005b436c
    ADD EAX,0xac                        ; 005b4372
    CMP EAX,EDX                         ; 005b4377
    JNZ 0x005b4351                      ; 005b4379
        ;   XREF to: 005b4351 (CONDITIONAL_JUMP)  ; LAB_005b4351
    RET                                 ; 005b437b
    FLD float ptr [EAX + 0xa8]          ; 005b437c
        ;   Label: LAB_005b437c
    FADD float ptr [ESP + 0x4]          ; 005b4382
    FSTP float ptr [EAX + 0xa8]         ; 005b4386
    ADD EAX,0xac                        ; 005b438c
    CMP EAX,EDX                         ; 005b4391
    JNZ 0x005b4351                      ; 005b4393
        ;   XREF to: 005b4351 (CONDITIONAL_JUMP)  ; LAB_005b4351
    RET                                 ; 005b4395

