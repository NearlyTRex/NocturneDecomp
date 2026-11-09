; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00593770(undefined4 *param_1,undefined4 *param_2,float param_3)
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
; XREF[5]:
;   core_charactr.cpp_FUN_00428e30 at 004290ce
;   core_doc.cpp_FUN_004568e0 at 00456c17
;   core_stranger.cpp_FUN_00568500 at 005687d5
;   core_tentacle.cpp_FUN_00573110 at 00573154
;   core_tentacle.cpp_FUN_005732e0 at 00573332
;
; Called Functions:
;   core_xform.cpp_FUN_005938c0
;   core_xform.cpp_FUN_00593a50
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593770
        ;   Label: core_xform.cpp_FUN_00593770
    PUSH EDI                            ; 00593771
    PUSH EBP                            ; 00593772
    SUB ESP,0xc4                        ; 00593773
    MOV EBP,dword ptr [ESP + 0xd8]      ; 00593779
    MOV EBX,ESI                         ; 00593780
    FLDZ                                ; 00593782
    FCOMP float ptr [ESP + 0xdc]        ; 00593784
    FNSTSW AX                           ; 0059378b
    SAHF                                ; 0059378d
    JNC 0x005937c3                      ; 0059378e
        ;   XREF to: 005937c3 (CONDITIONAL_JUMP)  ; LAB_005937c3
    CMP dword ptr [ESP + 0xdc],0x3f800000 ; 00593790
    JL 0x005937d5                       ; 0059379b
        ;   XREF to: 005937d5 (CONDITIONAL_JUMP)  ; LAB_005937d5
    MOV ECX,0xc                         ; 0059379d
    LEA EDI,[ESP + 0x30]                ; 005937a2
    MOV ESI,EBP                         ; 005937a6
    MOVSD.REP ES:EDI,ESI                ; 005937a8
        ;   Label: LAB_005937a8
    MOV ECX,0xc                         ; 005937aa
    LEA ESI,[ESP + 0x30]                ; 005937af
    MOV EDI,EBX                         ; 005937b3
    MOVSD.REP ES:EDI,ESI                ; 005937b5
    MOV EAX,EBX                         ; 005937b7
    ADD ESP,0xc4                        ; 005937b9
    POP EBP                             ; 005937bf
    POP EDI                             ; 005937c0
    POP EBX                             ; 005937c1
    RET                                 ; 005937c2
    MOV ECX,0xc                         ; 005937c3
        ;   Label: LAB_005937c3
    LEA EDI,[ESP + 0x30]                ; 005937c8
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005937cc
    JMP 0x005937a8                      ; 005937d3
        ;   XREF to: 005937a8 (UNCONDITIONAL_JUMP)  ; LAB_005937a8
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005937d5
        ;   Label: LAB_005937d5
    PUSH ECX                            ; 005937dc
    LEA ESI,[ESP + 0x94]                ; 005937dd
    LEA EDI,[ESP + 0x74]                ; 005937e4
    CALL core_xform.cpp_FUN_00593a50    ; 005937e8
        ;   XREF to: 00593a50 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00593a50()
    LEA ESI,[ESP + 0x94]                ; 005937ed
    ADD ESP,0x4                         ; 005937f4
    MOVSD ES:EDI,ESI                    ; 005937f7
    MOVSD ES:EDI,ESI                    ; 005937f8
    MOVSD ES:EDI,ESI                    ; 005937f9
    MOVSD ES:EDI,ESI                    ; 005937fa
    PUSH EBP                            ; 005937fb
    LEA ESI,[ESP + 0xb4]                ; 005937fc
    LEA EDI,[ESP + 0x84]                ; 00593803
    CALL core_xform.cpp_FUN_00593a50    ; 0059380a
        ;   XREF to: 00593a50 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00593a50()
    LEA ESI,[ESP + 0xb4]                ; 0059380f
    ADD ESP,0x4                         ; 00593816
    MOVSD ES:EDI,ESI                    ; 00593819
    MOVSD ES:EDI,ESI                    ; 0059381a
    MOVSD ES:EDI,ESI                    ; 0059381b
    MOVSD ES:EDI,ESI                    ; 0059381c
    LEA ESI,[ESP + 0x80]                ; 0059381d
    PUSH dword ptr [ESP + 0xdc]         ; 00593824
    PUSH ESI                            ; 0059382b
    LEA ESI,[ESP + 0x78]                ; 0059382c
    PUSH ESI                            ; 00593830
    LEA ESI,[ESP + 0xac]                ; 00593831
    LEA EDI,[ESP + 0x6c]                ; 00593838
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 0059383c
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[ESP + 0xac]                ; 00593841
    ADD ESP,0xc                         ; 00593848
    MOVSD ES:EDI,ESI                    ; 0059384b
    MOVSD ES:EDI,ESI                    ; 0059384c
    MOVSD ES:EDI,ESI                    ; 0059384d
    MOVSD ES:EDI,ESI                    ; 0059384e
    LEA ESI,[ESP + 0x60]                ; 0059384f
    PUSH ESI                            ; 00593853
    LEA ESI,[ESP + 0x4]                 ; 00593854
    PUSH ESI                            ; 00593858
    CALL core_xform.cpp_FUN_005938c0    ; 00593859
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_FUN_005938c0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 0059385e
    FLD1                                ; 00593861
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00593863
    FSUB float ptr [ESP + 0xdc]         ; 0059386a
    FLD float ptr [ESI + 0xc]           ; 00593871
    FMUL ST1                            ; 00593874
    FLD float ptr [EBP + 0xc]           ; 00593876
    FMUL float ptr [ESP + 0xdc]         ; 00593879
    FADDP                               ; 00593880
    FSTP float ptr [ESP + 0xc]          ; 00593882
    FLD float ptr [ESI + 0x1c]          ; 00593886
    FMUL ST1                            ; 00593889
    FLD float ptr [EBP + 0x1c]          ; 0059388b
    FMUL float ptr [ESP + 0xdc]         ; 0059388e
    FADDP                               ; 00593895
    FSTP float ptr [ESP + 0x1c]         ; 00593897
    FMUL float ptr [ESI + 0x2c]         ; 0059389b
    FLD float ptr [EBP + 0x2c]          ; 0059389e
    FMUL float ptr [ESP + 0xdc]         ; 005938a1
    LEA EDI,[ESP + 0x30]                ; 005938a8
    MOV ECX,0xc                         ; 005938ac
    FADDP                               ; 005938b1
    MOV ESI,ESP                         ; 005938b3
    FSTP float ptr [ESP + 0x2c]         ; 005938b5
    JMP 0x005937a8                      ; 005938b9
        ;   XREF to: 005937a8 (UNCONDITIONAL_JUMP)  ; LAB_005937a8

