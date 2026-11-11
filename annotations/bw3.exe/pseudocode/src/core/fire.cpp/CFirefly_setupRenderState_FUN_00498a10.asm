; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_setupRenderState_FUN_00498a10(CFirefly *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1cff
;
; Referenced Globals:
;   undefined4 DAT_005c0540
;   undefined4 DAT_005f2afc
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_0060b0bc
;   undefined4 DAT_0060b0c0
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c73658
;   undefined4 DAT_01c7365c
;   undefined4 DAT_01c73660
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_matrix.c_FUN_0046d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498a10
        ;   Label: core_fire.cpp_CFirefly_setupRenderState_FUN_00498a10
    PUSH ESI                            ; 00498a11
    PUSH EDI                            ; 00498a12
    SUB ESP,0x5c                        ; 00498a13
    MOV EDX,0x4                         ; 00498a16
    MOV EAX,0x1                         ; 00498a1b
    MOV EBX,0x80000                     ; 00498a20
    MOV ESI,0xf80000                    ; 00498a25
    MOV EDI,0x1c73658                   ; 00498a2a
    XOR ECX,ECX                         ; 00498a2f
    MOV dword ptr [0x01c73674],EDX      ; 00498a31 | DAT_01c73674
    MOV dword ptr [0x01c73678],ECX      ; 00498a37 | DAT_01c73678
    MOV dword ptr [0x01c7367c],ECX      ; 00498a3d | DAT_01c7367c
    MOV dword ptr [0x01c73680],ECX      ; 00498a43 | DAT_01c73680
    MOV dword ptr [0x01c73684],ECX      ; 00498a49 | DAT_01c73684
    MOV dword ptr [0x01c73688],ECX      ; 00498a4f | DAT_01c73688
    MOV [0x01c7368c],EAX                ; 00498a55 | DAT_01c7368c
    MOV dword ptr [0x0060b02c],EBX      ; 00498a5a | DAT_0060b02c
    MOV dword ptr [0x0060b030],ESI      ; 00498a60 | DAT_0060b030
    MOV dword ptr [0x0060b05c],ESI      ; 00498a66 | DAT_0060b05c
    MOV dword ptr [0x0060b060],ESI      ; 00498a6c | DAT_0060b060
    MOV dword ptr [0x0060b08c],ESI      ; 00498a72 | DAT_0060b08c
    MOV dword ptr [0x0060b090],EBX      ; 00498a78 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EBX      ; 00498a7e | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EBX      ; 00498a84 | DAT_0060b0c0
    MOV EDX,0x2                         ; 00498a8a
    MOV ECX,0x3                         ; 00498a8f
    MOV ESI,dword ptr [0x005f2afc]      ; 00498a94 | DAT_005f2afc
    MOV dword ptr [0x01c73690],EDX      ; 00498a9a | DAT_01c73690
    PUSH ESI                            ; 00498aa0 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x54]                ; 00498aa1
    MOV dword ptr [0x01c73694],ECX      ; 00498aa5 | DAT_01c73694
    CALL engine_matrix.c_FUN_0046d230   ; 00498aab
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d230()
    LEA ESI,[ESP + 0x54]                ; 00498ab0
    ADD ESP,0x4                         ; 00498ab4
    MOVSD ES:EDI,ESI                    ; 00498ab7 | DAT_01c73658
    MOVSD ES:EDI,ESI                    ; 00498ab8 | DAT_01c7365c
    MOVSD ES:EDI,ESI                    ; 00498ab9 | DAT_01c73660
    MOV ESI,dword ptr [0x007e2a54]      ; 00498aba | DAT_007e2a54
    MOV ECX,0xa                         ; 00498ac0
    XOR EDI,EDI                         ; 00498ac5
    LEA ESI,[ESI + 0x10]                ; 00498ac7
    MOV dword ptr [0x01c7365c],EDI      ; 00498aca | DAT_01c7365c
    LEA EDI,[ESP + 0x28]                ; 00498ad0
    MOVSD.REP ES:EDI,ESI                ; 00498ad4
    MOV ECX,0xa                         ; 00498ad6
    MOV EDI,ESP                         ; 00498adb
    LEA ESI,[ESP + 0x28]                ; 00498add
    MOVSD.REP ES:EDI,ESI                ; 00498ae1
    FLD double ptr [0x005c0540]         ; 00498ae3 | DAT_005c0540
    FLD float ptr [ESP + 0x8]           ; 00498ae9
    FMUL ST1                            ; 00498aed
    FLD float ptr [ESP + 0x14]          ; 00498aef
    FMUL ST2                            ; 00498af3
    FLD float ptr [ESP + 0x20]          ; 00498af5
    FMULP ST3                           ; 00498af9
    FXCH                                ; 00498afb
    CALL crt_math.c_round_FUN_005a3120  ; 00498afd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00498b02
    CALL crt_math.c_round_FUN_005a3120  ; 00498b04
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00498b09
    CALL crt_math.c_round_FUN_005a3120  ; 00498b0b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00498b10
    FISTP dword ptr [0x01c73664]        ; 00498b12 | DAT_01c73664
    FXCH                                ; 00498b18
    FISTP dword ptr [0x01c73668]        ; 00498b1a | DAT_01c73668
    FISTP dword ptr [0x01c7366c]        ; 00498b20 | DAT_01c7366c
    ADD ESP,0x5c                        ; 00498b26
    POP EDI                             ; 00498b29
    POP ESI                             ; 00498b2a
    POP EBX                             ; 00498b2b
    RET                                 ; 00498b2c

