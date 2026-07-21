; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x35a0]:4  local_35a0
; undefined        Stack[-0x3598]:1  local_3598
; undefined        Stack[-0x2dbc]:1  local_2dbc
; undefined4       Stack[-0x2db0]:4  local_2db0
; undefined4       Stack[-0x2da0]:4  local_2da0
; undefined4       Stack[-0x2d90]:4  local_2d90
; undefined        Stack[-0x1afc]:1  local_1afc
; undefined        Stack[-0x1320]:1  local_1320
; undefined4       Stack[-0x1314]:4  local_1314
; undefined4       Stack[-0x1304]:4  local_1304
; undefined4       Stack[-0x12f4]:4  local_12f4
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e120
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120
    PUSH ESI                            ; 0051e121
    PUSH EDI                            ; 0051e122
    PUSH EBP                            ; 0051e123
    SUB ESP,0x3588                      ; 0051e124
    MOV EDI,dword ptr [ESP + 0x359c]    ; 0051e12a
    PUSH EDI                            ; 0051e131
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0051e132
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 0051e137
    IMUL EDX,dword ptr [ESP + 0x35a8],0x54c ; 0051e13a
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x9cc] ; 0051e145
    PUSH EDI                            ; 0051e14c
    MOV dword ptr [ESP + 0x357c],EAX    ; 0051e14d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051e154
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051e159
    MOV EBX,dword ptr [EAX + 0x28558]   ; 0051e15c
    LEA EAX,[ESP + 0x1a9c]              ; 0051e162
    PUSH EAX                            ; 0051e169
    MOV ESI,dword ptr [ESP + 0x35a4]    ; 0051e16a
    PUSH dword ptr [ESP + 0x35a8]       ; 0051e171
    PUSH ESI                            ; 0051e178
    PUSH EDI                            ; 0051e179
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350 ; 0051e17a
        ;   XREF to: 0051e350 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350()
    ADD ESP,0x10                        ; 0051e17f
    PUSH EDI                            ; 0051e182
    LEA EAX,[ESP + 0x1aa0]              ; 0051e183
    PUSH EAX                            ; 0051e18a
    MOV EBP,0xffffffff                  ; 0051e18b
    XOR ESI,ESI                         ; 0051e190
    CALL core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0 ; 0051e192
        ;   XREF to: 0051f1d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0()
    ADD ESP,0x8                         ; 0051e197
    MOV EAX,0x7149f2ca                  ; 0051e19a
    MOV EDX,dword ptr [ESP + 0x3578]    ; 0051e19f
    MOV dword ptr [ESP + 0x3574],EBP    ; 0051e1a6
    MOV dword ptr [ESP + 0x357c],EAX    ; 0051e1ad
    TEST EDX,EDX                        ; 0051e1b4
    JLE 0x0051e31b                      ; 0051e1b6
        ;   XREF to: 0051e31b (CONDITIONAL_JUMP)  ; LAB_0051e31b
    MOV EAX,ESP                         ; 0051e1bc
        ;   Label: LAB_0051e1bc
    MOV dword ptr [ESP + 0x3584],ESI    ; 0051e1be
    PUSH EAX                            ; 0051e1c5
    FILD dword ptr [ESP + 0x3588]       ; 0051e1c6
    SUB ESP,0x4                         ; 0051e1cd
    MOV EBP,dword ptr [ESP + 0x35b0]    ; 0051e1d0
    FSTP float ptr [ESP]                ; 0051e1d7
    PUSH EBP                            ; 0051e1da
    PUSH EDI                            ; 0051e1db
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350 ; 0051e1dc
        ;   XREF to: 0051e350 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350()
    ADD ESP,0x10                        ; 0051e1e1
    PUSH EDI                            ; 0051e1e4
    LEA EAX,[ESP + 0x4]                 ; 0051e1e5
    PUSH EAX                            ; 0051e1e9
    CALL core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0 ; 0051e1ea
        ;   XREF to: 0051f1d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0()
    ADD ESP,0x8                         ; 0051e1ef
    XOR EAX,EAX                         ; 0051e1f2
    XOR ECX,ECX                         ; 0051e1f4
    MOV dword ptr [ESP + 0x3580],EAX    ; 0051e1f6
    TEST EBX,EBX                        ; 0051e1fd
    JLE 0x0051e2f8                      ; 0051e1ff
        ;   XREF to: 0051e2f8 (CONDITIONAL_JUMP)  ; LAB_0051e2f8
    FLD float ptr [ESP + 0x3580]        ; 0051e205
    LEA EAX,[ESP + 0x7dc]               ; 0051e20c
    LEA EDX,[ESP + 0x2278]              ; 0051e213
    MOV EBP,dword ptr [EAX + 0xc]       ; 0051e21a
        ;   Label: LAB_0051e21a
    MOV dword ptr [ESP + 0x3550],EBP    ; 0051e21d
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0051e224
    MOV dword ptr [ESP + 0x3554],EBP    ; 0051e227
    MOV EBP,dword ptr [EAX + 0x2c]      ; 0051e22e
    MOV dword ptr [ESP + 0x3558],EBP    ; 0051e231
    MOV EBP,dword ptr [ESP + 0x3550]    ; 0051e238
    MOV dword ptr [ESP + 0x3544],EBP    ; 0051e23f
    MOV EBP,dword ptr [ESP + 0x3554]    ; 0051e246
    MOV dword ptr [ESP + 0x3548],EBP    ; 0051e24d
    MOV EBP,dword ptr [ESP + 0x3558]    ; 0051e254
    MOV dword ptr [ESP + 0x354c],EBP    ; 0051e25b
    MOV EBP,dword ptr [EDX + 0xc]       ; 0051e262
    MOV dword ptr [ESP + 0x355c],EBP    ; 0051e265
    FLD float ptr [ESP + 0x355c]        ; 0051e26c
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0051e273
    FSUB float ptr [ESP + 0x3550]       ; 0051e276
    FMUL ST0                            ; 0051e27d
    MOV dword ptr [ESP + 0x3560],EBP    ; 0051e27f
    MOV EBP,dword ptr [EDX + 0x2c]      ; 0051e286
    FLD float ptr [ESP + 0x3560]        ; 0051e289
    MOV dword ptr [ESP + 0x3564],EBP    ; 0051e290
    FSUB float ptr [ESP + 0x3554]       ; 0051e297
    FMUL ST0                            ; 0051e29e
    FLD float ptr [ESP + 0x3564]        ; 0051e2a0
    FXCH                                ; 0051e2a7
    FADDP ST2,ST0                       ; 0051e2a9
    FSUB float ptr [ESP + 0x3558]       ; 0051e2ab
    FMUL ST0                            ; 0051e2b2
    ADD EDX,0x30                        ; 0051e2b4
    MOV EBP,dword ptr [ESP + 0x355c]    ; 0051e2b7
    ADD EAX,0x30                        ; 0051e2be
    MOV dword ptr [ESP + 0x3538],EBP    ; 0051e2c1
    MOV EBP,dword ptr [ESP + 0x3560]    ; 0051e2c8
    INC ECX                             ; 0051e2cf
    MOV dword ptr [ESP + 0x353c],EBP    ; 0051e2d0
    MOV EBP,dword ptr [ESP + 0x3564]    ; 0051e2d7
    FADDP                               ; 0051e2de
    MOV dword ptr [ESP + 0x3540],EBP    ; 0051e2e0
    FADDP                               ; 0051e2e7
    CMP ECX,EBX                         ; 0051e2e9
    JL 0x0051e21a                       ; 0051e2eb
        ;   XREF to: 0051e21a (CONDITIONAL_JUMP)  ; LAB_0051e21a
    FSTP float ptr [ESP + 0x3580]       ; 0051e2f1
    FLD float ptr [ESP + 0x3580]        ; 0051e2f8
        ;   Label: LAB_0051e2f8
    FCOMP float ptr [ESP + 0x357c]      ; 0051e2ff
    FNSTSW AX                           ; 0051e306
    SAHF                                ; 0051e308
    JC 0x0051e32d                       ; 0051e309
        ;   XREF to: 0051e32d (CONDITIONAL_JUMP)  ; LAB_0051e32d
    MOV ECX,dword ptr [ESP + 0x3578]    ; 0051e30b
        ;   Label: LAB_0051e30b
    INC ESI                             ; 0051e312
    CMP ESI,ECX                         ; 0051e313
    JL 0x0051e1bc                       ; 0051e315
        ;   XREF to: 0051e1bc (CONDITIONAL_JUMP)  ; LAB_0051e1bc
    MOV EAX,dword ptr [ESP + 0x3574]    ; 0051e31b
        ;   Label: LAB_0051e31b
    ADD ESP,0x3588                      ; 0051e322
    POP EBP                             ; 0051e328
    POP EDI                             ; 0051e329
    POP ESI                             ; 0051e32a
    POP EBX                             ; 0051e32b
    RET                                 ; 0051e32c
    MOV EAX,dword ptr [ESP + 0x3580]    ; 0051e32d
        ;   Label: LAB_0051e32d
    MOV dword ptr [ESP + 0x3574],ESI    ; 0051e334
    MOV dword ptr [ESP + 0x357c],EAX    ; 0051e33b
    JMP 0x0051e30b                      ; 0051e342
        ;   XREF to: 0051e30b (UNCONDITIONAL_JUMP)  ; LAB_0051e30b

