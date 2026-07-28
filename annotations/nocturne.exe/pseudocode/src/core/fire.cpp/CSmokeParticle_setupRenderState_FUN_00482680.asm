; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_setupRenderState_FUN_00482680(CSmokeParticle *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a777
;
; Referenced Globals:
;   double DOUBLE_0058106c = -65536
;   undefined4 DAT_005ae704
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c08d08
;   undefined4 DAT_01c08d0c
;   undefined4 DAT_01c08d10
;   undefined4 DAT_01c08d14
;   undefined4 DAT_01c08d18
;   undefined4 DAT_01c08d1c
;   undefined4 DAT_01c08d24
;   undefined4 DAT_01c08d28
;   undefined4 DAT_01c08d2c
;   undefined4 DAT_01c08d30
;   undefined4 DAT_01c08d34
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_FUN_00460d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482680
        ;   Label: core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00482680
    PUSH ESI                            ; 00482681
    PUSH EDI                            ; 00482682
    SUB ESP,0x5c                        ; 00482683
    MOV EDX,0x4                         ; 00482686
    MOV EAX,0x1                         ; 0048268b
    LEA ESI,[ESP + 0x50]                ; 00482690
    MOV EBX,dword ptr [0x005ae704]      ; 00482694 | DAT_005ae704
    MOV EDI,0x1c08d08                   ; 0048269a
    XOR ECX,ECX                         ; 0048269f
    MOV dword ptr [0x01c08d24],EDX      ; 004826a1 | DAT_01c08d24
    MOV dword ptr [0x01c08d28],ECX      ; 004826a7 | DAT_01c08d28
    MOV dword ptr [0x01c08d2c],ECX      ; 004826ad | DAT_01c08d2c
    MOV dword ptr [0x01c08d30],ECX      ; 004826b3 | DAT_01c08d30
    MOV dword ptr [0x01c08d34],ECX      ; 004826b9 | DAT_01c08d34
    MOV dword ptr [0x01c08d38],ECX      ; 004826bf | DAT_01c08d38
    MOV [0x01c08d3c],EAX                ; 004826c5 | DAT_01c08d3c
    PUSH EBX                            ; 004826ca | DAT_01b4d738
    MOV EDX,0x2                         ; 004826cb
    MOV ECX,0x3                         ; 004826d0
    MOV dword ptr [0x01c08d40],EDX      ; 004826d5 | DAT_01c08d40
    MOV dword ptr [0x01c08d44],ECX      ; 004826db | DAT_01c08d44
    CALL engine_drender.cpp_FUN_00460d90 ; 004826e1
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d90()
    LEA ESI,[ESP + 0x54]                ; 004826e6
    ADD ESP,0x4                         ; 004826ea
    MOVSD ES:EDI,ESI                    ; 004826ed | DAT_01c08d08
    MOVSD ES:EDI,ESI                    ; 004826ee | DAT_01c08d0c
    MOVSD ES:EDI,ESI                    ; 004826ef | DAT_01c08d10
    XOR ESI,ESI                         ; 004826f0
    MOV dword ptr [0x01c08d0c],ESI      ; 004826f2 | DAT_01c08d0c
    MOV ESI,dword ptr [0x007f7370]      ; 004826f8 | DAT_007f7370
    MOV ECX,0xa                         ; 004826fe
    LEA EDI,[ESP + 0x28]                ; 00482703
    LEA ESI,[ESI + 0x110]               ; 00482707
    MOVSD.REP ES:EDI,ESI                ; 0048270d
    MOV ECX,0xa                         ; 0048270f
    MOV EDI,ESP                         ; 00482714
    LEA ESI,[ESP + 0x28]                ; 00482716
    MOVSD.REP ES:EDI,ESI                ; 0048271a
    FLD double ptr [0x0058106c]         ; 0048271c | DOUBLE_0058106c
    FLD float ptr [ESP + 0x8]           ; 00482722
    FMUL ST1                            ; 00482726
    FLD float ptr [ESP + 0x14]          ; 00482728
    FMUL ST2                            ; 0048272c
    FLD float ptr [ESP + 0x20]          ; 0048272e
    FMULP ST3                           ; 00482732
    FXCH                                ; 00482734
    CALL crt_math.c_round_FUN_00563a30  ; 00482736
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 0048273b
    CALL crt_math.c_round_FUN_00563a30  ; 0048273d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 00482742
    CALL crt_math.c_round_FUN_00563a30  ; 00482744
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00482749
    FISTP dword ptr [0x01c08d14]        ; 0048274b | DAT_01c08d14
    FXCH                                ; 00482751
    FISTP dword ptr [0x01c08d18]        ; 00482753 | DAT_01c08d18
    FISTP dword ptr [0x01c08d1c]        ; 00482759 | DAT_01c08d1c
    ADD ESP,0x5c                        ; 0048275f
    POP EDI                             ; 00482762
    POP ESI                             ; 00482763
    POP EBX                             ; 00482764
    RET                                 ; 00482765

