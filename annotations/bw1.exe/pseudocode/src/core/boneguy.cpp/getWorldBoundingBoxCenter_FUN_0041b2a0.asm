; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_0041b2a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d4551
;   undefined4 DAT_005d4559
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b2a0
        ;   Label: core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_0041b2a0
    PUSH EDI                            ; 0041b2a1
    PUSH EBP                            ; 0041b2a2
    MOV EBP,ESP                         ; 0041b2a3
    SUB ESP,0x78                        ; 0041b2a5
    AND ESP,0xfffffff8                  ; 0041b2a8
    MOV EBX,ESI                         ; 0041b2ab
    MOV EDX,dword ptr [EBP + 0x10]      ; 0041b2ad
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041b2b0
    PUSH EDX                            ; 0041b2b3
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041b2b4
    LEA ESI,[ESP + 0x4]                 ; 0041b2ba
    LEA EDI,[ESP + 0x1c]                ; 0041b2be
    CALL dword ptr [EAX + 0x1c]         ; 0041b2c2
    MOV ECX,0x6                         ; 0041b2c5
    ADD ESP,0x4                         ; 0041b2ca
    LEA EAX,[ESP + 0x60]                ; 0041b2cd
    MOV ESI,ESP                         ; 0041b2d1
    PUSH EAX                            ; 0041b2d3
    MOVSD.REP ES:EDI,ESI                ; 0041b2d4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0041b2d6
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0041b2db
    ADD ESP,0x4                         ; 0041b2df
    LEA ESI,[ESP + 0x60]                ; 0041b2e2
    FLD float ptr [ESP + 0x18]          ; 0041b2e6
    FLD float ptr [ESP + 0x1c]          ; 0041b2ea
    FLD float ptr [ESP + 0x20]          ; 0041b2ee
    FXCH ST2                            ; 0041b2f2
    FADD float ptr [ESP + 0x24]         ; 0041b2f4
    FXCH                                ; 0041b2f8
    FADD float ptr [ESP + 0x28]         ; 0041b2fa
    FXCH ST2                            ; 0041b2fe
    FADD float ptr [ESP + 0x2c]         ; 0041b300
    FXCH                                ; 0041b304
    FSTP float ptr [ESP + 0x60]         ; 0041b306
    FXCH                                ; 0041b30a
    FSTP float ptr [ESP + 0x64]         ; 0041b30c
    FSTP float ptr [ESP + 0x68]         ; 0041b310
    MOVSD ES:EDI,ESI                    ; 0041b314
    MOVSD ES:EDI,ESI                    ; 0041b315
    MOVSD ES:EDI,ESI                    ; 0041b316
    LEA ESI,[ESP + 0x30]                ; 0041b317
    PUSH ESI                            ; 0041b31b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0041b31c
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 0041b321
    FLD float ptr [0x005d4551]          ; 0041b324 | DAT_005d4551
    FLD float ptr [ESP + 0x6c]          ; 0041b32a
    FMUL ST1                            ; 0041b32e
    FLD float ptr [ESP + 0x70]          ; 0041b330
    FMUL ST2                            ; 0041b334
    FLD float ptr [ESP + 0x74]          ; 0041b336
    FMULP ST3                           ; 0041b33a
    LEA EDI,[ESP + 0x3c]                ; 0041b33c
    LEA ESI,[ESP + 0x30]                ; 0041b340
    FLD float ptr [ESP + 0x20]          ; 0041b344
    FXCH ST2                            ; 0041b348
    FSTP float ptr [ESP + 0x30]         ; 0041b34a
    FSTP float ptr [ESP + 0x34]         ; 0041b34e
    FXCH                                ; 0041b352
    FSTP float ptr [ESP + 0x38]         ; 0041b354
    MOVSD ES:EDI,ESI                    ; 0041b358
    MOVSD ES:EDI,ESI                    ; 0041b359
    MOVSD ES:EDI,ESI                    ; 0041b35a
    FADD double ptr [0x005d4559]        ; 0041b35b | DAT_005d4559
    LEA EDI,[ESP + 0x48]                ; 0041b361
    LEA ESI,[ESP + 0x3c]                ; 0041b365
    FSTP float ptr [ESP + 0x44]         ; 0041b369
    MOVSD ES:EDI,ESI                    ; 0041b36d
    MOVSD ES:EDI,ESI                    ; 0041b36e
    MOVSD ES:EDI,ESI                    ; 0041b36f
    LEA ESI,[ESP + 0x48]                ; 0041b370
    PUSH ESI                            ; 0041b374
    MOV ECX,dword ptr [EBP + 0x10]      ; 0041b375
    PUSH ECX                            ; 0041b378
    LEA ESI,[ESP + 0x5c]                ; 0041b379
    MOV EDI,EBX                         ; 0041b37d
    CALL core_actor.cpp_FUN_00408b40    ; 0041b37f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 0041b384
    ADD ESP,0x8                         ; 0041b388
    MOVSD ES:EDI,ESI                    ; 0041b38b
    MOVSD ES:EDI,ESI                    ; 0041b38c
    MOVSD ES:EDI,ESI                    ; 0041b38d
    MOV EAX,EBX                         ; 0041b38e
    MOV ESP,EBP                         ; 0041b390
    POP EBP                             ; 0041b392
    POP EDI                             ; 0041b393
    POP EBX                             ; 0041b394
    RET                                 ; 0041b395

