; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e0240(CGhoul *this_ptr,CVector3f *out_attract_position)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_attract_position
;
; Referenced Globals:
;   undefined4 DAT_005e3d91
;   undefined4 DAT_01cd0d9c
;   undefined4 DAT_01cd0da0
;   undefined4 DAT_01cd0da4
;   undefined4 DAT_01cd0da8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_motion.cpp_FUN_00524a40
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0240
        ;   Label: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004e0240
    PUSH EBP                            ; 004e0241
    SUB ESP,0x10c                       ; 004e0242
    MOV EBP,dword ptr [ESP + 0x11c]     ; 004e0248
    MOV EBX,dword ptr [ESP + 0x118]     ; 004e024f
    PUSH 0xb                            ; 004e0256
    ADD EBX,0x158                       ; 004e0258
    PUSH EBX                            ; 004e025e
    CALL core_motion.cpp_FUN_00524a40   ; 004e025f
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x110],EAX     ; 004e0264
    FLD float ptr [ESP + 0x110]         ; 004e026b
    FLDZ                                ; 004e0272
    ADD ESP,0x8                         ; 004e0274
    FCOMPP                              ; 004e0277
    FNSTSW AX                           ; 004e0279
    SAHF                                ; 004e027b
    JC 0x004e0289                       ; 004e027c
        ;   XREF to: 004e0289 (CONDITIONAL_JUMP)  ; LAB_004e0289
    XOR EAX,EAX                         ; 004e027e
    ADD ESP,0x10c                       ; 004e0280
    POP EBP                             ; 004e0286
    POP EBX                             ; 004e0287
    RET                                 ; 004e0288
    PUSH EDI                            ; 004e0289
        ;   Label: LAB_004e0289
    PUSH ESI                            ; 004e028a
    MOV EDX,dword ptr [0x01cd0d9c]      ; 004e028b | DAT_01cd0d9c
    PUSH EDX                            ; 004e0291
    PUSH EBX                            ; 004e0292
    LEA ESI,[ESP + 0x7c]                ; 004e0293
    LEA EDI,[ESP + 0x58]                ; 004e0297
    CALL core_skeleton.cpp_FUN_00569130 ; 004e029b
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 004e02a0
    MOV ECX,dword ptr [0x01cd0da4]      ; 004e02a3 | DAT_01cd0da4
    LEA ESI,[ESP + 0x74]                ; 004e02a9
    PUSH ECX                            ; 004e02ad
    MOVSD ES:EDI,ESI                    ; 004e02ae
    MOVSD ES:EDI,ESI                    ; 004e02af
    MOVSD ES:EDI,ESI                    ; 004e02b0
    PUSH EBX                            ; 004e02b1
    LEA ESI,[ESP + 0x88]                ; 004e02b2
    LEA EDI,[ESP + 0x4c]                ; 004e02b9
    CALL core_skeleton.cpp_FUN_00569130 ; 004e02bd
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x88]                ; 004e02c2
    ADD ESP,0x8                         ; 004e02c9
    MOVSD ES:EDI,ESI                    ; 004e02cc
    MOVSD ES:EDI,ESI                    ; 004e02cd
    MOVSD ES:EDI,ESI                    ; 004e02ce
    FLD float ptr [ESP + 0x44]          ; 004e02cf
    FLD float ptr [ESP + 0x48]          ; 004e02d3
    FLD float ptr [ESP + 0x4c]          ; 004e02d7
    LEA EDI,[ESP + 0x5c]                ; 004e02db
    LEA ESI,[ESP + 0x2c]                ; 004e02df
    FXCH ST2                            ; 004e02e3
    FADD float ptr [ESP + 0x50]         ; 004e02e5
    FXCH                                ; 004e02e9
    FADD float ptr [ESP + 0x54]         ; 004e02eb
    FXCH ST2                            ; 004e02ef
    FADD float ptr [ESP + 0x58]         ; 004e02f1
    FXCH                                ; 004e02f5
    FSTP float ptr [ESP + 0x2c]         ; 004e02f7
    FXCH                                ; 004e02fb
    FSTP float ptr [ESP + 0x30]         ; 004e02fd
    FSTP float ptr [ESP + 0x34]         ; 004e0301
    MOVSD ES:EDI,ESI                    ; 004e0305
    MOVSD ES:EDI,ESI                    ; 004e0306
    MOVSD ES:EDI,ESI                    ; 004e0307
    FLD float ptr [ESP + 0x5c]          ; 004e0308
    FMUL float ptr [0x005e3d91]         ; 004e030c | DAT_005e3d91
    FLD float ptr [ESP + 0x60]          ; 004e0312
    FMUL float ptr [0x005e3d91]         ; 004e0316 | DAT_005e3d91
    FLD float ptr [ESP + 0x64]          ; 004e031c
    FMUL float ptr [0x005e3d91]         ; 004e0320 | DAT_005e3d91
    LEA EDI,[ESP + 0x14]                ; 004e0326
    LEA ESI,[ESP + 0xb0]                ; 004e032a
    FXCH ST2                            ; 004e0331
    FSTP float ptr [ESP + 0xb0]         ; 004e0333
    FSTP float ptr [ESP + 0xb4]         ; 004e033a
    FSTP float ptr [ESP + 0xb8]         ; 004e0341
    MOVSD ES:EDI,ESI                    ; 004e0348
    MOVSD ES:EDI,ESI                    ; 004e0349
    MOVSD ES:EDI,ESI                    ; 004e034a
    MOV ESI,dword ptr [0x01cd0da0]      ; 004e034b | DAT_01cd0da0
    PUSH ESI                            ; 004e0351
    PUSH EBX                            ; 004e0352
    LEA ESI,[ESP + 0x94]                ; 004e0353
    LEA EDI,[ESP + 0x70]                ; 004e035a
    CALL core_skeleton.cpp_FUN_00569130 ; 004e035e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x94]                ; 004e0363
    ADD ESP,0x8                         ; 004e036a
    MOVSD ES:EDI,ESI                    ; 004e036d
    MOVSD ES:EDI,ESI                    ; 004e036e
    MOVSD ES:EDI,ESI                    ; 004e036f
    MOV EDI,dword ptr [0x01cd0da8]      ; 004e0370 | DAT_01cd0da8
    PUSH EDI                            ; 004e0376
    PUSH EBX                            ; 004e0377
    LEA ESI,[ESP + 0xa0]                ; 004e0378
    LEA EDI,[ESP + 0x10]                ; 004e037f
    CALL core_skeleton.cpp_FUN_00569130 ; 004e0383
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0xa0]                ; 004e0388
    ADD ESP,0x8                         ; 004e038f
    MOVSD ES:EDI,ESI                    ; 004e0392
    MOVSD ES:EDI,ESI                    ; 004e0393
    MOVSD ES:EDI,ESI                    ; 004e0394
    FLD float ptr [ESP + 0x8]           ; 004e0395
    FLD float ptr [ESP + 0xc]           ; 004e0399
    FLD float ptr [ESP + 0x10]          ; 004e039d
    LEA EDI,[ESP + 0xd4]                ; 004e03a1
    LEA ESI,[ESP + 0xc8]                ; 004e03a8
    FXCH ST2                            ; 004e03af
    FADD float ptr [ESP + 0x68]         ; 004e03b1
    FXCH                                ; 004e03b5
    FADD float ptr [ESP + 0x6c]         ; 004e03b7
    FXCH ST2                            ; 004e03bb
    FADD float ptr [ESP + 0x70]         ; 004e03bd
    FXCH                                ; 004e03c1
    FSTP float ptr [ESP + 0xc8]         ; 004e03c3
    FXCH                                ; 004e03ca
    FSTP float ptr [ESP + 0xcc]         ; 004e03cc
    FSTP float ptr [ESP + 0xd0]         ; 004e03d3
    MOVSD ES:EDI,ESI                    ; 004e03da
    MOVSD ES:EDI,ESI                    ; 004e03db
    MOVSD ES:EDI,ESI                    ; 004e03dc
    FLD float ptr [ESP + 0xd4]          ; 004e03dd
    FMUL float ptr [0x005e3d91]         ; 004e03e4 | DAT_005e3d91
    FLD float ptr [ESP + 0xd8]          ; 004e03ea
    FMUL float ptr [0x005e3d91]         ; 004e03f1 | DAT_005e3d91
    FLD float ptr [ESP + 0xdc]          ; 004e03f7
    FMUL float ptr [0x005e3d91]         ; 004e03fe | DAT_005e3d91
    FLD float ptr [ESP + 0x14]          ; 004e0404
    FLD float ptr [ESP + 0x18]          ; 004e0408
    LEA EDI,[ESP + 0xf8]                ; 004e040c
    LEA ESI,[ESP + 0x104]               ; 004e0413
    FXCH ST4                            ; 004e041a
    FSTP float ptr [ESP + 0x104]        ; 004e041c
    FXCH ST2                            ; 004e0423
    FSTP float ptr [ESP + 0x108]        ; 004e0425
    FSTP float ptr [ESP + 0x10c]        ; 004e042c
    MOVSD ES:EDI,ESI                    ; 004e0433
    MOVSD ES:EDI,ESI                    ; 004e0434
    MOVSD ES:EDI,ESI                    ; 004e0435
    FLD float ptr [ESP + 0x1c]          ; 004e0436
    LEA EDI,[ESP + 0xe0]                ; 004e043a
    LEA ESI,[ESP + 0xec]                ; 004e0441
    FXCH                                ; 004e0448
    FADD float ptr [ESP + 0xf8]         ; 004e044a
    FXCH ST2                            ; 004e0451
    FADD float ptr [ESP + 0xfc]         ; 004e0453
    FXCH                                ; 004e045a
    FADD float ptr [ESP + 0x100]        ; 004e045c
    FXCH ST2                            ; 004e0463
    FSTP float ptr [ESP + 0xec]         ; 004e0465
    FSTP float ptr [ESP + 0xf0]         ; 004e046c
    FSTP float ptr [ESP + 0xf4]         ; 004e0473
    MOVSD ES:EDI,ESI                    ; 004e047a
    MOVSD ES:EDI,ESI                    ; 004e047b
    MOVSD ES:EDI,ESI                    ; 004e047c
    FLD float ptr [ESP + 0xe0]          ; 004e047d
    FMUL float ptr [0x005e3d91]         ; 004e0484 | DAT_005e3d91
    FLD float ptr [ESP + 0xe4]          ; 004e048a
    FMUL float ptr [0x005e3d91]         ; 004e0491 | DAT_005e3d91
    LEA EAX,[ESP + 0x20]                ; 004e0497
    FLD float ptr [ESP + 0xe8]          ; 004e049b
    FMUL float ptr [0x005e3d91]         ; 004e04a2 | DAT_005e3d91
    PUSH EAX                            ; 004e04a8
    MOV EAX,dword ptr [ESP + 0x124]     ; 004e04a9
    LEA EDI,[ESP + 0x24]                ; 004e04b0
    LEA ESI,[ESP + 0xc0]                ; 004e04b4
    FXCH ST2                            ; 004e04bb
    FSTP float ptr [ESP + 0xc0]         ; 004e04bd
    FSTP float ptr [ESP + 0xc4]         ; 004e04c4
    FSTP float ptr [ESP + 0xc8]         ; 004e04cb
    MOVSD ES:EDI,ESI                    ; 004e04d2
    MOVSD ES:EDI,ESI                    ; 004e04d3
    MOVSD ES:EDI,ESI                    ; 004e04d4
    PUSH EAX                            ; 004e04d5
    LEA ESI,[ESP + 0xac]                ; 004e04d6
    LEA EDI,[ESP + 0x40]                ; 004e04dd
    CALL core_actor.cpp_FUN_00408b40    ; 004e04e1
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xac]                ; 004e04e6
    ADD ESP,0x8                         ; 004e04ed
    LEA EAX,[ESP + 0x38]                ; 004e04f0
    MOVSD ES:EDI,ESI                    ; 004e04f4
    MOVSD ES:EDI,ESI                    ; 004e04f5
    MOVSD ES:EDI,ESI                    ; 004e04f6
    CMP EBP,EAX                         ; 004e04f7
    JZ 0x004e0510                       ; 004e04f9
        ;   XREF to: 004e0510 (CONDITIONAL_JUMP)  ; LAB_004e0510
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e04fb
    MOV dword ptr [EBP],EAX             ; 004e04ff
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e0502
    MOV dword ptr [EBP + 0x4],EAX       ; 004e0506
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e0509
    MOV dword ptr [EBP + 0x8],EAX       ; 004e050d
    MOV EAX,0x1                         ; 004e0510
        ;   Label: LAB_004e0510
    POP ESI                             ; 004e0515
    POP EDI                             ; 004e0516
    ADD ESP,0x10c                       ; 004e0517
    POP EBP                             ; 004e051d
    POP EBX                             ; 004e051e
    RET                                 ; 004e051f

