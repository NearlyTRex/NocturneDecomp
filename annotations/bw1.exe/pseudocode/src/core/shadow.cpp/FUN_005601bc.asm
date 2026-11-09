; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_005601bc(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f17c5
;   CConsole* g_CConsolePtr = 007db5f0
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_FUN_0042d750
;   core_xform.cpp_FUN_005b5080
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 005601bc
        ;   Label: core_shadow.cpp_FUN_005601bc
    PUSH EBX                            ; 005601c0
    PUSH ESI                            ; 005601c1
    PUSH EDI                            ; 005601c2
    PUSH EBP                            ; 005601c3
    MOV EBP,ESP                         ; 005601c4
    SUB ESP,0x8c                        ; 005601c6
    SUB EBP,0x7e                        ; 005601cc
    MOV EBX,dword ptr [EBP + 0x92]      ; 005601cf
    CMP dword ptr [EBX + 0xc2b8],0x0    ; 005601d5
    JZ 0x005601e7                       ; 005601dc
        ;   XREF to: 005601e7 (CONDITIONAL_JUMP)  ; LAB_005601e7
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005601de
    JNZ 0x005601ef                      ; 005601e5
        ;   XREF to: 005601ef (CONDITIONAL_JUMP)  ; LAB_005601ef
    LEA ESP,[EBP + 0x7e]                ; 005601e7
        ;   Label: LAB_005601e7
    POP EBP                             ; 005601ea
    POP EDI                             ; 005601eb
    POP ESI                             ; 005601ec
    POP EBX                             ; 005601ed
    RET                                 ; 005601ee
    MOV EDX,dword ptr [EBX + 0xc278]    ; 005601ef
        ;   Label: LAB_005601ef
    LEA EAX,[EDX*0x4 + 0x0]             ; 005601f5
    MOV EDI,0xbe99999a                  ; 005601fc
    SUB EAX,EDX                         ; 00560201
    XOR ESI,ESI                         ; 00560203
    SHL EAX,0x4                         ; 00560205
    LEA EDX,[EBX + 0xfd8]               ; 00560208
    MOV dword ptr [EBP + 0x16],ESI      ; 0056020e
    ADD EAX,EDX                         ; 00560211
    MOV dword ptr [EBP + 0x1a],EDI      ; 00560213
    PUSH EAX                            ; 00560216
    LEA EAX,[EBP + 0x16]                ; 00560217
    MOV dword ptr [EBP + 0x1e],ESI      ; 0056021a
    PUSH EAX                            ; 0056021d
    LEA ESI,[EBP + 0xa]                 ; 0056021e
    LEA EDI,[EBP + 0x2e]                ; 00560221
    CALL core_xform.cpp_FUN_005b5080    ; 00560224
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0xa]                 ; 00560229
    MOVSD ES:EDI,ESI                    ; 0056022c
    MOVSD ES:EDI,ESI                    ; 0056022d
    MOVSD ES:EDI,ESI                    ; 0056022e
    MOV EAX,dword ptr [EBX + 0xc2b8]    ; 0056022f
    ADD ESP,0x8                         ; 00560235
    ADD EAX,0x20                        ; 00560238
    PUSH EAX                            ; 0056023b
    PUSH EBX                            ; 0056023c
    LEA ESI,[EBP + -0x2]                ; 0056023d
    LEA EDI,[EBP + -0xe]                ; 00560240
    CALL core_actor.cpp_FUN_00408bb0    ; 00560243
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + -0x2]                ; 00560248
    MOVSD ES:EDI,ESI                    ; 0056024b
    MOVSD ES:EDI,ESI                    ; 0056024c
    MOVSD ES:EDI,ESI                    ; 0056024d
    ADD ESP,0x8                         ; 0056024e
    FLD float ptr [EBP + -0xa]          ; 00560251
    FCOMP double ptr [0x005f17c5]       ; 00560254 | DAT_005f17c5
    FNSTSW AX                           ; 0056025a
    SAHF                                ; 0056025c
    JC 0x00560381                       ; 0056025d
        ;   XREF to: 00560381 (CONDITIONAL_JUMP)  ; LAB_00560381
    FLD float ptr [EBP + -0xe]          ; 00560263
    FLD float ptr [EBP + -0xa]          ; 00560266
    FLD float ptr [EBP + -0x6]          ; 00560269
    LEA EDI,[EBP + 0x46]                ; 0056026c
    LEA ESI,[EBP + 0x22]                ; 0056026f
    FXCH ST2                            ; 00560272
    FSUB float ptr [EBP + 0x2e]         ; 00560274
    FXCH                                ; 00560277
    FSUB float ptr [EBP + 0x32]         ; 00560279
    FXCH ST2                            ; 0056027c
    FSUB float ptr [EBP + 0x36]         ; 0056027e
    FXCH                                ; 00560281
    FSTP float ptr [EBP + 0x22]         ; 00560283
    FXCH                                ; 00560286
    FSTP float ptr [EBP + 0x26]         ; 00560288
    FSTP float ptr [EBP + 0x2a]         ; 0056028b
    MOVSD ES:EDI,ESI                    ; 0056028e
    MOVSD ES:EDI,ESI                    ; 0056028f
    MOVSD ES:EDI,ESI                    ; 00560290
    FLD float ptr [EBP + 0x4a]          ; 00560291
    FMUL ST0                            ; 00560294
    FLD float ptr [EBP + 0x46]          ; 00560296
    FMUL ST0                            ; 00560299
    FXCH                                ; 0056029b
    FSTP float ptr [EBP + 0x6e]         ; 0056029d
    FADD float ptr [EBP + 0x6e]         ; 005602a0
    FLD float ptr [EBP + 0x4e]          ; 005602a3
    FMUL ST0                            ; 005602a6
    FADDP                               ; 005602a8
    FSQRT                               ; 005602aa
    SUB ESP,0x8                         ; 005602ac
    FST float ptr [EBP + 0x66]          ; 005602af
    FSTP double ptr [ESP]               ; 005602b2
    PUSH 0x5f17ad                       ; 005602b5
    MOV EDX,dword ptr [0x00611100]      ; 005602ba | g_CConsolePtr
    PUSH EDX                            ; 005602c0
    CALL engine_console.cpp_FUN_00445430 ; 005602c1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    FLD float ptr [EBP + 0x66]          ; 005602c6
    ADD ESP,0x10                        ; 005602c9
    FCOMP float ptr [EBX + 0xc2bc]      ; 005602cc
    FNSTSW AX                           ; 005602d2
    SAHF                                ; 005602d4
    JBE 0x005601e7                      ; 005602d5
        ;   XREF to: 005601e7 (CONDITIONAL_JUMP)  ; LAB_005601e7
    FLD float ptr [EBX + 0xc2bc]        ; 005602db
    FMUL ST0                            ; 005602e1
    FSUB float ptr [EBP + 0x6e]         ; 005602e3
    FLDZ                                ; 005602e6
    FXCH                                ; 005602e8
    FSTP double ptr [EBP + 0x5e]        ; 005602ea
    FCOMP double ptr [EBP + 0x5e]       ; 005602ed
    FNSTSW AX                           ; 005602f0
    SAHF                                ; 005602f2
    JA 0x005601e7                       ; 005602f3
        ;   XREF to: 005601e7 (CONDITIONAL_JUMP)  ; LAB_005601e7
    FLD double ptr [EBP + 0x5e]         ; 005602f9
    FSQRT                               ; 005602fc
    LEA EDI,[EBP + 0x3a]                ; 005602fe
    LEA ESI,[EBP + 0x22]                ; 00560301
    MOVSD ES:EDI,ESI                    ; 00560304
    MOVSD ES:EDI,ESI                    ; 00560305
    MOVSD ES:EDI,ESI                    ; 00560306
    FLD float ptr [EBP + 0x3a]          ; 00560307
    FMUL ST0                            ; 0056030a
    FLD float ptr [EBP + 0x42]          ; 0056030c
    FMUL ST0                            ; 0056030f
    FADDP                               ; 00560311
    FSQRT                               ; 00560313
    XOR ECX,ECX                         ; 00560315
    MOV dword ptr [EBP + 0x3e],ECX      ; 00560317
    FXCH                                ; 0056031a
    FSTP float ptr [EBP + 0x7a]         ; 0056031c
    FST float ptr [EBP + 0x72]          ; 0056031f
    FLDZ                                ; 00560322
    FCOMPP                              ; 00560324
    FNSTSW AX                           ; 00560326
    SAHF                                ; 00560328
    JNC 0x005601e7                      ; 00560329
        ;   XREF to: 005601e7 (CONDITIONAL_JUMP)  ; LAB_005601e7
    FLD float ptr [EBP + 0x72]          ; 0056032f
    FSUB float ptr [EBP + 0x7a]         ; 00560332
    FST float ptr [EBP + 0x6a]          ; 00560335
    FLDZ                                ; 00560338
    FCOMPP                              ; 0056033a
    FNSTSW AX                           ; 0056033c
    SAHF                                ; 0056033e
    JNC 0x005601e7                      ; 0056033f
        ;   XREF to: 005601e7 (CONDITIONAL_JUMP)  ; LAB_005601e7
    FLD float ptr [EBP + 0x6a]          ; 00560345
    FDIV float ptr [EBP + 0x72]         ; 00560348
    FLD float ptr [EBP + 0x3a]          ; 0056034b
    FXCH                                ; 0056034e
    FSTP float ptr [EBP + 0x76]         ; 00560350
    FMUL float ptr [EBP + 0x76]         ; 00560353
    FLDZ                                ; 00560356
    FMUL float ptr [EBP + 0x76]         ; 00560358
    LEA EAX,[EBP + 0x3a]                ; 0056035b
    FLD float ptr [EBP + 0x42]          ; 0056035e
    PUSH EAX                            ; 00560361
    FMUL float ptr [EBP + 0x76]         ; 00560362
    PUSH EBX                            ; 00560365
    FXCH ST2                            ; 00560366
    FSTP float ptr [EBP + 0x3a]         ; 00560368
    FSTP float ptr [EBP + 0x3e]         ; 0056036b
    FSTP float ptr [EBP + 0x42]         ; 0056036e
    CALL core_charactr.cpp_FUN_0042d750 ; 00560371
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00560376
    LEA ESP,[EBP + 0x7e]                ; 00560379
    POP EBP                             ; 0056037c
    POP EDI                             ; 0056037d
    POP ESI                             ; 0056037e
    POP EBX                             ; 0056037f
    RET                                 ; 00560380
    LEA EDI,[EBP + 0x52]                ; 00560381
        ;   Label: LAB_00560381
    LEA ESI,[EBP + -0x2]                ; 00560384
    LEA EAX,[EBP + 0x52]                ; 00560387
    MOVSD ES:EDI,ESI                    ; 0056038a
    MOVSD ES:EDI,ESI                    ; 0056038b
    MOVSD ES:EDI,ESI                    ; 0056038c
    PUSH EAX                            ; 0056038d
    XOR ESI,ESI                         ; 0056038e
    PUSH EBX                            ; 00560390
    MOV dword ptr [EBP + 0x56],ESI      ; 00560391
    CALL core_charactr.cpp_FUN_0042d750 ; 00560394
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00560399
    LEA ESP,[EBP + 0x7e]                ; 0056039c
    POP EBP                             ; 0056039f
    POP EDI                             ; 005603a0
    POP ESI                             ; 005603a1
    POP EBX                             ; 005603a2
    RET                                 ; 005603a3

