; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_FUN_0046ecf0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bc791
;   undefined4 DAT_005bc795
;   undefined4 DAT_005bc79d
;   undefined4 DAT_005bc7a5
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dtrace.cpp_FUN_00473bc0
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;   core_fire.cpp_FUN_004a28e0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ecf0
        ;   Label: core_drip.cpp_FUN_0046ecf0
    PUSH ESI                            ; 0046ecf1
    PUSH EDI                            ; 0046ecf2
    PUSH EBP                            ; 0046ecf3
    SUB ESP,0xc8                        ; 0046ecf4
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0046ecfa
    CMP dword ptr [EBX + 0x2ec],0x0     ; 0046ed01
    JZ 0x0046ed4e                       ; 0046ed08
        ;   XREF to: 0046ed4e (CONDITIONAL_JUMP)  ; LAB_0046ed4e
    TEST dword ptr [EBX + 0x2dc],0x7fffffff ; 0046ed0a
        ;   Label: LAB_0046ed0a
    JZ 0x0046edb6                       ; 0046ed14
        ;   XREF to: 0046edb6 (CONDITIONAL_JUMP)  ; LAB_0046edb6
    CMP dword ptr [EBX + 0x2d8],0x0     ; 0046ed1a
    JZ 0x0046ed43                       ; 0046ed21
        ;   XREF to: 0046ed43 (CONDITIONAL_JUMP)  ; LAB_0046ed43
    FLD float ptr [EBX + 0x2dc]         ; 0046ed23
    FSUB float ptr [ESP + 0xe0]         ; 0046ed29
    FST float ptr [EBX + 0x2dc]         ; 0046ed30
    FLDZ                                ; 0046ed36
    FCOMPP                              ; 0046ed38
    FNSTSW AX                           ; 0046ed3a
    SAHF                                ; 0046ed3c
    JA 0x0046f126                       ; 0046ed3d
        ;   XREF to: 0046f126 (CONDITIONAL_JUMP)  ; LAB_0046f126
    ADD ESP,0xc8                        ; 0046ed43
        ;   Label: LAB_0046ed43
    POP EBP                             ; 0046ed49
    POP EDI                             ; 0046ed4a
    POP ESI                             ; 0046ed4b
    POP EBX                             ; 0046ed4c
    RET                                 ; 0046ed4d
    LEA EDI,[ESP + 0x84]                ; 0046ed4e
        ;   Label: LAB_0046ed4e
    LEA ESI,[EBX + 0x2f8]               ; 0046ed55
    LEA EAX,[ESP + 0x84]                ; 0046ed5b
    MOVSD ES:EDI,ESI                    ; 0046ed62
    MOVSD ES:EDI,ESI                    ; 0046ed63
    MOVSD ES:EDI,ESI                    ; 0046ed64
    PUSH EAX                            ; 0046ed65
    FLD float ptr [ESP + 0x8c]          ; 0046ed66
    LEA ESI,[ESP + 0x70]                ; 0046ed6d
    LEA EAX,[EBX + 0x2f8]               ; 0046ed71
    LEA EDI,[ESP + 0x7c]                ; 0046ed77
    PUSH EAX                            ; 0046ed7b
    FADD float ptr [0x005bc791]         ; 0046ed7c | DAT_005bc791
    PUSH 0x203b37c                      ; 0046ed82
    FSTP float ptr [ESP + 0x94]         ; 0046ed87
    CALL core_dtrace.cpp_FUN_00473bc0   ; 0046ed8e
        ;   XREF to: 00473bc0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473bc0()
    LEA ESI,[ESP + 0x78]                ; 0046ed93
    ADD ESP,0xc                         ; 0046ed97
    MOVSD ES:EDI,ESI                    ; 0046ed9a
    MOVSD ES:EDI,ESI                    ; 0046ed9b
    MOVSD ES:EDI,ESI                    ; 0046ed9c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046ed9d
    MOV dword ptr [EBX + 0x2ec],0x1     ; 0046eda1
    MOV dword ptr [EBX + 0x2f0],EAX     ; 0046edab
    JMP 0x0046ed0a                      ; 0046edb1
        ;   XREF to: 0046ed0a (UNCONDITIONAL_JUMP)  ; LAB_0046ed0a
    FLD float ptr [ESP + 0xe0]          ; 0046edb6
        ;   Label: LAB_0046edb6
    FLD ST0                             ; 0046edbd
    FMUL double ptr [0x005bc795]        ; 0046edbf | DAT_005bc795
    FSUBR float ptr [EBX + 0x308]       ; 0046edc5
    FST float ptr [EBX + 0x308]         ; 0046edcb
    FMULP                               ; 0046edd1
    LEA ESI,[ESP + 0x3c]                ; 0046edd3
    LEA EDI,[ESP + 0x54]                ; 0046edd7
    PUSH EBX                            ; 0046eddb
    FADD float ptr [EBX + 0x24]         ; 0046eddc
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046eddf
    FSTP float ptr [EBX + 0x24]         ; 0046ede5
    CALL dword ptr [EAX + 0x1c]         ; 0046ede8
    MOV ECX,0x6                         ; 0046edeb
    LEA ESI,[ESP + 0x40]                ; 0046edf0
    ADD ESP,0x4                         ; 0046edf4
    MOVSD.REP ES:EDI,ESI                ; 0046edf7
    FLD float ptr [ESP + 0x64]          ; 0046edf9
    FSUB float ptr [ESP + 0x58]         ; 0046edfd
    FMUL double ptr [0x005bc79d]        ; 0046ee01 | DAT_005bc79d
    FSUBR float ptr [EBX + 0x2f0]       ; 0046ee07
    FLD float ptr [EBX + 0x24]          ; 0046ee0d
    FCOMPP                              ; 0046ee10
    FNSTSW AX                           ; 0046ee12
    SAHF                                ; 0046ee14
    JC 0x0046ee80                       ; 0046ee15
        ;   XREF to: 0046ee80 (CONDITIONAL_JUMP)  ; LAB_0046ee80
    LEA EAX,[EBX + 0x20]                ; 0046ee17
        ;   Label: LAB_0046ee17
    XOR ESI,ESI                         ; 0046ee1a
    XOR EDI,EDI                         ; 0046ee1c
    MOV dword ptr [ESP + 0xb8],EAX      ; 0046ee1e
    MOV EAX,[0x00603b28]                ; 0046ee25 | g_CDemonSetPtr
        ;   Label: LAB_0046ee25
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 0046ee2a
    JGE 0x0046ed43                      ; 0046ee30
        ;   XREF to: 0046ed43 (CONDITIONAL_JUMP)  ; LAB_0046ed43
    MOV EBP,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 0046ee36
    MOV EAX,ESP                         ; 0046ee3d
    PUSH EAX                            ; 0046ee3f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0046ee40
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0046ee45
    MOV EDX,ESP                         ; 0046ee48
    MOV EAX,dword ptr [EBX + 0x310]     ; 0046ee4a
    PUSH EDX                            ; 0046ee50
    MOV dword ptr [ESP + 0x8],EAX       ; 0046ee51
    MOV dword ptr [ESP + 0x38],EBX      ; 0046ee55
    PUSH 0x3f800000                     ; 0046ee59
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0046ee5e
    MOV dword ptr [ESP + 0x40],EBX      ; 0046ee65
    PUSH EDX                            ; 0046ee69
    MOV EAX,dword ptr [EBP + 0x154]     ; 0046ee6a
    PUSH EBP                            ; 0046ee70
    ADD EDI,0x4                         ; 0046ee71
    INC ESI                             ; 0046ee74
    CALL dword ptr [EAX + 0x100]        ; 0046ee75
    ADD ESP,0x10                        ; 0046ee7b
    JMP 0x0046ee25                      ; 0046ee7e
        ;   XREF to: 0046ee25 (UNCONDITIONAL_JUMP)  ; LAB_0046ee25
    CMP dword ptr [EBX + 0x338],0x0     ; 0046ee80
        ;   Label: LAB_0046ee80
    JZ 0x0046eeba                       ; 0046ee87
        ;   XREF to: 0046eeba (CONDITIONAL_JUMP)  ; LAB_0046eeba
    PUSH 0x3f800000                     ; 0046ee89
    PUSH 0x0                            ; 0046ee8e
    PUSH 0x0                            ; 0046ee90
    MOV EBP,dword ptr [0x00603b28]      ; 0046ee92 | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 0046ee98
    PUSH EBP                            ; 0046ee9d
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 ; 0046ee9e
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 0046eea3
    LEA EAX,[EBX + 0x314]               ; 0046eea6
    PUSH EAX                            ; 0046eeac
    MOV EDX,dword ptr [EBX + 0x154]     ; 0046eead
    PUSH EBX                            ; 0046eeb3
    CALL dword ptr [EDX + 0x2c]         ; 0046eeb4
    ADD ESP,0x8                         ; 0046eeb7
    FLD float ptr [EBX + 0x2f0]         ; 0046eeba
        ;   Label: LAB_0046eeba
    MOV EAX,dword ptr [EBX + 0x334]     ; 0046eec0
    FSTP float ptr [EBX + 0x24]         ; 0046eec6
    TEST EAX,EAX                        ; 0046eec9
    JNZ 0x0046f080                      ; 0046eecb
        ;   XREF to: 0046f080 (CONDITIONAL_JUMP)  ; LAB_0046f080
    LEA ESI,[EBX + 0x20]                ; 0046eed1
    XOR EDI,EDI                         ; 0046eed4
    PUSH 0x3f000000                     ; 0046eed6
        ;   Label: LAB_0046eed6
    PUSH 0xbf000000                     ; 0046eedb
    CALL core_actor.cpp_FUN_0040ce40    ; 0046eee0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046eee5
    FLD float ptr [ESP + 0xcc]          ; 0046eeec
    ADD ESP,0x8                         ; 0046eef3
    PUSH 0x3f000000                     ; 0046eef6
    PUSH 0xbf000000                     ; 0046eefb
    FSTP float ptr [ESP + 0xa4]         ; 0046ef00
    CALL core_actor.cpp_FUN_0040ce40    ; 0046ef07
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046ef0c
    FLD float ptr [ESP + 0xcc]          ; 0046ef13
    ADD ESP,0x8                         ; 0046ef1a
    PUSH 0x3f000000                     ; 0046ef1d
    PUSH 0xbf000000                     ; 0046ef22
    FSTP float ptr [ESP + 0xa8]         ; 0046ef27
    CALL core_actor.cpp_FUN_0040ce40    ; 0046ef2e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046ef33
    MOV EDX,dword ptr [0x005fc5a0]      ; 0046ef3a | DAT_005fc5a0
    FLD float ptr [ESP + 0xcc]          ; 0046ef40
    ADD ESP,0x8                         ; 0046ef47
    LEA EAX,[ESP + 0x9c]                ; 0046ef4a
    FLD float ptr [ESP + 0x9c]          ; 0046ef51
    FLD float ptr [ESP + 0xa0]          ; 0046ef58
    FXCH ST2                            ; 0046ef5f
    FSTP float ptr [ESP + 0xa4]         ; 0046ef61
    PUSH 0x4000                         ; 0046ef68
    FLD float ptr [ESP + 0xa8]          ; 0046ef6d
    PUSH 0x0                            ; 0046ef74
    FXCH                                ; 0046ef76
    FADD float ptr [ESI]                ; 0046ef78
    PUSH 0x3f000000                     ; 0046ef7a
    FSTP float ptr [ESP + 0xa8]         ; 0046ef7f
    FXCH                                ; 0046ef86
    FADD float ptr [ESI + 0x4]          ; 0046ef88
    PUSH EAX                            ; 0046ef8b
    FSTP float ptr [ESP + 0xb0]         ; 0046ef8c
    FADD float ptr [ESI + 0x8]          ; 0046ef93
    PUSH EDX                            ; 0046ef96
    FSTP float ptr [ESP + 0xb8]         ; 0046ef97
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 0046ef9e
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0046efa3
    PUSH 0x3fc90fdb                     ; 0046efa6
    PUSH 0x3f490fdb                     ; 0046efab
    CALL core_actor.cpp_FUN_0040ce40    ; 0046efb0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046efb5
    FLD float ptr [ESP + 0xcc]          ; 0046efbc
    ADD ESP,0x8                         ; 0046efc3
    PUSH 0x40c90fdb                     ; 0046efc6
    PUSH 0x0                            ; 0046efcb
    FSTP float ptr [ESP + 0xc8]         ; 0046efcd
    CALL core_actor.cpp_FUN_0040ce40    ; 0046efd4
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046efd9
    FLD float ptr [ESP + 0xcc]          ; 0046efe0
    ADD ESP,0x8                         ; 0046efe7
    FLD ST0                             ; 0046efea
    FCOS                                ; 0046efec
    FLD float ptr [ESP + 0xc0]          ; 0046efee
    FLD ST0                             ; 0046eff5
    FCOS                                ; 0046eff7
    FXCH ST3                            ; 0046eff9
    FSIN                                ; 0046effb
    FXCH                                ; 0046effd
    FSIN                                ; 0046efff
    FXCH ST2                            ; 0046f001
    FMUL float ptr [0x005bc7a5]         ; 0046f003 | DAT_005bc7a5
    FXCH                                ; 0046f009
    FMUL float ptr [0x005bc7a5]         ; 0046f00b | DAT_005bc7a5
    FXCH ST2                            ; 0046f011
    FMUL float ptr [0x005bc7a5]         ; 0046f013 | DAT_005bc7a5
    FXCH ST3                            ; 0046f019
    FSTP float ptr [ESP + 0xbc]         ; 0046f01b
    FMUL float ptr [ESP + 0xbc]         ; 0046f022
    FXCH                                ; 0046f029
    FMUL float ptr [ESP + 0xbc]         ; 0046f02b
    PUSH 0x1c0b3dc                      ; 0046f032
    FXCH ST2                            ; 0046f037
    FSTP float ptr [ESP + 0x98]         ; 0046f039
    FSTP float ptr [ESP + 0x94]         ; 0046f040
    FSTP float ptr [ESP + 0x9c]         ; 0046f047
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0046f04e
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046f053
    PUSH EAX                            ; 0046f056
    LEA EAX,[ESP + 0x94]                ; 0046f057
    PUSH EAX                            ; 0046f05e
    PUSH ESI                            ; 0046f05f
    MOV ECX,dword ptr [0x005fc5a0]      ; 0046f060 | DAT_005fc5a0
    PUSH ECX                            ; 0046f066
    INC EDI                             ; 0046f067
    CALL core_fire.cpp_FUN_004a28e0     ; 0046f068
        ;   XREF to: 004a28e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004a28e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 0046f06d
    CMP EDI,0xa                         ; 0046f070
    JL 0x0046eed6                       ; 0046f073
        ;   XREF to: 0046eed6 (CONDITIONAL_JUMP)  ; LAB_0046eed6
    LEA EAX,[EAX]                       ; 0046f079
    NOP                                 ; 0046f07f
    PUSH 0x3f800000                     ; 0046f080
        ;   Label: LAB_0046f080
    FLD float ptr [EBX + 0x2fc]         ; 0046f085
    PUSH 0x0                            ; 0046f08b
    FSTP float ptr [EBX + 0x24]         ; 0046f08d
    CALL core_actor.cpp_FUN_0040ce40    ; 0046f090
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046f095
    FLD float ptr [ESP + 0xcc]          ; 0046f09c
    ADD ESP,0x8                         ; 0046f0a3
    FMUL float ptr [EBX + 0x2e8]        ; 0046f0a6
    PUSH 0x3f800000                     ; 0046f0ac
    FADD float ptr [EBX + 0x2f8]        ; 0046f0b1
    PUSH 0x0                            ; 0046f0b7
    FSTP float ptr [EBX + 0x20]         ; 0046f0b9
    CALL core_actor.cpp_FUN_0040ce40    ; 0046f0bc
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046f0c1
    FLD float ptr [ESP + 0xcc]          ; 0046f0c8
    FMUL float ptr [EBX + 0x2e8]        ; 0046f0cf
    FADD float ptr [EBX + 0x300]        ; 0046f0d5
    LEA EAX,[EBX + 0x304]               ; 0046f0db
    FSTP float ptr [EBX + 0x28]         ; 0046f0e1
    MOV dword ptr [EAX + 0x8],0x0       ; 0046f0e4
    ADD ESP,0x8                         ; 0046f0eb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046f0ee
    MOV dword ptr [EAX + 0x4],EDX       ; 0046f0f1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046f0f4
    MOV dword ptr [EAX],EDX             ; 0046f0f7
    PUSH dword ptr [EBX + 0x2e4]        ; 0046f0f9
    PUSH dword ptr [EBX + 0x2e0]        ; 0046f0ff
    CALL core_actor.cpp_FUN_0040ce40    ; 0046f105
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0046f10a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0046f111
    MOV dword ptr [EBX + 0x2dc],EAX     ; 0046f118
    ADD ESP,0x8                         ; 0046f11e
    JMP 0x0046ee17                      ; 0046f121
        ;   XREF to: 0046ee17 (UNCONDITIONAL_JUMP)  ; LAB_0046ee17
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0046f126
        ;   Label: LAB_0046f126
    ADD ESP,0xc8                        ; 0046f130
    POP EBP                             ; 0046f136
    POP EDI                             ; 0046f137
    POP ESI                             ; 0046f138
    POP EBX                             ; 0046f139
    RET                                 ; 0046f13a

