; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_00577a50(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   sound_snddx.cpp_FUN_00578f80 at 00579147
;   sound_snddx.cpp_FUN_00579ad0 at 00579ceb
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00577a50
        ;   Label: sound_snddx.cpp_FUN_00577a50
    FLD float ptr [ESP + 0x8]           ; 00577a53
    CALL crt_math.c_round_FUN_005c03a0  ; 00577a57
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00577a5c
    MOV EDX,dword ptr [ESP]             ; 00577a5f
    CMP EDX,0x64                        ; 00577a62
    JL 0x00577a76                       ; 00577a65
        ;   XREF to: 00577a76 (CONDITIONAL_JUMP)  ; LAB_00577a76
    CMP EDX,0x186a0                     ; 00577a67
    JG 0x00577a7f                       ; 00577a6d
        ;   XREF to: 00577a7f (CONDITIONAL_JUMP)  ; LAB_00577a7f
    MOV EAX,dword ptr [ESP]             ; 00577a6f
        ;   Label: LAB_00577a6f
    ADD ESP,0x4                         ; 00577a72
    RET                                 ; 00577a75
    MOV dword ptr [ESP],0x64            ; 00577a76
        ;   Label: LAB_00577a76
    JMP 0x00577a6f                      ; 00577a7d
        ;   XREF to: 00577a6f (UNCONDITIONAL_JUMP)  ; LAB_00577a6f
    MOV dword ptr [ESP],0x186a0         ; 00577a7f
        ;   Label: LAB_00577a7f
    MOV EAX,dword ptr [ESP]             ; 00577a86
    ADD ESP,0x4                         ; 00577a89
    RET                                 ; 00577a8c

