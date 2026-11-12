; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_CSpike_process_FUN_005831b0(CSpike *this_ptr,float delta_time)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f6210
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00583700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005831b0
        ;   Label: core_spike.cpp_CSpike_process_FUN_005831b0
    PUSH ESI                            ; 005831b1
    PUSH EDI                            ; 005831b2
    PUSH EBP                            ; 005831b3
    SUB ESP,0x58                        ; 005831b4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005831b7
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005831bb
    TEST EDX,EDX                        ; 005831c1
    JZ 0x005831ce                       ; 005831c3
        ;   XREF to: 005831ce (CONDITIONAL_JUMP)  ; LAB_005831ce
    CMP EDX,0x1                         ; 005831c5
    JNZ 0x0058334c                      ; 005831c8
        ;   XREF to: 0058334c (CONDITIONAL_JUMP)  ; LAB_0058334c
    LEA EAX,[EBX + 0x2f0]               ; 005831ce
        ;   Label: LAB_005831ce
    PUSH EAX                            ; 005831d4
    MOV EBP,dword ptr [0x0061b4d0]      ; 005831d5 | DAT_0061b4d0
    PUSH EBP                            ; 005831db
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005831dc
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005831e1
    TEST EAX,EAX                        ; 005831e4
    JZ 0x005831f2                       ; 005831e6
        ;   XREF to: 005831f2 (CONDITIONAL_JUMP)  ; LAB_005831f2
    MOV dword ptr [EBX + 0x2dc],0x1     ; 005831e8
    LEA EAX,[EBX + 0x354]               ; 005831f2
        ;   Label: LAB_005831f2
    PUSH EAX                            ; 005831f8
    MOV EAX,[0x0061b4d0]                ; 005831f9 | DAT_0061b4d0
    PUSH EAX                            ; 005831fe
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005831ff
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00583204
    TEST EAX,EAX                        ; 00583207
    JZ 0x00583399                       ; 00583209
        ;   XREF to: 00583399 (CONDITIONAL_JUMP)  ; LAB_00583399
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0058320f
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 00583219
        ;   Label: LAB_00583219
    TEST ECX,ECX                        ; 0058321f
    JZ 0x00583344                       ; 00583221
        ;   XREF to: 00583344 (CONDITIONAL_JUMP)  ; LAB_00583344
    CMP ECX,0x2                         ; 00583227
    JNZ 0x00583236                      ; 0058322a
        ;   XREF to: 00583236 (CONDITIONAL_JUMP)  ; LAB_00583236
    MOV dword ptr [EBX + 0x2d8],0x3     ; 0058322c
    FLD float ptr [EBX + 0x488]         ; 00583236
        ;   Label: LAB_00583236
    FSUB float ptr [ESP + 0x70]         ; 0058323c
    FST float ptr [EBX + 0x488]         ; 00583240
    FLDZ                                ; 00583246
    FCOMPP                              ; 00583248
    FNSTSW AX                           ; 0058324a
    SAHF                                ; 0058324c
    JC 0x00583344                       ; 0058324d
        ;   XREF to: 00583344 (CONDITIONAL_JUMP)  ; LAB_00583344
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 00583253
    MOV dword ptr [EBX + 0x488],0x0     ; 00583259
    TEST EDI,EDI                        ; 00583263
    JNZ 0x005833ab                      ; 00583265
        ;   XREF to: 005833ab (CONDITIONAL_JUMP)  ; LAB_005833ab
    MOV dword ptr [EBX + 0x2d8],0x1     ; 0058326b
    MOV dword ptr [EBX + 0x55c],EDI     ; 00583275
    LEA EDI,[ESP + 0x18]                ; 0058327b
        ;   Label: LAB_0058327b
    LEA ESI,[EBX + 0x20]                ; 0058327f
    MOVSD ES:EDI,ESI                    ; 00583282
    MOVSD ES:EDI,ESI                    ; 00583283
    MOVSD ES:EDI,ESI                    ; 00583284
    FLD float ptr [EBX + 0x2ec]         ; 00583285
    FMUL float ptr [EBX + 0x55c]        ; 0058328b
    XOR EAX,EAX                         ; 00583291
    FSTP float ptr [ESP + 0x54]         ; 00583293
    MOV dword ptr [ESP + 0x30],EAX      ; 00583297
    MOV dword ptr [ESP + 0x34],EAX      ; 0058329b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0058329f
    MOV dword ptr [ESP + 0x38],EAX      ; 005832a3
    LEA EAX,[ESP + 0x30]                ; 005832a7
    PUSH EAX                            ; 005832ab
    PUSH EBX                            ; 005832ac
    LEA ESI,[ESP + 0x2c]                ; 005832ad
    LEA EDI,[ESP + 0x8]                 ; 005832b1
    CALL core_actor.cpp_FUN_00408ac0    ; 005832b5
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x2c]                ; 005832ba
    ADD ESP,0x8                         ; 005832be
    LEA EAX,[EBX + 0x2e0]               ; 005832c1
    MOVSD ES:EDI,ESI                    ; 005832c7
    MOVSD ES:EDI,ESI                    ; 005832c8
    MOVSD ES:EDI,ESI                    ; 005832c9
    FLD float ptr [EAX]                 ; 005832ca
    FLD float ptr [EAX + 0x4]           ; 005832cc
    FLD float ptr [EAX + 0x8]           ; 005832cf
    LEA EDI,[ESP + 0xc]                 ; 005832d2
    LEA ESI,[ESP + 0x3c]                ; 005832d6
    FXCH ST2                            ; 005832da
    FADD float ptr [ESP]                ; 005832dc
    FXCH                                ; 005832df
    FADD float ptr [ESP + 0x4]          ; 005832e1
    FXCH ST2                            ; 005832e5
    FADD float ptr [ESP + 0x8]          ; 005832e7
    FXCH                                ; 005832eb
    FSTP float ptr [ESP + 0x3c]         ; 005832ed
    FXCH                                ; 005832f1
    FSTP float ptr [ESP + 0x40]         ; 005832f3
    FSTP float ptr [ESP + 0x44]         ; 005832f7
    MOVSD ES:EDI,ESI                    ; 005832fb
    MOVSD ES:EDI,ESI                    ; 005832fc
    MOVSD ES:EDI,ESI                    ; 005832fd
    LEA EDX,[EBX + 0x20]                ; 005832fe
    MOV EAX,dword ptr [ESP + 0xc]       ; 00583301
    FLD float ptr [ESP + 0x18]          ; 00583305
    MOV dword ptr [EDX],EAX             ; 00583309
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058330b
    FSUB float ptr [EDX]                ; 0058330f
    FMUL ST0                            ; 00583311
    MOV dword ptr [EDX + 0x4],EAX       ; 00583313
    FLD float ptr [ESP + 0x1c]          ; 00583316
    FSUB float ptr [EDX + 0x4]          ; 0058331a
    FMUL ST0                            ; 0058331d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058331f
    FLD float ptr [ESP + 0x20]          ; 00583323
    MOV dword ptr [EDX + 0x8],EAX       ; 00583327
    FXCH                                ; 0058332a
    FADDP ST2,ST0                       ; 0058332c
    FSUB float ptr [EDX + 0x8]          ; 0058332e
    FMUL ST0                            ; 00583331
    FADDP                               ; 00583333
    FCOMP double ptr [0x005f6210]       ; 00583335 | DAT_005f6210
    FNSTSW AX                           ; 0058333b
    SAHF                                ; 0058333d
    JA 0x005834cd                       ; 0058333e
        ;   XREF to: 005834cd (CONDITIONAL_JUMP)  ; LAB_005834cd
    ADD ESP,0x58                        ; 00583344
        ;   Label: LAB_00583344
    POP EBP                             ; 00583347
    POP EDI                             ; 00583348
    POP ESI                             ; 00583349
    POP EBX                             ; 0058334a
    RET                                 ; 0058334b
    LEA EAX,[EBX + 0x3b8]               ; 0058334c
        ;   Label: LAB_0058334c
    PUSH EAX                            ; 00583352
    MOV ESI,dword ptr [0x0061b4d0]      ; 00583353 | DAT_0061b4d0
    PUSH ESI                            ; 00583359
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0058335a
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0058335f
    TEST EAX,EAX                        ; 00583362
    JZ 0x00583370                       ; 00583364
        ;   XREF to: 00583370 (CONDITIONAL_JUMP)  ; LAB_00583370
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00583366
    LEA EAX,[EBX + 0x41c]               ; 00583370
        ;   Label: LAB_00583370
    PUSH EAX                            ; 00583376
    MOV EDI,dword ptr [0x0061b4d0]      ; 00583377 | DAT_0061b4d0
    PUSH EDI                            ; 0058337d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0058337e
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00583383
    TEST EAX,EAX                        ; 00583386
    JZ 0x00583399                       ; 00583388
        ;   XREF to: 00583399 (CONDITIONAL_JUMP)  ; LAB_00583399
    MOV dword ptr [EBX + 0x2dc],0x1     ; 0058338a
    JMP 0x00583236                      ; 00583394
        ;   XREF to: 00583236 (UNCONDITIONAL_JUMP)  ; LAB_00583236
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00583399
        ;   Label: LAB_00583399
    JZ 0x00583219                       ; 005833a0
        ;   XREF to: 00583219 (CONDITIONAL_JUMP)  ; LAB_00583219
    JMP 0x00583236                      ; 005833a6
        ;   XREF to: 00583236 (UNCONDITIONAL_JUMP)  ; LAB_00583236
    CMP EDI,0x1                         ; 005833ab
        ;   Label: LAB_005833ab
    JNZ 0x00583446                      ; 005833ae
        ;   XREF to: 00583446 (CONDITIONAL_JUMP)  ; LAB_00583446
    FLD float ptr [ESP + 0x70]          ; 005833b4
    FDIV float ptr [EBX + 0x480]        ; 005833b8
    FADD float ptr [EBX + 0x55c]        ; 005833be
    FST float ptr [EBX + 0x55c]         ; 005833c4
    FLD1                                ; 005833ca
    FCOMPP                              ; 005833cc
    FNSTSW AX                           ; 005833ce
    SAHF                                ; 005833d0
    JNC 0x0058327b                      ; 005833d1
        ;   XREF to: 0058327b (CONDITIONAL_JUMP)  ; LAB_0058327b
    MOV dword ptr [EBX + 0x2d8],0x2     ; 005833d7
    MOV EDI,dword ptr [EBX + 0x2d4]     ; 005833e1
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 005833e7
    CMP EDI,0x2                         ; 005833f1
    JZ 0x0058340c                       ; 005833f4
        ;   XREF to: 0058340c (CONDITIONAL_JUMP)  ; LAB_0058340c
    CMP EDI,0x1                         ; 005833f6
    JZ 0x0058341b                       ; 005833f9
        ;   XREF to: 0058341b (CONDITIONAL_JUMP)  ; LAB_0058341b
    MOV EAX,dword ptr [EBX + 0x554]     ; 005833fb
    MOV dword ptr [EBX + 0x488],EAX     ; 00583401
    JMP 0x0058327b                      ; 00583407
        ;   XREF to: 0058327b (UNCONDITIONAL_JUMP)  ; LAB_0058327b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0058340c
        ;   Label: LAB_0058340c
    JMP 0x0058327b                      ; 00583416
        ;   XREF to: 0058327b (UNCONDITIONAL_JUMP)  ; LAB_0058327b
    PUSH 0x3fa00000                     ; 0058341b
        ;   Label: LAB_0058341b
    PUSH 0x3f400000                     ; 00583420
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00583425
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x5c],EAX      ; 0058342a
    FLD float ptr [ESP + 0x5c]          ; 0058342e
    FMUL float ptr [EBX + 0x554]        ; 00583432
    ADD ESP,0x8                         ; 00583438
    FSTP float ptr [EBX + 0x488]        ; 0058343b
    JMP 0x0058327b                      ; 00583441
        ;   XREF to: 0058327b (UNCONDITIONAL_JUMP)  ; LAB_0058327b
    CMP EDI,0x2                         ; 00583446
        ;   Label: LAB_00583446
    JNZ 0x00583464                      ; 00583449
        ;   XREF to: 00583464 (CONDITIONAL_JUMP)  ; LAB_00583464
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 0058344b
    MOV dword ptr [EBX + 0x2d8],0x3     ; 00583455
    JMP 0x0058327b                      ; 0058345f
        ;   XREF to: 0058327b (UNCONDITIONAL_JUMP)  ; LAB_0058327b
    CMP EDI,0x3                         ; 00583464
        ;   Label: LAB_00583464
    JNZ 0x0058327b                      ; 00583467
        ;   XREF to: 0058327b (CONDITIONAL_JUMP)  ; LAB_0058327b
    FLD float ptr [ESP + 0x70]          ; 0058346d
    FDIV float ptr [EBX + 0x484]        ; 00583471
    FSUBR float ptr [EBX + 0x55c]       ; 00583477
    FST float ptr [EBX + 0x55c]         ; 0058347d
    FLDZ                                ; 00583483
    FCOMPP                              ; 00583485
    FNSTSW AX                           ; 00583487
    SAHF                                ; 00583489
    JBE 0x0058327b                      ; 0058348a
        ;   XREF to: 0058327b (CONDITIONAL_JUMP)  ; LAB_0058327b
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00583490
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 0058349a
    MOV dword ptr [EBX + 0x55c],0x0     ; 005834a0
    CMP ECX,0x2                         ; 005834aa
    JZ 0x0058340c                       ; 005834ad
        ;   XREF to: 0058340c (CONDITIONAL_JUMP)  ; LAB_0058340c
    CMP ECX,0x1                         ; 005834b3
    JZ 0x0058341b                       ; 005834b6
        ;   XREF to: 0058341b (CONDITIONAL_JUMP)  ; LAB_0058341b
    MOV EAX,dword ptr [EBX + 0x554]     ; 005834bc
    MOV dword ptr [EBX + 0x488],EAX     ; 005834c2
    JMP 0x0058327b                      ; 005834c8
        ;   XREF to: 0058327b (UNCONDITIONAL_JUMP)  ; LAB_0058327b
    PUSH EBX                            ; 005834cd
        ;   Label: LAB_005834cd
    CALL core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00583700 ; 005834ce
        ;   XREF to: 00583700 (UNCONDITIONAL_CALL)  ; void core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00583700(CSpike * this_ptr)
    ADD ESP,0x4                         ; 005834d3
    ADD ESP,0x58                        ; 005834d6
    POP EBP                             ; 005834d9
    POP EDI                             ; 005834da
    POP ESI                             ; 005834db
    POP EBX                             ; 005834dc
    RET                                 ; 005834dd

