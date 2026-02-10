; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack3_esi CMatrix3x4f * __stack3_esi core_xform_cpp_lerpMatrix3x4_FUN_005f7140 (CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t,CMatrix3x4f *matrix_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
; float            Stack[0xc]:4   t
; Local Variables:
; undefined8       Stack[-0xd8]:8  local_d8
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x20]:1  local_20
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090 at 0042d2ac
;   core_stranger.cpp_CStranger_FUN_005c07b0 at 005c0b63
;   core_tentacle.cpp_CTentacle_FUN_005db9d0 at 005dba11
;   core_tentacle.cpp_CTentacle_FUN_005dbb70 at 005dbbc2
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
    MOVSD.REP ES:EDI,ESI                ; 005f7178
        ;   Label: LAB_005f7178
    MOV ECX,0xc                         ; 005f717a
    LEA ESI,[ESP + 0x38]                ; 005f717f
    MOV EDI,EBX                         ; 005f7183
    MOVSD.REP ES:EDI,ESI                ; 005f7185
    MOV EAX,EBX                         ; 005f7187
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
    MOV ECX,dword ptr [EBP + 0x14]      ; 005f71bb
    MOVSD ES:EDI,ESI                    ; 005f71be
    MOVSD ES:EDI,ESI                    ; 005f71bf
    MOVSD ES:EDI,ESI                    ; 005f71c0
    MOVSD ES:EDI,ESI                    ; 005f71c1
    PUSH ECX                            ; 005f71c2
    LEA ESI,[ESP + 0x7c]                ; 005f71c3
    LEA EDI,[ESP + 0x9c]                ; 005f71c7
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 005f71ce
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x7c]                ; 005f71d3
    ADD ESP,0x4                         ; 005f71d7
    MOVSD ES:EDI,ESI                    ; 005f71da
    MOVSD ES:EDI,ESI                    ; 005f71db
    MOVSD ES:EDI,ESI                    ; 005f71dc
    MOVSD ES:EDI,ESI                    ; 005f71dd
    LEA ESI,[ESP + 0x98]                ; 005f71de
    PUSH dword ptr [EBP + 0x18]         ; 005f71e5
    PUSH ESI                            ; 005f71e8
    LEA ESI,[ESP + 0x70]                ; 005f71e9
    PUSH ESI                            ; 005f71ed
    LEA ESI,[ESP + 0x94]                ; 005f71ee
    LEA EDI,[ESP + 0xb4]                ; 005f71f5
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005f71fc
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x94]                ; 005f7201
    ADD ESP,0xc                         ; 005f7208
    MOVSD ES:EDI,ESI                    ; 005f720b
    MOVSD ES:EDI,ESI                    ; 005f720c
    MOVSD ES:EDI,ESI                    ; 005f720d
    MOVSD ES:EDI,ESI                    ; 005f720e
    LEA ESI,[ESP + 0xa8]                ; 005f720f
    PUSH ESI                            ; 005f7216
    LEA ESI,[ESP + 0xc]                 ; 005f7217
    PUSH ESI                            ; 005f721b
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 005f721c
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
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

