; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(CBloodParticle *this_ptr)
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
;   core_gore.cpp_CGore_renderParticles_FUN_004afe00 at 004afe4a
;
; Referenced Globals:
;   double DOUBLE_00585080 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c78c84
;   undefined4 DAT_01c78c88
;   undefined4 DAT_01c78c8c
;   undefined4 DAT_01c78c90
;   undefined4 DAT_01c78c94
;   undefined4 DAT_01c78c98
;   undefined4 DAT_01c78c9c
;   undefined4 DAT_01c78ca0
;   undefined4 DAT_01c78ca4
;   undefined4 DAT_01c78ca8
;   undefined4 DAT_01c78cac
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_FUN_00460d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae0a0
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004ae0a0
    PUSH ESI                            ; 004ae0a1
    PUSH EDI                            ; 004ae0a2
    SUB ESP,0x5c                        ; 004ae0a3
    MOV EDX,0x4                         ; 004ae0a6
    MOV EAX,0x1                         ; 004ae0ab
    LEA ESI,[ESP + 0x50]                ; 004ae0b0
    MOV EBX,dword ptr [0x005ae704]      ; 004ae0b4 | g_CDemonRenderer_PTR_005ae704
    MOV EDI,0x1c78ca8                   ; 004ae0ba
    XOR ECX,ECX                         ; 004ae0bf
    MOV dword ptr [0x01c78c84],EDX      ; 004ae0c1 | DAT_01c78c84
    MOV dword ptr [0x01c78c88],ECX      ; 004ae0c7 | DAT_01c78c88
    MOV dword ptr [0x01c78c8c],ECX      ; 004ae0cd | DAT_01c78c8c
    MOV dword ptr [0x01c78c90],ECX      ; 004ae0d3 | DAT_01c78c90
    MOV dword ptr [0x01c78c94],ECX      ; 004ae0d9 | DAT_01c78c94
    MOV dword ptr [0x01c78c98],ECX      ; 004ae0df | DAT_01c78c98
    MOV [0x01c78c9c],EAX                ; 004ae0e5 | DAT_01c78c9c
    PUSH EBX                            ; 004ae0ea | DAT_01b4d738
    MOV EDX,0x2                         ; 004ae0eb
    MOV ECX,0x3                         ; 004ae0f0
    MOV dword ptr [0x01c78ca0],EDX      ; 004ae0f5 | DAT_01c78ca0
    MOV dword ptr [0x01c78ca4],ECX      ; 004ae0fb | DAT_01c78ca4
    CALL engine_drender.cpp_FUN_00460d90 ; 004ae101
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d90()
    LEA ESI,[ESP + 0x54]                ; 004ae106
    ADD ESP,0x4                         ; 004ae10a
    MOVSD ES:EDI,ESI                    ; 004ae10d | DAT_01c78ca8
    MOVSD ES:EDI,ESI                    ; 004ae10e | DAT_01c78cac
    MOVSD ES:EDI,ESI                    ; 004ae10f | DAT_01c78cb0
    XOR ESI,ESI                         ; 004ae110
    MOV dword ptr [0x01c78cac],ESI      ; 004ae112 | DAT_01c78cac
    MOV ESI,dword ptr [0x007f7370]      ; 004ae118 | DAT_007f7370
    MOV ECX,0xa                         ; 004ae11e
    LEA EDI,[ESP + 0x28]                ; 004ae123
    LEA ESI,[ESI + 0x110]               ; 004ae127
    MOVSD.REP ES:EDI,ESI                ; 004ae12d
    MOV ECX,0xa                         ; 004ae12f
    MOV EDI,ESP                         ; 004ae134
    LEA ESI,[ESP + 0x28]                ; 004ae136
    MOVSD.REP ES:EDI,ESI                ; 004ae13a
    FLD double ptr [0x00585080]         ; 004ae13c | DOUBLE_00585080
    FLD float ptr [ESP + 0x8]           ; 004ae142
    FMUL ST1                            ; 004ae146
    FLD float ptr [ESP + 0x14]          ; 004ae148
    FMUL ST2                            ; 004ae14c
    FLD float ptr [ESP + 0x20]          ; 004ae14e
    FMULP ST3                           ; 004ae152
    FXCH                                ; 004ae154
    CALL crt_math.c_round_FUN_00563a30  ; 004ae156
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004ae15b
    CALL crt_math.c_round_FUN_00563a30  ; 004ae15d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004ae162
    CALL crt_math.c_round_FUN_00563a30  ; 004ae164
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004ae169
    FISTP dword ptr [0x01c78cb4]        ; 004ae16b | DAT_01c78cb4
    FXCH                                ; 004ae171
    FISTP dword ptr [0x01c78cb8]        ; 004ae173 | DAT_01c78cb8
    FISTP dword ptr [0x01c78cbc]        ; 004ae179 | DAT_01c78cbc
    ADD ESP,0x5c                        ; 004ae17f
    POP EDI                             ; 004ae182
    POP ESI                             ; 004ae183
    POP EBX                             ; 004ae184
    RET                                 ; 004ae185

