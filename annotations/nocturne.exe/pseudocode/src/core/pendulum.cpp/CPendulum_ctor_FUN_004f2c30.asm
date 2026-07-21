; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_pend.kfm_0058cff2
;   undefined1 DAT_0058cffb
;   undefined1 DAT_0058cffc
;   undefined1 DAT_0058cffd
;   undefined1 DAT_0058cffe
;   undefined1 DAT_0058d000
;   undefined1 DAT_0058d001
;   undefined1 DAT_0058d002
;   undefined1 DAT_0058d003
;   undefined1* PTR_core_pendulum.cpp_CPendulum_setup_FUN_004f2d40_005a1244 = 004f2d40
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2c30
        ;   Label: core_pendulum.cpp_CPendulum_ctor_FUN_004f2c30
    PUSH ESI                            ; 004f2c31
    PUSH EDI                            ; 004f2c32
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f2c33
    PUSH EBX                            ; 004f2c37
    CALL FUN_00409d30                   ; 004f2c38
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 004f2c3d
    ADD EAX,0x150                       ; 004f2c40
    PUSH EAX                            ; 004f2c45
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004f2c46
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 004f2c4b
    LEA EBX,[EAX + 0xfffffeb0]          ; 004f2c4e
    PUSH 0x58cff2                       ; 004f2c54 | = "pend.kfm"
    LEA EAX,[EBX + 0x150]               ; 004f2c59
    PUSH EAX                            ; 004f2c5f
    MOV dword ptr [EBX + 0x14c],0x5a1244 ; 004f2c60 | PTR_core_pendulum.cpp_CPendulum_setup_FUN_004f2d40_005a1244
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004f2c6a
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 004f2c6f
    MOV ESI,0x58cffb                    ; 004f2c72 | DAT_0058cffb
    LEA EDI,[EBX + 0x2cc]               ; 004f2c77
    PUSH EDI                            ; 004f2c7d
    MOV AL,byte ptr [ESI]               ; 004f2c7e | DAT_0058cffb | DAT_0058cffd
        ;   Label: LAB_004f2c7e
    MOV byte ptr [EDI],AL               ; 004f2c80
    CMP AL,0x0                          ; 004f2c82
    JZ 0x004f2c96                       ; 004f2c84
        ;   XREF to: 004f2c96 (CONDITIONAL_JUMP)  ; LAB_004f2c96
    MOV AL,byte ptr [ESI + 0x1]         ; 004f2c86 | DAT_0058cffc | DAT_0058cffe
    ADD ESI,0x2                         ; 004f2c89
    MOV byte ptr [EDI + 0x1],AL         ; 004f2c8c
    ADD EDI,0x2                         ; 004f2c8f
    CMP AL,0x0                          ; 004f2c92
    JNZ 0x004f2c7e                      ; 004f2c94
        ;   XREF to: 004f2c7e (CONDITIONAL_JUMP)  ; LAB_004f2c7e
    POP EDI                             ; 004f2c96
        ;   Label: LAB_004f2c96
    MOV ESI,0x58d000                    ; 004f2c97 | DAT_0058d000
    LEA EDI,[EBX + 0x330]               ; 004f2c9c
    PUSH EDI                            ; 004f2ca2
    MOV AL,byte ptr [ESI]               ; 004f2ca3 | DAT_0058d000 | DAT_0058d002
        ;   Label: LAB_004f2ca3
    MOV byte ptr [EDI],AL               ; 004f2ca5
    CMP AL,0x0                          ; 004f2ca7
    JZ 0x004f2cbb                       ; 004f2ca9
        ;   XREF to: 004f2cbb (CONDITIONAL_JUMP)  ; LAB_004f2cbb
    MOV AL,byte ptr [ESI + 0x1]         ; 004f2cab | DAT_0058d001 | DAT_0058d003
    ADD ESI,0x2                         ; 004f2cae
    MOV byte ptr [EDI + 0x1],AL         ; 004f2cb1
    ADD EDI,0x2                         ; 004f2cb4
    CMP AL,0x0                          ; 004f2cb7
    JNZ 0x004f2ca3                      ; 004f2cb9
        ;   XREF to: 004f2ca3 (CONDITIONAL_JUMP)  ; LAB_004f2ca3
    POP EDI                             ; 004f2cbb
        ;   Label: LAB_004f2cbb
    MOV dword ptr [EBX + 0x394],0x1     ; 004f2cbc
    MOV dword ptr [EBX + 0x398],0x0     ; 004f2cc6
    MOV dword ptr [EBX + 0x3a0],0x3f060a92 ; 004f2cd0
    MOV byte ptr [EBX + 0x3a4],0x0      ; 004f2cda
    MOV byte ptr [EBX + 0x3c8],0x0      ; 004f2ce1
    MOV byte ptr [EBX + 0x3e8],0x0      ; 004f2ce8
    MOV dword ptr [EBX + 0x3c4],0x0     ; 004f2cef
    MOV dword ptr [EBX + 0x420],0x0     ; 004f2cf9
    MOV dword ptr [EBX + 0x424],0x0     ; 004f2d03
    MOV dword ptr [EBX + 0x428],0x0     ; 004f2d0d
    MOV dword ptr [EBX + 0x42c],0x0     ; 004f2d17
    MOV dword ptr [EBX + 0x438],0x0     ; 004f2d21
    MOV EAX,EBX                         ; 004f2d2b
    MOV dword ptr [EBX + 0x434],0x0     ; 004f2d2d
    POP EDI                             ; 004f2d37
    POP ESI                             ; 004f2d38
    POP EBX                             ; 004f2d39
    RET                                 ; 004f2d3a

