; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004ae550(CFireball *this_ptr)
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
;   core_fire.cpp_FUN_004b5100 at 004b51b7
;
; Referenced Globals:
;   undefined4 DAT_005df23c
;   undefined4 DAT_00612560
;   undefined4 DAT_007c6120
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c57078
;   undefined4 DAT_01c5707c
;   undefined4 DAT_01c57080
;   undefined4 DAT_01c57084
;   undefined4 DAT_01c57088
;   undefined4 DAT_01c5708c
;   undefined4 DAT_01c57094
;   undefined4 DAT_01c57098
;   undefined4 DAT_01c5709c
;   undefined4 DAT_01c570a0
;   undefined4 DAT_01c570a4
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_matrix.c_FUN_00483b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae550
        ;   Label: core_fire.cpp_FUN_004ae550
    PUSH ESI                            ; 004ae551
    PUSH EDI                            ; 004ae552
    SUB ESP,0x5c                        ; 004ae553
    MOV EDX,0x4                         ; 004ae556
    MOV EAX,0x1                         ; 004ae55b
    LEA ESI,[ESP + 0x50]                ; 004ae560
    MOV EBX,dword ptr [0x00612560]      ; 004ae564 | DAT_00612560
    MOV EDI,0x1c57078                   ; 004ae56a
    XOR ECX,ECX                         ; 004ae56f
    MOV dword ptr [0x01c57094],EDX      ; 004ae571 | DAT_01c57094
    MOV dword ptr [0x01c57098],ECX      ; 004ae577 | DAT_01c57098
    MOV dword ptr [0x01c5709c],ECX      ; 004ae57d | DAT_01c5709c
    MOV dword ptr [0x01c570a0],ECX      ; 004ae583 | DAT_01c570a0
    MOV dword ptr [0x01c570a4],ECX      ; 004ae589 | DAT_01c570a4
    MOV dword ptr [0x01c570a8],ECX      ; 004ae58f | DAT_01c570a8
    MOV [0x01c570ac],EAX                ; 004ae595 | DAT_01c570ac
    PUSH EBX                            ; 004ae59a | DAT_01bc120c
    MOV EDX,0x2                         ; 004ae59b
    MOV ECX,0x3                         ; 004ae5a0
    MOV dword ptr [0x01c570b0],EDX      ; 004ae5a5 | DAT_01c570b0
    MOV dword ptr [0x01c570b4],ECX      ; 004ae5ab | DAT_01c570b4
    CALL engine_matrix.c_FUN_00483b50   ; 004ae5b1
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b50()
    LEA ESI,[ESP + 0x54]                ; 004ae5b6
    ADD ESP,0x4                         ; 004ae5ba
    MOVSD ES:EDI,ESI                    ; 004ae5bd | DAT_01c57078
    MOVSD ES:EDI,ESI                    ; 004ae5be | DAT_01c5707c
    MOVSD ES:EDI,ESI                    ; 004ae5bf | DAT_01c57080
    XOR ESI,ESI                         ; 004ae5c0
    MOV dword ptr [0x01c5707c],ESI      ; 004ae5c2 | DAT_01c5707c
    MOV ESI,dword ptr [0x007c6120]      ; 004ae5c8 | DAT_007c6120
    MOV ECX,0xa                         ; 004ae5ce
    LEA EDI,[ESP + 0x28]                ; 004ae5d3
    LEA ESI,[ESI + 0x10]                ; 004ae5d7
    MOVSD.REP ES:EDI,ESI                ; 004ae5da
    MOV ECX,0xa                         ; 004ae5dc
    MOV EDI,ESP                         ; 004ae5e1
    LEA ESI,[ESP + 0x28]                ; 004ae5e3
    MOVSD.REP ES:EDI,ESI                ; 004ae5e7
    FLD double ptr [0x005df23c]         ; 004ae5e9 | DAT_005df23c
    FLD float ptr [ESP + 0x8]           ; 004ae5ef
    FMUL ST1                            ; 004ae5f3
    FLD float ptr [ESP + 0x14]          ; 004ae5f5
    FMUL ST2                            ; 004ae5f9
    FLD float ptr [ESP + 0x20]          ; 004ae5fb
    FMULP ST3                           ; 004ae5ff
    FXCH                                ; 004ae601
    CALL crt_math.c_round_FUN_005c03a0  ; 004ae603
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004ae608
    CALL crt_math.c_round_FUN_005c03a0  ; 004ae60a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 004ae60f
    CALL crt_math.c_round_FUN_005c03a0  ; 004ae611
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 004ae616
    FISTP dword ptr [0x01c57084]        ; 004ae618 | DAT_01c57084
    FXCH                                ; 004ae61e
    FISTP dword ptr [0x01c57088]        ; 004ae620 | DAT_01c57088
    FISTP dword ptr [0x01c5708c]        ; 004ae626 | DAT_01c5708c
    ADD ESP,0x5c                        ; 004ae62c
    POP EDI                             ; 004ae62f
    POP ESI                             ; 004ae630
    POP EBX                             ; 004ae631
    RET                                 ; 004ae632

