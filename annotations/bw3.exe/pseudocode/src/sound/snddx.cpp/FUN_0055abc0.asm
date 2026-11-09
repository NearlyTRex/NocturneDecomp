; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_0055abc0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   sound_snddx.cpp_FUN_0055c0f0 at 0055c2b7
;   sound_snddx.cpp_FUN_0055cc40 at 0055ce5b
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0055abc0
        ;   Label: sound_snddx.cpp_FUN_0055abc0
    FLD float ptr [ESP + 0x8]           ; 0055abc3
    CALL crt_math.c_round_FUN_005a3120  ; 0055abc7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0055abcc
    MOV EDX,dword ptr [ESP]             ; 0055abcf
    CMP EDX,0x64                        ; 0055abd2
    JL 0x0055abe6                       ; 0055abd5
        ;   XREF to: 0055abe6 (CONDITIONAL_JUMP)  ; LAB_0055abe6
    CMP EDX,0x186a0                     ; 0055abd7
    JG 0x0055abef                       ; 0055abdd
        ;   XREF to: 0055abef (CONDITIONAL_JUMP)  ; LAB_0055abef
    MOV EAX,dword ptr [ESP]             ; 0055abdf
        ;   Label: LAB_0055abdf
    ADD ESP,0x4                         ; 0055abe2
    RET                                 ; 0055abe5
    MOV dword ptr [ESP],0x64            ; 0055abe6
        ;   Label: LAB_0055abe6
    JMP 0x0055abdf                      ; 0055abed
        ;   XREF to: 0055abdf (UNCONDITIONAL_JUMP)  ; LAB_0055abdf
    MOV dword ptr [ESP],0x186a0         ; 0055abef
        ;   Label: LAB_0055abef
    MOV EAX,dword ptr [ESP]             ; 0055abf6
    ADD ESP,0x4                         ; 0055abf9
    RET                                 ; 0055abfc

