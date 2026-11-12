; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(uint *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[89]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 at 0040fd5c
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 00411b8f
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00413150
;   core_bugs.cpp_FUN_00426870 at 00426ab3
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 0042a1b0
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00430440 at 00430670
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90 at 00430f63
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240 at 004323bc
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_0042d540 at 0042d574
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 at 0042cd3f
;   ... and 79 more
;
; Called Functions:
;   crt_math.c_atan2_FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7520
        ;   Label: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
    PUSH EDI                            ; 005a7521
    SUB ESP,0x10                        ; 005a7522
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a7525
    MOV ECX,ESI                         ; 005a7529
    XOR EBX,EBX                         ; 005a752b
    MOV ESI,dword ptr [EDX]             ; 005a752d
    MOV dword ptr [ESP + 0x8],EBX       ; 005a752f
    TEST ESI,0x7fffffff                 ; 005a7533
    JNZ 0x005a757a                      ; 005a7539
        ;   XREF to: 005a757a (CONDITIONAL_JUMP)  ; LAB_005a757a
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 005a753b
    JNZ 0x005a757a                      ; 005a7542
        ;   XREF to: 005a757a (CONDITIONAL_JUMP)  ; LAB_005a757a
    FLDZ                                ; 005a7544
    MOV dword ptr [ESP + 0x4],EBX       ; 005a7546
    FCOMP float ptr [EDX + 0x4]         ; 005a754a
    FNSTSW AX                           ; 005a754d
    SAHF                                ; 005a754f
    JC 0x005a7570                       ; 005a7550
        ;   XREF to: 005a7570 (CONDITIONAL_JUMP)  ; LAB_005a7570
    MOV dword ptr [ESP + 0xc],0x3fc90fdb ; 005a7552
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a755a
        ;   Label: LAB_005a755a
    MOV dword ptr [ESP],EDX             ; 005a755e
    MOV ESI,ESP                         ; 005a7561
    MOV EDI,ECX                         ; 005a7563
    MOVSD ES:EDI,ESI                    ; 005a7565
    MOVSD ES:EDI,ESI                    ; 005a7566
    MOVSD ES:EDI,ESI                    ; 005a7567
    MOV EAX,ECX                         ; 005a7568
    ADD ESP,0x10                        ; 005a756a
    POP EDI                             ; 005a756d
    POP EBX                             ; 005a756e
    RET                                 ; 005a756f
    MOV dword ptr [ESP + 0xc],0xbfc90fdb ; 005a7570
        ;   Label: LAB_005a7570
    JMP 0x005a755a                      ; 005a7578
        ;   XREF to: 005a755a (UNCONDITIONAL_JUMP)  ; LAB_005a755a
    FLD float ptr [EDX + 0x8]           ; 005a757a
        ;   Label: LAB_005a757a
    FLD float ptr [EDX]                 ; 005a757d
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005a757f
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FLD float ptr [EDX + 0x8]           ; 005a7584
    FMUL ST0                            ; 005a7587
    FLD float ptr [EDX]                 ; 005a7589
    FMUL ST0                            ; 005a758b
    FADDP                               ; 005a758d
    FSQRT                               ; 005a758f
    FLD float ptr [EDX + 0x4]           ; 005a7591
    CALL crt_math.c_atan2_FUN_005c1d69  ; 005a7594
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FXCH                                ; 005a7599
    FSTP float ptr [ESP + 0x4]          ; 005a759b
    FCHS                                ; 005a759f
    FSTP float ptr [ESP]                ; 005a75a1
    MOV ESI,ESP                         ; 005a75a4
    MOV EDI,ECX                         ; 005a75a6
    MOVSD ES:EDI,ESI                    ; 005a75a8
    MOVSD ES:EDI,ESI                    ; 005a75a9
    MOVSD ES:EDI,ESI                    ; 005a75aa
    MOV EAX,ECX                         ; 005a75ab
    ADD ESP,0x10                        ; 005a75ad
    POP EDI                             ; 005a75b0
    POP EBX                             ; 005a75b1
    RET                                 ; 005a75b2

