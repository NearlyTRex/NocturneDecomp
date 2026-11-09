; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_basicene_cpp_FUN_005a0270(int param_1,undefined4 *param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005efb55
;   TerminatedCString s_BurnComplete_005efb5a
;   undefined4 DAT_005efb67
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_0059d350.cpp_FUN_0059db70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0270
        ;   Label: unkafter_basicene.cpp_FUN_005a0270
    PUSH ESI                            ; 005a0271
    PUSH EDI                            ; 005a0272
    PUSH EBP                            ; 005a0273
    MOV EBP,ESP                         ; 005a0274
    SUB ESP,0x8                         ; 005a0276
    AND ESP,0xfffffff8                  ; 005a0279
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a027c
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a027f
    CMP dword ptr [EBX + 0x11348],0x0   ; 005a0282
    JNZ 0x005a0292                      ; 005a0289
        ;   XREF to: 005a0292 (CONDITIONAL_JUMP)  ; LAB_005a0292
    MOV ESP,EBP                         ; 005a028b
    POP EBP                             ; 005a028d
    POP EDI                             ; 005a028e
    POP ESI                             ; 005a028f
    POP EBX                             ; 005a0290
    RET                                 ; 005a0291
    PUSH 0x5efb55                       ; 005a0292 | DAT_005efb55
        ;   Label: LAB_005a0292
    LEA ESI,[EBX + 0x10af8]             ; 005a0297
    PUSH ESI                            ; 005a029d
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a029e
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a02a3
    TEST EAX,EAX                        ; 005a02a6
    JZ 0x005a0343                       ; 005a02a8
        ;   XREF to: 005a0343 (CONDITIONAL_JUMP)  ; LAB_005a0343
    PUSH 0x5efb67                       ; 005a02ae | DAT_005efb67
        ;   Label: LAB_005a02ae
    LEA EAX,[EBX + 0x10af8]             ; 005a02b3
    PUSH EAX                            ; 005a02b9
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a02ba
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a02bf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a02c2
    LEA EDX,[EBX + 0x11434]             ; 005a02c5
    MOV dword ptr [EBX + 0x11430],EAX   ; 005a02cb
    CMP EDX,EDI                         ; 005a02d1
    JZ 0x005a02e5                       ; 005a02d3
        ;   XREF to: 005a02e5 (CONDITIONAL_JUMP)  ; LAB_005a02e5
    MOV EAX,dword ptr [EDI]             ; 005a02d5
    MOV dword ptr [EDX],EAX             ; 005a02d7
    MOV EAX,dword ptr [EDI + 0x4]       ; 005a02d9
    MOV dword ptr [EDX + 0x4],EAX       ; 005a02dc
    MOV EAX,dword ptr [EDI + 0x8]       ; 005a02df
    MOV dword ptr [EDX + 0x8],EAX       ; 005a02e2
    LEA EDX,[EBX + 0x11434]             ; 005a02e5
        ;   Label: LAB_005a02e5
    MOV dword ptr [EBX + 0x11438],0x0   ; 005a02eb
    FLD float ptr [EDX + 0x4]           ; 005a02f5
    FMUL ST0                            ; 005a02f8
    FLD float ptr [EDX]                 ; 005a02fa
    FMUL ST0                            ; 005a02fc
    FADDP                               ; 005a02fe
    FLD float ptr [EDX + 0x8]           ; 005a0300
    FMUL ST0                            ; 005a0303
    FADDP                               ; 005a0305
    FSQRT                               ; 005a0307
    FLDZ                                ; 005a0309
    FXCH                                ; 005a030b
    FSTP float ptr [ESP + 0x4]          ; 005a030d
    FCOMP float ptr [ESP + 0x4]         ; 005a0311
    FNSTSW AX                           ; 005a0315
    SAHF                                ; 005a0317
    JNC 0x005a0360                      ; 005a0318
        ;   XREF to: 005a0360 (CONDITIONAL_JUMP)  ; LAB_005a0360
    FLD1                                ; 005a031a
    FLD float ptr [EDX]                 ; 005a031c
    FXCH                                ; 005a031e
    FDIV float ptr [ESP + 0x4]          ; 005a0320
    FXCH                                ; 005a0324
    FMUL ST1                            ; 005a0326
    FLD float ptr [EDX + 0x4]           ; 005a0328
    FMUL ST2                            ; 005a032b
    FLD float ptr [EDX + 0x8]           ; 005a032d
    FMULP ST3                           ; 005a0330
    FXCH                                ; 005a0332
    FSTP float ptr [EDX]                ; 005a0334
    FSTP float ptr [EDX + 0x4]          ; 005a0336
    FSTP float ptr [EDX + 0x8]          ; 005a0339
    MOV ESP,EBP                         ; 005a033c
    POP EBP                             ; 005a033e
    POP EDI                             ; 005a033f
    POP ESI                             ; 005a0340
    POP EBX                             ; 005a0341
    RET                                 ; 005a0342
    PUSH ESI                            ; 005a0343
        ;   Label: LAB_005a0343
    CALL unkaddr_0059d350.cpp_FUN_0059db70 ; 005a0344
        ;   XREF to: 0059db70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059db70()
    ADD ESP,0x4                         ; 005a0349
    PUSH EAX                            ; 005a034c
    PUSH 0x5efb5a                       ; 005a034d | = "BurnComplete"
    PUSH ESI                            ; 005a0352
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a0353
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a0358
    JMP 0x005a02ae                      ; 005a035b
        ;   XREF to: 005a02ae (UNCONDITIONAL_JUMP)  ; LAB_005a02ae
    MOV dword ptr [EDX + 0x8],0x0       ; 005a0360
        ;   Label: LAB_005a0360
    MOV EAX,dword ptr [EDX + 0x8]       ; 005a0367
    MOV dword ptr [EDX + 0x4],EAX       ; 005a036a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005a036d
    MOV dword ptr [EDX],EAX             ; 005a0370
    MOV ESP,EBP                         ; 005a0372
    POP EBP                             ; 005a0374
    POP EDI                             ; 005a0375
    POP ESI                             ; 005a0376
    POP EBX                             ; 005a0377
    RET                                 ; 005a0378

