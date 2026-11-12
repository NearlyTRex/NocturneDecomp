; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f3bc
;
; Referenced Globals:
;   undefined4 DAT_005ce5be
;   undefined4 DAT_005ce5c6
;   undefined4 DAT_00a014e0
;   undefined4 DAT_00a014e4
;   undefined4 DAT_00a014e8
;   undefined4 DAT_00b6679c
;   undefined4 DAT_00b667a0
;   undefined4 DAT_013083cc
;   undefined4 DAT_013087d4
;   undefined4 DAT_013087d8
;   undefined4 DAT_013087dc
;   undefined4 DAT_013087e0
;   undefined4 DAT_013087ec
;   undefined4 DAT_013087f8
;   undefined4 DAT_01308800
;   ... and 1 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440000
        ;   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000
    PUSH ESI                            ; 00440001
    PUSH EDI                            ; 00440002
    PUSH EBP                            ; 00440003
    MOV EBP,ESP                         ; 00440004
    SUB ESP,0x50                        ; 00440006
    AND ESP,0xfffffff8                  ; 00440009
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044000c
    MOV ESI,EAX                         ; 0044000f
    MOV ECX,0xa                         ; 00440011
    MOV EDI,0x13087d8                   ; 00440016
    LEA ESI,[ESI + 0x10]                ; 0044001b
    XOR EBX,EBX                         ; 0044001e
    MOV [0x013087d4],EAX                ; 00440020 | DAT_013087d4
    MOVSD.REP ES:EDI,ESI                ; 00440025 | DAT_013087d8 | DAT_013087dc
    ADD EBX,0x4                         ; 00440027
        ;   Label: LAB_00440027
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0044002a
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    AND EAX,0xff                        ; 0044002f
    MOV dword ptr [EBX + 0x13083d0],EAX ; 00440034
    CMP EBX,0x400                       ; 0044003a
    JNZ 0x00440027                      ; 00440040
        ;   XREF to: 00440027 (CONDITIONAL_JUMP)  ; LAB_00440027
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440042
    MOV ECX,dword ptr [EAX + 0x154]     ; 00440045
    XOR EDX,EDX                         ; 0044004b
    TEST ECX,ECX                        ; 0044004d
    JLE 0x00440080                      ; 0044004f
        ;   XREF to: 00440080 (CONDITIONAL_JUMP)  ; LAB_00440080
    XOR EAX,EAX                         ; 00440051
    MOV ECX,dword ptr [EBP + 0x14]      ; 00440053
        ;   Label: LAB_00440053
    MOV ECX,dword ptr [ECX + 0x150]     ; 00440056
    XOR EBX,EBX                         ; 0044005c
    MOV dword ptr [EAX + 0x14c3550],ECX ; 0044005e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00440064
    MOV dword ptr [EAX + 0x14c3910],EBX ; 00440067
    INC EDX                             ; 0044006d
    MOV ESI,dword ptr [ECX + 0x154]     ; 0044006e
    ADD EAX,0x4                         ; 00440074
    CMP EDX,ESI                         ; 00440077
    JL 0x00440053                       ; 00440079
        ;   XREF to: 00440053 (CONDITIONAL_JUMP)  ; LAB_00440053
    LEA EAX,[EAX]                       ; 0044007b
    MOV ECX,ECX                         ; 0044007e
    MOV EDI,dword ptr [EBP + 0x18]      ; 00440080
        ;   Label: LAB_00440080
    PUSH EDI                            ; 00440083
    CALL core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 ; 00440084
        ;   XREF to: 0044ac60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60(CDemonLight * this_ptr)
    FLD float ptr [EDI + 0x140]         ; 00440089
    FMUL double ptr [0x005ce5be]        ; 0044008f | DAT_005ce5be
    ADD ESP,0x4                         ; 00440095
    FLD ST0                             ; 00440098
    FLDLG2                              ; 0044009a
    FXCH                                ; 0044009c
    FYL2X                               ; 0044009e
    FMUL double ptr [0x005ce5c6]        ; 004400a0 | DAT_005ce5c6
    FXCH                                ; 004400a6
    CALL crt_math.c_round_FUN_005b7ff0  ; 004400a8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    XOR EAX,EAX                         ; 004400ad
    FXCH                                ; 004400af
    CALL crt_math.c_round_FUN_005b7ff0  ; 004400b1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV dword ptr [ESP + 0x30],EAX      ; 004400b6
    FISTP dword ptr [0x00b667a0]        ; 004400ba | DAT_00b667a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004400c0
    MOV EDX,dword ptr [0x00b667a0]      ; 004400c3 | DAT_00b667a0
    FISTP dword ptr [0x00b6679c]        ; 004400c9 | DAT_00b6679c
    DEC EDX                             ; 004400cf
    MOV ECX,dword ptr [EAX + 0x154]     ; 004400d0
    MOV dword ptr [0x00b667a0],EDX      ; 004400d6 | DAT_00b667a0
    TEST ECX,ECX                        ; 004400dc
    JLE 0x0044017b                      ; 004400de
        ;   XREF to: 0044017b (CONDITIONAL_JUMP)  ; LAB_0044017b
    MOV EDI,0xa005d4                    ; 004400e4
    MOV EAX,0x14c3cd0                   ; 004400e9
    MOV EDX,0xaf5218                    ; 004400ee
    XOR ESI,ESI                         ; 004400f3
    MOV ECX,0x91e6d4                    ; 004400f5
    MOV dword ptr [ESP + 0x34],ESI      ; 004400fa
    MOV dword ptr [ESP + 0x28],EDI      ; 004400fe
    MOV dword ptr [ESP + 0x24],EAX      ; 00440102
    MOV dword ptr [ESP + 0x20],EDX      ; 00440106
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044010a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044010e
        ;   Label: LAB_0044010e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00440111
    MOV EBX,dword ptr [EDX + 0x150]     ; 00440115
    CMP EBX,dword ptr [EAX + 0x14c3550] ; 0044011b
    JNZ 0x0044018c                      ; 00440121
        ;   XREF to: 0044018c (CONDITIONAL_JUMP)  ; LAB_0044018c
    MOV EBX,dword ptr [ESP + 0x34]      ; 00440123
        ;   Label: LAB_00440123
    MOV ESI,dword ptr [ESP + 0x28]      ; 00440127
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044012b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044012f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00440133
    MOV ECX,dword ptr [ESP + 0x30]      ; 00440137
    ADD EBX,0x4                         ; 0044013b
    ADD ESI,0xf00                       ; 0044013e
    ADD EDI,0x500                       ; 00440144
    ADD EAX,0x140                       ; 0044014a
    ADD EDX,0xf00                       ; 0044014f
    INC ECX                             ; 00440155
    MOV dword ptr [ESP + 0x34],EBX      ; 00440156
    MOV dword ptr [ESP + 0x28],ESI      ; 0044015a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0044015e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00440162
    MOV dword ptr [ESP + 0x24],EDI      ; 00440165
    MOV dword ptr [ESP + 0x20],EAX      ; 00440169
    MOV EBX,dword ptr [EDX + 0x154]     ; 0044016d
    MOV dword ptr [ESP + 0x30],ECX      ; 00440173
    CMP ECX,EBX                         ; 00440177
    JL 0x0044010e                       ; 00440179
        ;   XREF to: 0044010e (CONDITIONAL_JUMP)  ; LAB_0044010e
    MOV dword ptr [0x013083cc],0x1      ; 0044017b | DAT_013083cc
        ;   Label: LAB_0044017b
    MOV ESP,EBP                         ; 00440185
    POP EBP                             ; 00440187
    POP EDI                             ; 00440188
    POP ESI                             ; 00440189
    POP EBX                             ; 0044018a
    RET                                 ; 0044018b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044018c
        ;   Label: LAB_0044018c
    MOV EAX,dword ptr [EAX + 0x14c3550] ; 00440190
    MOV dword ptr [ESP + 0x48],EAX      ; 00440196
    MOV ESI,dword ptr [ESP + 0x48]      ; 0044019a
    IMUL EBX,ESI,0xc                    ; 0044019e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004401a1
    MOV EAX,dword ptr [EAX + 0x14c3910] ; 004401a5
    MOV dword ptr [ESP + 0x38],EAX      ; 004401ab
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004401af
    ADD EAX,EBX                         ; 004401b3
    MOV dword ptr [ESP + 0x44],EAX      ; 004401b5
    MOV EAX,dword ptr [ESP + 0x20]      ; 004401b9
    ADD EAX,ESI                         ; 004401bd
    MOV EDX,dword ptr [ESP + 0x24]      ; 004401bf
    MOV dword ptr [ESP + 0x4c],EAX      ; 004401c3
    LEA EAX,[ESI*0x4 + 0x0]             ; 004401c7
    MOV CL,byte ptr [0x01308800]        ; 004401ce | DAT_01308800
    ADD EDX,EAX                         ; 004401d4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004401d6
    MOV dword ptr [ESP + 0x3c],EDX      ; 004401da
    MOV EDX,ESI                         ; 004401de
    SHL EAX,CL                          ; 004401e0
    SHL EDX,CL                          ; 004401e2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2b64c] ; 004401e4 | DAT_01c2b64c
    SHL EDX,0x2                         ; 004401eb
    ADD EAX,EDX                         ; 004401ee
    MOV dword ptr [ESP + 0x40],EAX      ; 004401f0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004401f4
    MOV EDX,dword ptr [ESP + 0x38]      ; 004401f8
    ADD EBX,EAX                         ; 004401fc
    CMP ESI,EDX                         ; 004401fe
    JGE 0x00440123                      ; 00440200
        ;   XREF to: 00440123 (CONDITIONAL_JUMP)  ; LAB_00440123
        ;   Label: LAB_00440200
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00440206
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044020a
    MOV ESI,dword ptr [EDX]             ; 0044020e
    CMP ESI,dword ptr [EAX]             ; 00440210
    JBE 0x00440318                      ; 00440212
        ;   XREF to: 00440318 (CONDITIONAL_JUMP)  ; LAB_00440318
    FLD float ptr [EBX + 0x4]           ; 00440218 | DAT_00a014e4
    FMUL float ptr [0x013087ec]         ; 0044021b | DAT_013087ec
    FLD float ptr [EBX]                 ; 00440221 | DAT_00a014e0
    FMUL float ptr [0x013087e0]         ; 00440223 | DAT_013087e0
    FADDP                               ; 00440229
    FLD float ptr [EBX + 0x8]           ; 0044022b | DAT_00a014e8
    FMUL float ptr [0x013087f8]         ; 0044022e | DAT_013087f8
    FADDP                               ; 00440234
    FLDZ                                ; 00440236
    FCOMPP                              ; 00440238
    FNSTSW AX                           ; 0044023a
    SAHF                                ; 0044023c
    JA 0x00440318                       ; 0044023d
        ;   XREF to: 00440318 (CONDITIONAL_JUMP)  ; LAB_00440318
    MOV EDI,dword ptr [ESP + 0x44]      ; 00440243
    PUSH EDI                            ; 00440247
    MOV EAX,[0x013087d4]                ; 00440248 | DAT_013087d4
    PUSH EAX                            ; 0044024d
    LEA ESI,[ESP + 0x8]                 ; 0044024e
    LEA EDI,[ESP + 0x14]                ; 00440252
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0 ; 00440256
        ;   XREF to: 0043cbe0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x8]                 ; 0044025b
    ADD ESP,0x8                         ; 0044025f
    MOVSD ES:EDI,ESI                    ; 00440262
    MOVSD ES:EDI,ESI                    ; 00440263
    MOVSD ES:EDI,ESI                    ; 00440264
    CMP dword ptr [ESP + 0x14],0x0      ; 00440265
    JLE 0x00440318                      ; 0044026a
        ;   XREF to: 00440318 (CONDITIONAL_JUMP)  ; LAB_00440318
    MOV EDX,dword ptr [ESP + 0x10]      ; 00440270
    MOV EAX,[0x013087d4]                ; 00440274 | DAT_013087d4
    SAR EDX,0x10                        ; 00440279
    IMUL EDX,dword ptr [EAX + 0x1cc0]   ; 0044027c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00440283
    SAR ECX,0x10                        ; 00440287
    ADD EDX,ECX                         ; 0044028a
    LEA ESI,[EDX + EDX*0x1]             ; 0044028c
    MOV EDX,dword ptr [EAX + 0x2f94]    ; 0044028f
    MOV DX,word ptr [EDX + ESI*0x1]     ; 00440295
    MOV ESI,dword ptr [0x00b6679c]      ; 00440299 | DAT_00b6679c
    AND EDX,0xffff                      ; 0044029f
    CMP EDX,ESI                         ; 004402a5
    JGE 0x00440318                      ; 004402a7
        ;   XREF to: 00440318 (CONDITIONAL_JUMP)  ; LAB_00440318
    MOV EDI,dword ptr [ESP + 0x14]      ; 004402a9
    LEA ECX,[EDX + 0x80]                ; 004402ad
    CMP ECX,EDI                         ; 004402b3
    JLE 0x00440318                      ; 004402b5
        ;   XREF to: 00440318 (CONDITIONAL_JUMP)  ; LAB_00440318
    MOV ESI,dword ptr [ESP + 0xc]       ; 004402b7
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 004402bb
    SAR ESI,CL                          ; 004402c1
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 004402c3
    MOV EDI,dword ptr [ESP + 0x10]      ; 004402c9
    AND ESI,ECX                         ; 004402cd
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 004402cf
    SAR EDI,CL                          ; 004402d5
    MOV ECX,EDI                         ; 004402d7
    MOV EDI,dword ptr [EAX + 0x1c68]    ; 004402d9
    AND EDI,ECX                         ; 004402df
    MOV CL,byte ptr [EAX + 0x1c60]      ; 004402e1
    SHL EDI,CL                          ; 004402e7
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 004402e9
    LEA ECX,[EDI + ESI*0x1]             ; 004402ef
    ADD EAX,ECX                         ; 004402f2
    XOR ECX,ECX                         ; 004402f4
    MOV CL,byte ptr [EAX]               ; 004402f6
    MOV EAX,[0x00b6679c]                ; 004402f8 | DAT_00b6679c
    SUB EAX,EDX                         ; 004402fd
    MOV EDX,EAX                         ; 004402ff
    IMUL EDX,ECX                        ; 00440301
    MOV CL,byte ptr [0x00b667a0]        ; 00440304 | DAT_00b667a0
    SAR EDX,CL                          ; 0044030a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0044030c
    XOR EAX,EAX                         ; 00440310
    MOV AL,byte ptr [ECX]               ; 00440312
    ADD EAX,EDX                         ; 00440314
    MOV byte ptr [ECX],AL               ; 00440316
    MOV EAX,0x1                         ; 00440318
        ;   Label: LAB_00440318
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044031d
    MOV EDI,dword ptr [ESP + 0x44]      ; 00440321
    MOV EDX,dword ptr [ESP + 0x48]      ; 00440325
    MOV CL,byte ptr [0x01308800]        ; 00440329 | DAT_01308800
    ADD EBX,0xc                         ; 0044032f
    ADD ESI,0x4                         ; 00440332
    ADD EDI,0xc                         ; 00440335
    INC EDX                             ; 00440338
    SHL EAX,CL                          ; 00440339
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044033b
    SHL EAX,0x2                         ; 0044033f
    MOV dword ptr [ESP + 0x3c],ESI      ; 00440342
    MOV dword ptr [ESP + 0x44],EDI      ; 00440346
    MOV dword ptr [ESP + 0x48],EDX      ; 0044034a
    ADD ECX,EAX                         ; 0044034e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00440350
    MOV dword ptr [ESP + 0x40],ECX      ; 00440354
    INC EAX                             ; 00440358
    MOV ECX,dword ptr [ESP + 0x38]      ; 00440359
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044035d
    CMP EDX,ECX                         ; 00440361
    JMP 0x00440200                      ; 00440363
        ;   XREF to: 00440200 (UNCONDITIONAL_JUMP)  ; LAB_00440200

