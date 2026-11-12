; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_setupRenderState_FUN_00495020(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c9bf
;
; Referenced Globals:
;   undefined4 DAT_005d53c2
;   undefined4 DAT_0060b280
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_006220bc
;   undefined4 DAT_006220c0
;   undefined4 DAT_007bda74
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c3deb8
;   undefined4 DAT_01c3debc
;   undefined4 DAT_01c3dec0
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495020
        ;   Label: core_fire.cpp_CFirefly_setupRenderState_FUN_00495020
    PUSH ESI                            ; 00495021
    PUSH EDI                            ; 00495022
    SUB ESP,0x5c                        ; 00495023
    MOV EDX,0x4                         ; 00495026
    MOV EAX,0x1                         ; 0049502b
    MOV EBX,0x80000                     ; 00495030
    MOV ESI,0xf80000                    ; 00495035
    MOV EDI,0x1c3deb8                   ; 0049503a
    XOR ECX,ECX                         ; 0049503f
    MOV dword ptr [0x01c3ded4],EDX      ; 00495041 | DAT_01c3ded4
    MOV dword ptr [0x01c3ded8],ECX      ; 00495047 | DAT_01c3ded8
    MOV dword ptr [0x01c3dedc],ECX      ; 0049504d | DAT_01c3dedc
    MOV dword ptr [0x01c3dee0],ECX      ; 00495053 | DAT_01c3dee0
    MOV dword ptr [0x01c3dee4],ECX      ; 00495059 | DAT_01c3dee4
    MOV dword ptr [0x01c3dee8],ECX      ; 0049505f | DAT_01c3dee8
    MOV [0x01c3deec],EAX                ; 00495065 | DAT_01c3deec
    MOV dword ptr [0x0062202c],EBX      ; 0049506a | DAT_0062202c
    MOV dword ptr [0x00622030],ESI      ; 00495070 | DAT_00622030
    MOV dword ptr [0x0062205c],ESI      ; 00495076 | DAT_0062205c
    MOV dword ptr [0x00622060],ESI      ; 0049507c | DAT_00622060
    MOV dword ptr [0x0062208c],ESI      ; 00495082 | DAT_0062208c
    MOV dword ptr [0x00622090],EBX      ; 00495088 | DAT_00622090
    MOV dword ptr [0x006220bc],EBX      ; 0049508e | DAT_006220bc
    MOV dword ptr [0x006220c0],EBX      ; 00495094 | DAT_006220c0
    MOV EDX,0x2                         ; 0049509a
    MOV ECX,0x3                         ; 0049509f
    MOV ESI,dword ptr [0x0060b280]      ; 004950a4 | DAT_0060b280
    MOV dword ptr [0x01c3def0],EDX      ; 004950aa | DAT_01c3def0
    PUSH ESI                            ; 004950b0 | DAT_01ba5c50
    LEA ESI,[ESP + 0x54]                ; 004950b1
    MOV dword ptr [0x01c3def4],ECX      ; 004950b5 | DAT_01c3def4
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650 ; 004950bb
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004950c0
    ADD ESP,0x4                         ; 004950c4
    MOVSD ES:EDI,ESI                    ; 004950c7 | DAT_01c3deb8
    MOVSD ES:EDI,ESI                    ; 004950c8 | DAT_01c3debc
    MOVSD ES:EDI,ESI                    ; 004950c9 | DAT_01c3dec0
    MOV ESI,dword ptr [0x007bda74]      ; 004950ca | DAT_007bda74
    MOV ECX,0xa                         ; 004950d0
    XOR EDI,EDI                         ; 004950d5
    LEA ESI,[ESI + 0x10]                ; 004950d7
    MOV dword ptr [0x01c3debc],EDI      ; 004950da | DAT_01c3debc
    LEA EDI,[ESP + 0x28]                ; 004950e0
    MOVSD.REP ES:EDI,ESI                ; 004950e4
    MOV ECX,0xa                         ; 004950e6
    MOV EDI,ESP                         ; 004950eb
    LEA ESI,[ESP + 0x28]                ; 004950ed
    MOVSD.REP ES:EDI,ESI                ; 004950f1
    FLD double ptr [0x005d53c2]         ; 004950f3 | DAT_005d53c2
    FLD float ptr [ESP + 0x8]           ; 004950f9
    FMUL ST1                            ; 004950fd
    FLD float ptr [ESP + 0x14]          ; 004950ff
    FMUL ST2                            ; 00495103
    FLD float ptr [ESP + 0x20]          ; 00495105
    FMULP ST3                           ; 00495109
    FXCH                                ; 0049510b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049510d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00495112
    CALL crt_math.c_round_FUN_005b7ff0  ; 00495114
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00495119
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049511b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00495120
    FISTP dword ptr [0x01c3dec4]        ; 00495122 | DAT_01c3dec4
    FXCH                                ; 00495128
    FISTP dword ptr [0x01c3dec8]        ; 0049512a | DAT_01c3dec8
    FISTP dword ptr [0x01c3decc]        ; 00495130 | DAT_01c3decc
    ADD ESP,0x5c                        ; 00495136
    POP EDI                             ; 00495139
    POP ESI                             ; 0049513a
    POP EBX                             ; 0049513b
    RET                                 ; 0049513c

