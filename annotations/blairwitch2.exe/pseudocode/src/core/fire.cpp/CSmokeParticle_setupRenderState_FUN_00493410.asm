; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00493410(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c8f7
;
; Referenced Globals:
;   undefined4 DAT_005d533a
;   undefined4 DAT_0060b280
;   undefined4 DAT_007bda74
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c3deb8
;   undefined4 DAT_01c3debc
;   undefined4 DAT_01c3dec0
;   undefined4 DAT_01c3dec4
;   undefined4 DAT_01c3dec8
;   undefined4 DAT_01c3decc
;   undefined4 DAT_01c3ded4
;   undefined4 DAT_01c3ded8
;   undefined4 DAT_01c3dedc
;   undefined4 DAT_01c3dee0
;   undefined4 DAT_01c3dee4
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_FUN_0046b650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493410
        ;   Label: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00493410
    PUSH ESI                            ; 00493411
    PUSH EDI                            ; 00493412
    SUB ESP,0x5c                        ; 00493413
    MOV EDX,0x4                         ; 00493416
    MOV EAX,0x1                         ; 0049341b
    LEA ESI,[ESP + 0x50]                ; 00493420
    MOV EBX,dword ptr [0x0060b280]      ; 00493424 | DAT_0060b280
    MOV EDI,0x1c3deb8                   ; 0049342a
    XOR ECX,ECX                         ; 0049342f
    MOV dword ptr [0x01c3ded4],EDX      ; 00493431 | DAT_01c3ded4
    MOV dword ptr [0x01c3ded8],ECX      ; 00493437 | DAT_01c3ded8
    MOV dword ptr [0x01c3dedc],ECX      ; 0049343d | DAT_01c3dedc
    MOV dword ptr [0x01c3dee0],ECX      ; 00493443 | DAT_01c3dee0
    MOV dword ptr [0x01c3dee4],ECX      ; 00493449 | DAT_01c3dee4
    MOV dword ptr [0x01c3dee8],ECX      ; 0049344f | DAT_01c3dee8
    MOV [0x01c3deec],EAX                ; 00493455 | DAT_01c3deec
    PUSH EBX                            ; 0049345a | DAT_01ba5c50
    MOV EDX,0x2                         ; 0049345b
    MOV ECX,0x3                         ; 00493460
    MOV dword ptr [0x01c3def0],EDX      ; 00493465 | DAT_01c3def0
    MOV dword ptr [0x01c3def4],ECX      ; 0049346b | DAT_01c3def4
    CALL engine_drender.cpp_FUN_0046b650 ; 00493471
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b650()
    LEA ESI,[ESP + 0x54]                ; 00493476
    ADD ESP,0x4                         ; 0049347a
    MOVSD ES:EDI,ESI                    ; 0049347d | DAT_01c3deb8
    MOVSD ES:EDI,ESI                    ; 0049347e | DAT_01c3debc
    MOVSD ES:EDI,ESI                    ; 0049347f | DAT_01c3dec0
    XOR ESI,ESI                         ; 00493480
    MOV dword ptr [0x01c3debc],ESI      ; 00493482 | DAT_01c3debc
    MOV ESI,dword ptr [0x007bda74]      ; 00493488 | DAT_007bda74
    MOV ECX,0xa                         ; 0049348e
    LEA EDI,[ESP + 0x28]                ; 00493493
    LEA ESI,[ESI + 0x10]                ; 00493497
    MOVSD.REP ES:EDI,ESI                ; 0049349a
    MOV ECX,0xa                         ; 0049349c
    MOV EDI,ESP                         ; 004934a1
    LEA ESI,[ESP + 0x28]                ; 004934a3
    MOVSD.REP ES:EDI,ESI                ; 004934a7
    FLD double ptr [0x005d533a]         ; 004934a9 | DAT_005d533a
    FLD float ptr [ESP + 0x8]           ; 004934af
    FMUL ST1                            ; 004934b3
    FLD float ptr [ESP + 0x14]          ; 004934b5
    FMUL ST2                            ; 004934b9
    FLD float ptr [ESP + 0x20]          ; 004934bb
    FMULP ST3                           ; 004934bf
    FXCH                                ; 004934c1
    CALL crt_math.c_round_FUN_005b7ff0  ; 004934c3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004934c8
    CALL crt_math.c_round_FUN_005b7ff0  ; 004934ca
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004934cf
    CALL crt_math.c_round_FUN_005b7ff0  ; 004934d1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004934d6
    FISTP dword ptr [0x01c3dec4]        ; 004934d8 | DAT_01c3dec4
    FXCH                                ; 004934de
    FISTP dword ptr [0x01c3dec8]        ; 004934e0 | DAT_01c3dec8
    FISTP dword ptr [0x01c3decc]        ; 004934e6 | DAT_01c3decc
    ADD ESP,0x5c                        ; 004934ec
    POP EDI                             ; 004934ef
    POP ESI                             ; 004934f0
    POP EBX                             ; 004934f1
    RET                                 ; 004934f2

