; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_prye_cpp_FUN_00520dec(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cd517
;   undefined4 DAT_005cd51f
;   undefined4 DAT_005cd527
;   undefined4 DAT_005cd52f
;   undefined4 DAT_005cd537
;   undefined4 DAT_005cd53f
;   CConsole* g_CConsolePtr = 007f7ea4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CLadderClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00520dec
        ;   Label: core_prye.cpp_FUN_00520dec
    PUSH EBX                            ; 00520df0
    PUSH ESI                            ; 00520df1
    PUSH EDI                            ; 00520df2
    PUSH EBP                            ; 00520df3
    MOV EBP,ESP                         ; 00520df4
    SUB ESP,0x148                       ; 00520df6
    AND ESP,0xfffffff8                  ; 00520dfc
    PUSH 0x0                            ; 00520dff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520e01
    PUSH EAX                            ; 00520e04
    MOV dword ptr [EAX + 0x20ba4],0x0   ; 00520e05
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60 ; 00520e0f
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x14c],EAX     ; 00520e14
    FLD float ptr [ESP + 0x14c]         ; 00520e1b
    ADD ESP,0x8                         ; 00520e22
    FCOMP double ptr [0x005cd517]       ; 00520e25 | DAT_005cd517
    FNSTSW AX                           ; 00520e2b
    SAHF                                ; 00520e2d
    JC 0x00520e72                       ; 00520e2e
        ;   XREF to: 00520e72 (CONDITIONAL_JUMP)  ; LAB_00520e72
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520e30
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 00520e33
    TEST ECX,ECX                        ; 00520e39
    JNZ 0x00520e72                      ; 00520e3b
        ;   XREF to: 00520e72 (CONDITIONAL_JUMP)  ; LAB_00520e72
    CMP dword ptr [EAX + 0x2628],0x0    ; 00520e3d
    JNZ 0x00520e72                      ; 00520e44
        ;   XREF to: 00520e72 (CONDITIONAL_JUMP)  ; LAB_00520e72
    MOV dword ptr [ESP + 0x13c],ECX     ; 00520e46
    ADD EAX,0x20                        ; 00520e4d
    MOV dword ptr [ESP + 0x138],ECX     ; 00520e50
    MOV dword ptr [ESP + 0x134],EAX     ; 00520e57
    MOV EAX,[0x00603b28]                ; 00520e5e | g_CDemonSetPtr
        ;   Label: LAB_00520e5e
    MOV EBX,dword ptr [ESP + 0x13c]     ; 00520e63
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00520e6a
    JL 0x00520e9d                       ; 00520e70
        ;   XREF to: 00520e9d (CONDITIONAL_JUMP)  ; LAB_00520e9d
    XOR EAX,EAX                         ; 00520e72
        ;   Label: LAB_00520e72
    MOV ESP,EBP                         ; 00520e74
    POP EBP                             ; 00520e76
    POP EDI                             ; 00520e77
    POP ESI                             ; 00520e78
    POP EBX                             ; 00520e79
    RET                                 ; 00520e7a
    MOV EBX,dword ptr [ESP + 0x13c]     ; 00520e7b
        ;   Label: LAB_00520e7b
    MOV ECX,dword ptr [ESP + 0x138]     ; 00520e82
    INC EBX                             ; 00520e89
    ADD ECX,0x4                         ; 00520e8a
    MOV dword ptr [ESP + 0x13c],EBX     ; 00520e8d
    MOV dword ptr [ESP + 0x138],ECX     ; 00520e94
    JMP 0x00520e5e                      ; 00520e9b
        ;   XREF to: 00520e5e (UNCONDITIONAL_JUMP)  ; LAB_00520e5e
    MOV ECX,dword ptr [ESP + 0x138]     ; 00520e9d
        ;   Label: LAB_00520e9d
    MOV EBX,dword ptr [0x01d70ab4]      ; 00520ea4 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 00520eaa
    PUSH EBX                            ; 00520eac
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 00520ead
    PUSH EAX                            ; 00520eb3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00520eb4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00520eb9
    MOV EBX,EAX                         ; 00520ebc
    MOV dword ptr [ESP + 0x140],EAX     ; 00520ebe
    TEST EAX,EAX                        ; 00520ec5
    JZ 0x00520e7b                       ; 00520ec7
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520ec9
    FLD float ptr [EAX + 0x24]          ; 00520ecc
    FSUB float ptr [EBX + 0x24]         ; 00520ecf
    FABS                                ; 00520ed2
    FCOMP double ptr [0x005cd527]       ; 00520ed4 | DAT_005cd527
    FNSTSW AX                           ; 00520eda
    SAHF                                ; 00520edc
    JA 0x00520e7b                       ; 00520edd
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    MOV ESI,dword ptr [ESP + 0x134]     ; 00520edf
    PUSH ESI                            ; 00520ee6
    PUSH EBX                            ; 00520ee7
    LEA ESI,[ESP + 0x70]                ; 00520ee8
    LEA EDI,[ESP + 0xf4]                ; 00520eec
    CALL core_actor.cpp_FUN_00408bf0    ; 00520ef3
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x70]                ; 00520ef8
    ADD ESP,0x8                         ; 00520efc
    MOVSD ES:EDI,ESI                    ; 00520eff
    MOVSD ES:EDI,ESI                    ; 00520f00
    MOVSD ES:EDI,ESI                    ; 00520f01
    FLD float ptr [ESP + 0xf4]          ; 00520f02
    FST double ptr [ESP]                ; 00520f09
    FABS                                ; 00520f0c
    FCOMP double ptr [0x005cd52f]       ; 00520f0e | DAT_005cd52f
    FNSTSW AX                           ; 00520f14
    SAHF                                ; 00520f16
    JA 0x00520e7b                       ; 00520f17
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    FLDZ                                ; 00520f1d
    FCOMP double ptr [ESP]              ; 00520f1f
    FNSTSW AX                           ; 00520f22
    SAHF                                ; 00520f24
    JA 0x00520e7b                       ; 00520f25
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    PUSH EBX                            ; 00520f2b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00520f2c
    LEA ESI,[ESP + 0xc]                 ; 00520f32
    LEA EDI,[ESP + 0x24]                ; 00520f36
    CALL dword ptr [EAX + 0x1c]         ; 00520f3a
    MOV ECX,0x6                         ; 00520f3d
    LEA ESI,[ESP + 0xc]                 ; 00520f42
    ADD ESP,0x4                         ; 00520f46
    MOVSD.REP ES:EDI,ESI                ; 00520f49
    FLD float ptr [ESP + 0xec]          ; 00520f4b
    FCOMP float ptr [ESP + 0x2c]        ; 00520f52
    FNSTSW AX                           ; 00520f56
    SAHF                                ; 00520f58
    JBE 0x00520f80                      ; 00520f59
        ;   XREF to: 00520f80 (CONDITIONAL_JUMP)  ; LAB_00520f80
    FLD float ptr [ESP + 0x2c]          ; 00520f5b
    FLD1                                ; 00520f5f
    FADDP                               ; 00520f61
    FLD float ptr [ESP + 0xec]          ; 00520f63
    FCOMPP                              ; 00520f6a
    FNSTSW AX                           ; 00520f6c
    SAHF                                ; 00520f6e
    JA 0x00520e7b                       ; 00520f6f
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00520f75
    MOV dword ptr [ESP + 0xec],EAX      ; 00520f79
    FLD float ptr [ESP + 0xec]          ; 00520f80
        ;   Label: LAB_00520f80
    FCOMP float ptr [ESP + 0x20]        ; 00520f87
    FNSTSW AX                           ; 00520f8b
    SAHF                                ; 00520f8d
    JNC 0x00520fb7                      ; 00520f8e
        ;   XREF to: 00520fb7 (CONDITIONAL_JUMP)  ; LAB_00520fb7
    FLD float ptr [ESP + 0x20]          ; 00520f90
    FADD double ptr [0x005cd537]        ; 00520f94 | DAT_005cd537
    FLD float ptr [ESP + 0xec]          ; 00520f9a
    FCOMPP                              ; 00520fa1
    FNSTSW AX                           ; 00520fa3
    SAHF                                ; 00520fa5
    JC 0x00520e7b                       ; 00520fa6
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00520fac
    MOV dword ptr [ESP + 0xec],EAX      ; 00520fb0
    FLD float ptr [ESP + 0x20]          ; 00520fb7
        ;   Label: LAB_00520fb7
    FLD float ptr [ESP + 0x24]          ; 00520fbb
    FLD float ptr [ESP + 0x28]          ; 00520fbf
    LEA EDI,[ESP + 0xc8]                ; 00520fc3
    LEA ESI,[ESP + 0x5c]                ; 00520fca
    FXCH ST2                            ; 00520fce
    FADD float ptr [ESP + 0x2c]         ; 00520fd0
    FXCH                                ; 00520fd4
    FADD float ptr [ESP + 0x30]         ; 00520fd6
    FXCH ST2                            ; 00520fda
    FADD float ptr [ESP + 0x34]         ; 00520fdc
    FXCH                                ; 00520fe0
    FSTP float ptr [ESP + 0x5c]         ; 00520fe2
    FXCH                                ; 00520fe6
    FSTP float ptr [ESP + 0x60]         ; 00520fe8
    FSTP float ptr [ESP + 0x64]         ; 00520fec
    MOVSD ES:EDI,ESI                    ; 00520ff0
    MOVSD ES:EDI,ESI                    ; 00520ff1
    MOVSD ES:EDI,ESI                    ; 00520ff2
    FLD float ptr [0x005cd51f]          ; 00520ff3 | DAT_005cd51f
    FLD float ptr [ESP + 0xc8]          ; 00520ff9
    FMUL ST1                            ; 00521000
    FLD float ptr [ESP + 0xcc]          ; 00521002
    FMUL ST2                            ; 00521009
    FLD float ptr [ESP + 0xd0]          ; 0052100b
    FMULP ST3                           ; 00521012
    LEA EDI,[ESP + 0x110]               ; 00521014
    LEA ESI,[ESP + 0x104]               ; 0052101b
    FXCH                                ; 00521022
    FSTP float ptr [ESP + 0x104]        ; 00521024
    FSTP float ptr [ESP + 0x108]        ; 0052102b
    FSTP float ptr [ESP + 0x10c]        ; 00521032
    MOVSD ES:EDI,ESI                    ; 00521039
    MOVSD ES:EDI,ESI                    ; 0052103a
    MOVSD ES:EDI,ESI                    ; 0052103b
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052103c
    MOV dword ptr [ESP + 0xf4],EAX      ; 00521043
    LEA EAX,[ESP + 0xec]                ; 0052104a
    PUSH EAX                            ; 00521051
    MOV EDI,dword ptr [ESP + 0x144]     ; 00521052
    PUSH EDI                            ; 00521059
    LEA ESI,[ESP + 0xe8]                ; 0052105a
    LEA EBX,[ESP + 0xf4]                ; 00521061
    CALL core_actor.cpp_FUN_00408b80    ; 00521068
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA EDI,[ESP + 0x58]                ; 0052106d
    LEA ESI,[ESP + 0xe8]                ; 00521071
    ADD ESP,0x8                         ; 00521078
    LEA EAX,[ESP + 0x50]                ; 0052107b
    MOVSD ES:EDI,ESI                    ; 0052107f
    MOVSD ES:EDI,ESI                    ; 00521080
    MOVSD ES:EDI,ESI                    ; 00521081
    CMP EBX,EAX                         ; 00521082
    JZ 0x005210a7                       ; 00521084
        ;   XREF to: 005210a7 (CONDITIONAL_JUMP)  ; LAB_005210a7
    MOV EAX,dword ptr [ESP + 0x50]      ; 00521086
    MOV dword ptr [ESP + 0xec],EAX      ; 0052108a
    MOV EAX,dword ptr [ESP + 0x54]      ; 00521091
    MOV dword ptr [ESP + 0xf0],EAX      ; 00521095
    MOV EAX,dword ptr [ESP + 0x58]      ; 0052109c
    MOV dword ptr [ESP + 0xf4],EAX      ; 005210a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005210a7
        ;   Label: LAB_005210a7
    MOV EAX,dword ptr [EAX + 0x44]      ; 005210aa
    MOV dword ptr [ESP + 0x12c],EAX     ; 005210ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 005210b4
    MOV EAX,dword ptr [EAX + 0x50]      ; 005210b7
    MOV dword ptr [ESP + 0x124],EAX     ; 005210ba
    MOV EAX,dword ptr [EBP + 0x14]      ; 005210c1
    MOV EAX,dword ptr [EAX + 0x5c]      ; 005210c4
    MOV dword ptr [ESP + 0x11c],EAX     ; 005210c7
    MOV EAX,dword ptr [ESP + 0x140]     ; 005210ce
    MOV EAX,dword ptr [EAX + 0x44]      ; 005210d5
    MOV dword ptr [ESP + 0x130],EAX     ; 005210d8
    MOV EAX,dword ptr [ESP + 0x140]     ; 005210df
    MOV EAX,dword ptr [EAX + 0x50]      ; 005210e6
    MOV dword ptr [ESP + 0x120],EAX     ; 005210e9
    FLD float ptr [ESP + 0x124]         ; 005210f0
    FMUL float ptr [ESP + 0x120]        ; 005210f7
    MOV EAX,dword ptr [ESP + 0x140]     ; 005210fe
    FLD float ptr [ESP + 0x12c]         ; 00521105
    FMUL float ptr [ESP + 0x130]        ; 0052110c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00521113
    FADDP                               ; 00521116
    MOV dword ptr [ESP + 0x128],EAX     ; 00521118
    FLD float ptr [ESP + 0x11c]         ; 0052111f
    FMUL float ptr [ESP + 0x128]        ; 00521126
    FADDP                               ; 0052112d
    FABS                                ; 0052112f
    FLD double ptr [0x005cd53f]         ; 00521131 | DAT_005cd53f
    FCOS                                ; 00521137
    FCOMPP                              ; 00521139
    FNSTSW AX                           ; 0052113b
    SAHF                                ; 0052113d
    JA 0x00520e7b                       ; 0052113e
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    MOV EAX,dword ptr [ESP + 0x140]     ; 00521144
    ADD EAX,0x20                        ; 0052114b
    PUSH EAX                            ; 0052114e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052114f
    PUSH EAX                            ; 00521152
    LEA ESI,[ESP + 0xac]                ; 00521153
    LEA EDI,[ESP + 0xb8]                ; 0052115a
    CALL core_actor.cpp_FUN_00408bf0    ; 00521161
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0xac]                ; 00521166
    ADD ESP,0x8                         ; 0052116d
    MOVSD ES:EDI,ESI                    ; 00521170
    MOVSD ES:EDI,ESI                    ; 00521171
    MOVSD ES:EDI,ESI                    ; 00521172
    FLD float ptr [ESP + 0xb8]          ; 00521173
    FLDZ                                ; 0052117a
    FCOMPP                              ; 0052117c
    FNSTSW AX                           ; 0052117e
    SAHF                                ; 00521180
    JNC 0x00520e7b                      ; 00521181
        ;   XREF to: 00520e7b (CONDITIONAL_JUMP)  ; LAB_00520e7b
    PUSH 0x1                            ; 00521187
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521189
    PUSH 0x37                           ; 0052118c
    ADD EAX,0x158                       ; 0052118e
    MOV EBX,dword ptr [ESP + 0x148]     ; 00521193
    PUSH EAX                            ; 0052119a
    MOV dword ptr [EAX + 0x20a4c],EBX   ; 0052119b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005211a1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005211a6
    MOV ESI,0x40000000                  ; 005211a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005211ae
    XOR EDX,EDX                         ; 005211b1
    MOV EBX,EAX                         ; 005211b3
    MOV dword ptr [EAX + 0xcde0],0x0    ; 005211b5
    LEA EAX,[ESP + 0xd4]                ; 005211bf
    MOV EDI,dword ptr [ESP + 0x140]     ; 005211c6
    PUSH EAX                            ; 005211cd
    MOV dword ptr [ESP + 0xd8],EDX      ; 005211ce
    MOV dword ptr [ESP + 0xe0],ESI      ; 005211d5
    PUSH EDI                            ; 005211dc
    LEA ESI,[ESP + 0x7c]                ; 005211dd
    MOV dword ptr [ESP + 0xe0],EDX      ; 005211e1
    CALL core_actor.cpp_FUN_00408b80    ; 005211e8
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA EDI,[ESP + 0x100]               ; 005211ed
    LEA ESI,[ESP + 0x7c]                ; 005211f4
    ADD ESP,0x8                         ; 005211f8
    ADD EBX,0x20ccc                     ; 005211fb
    MOVSD ES:EDI,ESI                    ; 00521201
    MOVSD ES:EDI,ESI                    ; 00521202
    MOVSD ES:EDI,ESI                    ; 00521203
    LEA EAX,[ESP + 0x8c]                ; 00521204
    FLD float ptr [ESP + 0xf8]          ; 0052120b
    FLD float ptr [ESP + 0xfc]          ; 00521212
    FLD float ptr [ESP + 0x100]         ; 00521219
    LEA EDI,[ESP + 0x8c]                ; 00521220
    LEA ESI,[ESP + 0x80]                ; 00521227
    FXCH ST2                            ; 0052122e
    FSUB float ptr [EBX + 0xfffdf354]   ; 00521230
    FXCH                                ; 00521236
    FSUB float ptr [EBX + 0xfffdf358]   ; 00521238
    FXCH ST2                            ; 0052123e
    FSUB float ptr [EBX + 0xfffdf35c]   ; 00521240
    FXCH                                ; 00521246
    FSTP float ptr [ESP + 0x80]         ; 00521248
    FXCH                                ; 0052124f
    FSTP float ptr [ESP + 0x84]         ; 00521251
    FSTP float ptr [ESP + 0x88]         ; 00521258
    MOVSD ES:EDI,ESI                    ; 0052125f
    MOVSD ES:EDI,ESI                    ; 00521260
    MOVSD ES:EDI,ESI                    ; 00521261
    CMP EBX,EAX                         ; 00521262
    JZ 0x00521283                       ; 00521264
        ;   XREF to: 00521283 (CONDITIONAL_JUMP)  ; LAB_00521283
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00521266
    MOV dword ptr [EBX],EAX             ; 0052126d
    MOV EAX,dword ptr [ESP + 0x90]      ; 0052126f
    MOV dword ptr [EBX + 0x4],EAX       ; 00521276
    MOV EAX,dword ptr [ESP + 0x94]      ; 00521279
    MOV dword ptr [EBX + 0x8],EAX       ; 00521280
    FLD float ptr [ESP + 0xec]          ; 00521283
        ;   Label: LAB_00521283
    FLD float ptr [ESP + 0xf0]          ; 0052128a
    FLD float ptr [ESP + 0xf4]          ; 00521291
    MOV EAX,dword ptr [EBP + 0x14]      ; 00521298
    LEA EDI,[ESP + 0x38]                ; 0052129b
    LEA ESI,[ESP + 0x44]                ; 0052129f
    FXCH ST2                            ; 005212a3
    FSUB float ptr [EAX + 0x20]         ; 005212a5
    FXCH                                ; 005212a8
    FSUB float ptr [EAX + 0x24]         ; 005212aa
    FXCH ST2                            ; 005212ad
    FSUB float ptr [EAX + 0x28]         ; 005212af
    FXCH                                ; 005212b2
    FSTP float ptr [ESP + 0x44]         ; 005212b4
    FXCH                                ; 005212b8
    FSTP float ptr [ESP + 0x48]         ; 005212ba
    FSTP float ptr [ESP + 0x4c]         ; 005212be
    LEA EAX,[ESP + 0x38]                ; 005212c2
    MOVSD ES:EDI,ESI                    ; 005212c6
    MOVSD ES:EDI,ESI                    ; 005212c7
    MOVSD ES:EDI,ESI                    ; 005212c8
    PUSH EAX                            ; 005212c9
    LEA ESI,[ESP + 0xc0]                ; 005212ca
    LEA EDI,[ESP + 0x9c]                ; 005212d1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 005212d8
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0xc0]                ; 005212dd
    ADD ESP,0x4                         ; 005212e4
    MOVSD ES:EDI,ESI                    ; 005212e7
    MOVSD ES:EDI,ESI                    ; 005212e8
    MOVSD ES:EDI,ESI                    ; 005212e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005212ea
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005212ed
    MOV dword ptr [EBX + 0x20cd8],EAX   ; 005212f4
    MOV EAX,dword ptr [ESP + 0x140]     ; 005212fa
    PUSH EAX                            ; 00521301
    PUSH 0x5cd503                       ; 00521302
    MOV EDX,dword ptr [0x005f1690]      ; 00521307 | g_CConsolePtr
    PUSH EDX                            ; 0052130d
    MOV dword ptr [EBX + 0x20cdc],0x3f800000 ; 0052130e
    CALL engine_console.cpp_FUN_00441ff0 ; 00521318
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EAX,0x1                         ; 0052131d
    ADD ESP,0xc                         ; 00521322
    MOV ESP,EBP                         ; 00521325
    POP EBP                             ; 00521327
    POP EDI                             ; 00521328
    POP ESI                             ; 00521329
    POP EBX                             ; 0052132a
    RET                                 ; 0052132b

