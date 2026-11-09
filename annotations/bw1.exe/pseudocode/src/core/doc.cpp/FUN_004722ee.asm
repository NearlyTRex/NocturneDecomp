; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_doc_cpp_FUN_004722ee(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005da2bc
;
; Called Functions:
;   core_actor.cpp_FUN_0040cd60
;   core_vecdir.cpp_FUN_005a7520
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004722ee
        ;   Label: core_doc.cpp_FUN_004722ee
    PUSH EBX                            ; 004722f0
    PUSH EDI                            ; 004722f1
    PUSH EBP                            ; 004722f2
    MOV EBP,ESP                         ; 004722f3
    SUB ESP,0x58                        ; 004722f5
    AND ESP,0xfffffff8                  ; 004722f8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004722fb
    MOV dword ptr [ESP + 0x40],ESI      ; 004722fe
    PUSH EBX                            ; 00472302
    LEA ESI,[ESP + 0x2c]                ; 00472303
    LEA EDI,[ESP + 0x38]                ; 00472307
    CALL core_vecdir.cpp_FUN_005a7520   ; 0047230b
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x2c]                ; 00472310
    ADD ESP,0x4                         ; 00472314
    MOVSD ES:EDI,ESI                    ; 00472317
    MOVSD ES:EDI,ESI                    ; 00472318
    MOVSD ES:EDI,ESI                    ; 00472319
    FLD float ptr [EBX + 0x4]           ; 0047231a
    FMUL ST0                            ; 0047231d
    FLD float ptr [EBX]                 ; 0047231f
    FMUL ST0                            ; 00472321
    FADDP                               ; 00472323
    FLD float ptr [EBX + 0x8]           ; 00472325
    FMUL ST0                            ; 00472328
    FADDP                               ; 0047232a
    FSQRT                               ; 0047232c
    FST float ptr [ESP + 0x24]          ; 0047232e
    MOV EBX,dword ptr [ESP + 0x24]      ; 00472332
    FST double ptr [ESP + 0x18]         ; 00472336
    MOV dword ptr [ESP + 0x20],EBX      ; 0047233a
    FCOMP double ptr [0x005da2bc]       ; 0047233e | DAT_005da2bc
    FNSTSW AX                           ; 00472344
    SAHF                                ; 00472346
    JBE 0x004723ee                      ; 00472347
        ;   XREF to: 004723ee (CONDITIONAL_JUMP)  ; LAB_004723ee
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047234d
    FLD float ptr [EBX]                 ; 00472350
    FCHS                                ; 00472352
    FSTP float ptr [ESP + 0x4c]         ; 00472354
    JNC 0x00472403                      ; 00472358
        ;   XREF to: 00472403 (CONDITIONAL_JUMP)  ; LAB_00472403
    FLD float ptr [ESP + 0x20]          ; 0047235e
        ;   Label: LAB_0047235e
    MOV EBX,dword ptr [EBP + 0x14]      ; 00472362
    FSTP double ptr [ESP]               ; 00472365
    MOV EBX,dword ptr [EBX + 0x4]       ; 00472368
    FLD double ptr [ESP]                ; 0047236b
    MOV dword ptr [ESP + 0x48],EBX      ; 0047236e
    FCOMP double ptr [0x005da2bc]       ; 00472372 | DAT_005da2bc
    FNSTSW AX                           ; 00472378
    SAHF                                ; 0047237a
    JC 0x004723ee                       ; 0047237b
        ;   XREF to: 004723ee (CONDITIONAL_JUMP)  ; LAB_004723ee
    FLD float ptr [ESP + 0x20]          ; 0047237d
    FMUL ST0                            ; 00472381
    FLD float ptr [ESP + 0x48]          ; 00472383
    FMUL ST0                            ; 00472387
    FSUBP                               ; 00472389
    FSQRT                               ; 0047238b
    FDIV double ptr [ESP]               ; 0047238d
    FLD1                                ; 00472390
    FXCH                                ; 00472392
    FSTP double ptr [ESP + 0x8]         ; 00472394
    FCOMP double ptr [ESP + 0x8]        ; 00472398
    FNSTSW AX                           ; 0047239c
    SAHF                                ; 0047239e
    JBE 0x004723ee                      ; 0047239f
        ;   XREF to: 004723ee (CONDITIONAL_JUMP)  ; LAB_004723ee
    FLDZ                                ; 004723a1
    FCOMP double ptr [ESP + 0x8]        ; 004723a3
    FNSTSW AX                           ; 004723a7
    SAHF                                ; 004723a9
    JA 0x004723ee                       ; 004723aa
        ;   XREF to: 004723ee (CONDITIONAL_JUMP)  ; LAB_004723ee
    FLD double ptr [ESP + 0x8]          ; 004723ac
    CALL crt_math.c_acos_FUN_005c1d04   ; 004723b0
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 004723b5
    FXCH                                ; 004723b7
    FSTP float ptr [ESP + 0x50]         ; 004723b9
    FCOMP float ptr [ESP + 0x48]        ; 004723bd
    FNSTSW AX                           ; 004723c1
    SAHF                                ; 004723c3
    JBE 0x00472488                      ; 004723c4
        ;   XREF to: 00472488 (CONDITIONAL_JUMP)  ; LAB_00472488
    FLD float ptr [ESP + 0x34]          ; 004723ca
    FSUB float ptr [ESP + 0x50]         ; 004723ce
    FSTP float ptr [ESP + 0x34]         ; 004723d2
        ;   Label: LAB_004723d2
    PUSH dword ptr [ESP + 0x34]         ; 004723d6
    CALL core_actor.cpp_FUN_0040cd60    ; 004723da
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x58],EAX      ; 004723df
    FLD float ptr [ESP + 0x58]          ; 004723e3
    ADD ESP,0x4                         ; 004723e7
    FSTP float ptr [ESP + 0x34]         ; 004723ea
    MOV EDI,dword ptr [ESP + 0x40]      ; 004723ee
        ;   Label: LAB_004723ee
    LEA ESI,[ESP + 0x34]                ; 004723f2
    MOVSD ES:EDI,ESI                    ; 004723f6
    MOVSD ES:EDI,ESI                    ; 004723f7
    MOVSD ES:EDI,ESI                    ; 004723f8
    MOV EAX,dword ptr [ESP + 0x40]      ; 004723f9
    MOV ESP,EBP                         ; 004723fd
    POP EBP                             ; 004723ff
    POP EDI                             ; 00472400
    POP EBX                             ; 00472401
    RET                                 ; 00472402
    FLD float ptr [ESP + 0x24]          ; 00472403
        ;   Label: LAB_00472403
    FMUL ST0                            ; 00472407
    FLD float ptr [ESP + 0x4c]          ; 00472409
    FMUL ST0                            ; 0047240d
    FSUBP                               ; 0047240f
    FSQRT                               ; 00472411
    FDIV double ptr [ESP + 0x18]        ; 00472413
    FLD1                                ; 00472417
    FXCH                                ; 00472419
    FSTP double ptr [ESP + 0x10]        ; 0047241b
    FCOMP double ptr [ESP + 0x10]       ; 0047241f
    FNSTSW AX                           ; 00472423
    SAHF                                ; 00472425
    JBE 0x0047235e                      ; 00472426
        ;   XREF to: 0047235e (CONDITIONAL_JUMP)  ; LAB_0047235e
    FLDZ                                ; 0047242c
    FCOMP double ptr [ESP + 0x10]       ; 0047242e
    FNSTSW AX                           ; 00472432
    SAHF                                ; 00472434
    JA 0x0047235e                       ; 00472435
        ;   XREF to: 0047235e (CONDITIONAL_JUMP)  ; LAB_0047235e
    FLD double ptr [ESP + 0x10]         ; 0047243b
    CALL crt_math.c_acos_FUN_005c1d04   ; 0047243f
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 00472444
    FXCH                                ; 00472446
    FSTP float ptr [ESP + 0x44]         ; 00472448
    FCOMP float ptr [ESP + 0x4c]        ; 0047244c
    FNSTSW AX                           ; 00472450
    SAHF                                ; 00472452
    JBE 0x0047247e                      ; 00472453
        ;   XREF to: 0047247e (CONDITIONAL_JUMP)  ; LAB_0047247e
    FLD float ptr [ESP + 0x38]          ; 00472455
    FSUB float ptr [ESP + 0x44]         ; 00472459
    FSTP float ptr [ESP + 0x38]         ; 0047245d
        ;   Label: LAB_0047245d
    PUSH dword ptr [ESP + 0x38]         ; 00472461
    CALL core_actor.cpp_FUN_0040cd60    ; 00472465
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x58],EAX      ; 0047246a
    FLD float ptr [ESP + 0x58]          ; 0047246e
    ADD ESP,0x4                         ; 00472472
    FSTP float ptr [ESP + 0x38]         ; 00472475
    JMP 0x0047235e                      ; 00472479
        ;   XREF to: 0047235e (UNCONDITIONAL_JUMP)  ; LAB_0047235e
    FLD float ptr [ESP + 0x38]          ; 0047247e
        ;   Label: LAB_0047247e
    FADD float ptr [ESP + 0x44]         ; 00472482
    JMP 0x0047245d                      ; 00472486
        ;   XREF to: 0047245d (UNCONDITIONAL_JUMP)  ; LAB_0047245d
    FLD float ptr [ESP + 0x34]          ; 00472488
        ;   Label: LAB_00472488
    FADD float ptr [ESP + 0x50]         ; 0047248c
    JMP 0x004723d2                      ; 00472490
        ;   XREF to: 004723d2 (UNCONDITIONAL_JUMP)  ; LAB_004723d2

