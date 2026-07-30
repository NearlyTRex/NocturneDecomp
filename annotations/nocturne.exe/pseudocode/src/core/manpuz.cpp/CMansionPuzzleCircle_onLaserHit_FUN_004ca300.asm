; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   double DOUBLE_00587f52 = 0.00392156862745098
;   double DOUBLE_00587f5a = 0.25
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca300
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300
    PUSH ESI                            ; 004ca301
    PUSH EDI                            ; 004ca302
    PUSH EBP                            ; 004ca303
    MOV EBP,ESP                         ; 004ca304
    SUB ESP,0x24                        ; 004ca306
    AND ESP,0xfffffff8                  ; 004ca309
    MOV EBX,dword ptr [EBP + 0x18]      ; 004ca30c
    PUSH EBX                            ; 004ca30f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ca310
    PUSH EDX                            ; 004ca313
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10 ; 004ca314
        ;   XREF to: 0040ab10 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10()
    ADD ESP,0x8                         ; 004ca319
    XOR ESI,ESI                         ; 004ca31c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ca31e
    LEA ECX,[EBX + 0x2c]                ; 004ca321
    ADD EDX,0x1354                      ; 004ca324
    FLD float ptr [EDX]                 ; 004ca32a
        ;   Label: LAB_004ca32a
    FSUB float ptr [ECX]                ; 004ca32c
    FMUL ST0                            ; 004ca32e
    FLD float ptr [EDX + 0x4]           ; 004ca330
    FSUB float ptr [ECX + 0x4]          ; 004ca333
    FMUL ST0                            ; 004ca336
    FLD float ptr [EDX + 0x8]           ; 004ca338
    FXCH                                ; 004ca33b
    FADDP ST2,ST0                       ; 004ca33d
    FSUB float ptr [ECX + 0x8]          ; 004ca33f
    FMUL ST0                            ; 004ca342
    FADDP                               ; 004ca344
    FLD1                                ; 004ca346
    FCOMPP                              ; 004ca348
    FNSTSW AX                           ; 004ca34a
    SAHF                                ; 004ca34c
    JA 0x004ca3c3                       ; 004ca34d
        ;   XREF to: 004ca3c3 (CONDITIONAL_JUMP)  ; LAB_004ca3c3
    INC ESI                             ; 004ca353
    ADD EDX,0x60                        ; 004ca354
    CMP ESI,0x2                         ; 004ca357
    JL 0x004ca32a                       ; 004ca35a
        ;   XREF to: 004ca32a (CONDITIONAL_JUMP)  ; LAB_004ca32a
    CMP dword ptr [EBX + 0x8],0x2       ; 004ca35c
    JNZ 0x004ca3bc                      ; 004ca360
        ;   XREF to: 004ca3bc (CONDITIONAL_JUMP)  ; LAB_004ca3bc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ca362
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ca365
    LEA EDI,[EBX + 0x2c]                ; 004ca368
    XOR ESI,ESI                         ; 004ca36b
    ADD EDX,0xa98                       ; 004ca36d
    ADD ECX,0xabc                       ; 004ca373
    MOV dword ptr [ESP + 0x18],EDX      ; 004ca379
    IMUL EDX,ESI,0xb8                   ; 004ca37d
        ;   Label: LAB_004ca37d
    FLD float ptr [ECX]                 ; 004ca383
    FSUB float ptr [EDI]                ; 004ca385
    FMUL ST0                            ; 004ca387
    FLD float ptr [ECX + 0x4]           ; 004ca389
    FSUB float ptr [EDI + 0x4]          ; 004ca38c
    FMUL ST0                            ; 004ca38f
    FLD float ptr [ECX + 0x8]           ; 004ca391
    FXCH                                ; 004ca394
    FADDP ST2,ST0                       ; 004ca396
    FSUB float ptr [EDI + 0x8]          ; 004ca398
    FMUL ST0                            ; 004ca39b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ca39d
    FADDP                               ; 004ca3a1
    ADD EDX,EAX                         ; 004ca3a3
    FCOMP double ptr [0x00587f5a]       ; 004ca3a5 | DOUBLE_00587f5a
    FNSTSW AX                           ; 004ca3ab
    SAHF                                ; 004ca3ad
    JC 0x004ca3cc                       ; 004ca3ae
        ;   XREF to: 004ca3cc (CONDITIONAL_JUMP)  ; LAB_004ca3cc
    INC ESI                             ; 004ca3b0
        ;   Label: LAB_004ca3b0
    ADD ECX,0xb8                        ; 004ca3b1
    CMP ESI,0xc                         ; 004ca3b7
    JL 0x004ca37d                       ; 004ca3ba
        ;   XREF to: 004ca37d (CONDITIONAL_JUMP)  ; LAB_004ca37d
    MOV ESP,EBP                         ; 004ca3bc
        ;   Label: LAB_004ca3bc
    POP EBP                             ; 004ca3be
    POP EDI                             ; 004ca3bf
    POP ESI                             ; 004ca3c0
    POP EBX                             ; 004ca3c1
    RET                                 ; 004ca3c2
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 004ca3c3
        ;   Label: LAB_004ca3c3
    JMP 0x004ca3bc                      ; 004ca3ca
        ;   XREF to: 004ca3bc (UNCONDITIONAL_JUMP)  ; LAB_004ca3bc
    FILD dword ptr [EBX + 0xc]          ; 004ca3cc
        ;   Label: LAB_004ca3cc
    FMUL float ptr [EBX]                ; 004ca3cf
    FMUL float ptr [EDX]                ; 004ca3d1
    FLD double ptr [0x00587f52]         ; 004ca3d3 | DOUBLE_00587f52
    FXCH                                ; 004ca3d9
    FMUL ST1                            ; 004ca3db
    FADD float ptr [EDX + 0x18]         ; 004ca3dd
    FSTP float ptr [EDX + 0x18]         ; 004ca3e0
    FILD dword ptr [EBX + 0x10]         ; 004ca3e3
    FMUL float ptr [EBX]                ; 004ca3e6
    FMUL float ptr [EDX + 0x4]          ; 004ca3e8
    FMUL ST1                            ; 004ca3eb
    FADD float ptr [EDX + 0x1c]         ; 004ca3ed
    FSTP float ptr [EDX + 0x1c]         ; 004ca3f0
    FILD dword ptr [EBX + 0x14]         ; 004ca3f3
    FMUL float ptr [EBX]                ; 004ca3f6
    FMUL float ptr [EDX + 0x8]          ; 004ca3f8
    FMULP                               ; 004ca3fb
    FADD float ptr [EDX + 0x20]         ; 004ca3fd
    FSTP float ptr [EDX + 0x20]         ; 004ca400
    JMP 0x004ca3b0                      ; 004ca403
        ;   XREF to: 004ca3b0 (UNCONDITIONAL_JUMP)  ; LAB_004ca3b0

