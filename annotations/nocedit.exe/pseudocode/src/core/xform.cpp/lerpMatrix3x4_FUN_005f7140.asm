; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
; float            Stack[0xc]:4   t
; Local Variables:
; undefined4[1498] Stack[-0x184c]:5992  auStackY_184c
; CMatrix3x4f      Stack[-0xd0]:48  local_d0
; float[12]        Stack[-0xa0]:48  local_a0
; CQuaternion4f    Stack[-0x70]:16  local_70
; CQuaternion4f    Stack[-0x60]:16  local_60
; CQuaternion4f    Stack[-0x50]:16  local_50
; CQuaternion4f    Stack[-0x40]:16  local_40
; CQuaternion4f    Stack[-0x30]:16  local_30
; CQuaternion4f    Stack[-0x20]:16  local_20
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090 at 0042d2ac
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0 at 005c0b63
;   core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70 at 005dbbc2
;   core_tentacle.cpp_CTentacle_updateGrabbedVictim_FUN_005db9d0 at 005dba11
;
; Called Functions:
;   core_xform.cpp_matrixToQuaternion_FUN_005f7420
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7140
        ;   Label: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
    PUSH EDI                            ; 005f7141
    PUSH EBP                            ; 005f7142
    MOV EBP,ESP                         ; 005f7143
    SUB ESP,0xcc                        ; 005f7145
    AND ESP,0xfffffff8                  ; 005f714b
    MOV EBX,ESI                         ; 005f714e
    FLD float ptr [EBP + 0x18]          ; 005f7150
    FLDZ                                ; 005f7153
    FXCH                                ; 005f7155
    FSTP double ptr [ESP]               ; 005f7157
    FCOMP double ptr [ESP]              ; 005f715a
    FNSTSW AX                           ; 005f715d
    SAHF                                ; 005f715f
    JNC 0x005f718f                      ; 005f7160
        ;   XREF to: 005f718f (CONDITIONAL_JUMP)  ; LAB_005f718f
    FLD1                                ; 005f7162
    FCOMP double ptr [ESP]              ; 005f7164
    FNSTSW AX                           ; 005f7167
    SAHF                                ; 005f7169
    JA 0x005f719d                       ; 005f716a
        ;   XREF to: 005f719d (CONDITIONAL_JUMP)  ; LAB_005f719d
    MOV ECX,0xc                         ; 005f716c
    LEA EDI,[ESP + 0x38]                ; 005f7171
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f7175
    JMP 0x03fc5a44                      ; 005f7178
        ;   XREF to: 03fc5a44 (UNCONDITIONAL_JUMP)  ; LAB_03fc5a44
        ;   Label: LAB_005f7178
    MOV EAX,EBX                         ; 005f7187
        ;   Label: LAB_005f7187
    MOV ESP,EBP                         ; 005f7189
    POP EBP                             ; 005f718b
    POP EDI                             ; 005f718c
    POP EBX                             ; 005f718d
    RET                                 ; 005f718e
    MOV ECX,0xc                         ; 005f718f
        ;   Label: LAB_005f718f
    LEA EDI,[ESP + 0x38]                ; 005f7194
    MOV ESI,dword ptr [EBP + 0x10]      ; 005f7198
    JMP 0x005f7178                      ; 005f719b
        ;   XREF to: 005f7178 (UNCONDITIONAL_JUMP)  ; LAB_005f7178
    MOV EDX,dword ptr [EBP + 0x10]      ; 005f719d
        ;   Label: LAB_005f719d
    PUSH EDX                            ; 005f71a0
    LEA ESI,[ESP + 0xbc]                ; 005f71a1
    LEA EDI,[ESP + 0x6c]                ; 005f71a8
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 005f71ac
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005f71b1
    LEA ESI,[ESP + 0xb8]                ; 005f71b4
    JMP 0x00605319                      ; 005f71bb
        ;   XREF to: 00605319 (UNCONDITIONAL_JUMP)  ; LAB_00605319
    PUSH ECX                            ; 005f71c2
        ;   Label: LAB_005f71c2
    LEA ESI,[ESP + 0x7c]                ; 005f71c3
    LEA EDI,[ESP + 0x9c]                ; 005f71c7
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 005f71ce
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x7c]                ; 005f71d3
    ADD ESP,0x4                         ; 005f71d7
    JMP 0x0060533d                      ; 005f71da
        ;   XREF to: 0060533d (UNCONDITIONAL_JUMP)  ; LAB_0060533d
    PUSH dword ptr [EBP + 0x18]         ; 005f71e5
        ;   Label: LAB_005f71e5
    PUSH ESI                            ; 005f71e8
    LEA ESI,[ESP + 0x70]                ; 005f71e9
    PUSH ESI                            ; 005f71ed
    LEA ESI,[ESP + 0x94]                ; 005f71ee
    LEA EDI,[ESP + 0xb4]                ; 005f71f5
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005f71fc
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x94]                ; 005f7201
    ADD ESP,0xc                         ; 005f7208
    JMP 0x00605365                      ; 005f720b
        ;   XREF to: 00605365 (UNCONDITIONAL_JUMP)  ; LAB_00605365
    PUSH ESI                            ; 005f7216
        ;   Label: LAB_005f7216
    LEA ESI,[ESP + 0xc]                 ; 005f7217
    PUSH ESI                            ; 005f721b
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 005f721c
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 005f7221
    FLD1                                ; 005f7224
    MOV ESI,dword ptr [EBP + 0x10]      ; 005f7226
    FSUB double ptr [ESP]               ; 005f7229
    FLD float ptr [ESI + 0xc]           ; 005f722c
    FMUL ST1                            ; 005f722f
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f7231
    FLD float ptr [ESI + 0xc]           ; 005f7234
    FMUL float ptr [EBP + 0x18]         ; 005f7237
    FADDP                               ; 005f723a
    MOV ESI,dword ptr [EBP + 0x10]      ; 005f723c
    FSTP float ptr [ESP + 0x14]         ; 005f723f
    FLD float ptr [ESI + 0x1c]          ; 005f7243
    FMUL ST1                            ; 005f7246
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f7248
    FLD float ptr [ESI + 0x1c]          ; 005f724b
    FMUL float ptr [EBP + 0x18]         ; 005f724e
    FADDP                               ; 005f7251
    MOV ESI,dword ptr [EBP + 0x10]      ; 005f7253
    FSTP float ptr [ESP + 0x24]         ; 005f7256
    FMUL float ptr [ESI + 0x2c]         ; 005f725a
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f725d
    FLD float ptr [ESI + 0x2c]          ; 005f7260
    FMUL float ptr [EBP + 0x18]         ; 005f7263
    LEA EDI,[ESP + 0x38]                ; 005f7266
    MOV ECX,0xc                         ; 005f726a
    FADDP                               ; 005f726f
    LEA ESI,[ESP + 0x8]                 ; 005f7271
    FSTP float ptr [ESP + 0x34]         ; 005f7275
    JMP 0x005f7178                      ; 005f7279
        ;   XREF to: 005f7178 (UNCONDITIONAL_JUMP)  ; LAB_005f7178
    MOV ECX,dword ptr [EBP + 0x14]      ; 00605319
        ;   Label: LAB_00605319
    MOV ECX,dword ptr [ESI]             ; 0060531c
    MOV dword ptr [EDI],ECX             ; 0060531e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605320
    MOV dword ptr [EDI + 0x4],ECX       ; 00605323
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605326
    MOV dword ptr [EDI + 0x8],ECX       ; 00605329
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060532c
    MOV dword ptr [EDI + 0xc],ECX       ; 0060532f
    ADD ESI,0x10                        ; 00605332
    ADD EDI,0x10                        ; 00605335
    JMP 0x005f71c2                      ; 00605338
        ;   XREF to: 005f71c2 (UNCONDITIONAL_JUMP)  ; LAB_005f71c2
    MOV ECX,dword ptr [ESI]             ; 0060533d
        ;   Label: LAB_0060533d
    MOV dword ptr [EDI],ECX             ; 0060533f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605341
    MOV dword ptr [EDI + 0x4],ECX       ; 00605344
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605347
    MOV dword ptr [EDI + 0x8],ECX       ; 0060534a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060534d
    MOV dword ptr [EDI + 0xc],ECX       ; 00605350
    ADD ESI,0x10                        ; 00605353
    ADD EDI,0x10                        ; 00605356
    LEA ESI,[ESP + 0x98]                ; 00605359
    JMP 0x005f71e5                      ; 00605360
        ;   XREF to: 005f71e5 (UNCONDITIONAL_JUMP)  ; LAB_005f71e5
    MOV ECX,dword ptr [ESI]             ; 00605365
        ;   Label: LAB_00605365
    MOV dword ptr [EDI],ECX             ; 00605367
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605369
    MOV dword ptr [EDI + 0x4],ECX       ; 0060536c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060536f
    MOV dword ptr [EDI + 0x8],ECX       ; 00605372
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605375
    MOV dword ptr [EDI + 0xc],ECX       ; 00605378
    ADD ESI,0x10                        ; 0060537b
    ADD EDI,0x10                        ; 0060537e
    LEA ESI,[ESP + 0xa8]                ; 00605381
    JMP 0x005f7216                      ; 00605388
        ;   XREF to: 005f7216 (UNCONDITIONAL_JUMP)  ; LAB_005f7216
    MOV ECX,0xc                         ; 03fc4b91
        ;   Label: LAB_03fc4b91
    LEA ESI,[ESP + 0x38]                ; 03fc4b96
    MOV EDI,EBX                         ; 03fc4b9a
    MOV ECX,dword ptr [ESI]             ; 03fc4b9c
    MOV dword ptr [EDI],ECX             ; 03fc4b9e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4ba0
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4ba3
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc4ba6
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4ba9
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4bac
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4baf
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4bb2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc4bb5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc4bb8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4bbb
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4bbe
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc4bc1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc4bc4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc4bc7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4bca
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4bcd
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4bd0
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc4bd3
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc4bd6
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4bd9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4bdc
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4bdf
    ADD ESI,0x30                        ; 03fc4be2
    ADD EDI,0x30                        ; 03fc4be5
    XOR ECX,ECX                         ; 03fc4be8
    JMP 0x005f7187                      ; 03fc4bea
        ;   XREF to: 005f7187 (UNCONDITIONAL_JUMP)  ; LAB_005f7187
    MOV ECX,dword ptr [ESI]             ; 03fc5a44
        ;   Label: LAB_03fc5a44
    MOV dword ptr [EDI],ECX             ; 03fc5a46
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5a48
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc5a4b
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc5a4e
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc5a51
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc5a54
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5a57
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5a5a
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5a5d
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc5a60
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc5a63
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5a66
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5a69
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5a6c
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc5a6f
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc5a72
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc5a75
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5a78
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5a7b
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc5a7e
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc5a81
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc5a84
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc5a87
    ADD ESI,0x30                        ; 03fc5a8a
    ADD EDI,0x30                        ; 03fc5a8d
    XOR ECX,ECX                         ; 03fc5a90
    JMP 0x03fc4b91                      ; 03fc5a92
        ;   XREF to: 03fc4b91 (UNCONDITIONAL_JUMP)  ; LAB_03fc4b91

