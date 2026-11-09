; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00428450(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d51bd
;   undefined4 DAT_005d51c5
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428450
        ;   Label: core_carved.cpp_FUN_00428450
    PUSH EDI                            ; 00428451
    PUSH EBP                            ; 00428452
    MOV EBP,ESP                         ; 00428453
    SUB ESP,0x78                        ; 00428455
    AND ESP,0xfffffff8                  ; 00428458
    MOV EBX,ESI                         ; 0042845b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0042845d
    MOV EAX,dword ptr [EBP + 0x10]      ; 00428460
    PUSH EDX                            ; 00428463
    MOV EAX,dword ptr [EAX + 0x154]     ; 00428464
    LEA ESI,[ESP + 0x4]                 ; 0042846a
    LEA EDI,[ESP + 0x1c]                ; 0042846e
    CALL dword ptr [EAX + 0x1c]         ; 00428472
    MOV ECX,0x6                         ; 00428475
    ADD ESP,0x4                         ; 0042847a
    LEA EAX,[ESP + 0x60]                ; 0042847d
    MOV ESI,ESP                         ; 00428481
    PUSH EAX                            ; 00428483
    MOVSD.REP ES:EDI,ESI                ; 00428484
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 00428486
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0042848b
    ADD ESP,0x4                         ; 0042848f
    LEA ESI,[ESP + 0x60]                ; 00428492
    FLD float ptr [ESP + 0x18]          ; 00428496
    FLD float ptr [ESP + 0x1c]          ; 0042849a
    FLD float ptr [ESP + 0x20]          ; 0042849e
    FXCH ST2                            ; 004284a2
    FADD float ptr [ESP + 0x24]         ; 004284a4
    FXCH                                ; 004284a8
    FADD float ptr [ESP + 0x28]         ; 004284aa
    FXCH ST2                            ; 004284ae
    FADD float ptr [ESP + 0x2c]         ; 004284b0
    FXCH                                ; 004284b4
    FSTP float ptr [ESP + 0x60]         ; 004284b6
    FXCH                                ; 004284ba
    FSTP float ptr [ESP + 0x64]         ; 004284bc
    FSTP float ptr [ESP + 0x68]         ; 004284c0
    MOVSD ES:EDI,ESI                    ; 004284c4
    MOVSD ES:EDI,ESI                    ; 004284c5
    MOVSD ES:EDI,ESI                    ; 004284c6
    LEA ESI,[ESP + 0x30]                ; 004284c7
    PUSH ESI                            ; 004284cb
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 004284cc
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 004284d1
    FLD float ptr [0x005d51bd]          ; 004284d4 | DAT_005d51bd
    FLD float ptr [ESP + 0x6c]          ; 004284da
    FMUL ST1                            ; 004284de
    FLD float ptr [ESP + 0x70]          ; 004284e0
    FMUL ST2                            ; 004284e4
    FLD float ptr [ESP + 0x74]          ; 004284e6
    FMULP ST3                           ; 004284ea
    LEA EDI,[ESP + 0x3c]                ; 004284ec
    LEA ESI,[ESP + 0x30]                ; 004284f0
    FLD float ptr [ESP + 0x20]          ; 004284f4
    FXCH ST2                            ; 004284f8
    FSTP float ptr [ESP + 0x30]         ; 004284fa
    FSTP float ptr [ESP + 0x34]         ; 004284fe
    FXCH                                ; 00428502
    FSTP float ptr [ESP + 0x38]         ; 00428504
    MOVSD ES:EDI,ESI                    ; 00428508
    MOVSD ES:EDI,ESI                    ; 00428509
    MOVSD ES:EDI,ESI                    ; 0042850a
    FADD double ptr [0x005d51c5]        ; 0042850b | DAT_005d51c5
    LEA EDI,[ESP + 0x48]                ; 00428511
    LEA ESI,[ESP + 0x3c]                ; 00428515
    FSTP float ptr [ESP + 0x44]         ; 00428519
    MOVSD ES:EDI,ESI                    ; 0042851d
    MOVSD ES:EDI,ESI                    ; 0042851e
    MOVSD ES:EDI,ESI                    ; 0042851f
    LEA ESI,[ESP + 0x48]                ; 00428520
    PUSH ESI                            ; 00428524
    MOV ECX,dword ptr [EBP + 0x10]      ; 00428525
    PUSH ECX                            ; 00428528
    LEA ESI,[ESP + 0x5c]                ; 00428529
    MOV EDI,EBX                         ; 0042852d
    CALL core_actor.cpp_FUN_00408b40    ; 0042852f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 00428534
    ADD ESP,0x8                         ; 00428538
    MOVSD ES:EDI,ESI                    ; 0042853b
    MOVSD ES:EDI,ESI                    ; 0042853c
    MOVSD ES:EDI,ESI                    ; 0042853d
    MOV EAX,EBX                         ; 0042853e
    MOV ESP,EBP                         ; 00428540
    POP EBP                             ; 00428542
    POP EDI                             ; 00428543
    POP EBX                             ; 00428544
    RET                                 ; 00428545

