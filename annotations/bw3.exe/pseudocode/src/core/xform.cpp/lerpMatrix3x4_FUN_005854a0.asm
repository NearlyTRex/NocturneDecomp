; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_lerpMatrix3x4_FUN_005854a0(undefined4 *param_1,undefined4 *param_2,float param_3)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00431d10 at 00431fae
;   core_prye.cpp_FUN_0051f490 at 0051f7ac
;   core_thehand.cpp_CTheHand_attractActorToward_FUN_0056ca00 at 0056ca44
;
; Called Functions:
;   core_xform.cpp_matrixToQuaternion_FUN_00585780
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0
;   core_xform.cpp_slerpQuaternion_FUN_00585b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005854a0
        ;   Label: core_xform.cpp_lerpMatrix3x4_FUN_005854a0
    PUSH EDI                            ; 005854a1
    PUSH EBP                            ; 005854a2
    SUB ESP,0xc4                        ; 005854a3
    MOV EBP,dword ptr [ESP + 0xd8]      ; 005854a9
    MOV EBX,ESI                         ; 005854b0
    FLDZ                                ; 005854b2
    FCOMP float ptr [ESP + 0xdc]        ; 005854b4
    FNSTSW AX                           ; 005854bb
    SAHF                                ; 005854bd
    JNC 0x005854f3                      ; 005854be
        ;   XREF to: 005854f3 (CONDITIONAL_JUMP)  ; LAB_005854f3
    CMP dword ptr [ESP + 0xdc],0x3f800000 ; 005854c0
    JL 0x00585505                       ; 005854cb
        ;   XREF to: 00585505 (CONDITIONAL_JUMP)  ; LAB_00585505
    MOV ECX,0xc                         ; 005854cd
    LEA EDI,[ESP + 0x30]                ; 005854d2
    MOV ESI,EBP                         ; 005854d6
    MOVSD.REP ES:EDI,ESI                ; 005854d8
        ;   Label: LAB_005854d8
    MOV ECX,0xc                         ; 005854da
    LEA ESI,[ESP + 0x30]                ; 005854df
    MOV EDI,EBX                         ; 005854e3
    MOVSD.REP ES:EDI,ESI                ; 005854e5
    MOV EAX,EBX                         ; 005854e7
    ADD ESP,0xc4                        ; 005854e9
    POP EBP                             ; 005854ef
    POP EDI                             ; 005854f0
    POP EBX                             ; 005854f1
    RET                                 ; 005854f2
    MOV ECX,0xc                         ; 005854f3
        ;   Label: LAB_005854f3
    LEA EDI,[ESP + 0x30]                ; 005854f8
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005854fc
    JMP 0x005854d8                      ; 00585503
        ;   XREF to: 005854d8 (UNCONDITIONAL_JUMP)  ; LAB_005854d8
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00585505
        ;   Label: LAB_00585505
    PUSH ECX                            ; 0058550c
    LEA ESI,[ESP + 0x94]                ; 0058550d
    LEA EDI,[ESP + 0x74]                ; 00585514
    CALL core_xform.cpp_matrixToQuaternion_FUN_00585780 ; 00585518
        ;   XREF to: 00585780 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToQuaternion_FUN_00585780()
    LEA ESI,[ESP + 0x94]                ; 0058551d
    ADD ESP,0x4                         ; 00585524
    MOVSD ES:EDI,ESI                    ; 00585527
    MOVSD ES:EDI,ESI                    ; 00585528
    MOVSD ES:EDI,ESI                    ; 00585529
    MOVSD ES:EDI,ESI                    ; 0058552a
    PUSH EBP                            ; 0058552b
    LEA ESI,[ESP + 0xb4]                ; 0058552c
    LEA EDI,[ESP + 0x84]                ; 00585533
    CALL core_xform.cpp_matrixToQuaternion_FUN_00585780 ; 0058553a
        ;   XREF to: 00585780 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToQuaternion_FUN_00585780()
    LEA ESI,[ESP + 0xb4]                ; 0058553f
    ADD ESP,0x4                         ; 00585546
    MOVSD ES:EDI,ESI                    ; 00585549
    MOVSD ES:EDI,ESI                    ; 0058554a
    MOVSD ES:EDI,ESI                    ; 0058554b
    MOVSD ES:EDI,ESI                    ; 0058554c
    LEA ESI,[ESP + 0x80]                ; 0058554d
    PUSH dword ptr [ESP + 0xdc]         ; 00585554
    PUSH ESI                            ; 0058555b
    LEA ESI,[ESP + 0x78]                ; 0058555c
    PUSH ESI                            ; 00585560
    LEA ESI,[ESP + 0xac]                ; 00585561
    LEA EDI,[ESP + 0x6c]                ; 00585568
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 0058556c
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    LEA ESI,[ESP + 0xac]                ; 00585571
    ADD ESP,0xc                         ; 00585578
    MOVSD ES:EDI,ESI                    ; 0058557b
    MOVSD ES:EDI,ESI                    ; 0058557c
    MOVSD ES:EDI,ESI                    ; 0058557d
    MOVSD ES:EDI,ESI                    ; 0058557e
    LEA ESI,[ESP + 0x60]                ; 0058557f
    PUSH ESI                            ; 00585583
    LEA ESI,[ESP + 0x4]                 ; 00585584
    PUSH ESI                            ; 00585588
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0 ; 00585589
        ;   XREF to: 005855f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 0058558e
    FLD1                                ; 00585591
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00585593
    FSUB float ptr [ESP + 0xdc]         ; 0058559a
    FLD float ptr [ESI + 0xc]           ; 005855a1
    FMUL ST1                            ; 005855a4
    FLD float ptr [EBP + 0xc]           ; 005855a6
    FMUL float ptr [ESP + 0xdc]         ; 005855a9
    FADDP                               ; 005855b0
    FSTP float ptr [ESP + 0xc]          ; 005855b2
    FLD float ptr [ESI + 0x1c]          ; 005855b6
    FMUL ST1                            ; 005855b9
    FLD float ptr [EBP + 0x1c]          ; 005855bb
    FMUL float ptr [ESP + 0xdc]         ; 005855be
    FADDP                               ; 005855c5
    FSTP float ptr [ESP + 0x1c]         ; 005855c7
    FMUL float ptr [ESI + 0x2c]         ; 005855cb
    FLD float ptr [EBP + 0x2c]          ; 005855ce
    FMUL float ptr [ESP + 0xdc]         ; 005855d1
    LEA EDI,[ESP + 0x30]                ; 005855d8
    MOV ECX,0xc                         ; 005855dc
    FADDP                               ; 005855e1
    MOV ESI,ESP                         ; 005855e3
    FSTP float ptr [ESP + 0x2c]         ; 005855e5
    JMP 0x005854d8                      ; 005855e9
        ;   XREF to: 005854d8 (UNCONDITIONAL_JUMP)  ; LAB_005854d8

