; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombiepriest_cpp_FUN_0058d3b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d89f8
;   undefined4 DAT_005d8a00
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d3b0
        ;   Label: core_zombiepriest.cpp_FUN_0058d3b0
    PUSH EDI                            ; 0058d3b1
    PUSH EBP                            ; 0058d3b2
    MOV EBP,ESP                         ; 0058d3b3
    SUB ESP,0x78                        ; 0058d3b5
    AND ESP,0xfffffff8                  ; 0058d3b8
    MOV EBX,ESI                         ; 0058d3bb
    MOV EDX,dword ptr [EBP + 0x10]      ; 0058d3bd
    MOV EAX,dword ptr [EBP + 0x10]      ; 0058d3c0
    PUSH EDX                            ; 0058d3c3
    MOV EAX,dword ptr [EAX + 0x154]     ; 0058d3c4
    LEA ESI,[ESP + 0x4]                 ; 0058d3ca
    LEA EDI,[ESP + 0x1c]                ; 0058d3ce
    CALL dword ptr [EAX + 0x1c]         ; 0058d3d2
    MOV ECX,0x6                         ; 0058d3d5
    ADD ESP,0x4                         ; 0058d3da
    LEA EAX,[ESP + 0x60]                ; 0058d3dd
    MOV ESI,ESP                         ; 0058d3e1
    PUSH EAX                            ; 0058d3e3
    MOVSD.REP ES:EDI,ESI                ; 0058d3e4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0058d3e6
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0058d3eb
    ADD ESP,0x4                         ; 0058d3ef
    LEA ESI,[ESP + 0x60]                ; 0058d3f2
    FLD float ptr [ESP + 0x18]          ; 0058d3f6
    FLD float ptr [ESP + 0x1c]          ; 0058d3fa
    FLD float ptr [ESP + 0x20]          ; 0058d3fe
    FXCH ST2                            ; 0058d402
    FADD float ptr [ESP + 0x24]         ; 0058d404
    FXCH                                ; 0058d408
    FADD float ptr [ESP + 0x28]         ; 0058d40a
    FXCH ST2                            ; 0058d40e
    FADD float ptr [ESP + 0x2c]         ; 0058d410
    FXCH                                ; 0058d414
    FSTP float ptr [ESP + 0x60]         ; 0058d416
    FXCH                                ; 0058d41a
    FSTP float ptr [ESP + 0x64]         ; 0058d41c
    FSTP float ptr [ESP + 0x68]         ; 0058d420
    MOVSD ES:EDI,ESI                    ; 0058d424
    MOVSD ES:EDI,ESI                    ; 0058d425
    MOVSD ES:EDI,ESI                    ; 0058d426
    LEA ESI,[ESP + 0x30]                ; 0058d427
    PUSH ESI                            ; 0058d42b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0058d42c
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0058d431
    FLD float ptr [0x005d89f8]          ; 0058d434 | DAT_005d89f8
    FLD float ptr [ESP + 0x6c]          ; 0058d43a
    FMUL ST1                            ; 0058d43e
    FLD float ptr [ESP + 0x70]          ; 0058d440
    FMUL ST2                            ; 0058d444
    FLD float ptr [ESP + 0x74]          ; 0058d446
    FMULP ST3                           ; 0058d44a
    LEA EDI,[ESP + 0x3c]                ; 0058d44c
    LEA ESI,[ESP + 0x30]                ; 0058d450
    FLD float ptr [ESP + 0x20]          ; 0058d454
    FXCH ST2                            ; 0058d458
    FSTP float ptr [ESP + 0x30]         ; 0058d45a
    FSTP float ptr [ESP + 0x34]         ; 0058d45e
    FXCH                                ; 0058d462
    FSTP float ptr [ESP + 0x38]         ; 0058d464
    MOVSD ES:EDI,ESI                    ; 0058d468
    MOVSD ES:EDI,ESI                    ; 0058d469
    MOVSD ES:EDI,ESI                    ; 0058d46a
    FADD double ptr [0x005d8a00]        ; 0058d46b | DAT_005d8a00
    LEA EDI,[ESP + 0x48]                ; 0058d471
    LEA ESI,[ESP + 0x3c]                ; 0058d475
    FSTP float ptr [ESP + 0x44]         ; 0058d479
    MOVSD ES:EDI,ESI                    ; 0058d47d
    MOVSD ES:EDI,ESI                    ; 0058d47e
    MOVSD ES:EDI,ESI                    ; 0058d47f
    LEA ESI,[ESP + 0x48]                ; 0058d480
    PUSH ESI                            ; 0058d484
    MOV ECX,dword ptr [EBP + 0x10]      ; 0058d485
    PUSH ECX                            ; 0058d488
    LEA ESI,[ESP + 0x5c]                ; 0058d489
    MOV EDI,EBX                         ; 0058d48d
    CALL core_actor.cpp_FUN_00408b80    ; 0058d48f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 0058d494
    ADD ESP,0x8                         ; 0058d498
    MOVSD ES:EDI,ESI                    ; 0058d49b
    MOVSD ES:EDI,ESI                    ; 0058d49c
    MOVSD ES:EDI,ESI                    ; 0058d49d
    MOV EAX,EBX                         ; 0058d49e
    MOV ESP,EBP                         ; 0058d4a0
    POP EBP                             ; 0058d4a2
    POP EDI                             ; 0058d4a3
    POP EBX                             ; 0058d4a4
    RET                                 ; 0058d4a5

