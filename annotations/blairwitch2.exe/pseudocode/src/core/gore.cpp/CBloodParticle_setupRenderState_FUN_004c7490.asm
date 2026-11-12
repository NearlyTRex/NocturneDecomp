; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004c7490(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_renderParticles_FUN_004c9440 at 004c948a
;
; Referenced Globals:
;   undefined4 DAT_005d9432
;   undefined4 DAT_0060b280
;   undefined4 DAT_007bda74
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb828c
;   undefined4 DAT_01cb8290
;   undefined4 DAT_01cb8294
;   undefined4 DAT_01cb8298
;   undefined4 DAT_01cb829c
;   undefined4 DAT_01cb82a0
;   undefined4 DAT_01cb82a4
;   undefined4 DAT_01cb82a8
;   undefined4 DAT_01cb82ac
;   undefined4 DAT_01cb82b0
;   undefined4 DAT_01cb82b4
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_FUN_0046b650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7490
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004c7490
    PUSH ESI                            ; 004c7491
    PUSH EDI                            ; 004c7492
    SUB ESP,0x5c                        ; 004c7493
    MOV EDX,0x4                         ; 004c7496
    MOV EAX,0x1                         ; 004c749b
    LEA ESI,[ESP + 0x50]                ; 004c74a0
    MOV EBX,dword ptr [0x0060b280]      ; 004c74a4 | DAT_0060b280
    MOV EDI,0x1cb82b0                   ; 004c74aa
    XOR ECX,ECX                         ; 004c74af
    MOV dword ptr [0x01cb828c],EDX      ; 004c74b1 | DAT_01cb828c
    MOV dword ptr [0x01cb8290],ECX      ; 004c74b7 | DAT_01cb8290
    MOV dword ptr [0x01cb8294],ECX      ; 004c74bd | DAT_01cb8294
    MOV dword ptr [0x01cb8298],ECX      ; 004c74c3 | DAT_01cb8298
    MOV dword ptr [0x01cb829c],ECX      ; 004c74c9 | DAT_01cb829c
    MOV dword ptr [0x01cb82a0],ECX      ; 004c74cf | DAT_01cb82a0
    MOV [0x01cb82a4],EAX                ; 004c74d5 | DAT_01cb82a4
    PUSH EBX                            ; 004c74da | DAT_01ba5c50
    MOV EDX,0x2                         ; 004c74db
    MOV ECX,0x3                         ; 004c74e0
    MOV dword ptr [0x01cb82a8],EDX      ; 004c74e5 | DAT_01cb82a8
    MOV dword ptr [0x01cb82ac],ECX      ; 004c74eb | DAT_01cb82ac
    CALL engine_drender.cpp_FUN_0046b650 ; 004c74f1
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b650()
    LEA ESI,[ESP + 0x54]                ; 004c74f6
    ADD ESP,0x4                         ; 004c74fa
    MOVSD ES:EDI,ESI                    ; 004c74fd | DAT_01cb82b0
    MOVSD ES:EDI,ESI                    ; 004c74fe | DAT_01cb82b4
    MOVSD ES:EDI,ESI                    ; 004c74ff | DAT_01cb82b8
    XOR ESI,ESI                         ; 004c7500
    MOV dword ptr [0x01cb82b4],ESI      ; 004c7502 | DAT_01cb82b4
    MOV ESI,dword ptr [0x007bda74]      ; 004c7508 | DAT_007bda74
    MOV ECX,0xa                         ; 004c750e
    LEA EDI,[ESP + 0x28]                ; 004c7513
    LEA ESI,[ESI + 0x10]                ; 004c7517
    MOVSD.REP ES:EDI,ESI                ; 004c751a
    MOV ECX,0xa                         ; 004c751c
    MOV EDI,ESP                         ; 004c7521
    LEA ESI,[ESP + 0x28]                ; 004c7523
    MOVSD.REP ES:EDI,ESI                ; 004c7527
    FLD double ptr [0x005d9432]         ; 004c7529 | DAT_005d9432
    FLD float ptr [ESP + 0x8]           ; 004c752f
    FMUL ST1                            ; 004c7533
    FLD float ptr [ESP + 0x14]          ; 004c7535
    FMUL ST2                            ; 004c7539
    FLD float ptr [ESP + 0x20]          ; 004c753b
    FMULP ST3                           ; 004c753f
    FXCH                                ; 004c7541
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c7543
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004c7548
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c754a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004c754f
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c7551
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004c7556
    FISTP dword ptr [0x01cb82bc]        ; 004c7558 | DAT_01cb82bc
    FXCH                                ; 004c755e
    FISTP dword ptr [0x01cb82c0]        ; 004c7560 | DAT_01cb82c0
    FISTP dword ptr [0x01cb82c4]        ; 004c7566 | DAT_01cb82c4
    ADD ESP,0x5c                        ; 004c756c
    POP EDI                             ; 004c756f
    POP ESI                             ; 004c7570
    POP EBX                             ; 004c7571
    RET                                 ; 004c7572

