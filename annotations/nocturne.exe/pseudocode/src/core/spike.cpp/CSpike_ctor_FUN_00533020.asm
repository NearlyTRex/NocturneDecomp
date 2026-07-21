; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_spike_cpp_CSpike_ctor_FUN_00533020(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_bgate.kfm_00595011
;   undefined1 DAT_0059501b
;   undefined1 DAT_0059501c
;   undefined1 DAT_0059501d
;   undefined1 DAT_0059501e
;   undefined1 DAT_00595020
;   undefined1 DAT_00595021
;   undefined1 DAT_00595022
;   undefined1 DAT_00595023
;   undefined1 DAT_00595025
;   undefined1 DAT_00595026
;   undefined1 DAT_00595027
;   undefined1 DAT_00595028
;   undefined1 DAT_0059502a
;   undefined1 DAT_0059502b
;   ... and 3 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533020
        ;   Label: core_spike.cpp_CSpike_ctor_FUN_00533020
    PUSH ESI                            ; 00533021
    PUSH EDI                            ; 00533022
    MOV EBX,dword ptr [ESP + 0x10]      ; 00533023
    PUSH EBX                            ; 00533027
    CALL FUN_00409d30                   ; 00533028
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0053302d
    ADD EAX,0x150                       ; 00533030
    PUSH EAX                            ; 00533035
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00533036
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0053303b
    LEA EBX,[EAX + 0xfffffeb0]          ; 0053303e
    PUSH 0x595011                       ; 00533044 | = "bgate.kfm"
    LEA EAX,[EBX + 0x150]               ; 00533049
    PUSH EAX                            ; 0053304f
    MOV ESI,0x59501b                    ; 00533050 | DAT_0059501b
    MOV dword ptr [EBX + 0x14c],0x5a2334 ; 00533055 | PTR_core_spike.cpp_CSpike_setup_FUN_00533160_005a2334
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0053305f
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00533064
    ADD ESP,0x8                         ; 0053306e
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00533071
    LEA EDI,[EBX + 0x2e8]               ; 0053307b
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00533081
    PUSH EDI                            ; 0053308b
    MOV AL,byte ptr [ESI]               ; 0053308c | DAT_0059501b | DAT_0059501d
        ;   Label: LAB_0053308c
    MOV byte ptr [EDI],AL               ; 0053308e
    CMP AL,0x0                          ; 00533090
    JZ 0x005330a4                       ; 00533092
        ;   XREF to: 005330a4 (CONDITIONAL_JUMP)  ; LAB_005330a4
    MOV AL,byte ptr [ESI + 0x1]         ; 00533094 | DAT_0059501c | DAT_0059501e
    ADD ESI,0x2                         ; 00533097
    MOV byte ptr [EDI + 0x1],AL         ; 0053309a
    ADD EDI,0x2                         ; 0053309d
    CMP AL,0x0                          ; 005330a0
    JNZ 0x0053308c                      ; 005330a2
        ;   XREF to: 0053308c (CONDITIONAL_JUMP)  ; LAB_0053308c
    POP EDI                             ; 005330a4
        ;   Label: LAB_005330a4
    MOV ESI,0x595020                    ; 005330a5 | DAT_00595020
    LEA EDI,[EBX + 0x34c]               ; 005330aa
    PUSH EDI                            ; 005330b0
    MOV AL,byte ptr [ESI]               ; 005330b1 | DAT_00595020 | DAT_00595022
        ;   Label: LAB_005330b1
    MOV byte ptr [EDI],AL               ; 005330b3
    CMP AL,0x0                          ; 005330b5
    JZ 0x005330c9                       ; 005330b7
        ;   XREF to: 005330c9 (CONDITIONAL_JUMP)  ; LAB_005330c9
    MOV AL,byte ptr [ESI + 0x1]         ; 005330b9 | DAT_00595021 | DAT_00595023
    ADD ESI,0x2                         ; 005330bc
    MOV byte ptr [EDI + 0x1],AL         ; 005330bf
    ADD EDI,0x2                         ; 005330c2
    CMP AL,0x0                          ; 005330c5
    JNZ 0x005330b1                      ; 005330c7
        ;   XREF to: 005330b1 (CONDITIONAL_JUMP)  ; LAB_005330b1
    POP EDI                             ; 005330c9
        ;   Label: LAB_005330c9
    MOV ESI,0x595025                    ; 005330ca | DAT_00595025
    LEA EDI,[EBX + 0x3b0]               ; 005330cf
    PUSH EDI                            ; 005330d5
    MOV AL,byte ptr [ESI]               ; 005330d6 | DAT_00595025 | DAT_00595027
        ;   Label: LAB_005330d6
    MOV byte ptr [EDI],AL               ; 005330d8
    CMP AL,0x0                          ; 005330da
    JZ 0x005330ee                       ; 005330dc
        ;   XREF to: 005330ee (CONDITIONAL_JUMP)  ; LAB_005330ee
    MOV AL,byte ptr [ESI + 0x1]         ; 005330de | DAT_00595026 | DAT_00595028
    ADD ESI,0x2                         ; 005330e1
    MOV byte ptr [EDI + 0x1],AL         ; 005330e4
    ADD EDI,0x2                         ; 005330e7
    CMP AL,0x0                          ; 005330ea
    JNZ 0x005330d6                      ; 005330ec
        ;   XREF to: 005330d6 (CONDITIONAL_JUMP)  ; LAB_005330d6
    POP EDI                             ; 005330ee
        ;   Label: LAB_005330ee
    MOV ESI,0x59502a                    ; 005330ef | DAT_0059502a
    LEA EDI,[EBX + 0x414]               ; 005330f4
    PUSH EDI                            ; 005330fa
    MOV AL,byte ptr [ESI]               ; 005330fb | DAT_0059502a | DAT_0059502c
        ;   Label: LAB_005330fb
    MOV byte ptr [EDI],AL               ; 005330fd
    CMP AL,0x0                          ; 005330ff
    JZ 0x00533113                       ; 00533101
        ;   XREF to: 00533113 (CONDITIONAL_JUMP)  ; LAB_00533113
    MOV AL,byte ptr [ESI + 0x1]         ; 00533103 | DAT_0059502b | DAT_0059502d
    ADD ESI,0x2                         ; 00533106
    MOV byte ptr [EDI + 0x1],AL         ; 00533109
    ADD EDI,0x2                         ; 0053310c
    CMP AL,0x0                          ; 0053310f
    JNZ 0x005330fb                      ; 00533111
        ;   XREF to: 005330fb (CONDITIONAL_JUMP)  ; LAB_005330fb
    POP EDI                             ; 00533113
        ;   Label: LAB_00533113
    MOV dword ptr [EBX + 0x478],0x3f800000 ; 00533114
    MOV dword ptr [EBX + 0x47c],0x3f800000 ; 0053311e
    MOV byte ptr [EBX + 0x484],0x0      ; 00533128
    MOV byte ptr [EBX + 0x4e8],0x0      ; 0053312f
    MOV dword ptr [EBX + 0x54c],0x3f800000 ; 00533136
    MOV dword ptr [EBX + 0x550],0x3dcccccd ; 00533140
    MOV EAX,EBX                         ; 0053314a
    MOV dword ptr [EBX + 0x554],0x0     ; 0053314c
    POP EDI                             ; 00533156
    POP ESI                             ; 00533157
    POP EBX                             ; 00533158
    RET                                 ; 00533159

