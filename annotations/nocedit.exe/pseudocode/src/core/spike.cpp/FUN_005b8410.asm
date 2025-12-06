; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_spike.cpp_FUN_005b8410()
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00652e00 = 0.0000100000000000000
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_spike.cpp_FUN_005b8950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8410
        ;   Label: core_spike.cpp_FUN_005b8410
    PUSH ESI                            ; 005b8411
    PUSH EDI                            ; 005b8412
    PUSH EBP                            ; 005b8413
    SUB ESP,0x40                        ; 005b8414
    MOV EBX,dword ptr [ESP + 0x54]      ; 005b8417
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005b841b
    TEST EDX,EDX                        ; 005b8421
    JZ 0x005b842e                       ; 005b8423 | LAB_005b842e
        ;   XREF to: 005b842e (CONDITIONAL_JUMP)
    CMP EDX,0x1                         ; 005b8425
    JNZ 0x005b8595                      ; 005b8428 | LAB_005b8595
        ;   XREF to: 005b8595 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x2f0]               ; 005b842e
        ;   Label: LAB_005b842e
    PUSH EAX                            ; 005b8434
    MOV EBP,dword ptr [0x006793d0]      ; 005b8435 | CEventList * g_CEventListPtr
    PUSH EBP                            ; 005b843b | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005b843c | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b8441
    TEST EAX,EAX                        ; 005b8444
    JZ 0x005b8452                       ; 005b8446 | LAB_005b8452
        ;   XREF to: 005b8452 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2dc],0x1     ; 005b8448
    LEA EAX,[EBX + 0x354]               ; 005b8452
        ;   Label: LAB_005b8452
    PUSH EAX                            ; 005b8458
    MOV EAX,[0x006793d0]                ; 005b8459 | CEventList * g_CEventListPtr
    PUSH EAX                            ; 005b845e | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005b845f | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b8464
    TEST EAX,EAX                        ; 005b8467
    JZ 0x005b85e2                       ; 005b8469 | LAB_005b85e2
        ;   XREF to: 005b85e2 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005b846f
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 005b8479
        ;   Label: LAB_005b8479
    TEST ECX,ECX                        ; 005b847f
    JZ 0x005b858d                       ; 005b8481 | LAB_005b858d
        ;   XREF to: 005b858d (CONDITIONAL_JUMP)
    CMP ECX,0x2                         ; 005b8487
    JNZ 0x005b8496                      ; 005b848a | LAB_005b8496
        ;   XREF to: 005b8496 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2d8],0x3     ; 005b848c
    FLD float ptr [EBX + 0x488]         ; 005b8496
        ;   Label: LAB_005b8496
    FSUB float ptr [ESP + 0x58]         ; 005b849c
    FST float ptr [EBX + 0x488]         ; 005b84a0
    FLDZ                                ; 005b84a6
    FCOMPP                              ; 005b84a8
    FNSTSW AX                           ; 005b84aa
    SAHF                                ; 005b84ac
    JC 0x005b858d                       ; 005b84ad | LAB_005b858d
        ;   XREF to: 005b858d (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 005b84b3
    MOV dword ptr [EBX + 0x488],0x0     ; 005b84b9
    TEST EDI,EDI                        ; 005b84c3
    JNZ 0x005b85f4                      ; 005b84c5 | LAB_005b85f4
        ;   XREF to: 005b85f4 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2d8],0x1     ; 005b84cb
    MOV dword ptr [EBX + 0x55c],EDI     ; 005b84d5
    LEA ESI,[EBX + 0x20]                ; 005b84db
        ;   Label: LAB_005b84db
    MOV EAX,dword ptr [ESI]             ; 005b84de
    MOV dword ptr [ESP + 0x18],EAX      ; 005b84e0
    LEA EAX,[ESI + 0x4]                 ; 005b84e4
    MOV EAX,dword ptr [EAX]             ; 005b84e7
    MOV dword ptr [ESP + 0x1c],EAX      ; 005b84e9
    LEA EAX,[ESI + 0x8]                 ; 005b84ed
    MOV EAX,dword ptr [EAX]             ; 005b84f0
    MOV dword ptr [ESP + 0x20],EAX      ; 005b84f2
    FLD float ptr [EBX + 0x2ec]         ; 005b84f6
    FMUL float ptr [EBX + 0x55c]        ; 005b84fc
    XOR EAX,EAX                         ; 005b8502
    FSTP float ptr [ESP + 0x3c]         ; 005b8504
    MOV dword ptr [ESP],EAX             ; 005b8508
    MOV dword ptr [ESP + 0x4],EAX       ; 005b850b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b850f
    MOV dword ptr [ESP + 0x8],EAX       ; 005b8513
    MOV EAX,ESP                         ; 005b8517
    PUSH EAX                            ; 005b8519
    LEA EAX,[ESP + 0x28]                ; 005b851a
    PUSH EAX                            ; 005b851e
    PUSH EBX                            ; 005b851f
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005b8520 | CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)
    LEA EDX,[EBX + 0x2e0]               ; 005b8525
    FLD float ptr [EDX]                 ; 005b852b
    FADD float ptr [EAX]                ; 005b852d
    ADD ESP,0xc                         ; 005b852f
    FSTP float ptr [ESP + 0xc]          ; 005b8532
    FLD float ptr [EDX + 0x4]           ; 005b8536
    FADD float ptr [EAX + 0x4]          ; 005b8539
    FSTP float ptr [ESP + 0x10]         ; 005b853c
    FLD float ptr [EDX + 0x8]           ; 005b8540
    FADD float ptr [EAX + 0x8]          ; 005b8543
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b8546
    FSTP float ptr [ESP + 0x14]         ; 005b854a
    MOV dword ptr [ESI],EAX             ; 005b854e
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b8550
    MOV dword ptr [ESI + 0x4],EAX       ; 005b8554
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b8557
    MOV dword ptr [ESI + 0x8],EAX       ; 005b855b
    FLD float ptr [ESP + 0x18]          ; 005b855e
    FSUB float ptr [ESI]                ; 005b8562
    FMUL ST0                            ; 005b8564
    FLD float ptr [ESP + 0x1c]          ; 005b8566
    FSUB float ptr [ESI + 0x4]          ; 005b856a
    FMUL ST0                            ; 005b856d
    FLD float ptr [ESP + 0x20]          ; 005b856f
    FXCH                                ; 005b8573
    FADDP ST2,ST0                       ; 005b8575
    FSUB float ptr [ESI + 0x8]          ; 005b8577
    FMUL ST0                            ; 005b857a
    FADDP                               ; 005b857c
    FCOMP double ptr [0x00652e00]       ; 005b857e | double DOUBLE_00652e00
    FNSTSW AX                           ; 005b8584
    SAHF                                ; 005b8586
    JA 0x005b8716                       ; 005b8587 | LAB_005b8716
        ;   XREF to: 005b8716 (CONDITIONAL_JUMP)
    ADD ESP,0x40                        ; 005b858d
        ;   Label: LAB_005b858d
    POP EBP                             ; 005b8590
    POP EDI                             ; 005b8591
    POP ESI                             ; 005b8592
    POP EBX                             ; 005b8593
    RET                                 ; 005b8594
    LEA EAX,[EBX + 0x3b8]               ; 005b8595
        ;   Label: LAB_005b8595
    PUSH EAX                            ; 005b859b
    MOV ESI,dword ptr [0x006793d0]      ; 005b859c | CEventList * g_CEventListPtr
    PUSH ESI                            ; 005b85a2 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005b85a3 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b85a8
    TEST EAX,EAX                        ; 005b85ab
    JZ 0x005b85b9                       ; 005b85ad | LAB_005b85b9
        ;   XREF to: 005b85b9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2dc],0x1     ; 005b85af
    LEA EAX,[EBX + 0x41c]               ; 005b85b9
        ;   Label: LAB_005b85b9
    PUSH EAX                            ; 005b85bf
    MOV EDI,dword ptr [0x006793d0]      ; 005b85c0 | CEventList * g_CEventListPtr
    PUSH EDI                            ; 005b85c6 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005b85c7 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005b85cc
    TEST EAX,EAX                        ; 005b85cf
    JZ 0x005b85e2                       ; 005b85d1 | LAB_005b85e2
        ;   XREF to: 005b85e2 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2dc],0x1     ; 005b85d3
    JMP 0x005b8496                      ; 005b85dd | LAB_005b8496
        ;   XREF to: 005b8496 (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2dc],0x0     ; 005b85e2
        ;   Label: LAB_005b85e2
    JZ 0x005b8479                       ; 005b85e9 | LAB_005b8479
        ;   XREF to: 005b8479 (CONDITIONAL_JUMP)
    JMP 0x005b8496                      ; 005b85ef | LAB_005b8496
        ;   XREF to: 005b8496 (UNCONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 005b85f4
        ;   Label: LAB_005b85f4
    JNZ 0x005b868f                      ; 005b85f7 | LAB_005b868f
        ;   XREF to: 005b868f (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x58]          ; 005b85fd
    FDIV float ptr [EBX + 0x480]        ; 005b8601
    FADD float ptr [EBX + 0x55c]        ; 005b8607
    FST float ptr [EBX + 0x55c]         ; 005b860d
    FLD1                                ; 005b8613
    FCOMPP                              ; 005b8615
    FNSTSW AX                           ; 005b8617
    SAHF                                ; 005b8619
    JNC 0x005b84db                      ; 005b861a | LAB_005b84db
        ;   XREF to: 005b84db (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2d8],0x2     ; 005b8620
    MOV EDI,dword ptr [EBX + 0x2d4]     ; 005b862a
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 005b8630
    CMP EDI,0x2                         ; 005b863a
    JZ 0x005b8655                       ; 005b863d | LAB_005b8655
        ;   XREF to: 005b8655 (CONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 005b863f
    JZ 0x005b8664                       ; 005b8642 | LAB_005b8664
        ;   XREF to: 005b8664 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x554]     ; 005b8644
    MOV dword ptr [EBX + 0x488],EAX     ; 005b864a
    JMP 0x005b84db                      ; 005b8650 | LAB_005b84db
        ;   XREF to: 005b84db (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005b8655
        ;   Label: LAB_005b8655
    JMP 0x005b84db                      ; 005b865f | LAB_005b84db
        ;   XREF to: 005b84db (UNCONDITIONAL_JUMP)
    PUSH 0x3fa00000                     ; 005b8664
        ;   Label: LAB_005b8664
    PUSH 0x3f400000                     ; 005b8669
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005b866e | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    CMP EDI,0x2                         ; 005b868f
        ;   Label: LAB_005b868f
    JNZ 0x005b86ad                      ; 005b8692 | LAB_005b86ad
        ;   XREF to: 005b86ad (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x55c],0x3f800000 ; 005b8694
    MOV dword ptr [EBX + 0x2d8],0x3     ; 005b869e
    JMP 0x005b84db                      ; 005b86a8 | LAB_005b84db
        ;   XREF to: 005b84db (UNCONDITIONAL_JUMP)
    CMP EDI,0x3                         ; 005b86ad
        ;   Label: LAB_005b86ad
    JNZ 0x005b84db                      ; 005b86b0 | LAB_005b84db
        ;   XREF to: 005b84db (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x58]          ; 005b86b6
    FDIV float ptr [EBX + 0x484]        ; 005b86ba
    FSUBR float ptr [EBX + 0x55c]       ; 005b86c0
    FST float ptr [EBX + 0x55c]         ; 005b86c6
    FLDZ                                ; 005b86cc
    FCOMPP                              ; 005b86ce
    FNSTSW AX                           ; 005b86d0
    SAHF                                ; 005b86d2
    JBE 0x005b84db                      ; 005b86d3 | LAB_005b84db
        ;   XREF to: 005b84db (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005b86d9
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 005b86e3
    MOV dword ptr [EBX + 0x55c],0x0     ; 005b86e9
    CMP ECX,0x2                         ; 005b86f3
    JZ 0x005b8655                       ; 005b86f6 | LAB_005b8655
        ;   XREF to: 005b8655 (CONDITIONAL_JUMP)
    CMP ECX,0x1                         ; 005b86fc
    JZ 0x005b8664                       ; 005b86ff | LAB_005b8664
        ;   XREF to: 005b8664 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x554]     ; 005b8705
    MOV dword ptr [EBX + 0x488],EAX     ; 005b870b
    JMP 0x005b84db                      ; 005b8711 | LAB_005b84db
        ;   XREF to: 005b84db (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005b8716
        ;   Label: LAB_005b8716
    CALL core_spike.cpp_FUN_005b8950    ; 005b8717 | undefined core_spike.cpp_FUN_005b8950()
        ;   XREF to: 005b8950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005b871c
    ADD ESP,0x40                        ; 005b871f
    POP EBP                             ; 005b8722
    POP EDI                             ; 005b8723
    POP ESI                             ; 005b8724
    POP EBX                             ; 005b8725
    RET                                 ; 005b8726

