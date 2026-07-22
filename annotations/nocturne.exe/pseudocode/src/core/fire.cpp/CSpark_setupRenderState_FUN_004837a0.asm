; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004837a0(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a7fa
;
; Referenced Globals:
;   double DOUBLE_005810d4 = -65536
;   undefined4 DAT_005ae704
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_005c50bc
;   undefined4 DAT_005c50c0
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c08d08
;   undefined4 DAT_01c08d0c
;   undefined4 DAT_01c08d10
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   FUN_00460d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004837a0
        ;   Label: core_fire.cpp_CSpark_setupRenderState_FUN_004837a0
    PUSH ESI                            ; 004837a1
    PUSH EDI                            ; 004837a2
    SUB ESP,0x5c                        ; 004837a3
    MOV EDX,0x4                         ; 004837a6
    MOV EAX,0x1                         ; 004837ab
    MOV EBX,0x80000                     ; 004837b0
    MOV ESI,0xf80000                    ; 004837b5
    MOV EDI,0x1c08d08                   ; 004837ba
    XOR ECX,ECX                         ; 004837bf
    MOV dword ptr [0x01c08d24],EDX      ; 004837c1 | DAT_01c08d24
    MOV dword ptr [0x01c08d28],ECX      ; 004837c7 | DAT_01c08d28
    MOV dword ptr [0x01c08d2c],ECX      ; 004837cd | DAT_01c08d2c
    MOV dword ptr [0x01c08d30],ECX      ; 004837d3 | DAT_01c08d30
    MOV dword ptr [0x01c08d34],ECX      ; 004837d9 | DAT_01c08d34
    MOV dword ptr [0x01c08d38],ECX      ; 004837df | DAT_01c08d38
    MOV [0x01c08d3c],EAX                ; 004837e5 | DAT_01c08d3c
    MOV dword ptr [0x005c502c],EBX      ; 004837ea | DAT_005c502c
    MOV dword ptr [0x005c5030],ESI      ; 004837f0 | DAT_005c5030
    MOV dword ptr [0x005c505c],ESI      ; 004837f6 | DAT_005c505c
    MOV dword ptr [0x005c5060],ESI      ; 004837fc | DAT_005c5060
    MOV dword ptr [0x005c508c],ESI      ; 00483802 | DAT_005c508c
    MOV dword ptr [0x005c5090],EBX      ; 00483808 | DAT_005c5090
    MOV dword ptr [0x005c50bc],EBX      ; 0048380e | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EBX      ; 00483814 | DAT_005c50c0
    MOV EDX,0x2                         ; 0048381a
    MOV ECX,0x3                         ; 0048381f
    MOV ESI,dword ptr [0x005ae704]      ; 00483824 | DAT_005ae704
    MOV dword ptr [0x01c08d40],EDX      ; 0048382a | DAT_01c08d40
    PUSH ESI                            ; 00483830 | DAT_01b4d738
    LEA ESI,[ESP + 0x54]                ; 00483831
    MOV dword ptr [0x01c08d44],ECX      ; 00483835 | DAT_01c08d44
    CALL FUN_00460d90                   ; 0048383b
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d90()
    LEA ESI,[ESP + 0x54]                ; 00483840
    ADD ESP,0x4                         ; 00483844
    MOVSD ES:EDI,ESI                    ; 00483847 | DAT_01c08d08
    MOVSD ES:EDI,ESI                    ; 00483848 | DAT_01c08d0c
    MOVSD ES:EDI,ESI                    ; 00483849 | DAT_01c08d10
    MOV ESI,dword ptr [0x007f7370]      ; 0048384a | DAT_007f7370
    MOV ECX,0xa                         ; 00483850
    XOR EDI,EDI                         ; 00483855
    LEA ESI,[ESI + 0x110]               ; 00483857
    MOV dword ptr [0x01c08d0c],EDI      ; 0048385d | DAT_01c08d0c
    LEA EDI,[ESP + 0x28]                ; 00483863
    MOVSD.REP ES:EDI,ESI                ; 00483867
    MOV ECX,0xa                         ; 00483869
    MOV EDI,ESP                         ; 0048386e
    LEA ESI,[ESP + 0x28]                ; 00483870
    MOVSD.REP ES:EDI,ESI                ; 00483874
    FLD double ptr [0x005810d4]         ; 00483876 | DOUBLE_005810d4
    FLD float ptr [ESP + 0x8]           ; 0048387c
    FMUL ST1                            ; 00483880
    FLD float ptr [ESP + 0x14]          ; 00483882
    FMUL ST2                            ; 00483886
    FLD float ptr [ESP + 0x20]          ; 00483888
    FMULP ST3                           ; 0048388c
    FXCH                                ; 0048388e
    CALL crt_math.c_round_FUN_00563a30  ; 00483890
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00483895
    CALL crt_math.c_round_FUN_00563a30  ; 00483897
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 0048389c
    CALL crt_math.c_round_FUN_00563a30  ; 0048389e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004838a3
    FISTP dword ptr [0x01c08d14]        ; 004838a5 | DAT_01c08d14
    FXCH                                ; 004838ab
    FISTP dword ptr [0x01c08d18]        ; 004838ad | DAT_01c08d18
    FISTP dword ptr [0x01c08d1c]        ; 004838b3 | DAT_01c08d1c
    ADD ESP,0x5c                        ; 004838b9
    POP EDI                             ; 004838bc
    POP ESI                             ; 004838bd
    POP EBX                             ; 004838be
    RET                                 ; 004838bf

