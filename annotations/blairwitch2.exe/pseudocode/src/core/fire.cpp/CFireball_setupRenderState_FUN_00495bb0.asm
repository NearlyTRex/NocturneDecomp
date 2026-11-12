; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_setupRenderState_FUN_00495bb0(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c837
;
; Referenced Globals:
;   undefined4 DAT_005d53fa
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

    PUSH EBX                            ; 00495bb0
        ;   Label: core_fire.cpp_CFireball_setupRenderState_FUN_00495bb0
    PUSH ESI                            ; 00495bb1
    PUSH EDI                            ; 00495bb2
    SUB ESP,0x5c                        ; 00495bb3
    MOV EDX,0x4                         ; 00495bb6
    MOV EAX,0x1                         ; 00495bbb
    LEA ESI,[ESP + 0x50]                ; 00495bc0
    MOV EBX,dword ptr [0x0060b280]      ; 00495bc4 | DAT_0060b280
    MOV EDI,0x1c3deb8                   ; 00495bca
    XOR ECX,ECX                         ; 00495bcf
    MOV dword ptr [0x01c3ded4],EDX      ; 00495bd1 | DAT_01c3ded4
    MOV dword ptr [0x01c3ded8],ECX      ; 00495bd7 | DAT_01c3ded8
    MOV dword ptr [0x01c3dedc],ECX      ; 00495bdd | DAT_01c3dedc
    MOV dword ptr [0x01c3dee0],ECX      ; 00495be3 | DAT_01c3dee0
    MOV dword ptr [0x01c3dee4],ECX      ; 00495be9 | DAT_01c3dee4
    MOV dword ptr [0x01c3dee8],ECX      ; 00495bef | DAT_01c3dee8
    MOV [0x01c3deec],EAX                ; 00495bf5 | DAT_01c3deec
    PUSH EBX                            ; 00495bfa | DAT_01ba5c50
    MOV EDX,0x2                         ; 00495bfb
    MOV ECX,0x3                         ; 00495c00
    MOV dword ptr [0x01c3def0],EDX      ; 00495c05 | DAT_01c3def0
    MOV dword ptr [0x01c3def4],ECX      ; 00495c0b | DAT_01c3def4
    CALL engine_drender.cpp_FUN_0046b650 ; 00495c11
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b650()
    LEA ESI,[ESP + 0x54]                ; 00495c16
    ADD ESP,0x4                         ; 00495c1a
    MOVSD ES:EDI,ESI                    ; 00495c1d | DAT_01c3deb8
    MOVSD ES:EDI,ESI                    ; 00495c1e | DAT_01c3debc
    MOVSD ES:EDI,ESI                    ; 00495c1f | DAT_01c3dec0
    XOR ESI,ESI                         ; 00495c20
    MOV dword ptr [0x01c3debc],ESI      ; 00495c22 | DAT_01c3debc
    MOV ESI,dword ptr [0x007bda74]      ; 00495c28 | DAT_007bda74
    MOV ECX,0xa                         ; 00495c2e
    LEA EDI,[ESP + 0x28]                ; 00495c33
    LEA ESI,[ESI + 0x10]                ; 00495c37
    MOVSD.REP ES:EDI,ESI                ; 00495c3a
    MOV ECX,0xa                         ; 00495c3c
    MOV EDI,ESP                         ; 00495c41
    LEA ESI,[ESP + 0x28]                ; 00495c43
    MOVSD.REP ES:EDI,ESI                ; 00495c47
    FLD double ptr [0x005d53fa]         ; 00495c49 | DAT_005d53fa
    FLD float ptr [ESP + 0x8]           ; 00495c4f
    FMUL ST1                            ; 00495c53
    FLD float ptr [ESP + 0x14]          ; 00495c55
    FMUL ST2                            ; 00495c59
    FLD float ptr [ESP + 0x20]          ; 00495c5b
    FMULP ST3                           ; 00495c5f
    FXCH                                ; 00495c61
    CALL crt_math.c_round_FUN_005b7ff0  ; 00495c63
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00495c68
    CALL crt_math.c_round_FUN_005b7ff0  ; 00495c6a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00495c6f
    CALL crt_math.c_round_FUN_005b7ff0  ; 00495c71
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00495c76
    FISTP dword ptr [0x01c3dec4]        ; 00495c78 | DAT_01c3dec4
    FXCH                                ; 00495c7e
    FISTP dword ptr [0x01c3dec8]        ; 00495c80 | DAT_01c3dec8
    FISTP dword ptr [0x01c3decc]        ; 00495c86 | DAT_01c3decc
    ADD ESP,0x5c                        ; 00495c8c
    POP EDI                             ; 00495c8f
    POP ESI                             ; 00495c90
    POP EBX                             ; 00495c91
    RET                                 ; 00495c92

