; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clipAgainstPlane2_FUN_005152e0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_clipAndFillPolygon_FUN_005159c0 at 00515a37
;   engine_mini3d.cpp_clipBatchTriangle_FUN_00515850 at 005158f6
;   engine_mini3d.cpp_drawSurfaceTriangle_FUN_00517240 at 00517319
;
; Referenced Globals:
;   void* PTR_caseD_1_005152cc = 0051538b
;   void* PTR_caseD_3_005152d4 = 00515369
;   undefined4 DAT_01d227f0
;   undefined4 DAT_01d227f4
;   undefined4 DAT_01d237fc
;   undefined4 DAT_01d23800
;   undefined4 DAT_01d23804
;   undefined4 DAT_01d23840
;   undefined4 DAT_01d23844
;
; Called Functions:
;   engine_mini3d.cpp_intersectClipPlane2_FUN_00514ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005152e0
        ;   Label: engine_mini3d.cpp_clipAgainstPlane2_FUN_005152e0
    PUSH ESI                            ; 005152e1
    PUSH EDI                            ; 005152e2
    PUSH EBP                            ; 005152e3
    SUB ESP,0x8                         ; 005152e4
    MOV EBX,dword ptr [0x01d227f4]      ; 005152e7 | DAT_01d227f4
    XOR EDX,EDX                         ; 005152ed
    MOV ECX,dword ptr [0x01d227f0]      ; 005152ef | DAT_01d227f0
    MOV dword ptr [ESP],EDX             ; 005152f5
    TEST ECX,ECX                        ; 005152f8
    JLE 0x0051537d                      ; 005152fa
        ;   XREF to: 0051537d (CONDITIONAL_JUMP)  ; LAB_0051537d
    MOV EBP,0x1d237fc                   ; 00515300
    MOV ECX,dword ptr [ESP]             ; 00515305
        ;   Label: LAB_00515305
    MOV EAX,[0x01d227f0]                ; 00515308 | DAT_01d227f0
    INC ECX                             ; 0051530d
    CMP ECX,EAX                         ; 0051530e
    JNZ 0x00515314                      ; 00515310
        ;   XREF to: 00515314 (CONDITIONAL_JUMP)  ; LAB_00515314
    XOR ECX,EAX                         ; 00515312
    MOV ESI,0x1d237fc                   ; 00515314
        ;   Label: LAB_00515314
    SHL ECX,0x6                         ; 00515319
    FLD float ptr [EBP + 0x4]           ; 0051531c | DAT_01d23800 | DAT_01d23840
    ADD ESI,ECX                         ; 0051531f
    MOV EDX,EBP                         ; 00515321
    MOV dword ptr [ESP + 0x4],ESI       ; 00515323
    XOR ECX,ECX                         ; 00515327
    FCOMP float ptr [EBP + 0x8]         ; 00515329 | DAT_01d23804 | DAT_01d23844
    FNSTSW AX                           ; 0051532c
    SAHF                                ; 0051532e
    JC 0x00515336                       ; 0051532f
        ;   XREF to: 00515336 (CONDITIONAL_JUMP)  ; LAB_00515336
    MOV ECX,0x1                         ; 00515331
    MOV ESI,dword ptr [ESP + 0x4]       ; 00515336
        ;   Label: LAB_00515336
    FLD float ptr [ESI + 0x4]           ; 0051533a | DAT_01d23800
    FCOMP float ptr [ESI + 0x8]         ; 0051533d | DAT_01d23804
    FNSTSW AX                           ; 00515340
    SAHF                                ; 00515342
    JC 0x00515348                       ; 00515343
        ;   XREF to: 00515348 (CONDITIONAL_JUMP)  ; LAB_00515348
    OR CL,0x2                           ; 00515345
    CMP ECX,0x3                         ; 00515348
        ;   Label: LAB_00515348
    JA 0x00515369                       ; 0051534b
        ;   XREF to: 00515369 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x5152c8]  ; 0051534d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 00515354
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 00515356
    MOV ECX,0x10                        ; 00515359
    LEA EDI,[ESI + 0x1d23ffc]           ; 0051535e
    MOV ESI,EDX                         ; 00515364
    INC EBX                             ; 00515366
    MOVSD.REP ES:EDI,ESI                ; 00515367 | DAT_01d237fc | DAT_01d23800
    MOV ESI,dword ptr [ESP]             ; 00515369
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d227f0]      ; 0051536c | DAT_01d227f0
    INC ESI                             ; 00515372
    ADD EBP,0x40                        ; 00515373
    MOV dword ptr [ESP],ESI             ; 00515376
    CMP ESI,EDI                         ; 00515379
    JL 0x00515305                       ; 0051537b
        ;   XREF to: 00515305 (CONDITIONAL_JUMP)  ; LAB_00515305
    MOV dword ptr [0x01d227f4],EBX      ; 0051537d | DAT_01d227f4
        ;   Label: LAB_0051537d
    ADD ESP,0x8                         ; 00515383
    POP EBP                             ; 00515386
    POP EDI                             ; 00515387
    POP ESI                             ; 00515388
    POP EBX                             ; 00515389
    RET                                 ; 0051538a
    MOV ECX,EBX                         ; 0051538b
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 0051538d
    ADD ECX,0x1d23ffc                   ; 00515390
    PUSH ECX                            ; 00515396
    PUSH EDX                            ; 00515397 | DAT_01d237fc
    MOV ESI,dword ptr [ESP + 0xc]       ; 00515398
    PUSH ESI                            ; 0051539c
    MOV dword ptr [0x01d227f4],EBX      ; 0051539d | DAT_01d227f4
    CALL engine_mini3d.cpp_intersectClipPlane2_FUN_00514ed0 ; 005153a3
        ;   XREF to: 00514ed0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectClipPlane2_FUN_00514ed0(float * from, float * to, float * out)
    MOV EBX,dword ptr [0x01d227f4]      ; 005153a8 | DAT_01d227f4
    ADD ESP,0xc                         ; 005153ae
    INC EBX                             ; 005153b1
    JMP 0x00515369                      ; 005153b2
        ;   XREF to: 00515369 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 005153b4
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 005153b6
    MOV ECX,0x10                        ; 005153b9
    LEA EDI,[ESI + 0x1d23ffc]           ; 005153be
    MOV ESI,EDX                         ; 005153c4
    INC EBX                             ; 005153c6
    MOVSD.REP ES:EDI,ESI                ; 005153c7 | DAT_01d237fc | DAT_01d23800
    MOV ECX,EBX                         ; 005153c9
    SHL ECX,0x6                         ; 005153cb
    ADD ECX,0x1d23ffc                   ; 005153ce
    PUSH ECX                            ; 005153d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005153d5
    PUSH ECX                            ; 005153d9
    PUSH EDX                            ; 005153da | DAT_01d237fc
    MOV dword ptr [0x01d227f4],EBX      ; 005153db | DAT_01d227f4
    CALL engine_mini3d.cpp_intersectClipPlane2_FUN_00514ed0 ; 005153e1
        ;   XREF to: 00514ed0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectClipPlane2_FUN_00514ed0(float * from, float * to, float * out)
    MOV EBX,dword ptr [0x01d227f4]      ; 005153e6 | DAT_01d227f4
    ADD ESP,0xc                         ; 005153ec
    INC EBX                             ; 005153ef
    JMP 0x00515369                      ; 005153f0
        ;   XREF to: 00515369 (UNCONDITIONAL_JUMP)  ; caseD_3

