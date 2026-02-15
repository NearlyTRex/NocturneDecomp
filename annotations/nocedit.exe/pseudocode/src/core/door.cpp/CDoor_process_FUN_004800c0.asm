; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_process_FUN_004800c0(CDoor *this_ptr,float delta_time)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x50]:4  local_50
;
; Referenced Globals:
;   void* switchdataD_004800b0 = 0048011a
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_door.cpp_CDoor_reposition_FUN_0047fd20
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_setcolid.cpp_CDemonSet_FUN_00574440
;   core_setcolid.cpp_CDemonSet_FUN_005744d0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004800c0
        ;   Label: core_door.cpp_CDoor_process_FUN_004800c0
    PUSH ESI                            ; 004800c1
    PUSH EDI                            ; 004800c2
    PUSH EBP                            ; 004800c3
    SUB ESP,0xc0                        ; 004800c4
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004800ca
    LEA EDX,[ESI + 0x20]                ; 004800d1
    MOV EAX,dword ptr [EDX]             ; 004800d4
    MOV dword ptr [ESP + 0x58],EAX      ; 004800d6
    LEA EAX,[EDX + 0x4]                 ; 004800da
    MOV EAX,dword ptr [EAX]             ; 004800dd
    MOV dword ptr [ESP + 0x5c],EAX      ; 004800df
    LEA EAX,[EDX + 0x8]                 ; 004800e3
    MOV EAX,dword ptr [EAX]             ; 004800e6
    MOV dword ptr [ESP + 0x60],EAX      ; 004800e8
    MOV EAX,dword ptr [ESI + 0x9ac]     ; 004800ec
    MOV EDX,dword ptr [ESI + 0x9c8]     ; 004800f2
    MOV dword ptr [ESP + 0x80],EAX      ; 004800f8
    CMP EDX,0x2                         ; 004800ff
    JGE 0x0048021d                      ; 00480102
        ;   XREF to: 0048021d (CONDITIONAL_JUMP)  ; LAB_0048021d
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00480108
    CMP EAX,0x3                         ; 0048010e
    JA 0x00480176                       ; 00480111
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4800b0]  ; 00480113 | caseD_0 | caseD_2 | caseD_1
        ;   Label: switchD
    LEA EAX,[ESI + 0x2e8]               ; 0048011a
        ;   Label: caseD_0
    PUSH EAX                            ; 00480120
    MOV EBX,dword ptr [0x006793d0]      ; 00480121 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 00480127 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00480128
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048012d
    TEST EAX,EAX                        ; 00480130
    JZ 0x0048016c                       ; 00480132
        ;   XREF to: 0048016c (CONDITIONAL_JUMP)  ; LAB_0048016c
    MOV DL,byte ptr [ESI + 0x864]       ; 00480134
    MOV dword ptr [ESI + 0x2e0],0x1     ; 0048013a
    TEST DL,DL                          ; 00480144
    JZ 0x0048015c                       ; 00480146
        ;   XREF to: 0048015c (CONDITIONAL_JUMP)  ; LAB_0048015c
    LEA EDX,[ESI + 0x864]               ; 00480148
    PUSH EDX                            ; 0048014e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0048014f
    PUSH ESI                            ; 00480155
    CALL dword ptr [EAX + 0x24]         ; 00480156
    ADD ESP,0x8                         ; 00480159
    PUSH ESI                            ; 0048015c
        ;   Label: LAB_0048015c
    MOV EDI,dword ptr [0x006810c8]      ; 0048015d | g_CDemonSetPtr
    PUSH EDI                            ; 00480163 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_005744d0 ; 00480164
        ;   XREF to: 005744d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_005744d0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00480169
    MOV dword ptr [ESI + 0x9ac],0x0     ; 0048016c
        ;   Label: LAB_0048016c
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00480176
        ;   Label: default
    TEST EAX,EAX                        ; 0048017c
    JBE 0x00480410                      ; 0048017e
        ;   XREF to: 00480410 (CONDITIONAL_JUMP)  ; LAB_00480410
    CMP EAX,0x2                         ; 00480184
    JNZ 0x004801a8                      ; 00480187
        ;   XREF to: 004801a8 (CONDITIONAL_JUMP)  ; LAB_004801a8
    CMP byte ptr [ESI + 0x3b0],0x0      ; 00480189
    JZ 0x004801a8                       ; 00480190
        ;   XREF to: 004801a8 (CONDITIONAL_JUMP)  ; LAB_004801a8
    LEA EAX,[ESI + 0x3b0]               ; 00480192
    PUSH EAX                            ; 00480198
    MOV EBP,dword ptr [0x006793d0]      ; 00480199 | g_CEventListPtr
    PUSH EBP                            ; 0048019f | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004801a0
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
        ;   Label: LAB_004801a0
    ADD ESP,0x8                         ; 004801a5
    PUSH ESI                            ; 004801a8
        ;   Label: LAB_004801a8
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 004801a9
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004801ae
    FLD float ptr [ESI + 0x9ac]         ; 004801b1
    FCOMP float ptr [ESP + 0x80]        ; 004801b7
    FNSTSW AX                           ; 004801be
    SAHF                                ; 004801c0
    JZ 0x0048021d                       ; 004801c1
        ;   XREF to: 0048021d (CONDITIONAL_JUMP)  ; LAB_0048021d
    CMP dword ptr [ESI + 0x2d8],0x3     ; 004801c3
    JZ 0x0048021d                       ; 004801ca
        ;   XREF to: 0048021d (CONDITIONAL_JUMP)  ; LAB_0048021d
    LEA EDX,[ESP + 0x28]                ; 004801cc
    PUSH EDX                            ; 004801d0
    MOV EAX,dword ptr [ESI + 0x154]     ; 004801d1
    PUSH ESI                            ; 004801d7
    XOR EDI,EDI                         ; 004801d8
    CALL dword ptr [EAX + 0x14]         ; 004801da
    ADD ESP,0x8                         ; 004801dd
    XOR ECX,ECX                         ; 004801e0
    LEA EBP,[ESI + 0x20]                ; 004801e2
    MOV dword ptr [ESP + 0x7c],ECX      ; 004801e5
    LEA EAX,[ESI + 0x3c]                ; 004801e9
    MOV dword ptr [ESP + 0xb8],ECX      ; 004801ec
    MOV dword ptr [ESP + 0x84],EAX      ; 004801f3
    MOV EAX,[0x006810c8]                ; 004801fa | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004801fa
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004801ff
    CMP EDX,dword ptr [EAX + 0x14f098]  ; 00480206 | g_CDemonSetInstance.character_count
    JL 0x00480446                       ; 0048020c
        ;   XREF to: 00480446 (CONDITIONAL_JUMP)  ; LAB_00480446
    CMP dword ptr [ESP + 0x7c],0x0      ; 00480212
    JNZ 0x0048059d                      ; 00480217
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    ADD ESP,0xc0                        ; 0048021d
        ;   Label: LAB_0048021d
    POP EBP                             ; 00480223
    POP EDI                             ; 00480224
    POP ESI                             ; 00480225
    POP EBX                             ; 00480226
    RET                                 ; 00480227
    LEA EAX,[ESI + 0x34c]               ; 00480228
        ;   Label: caseD_2
    PUSH EAX                            ; 0048022e
    MOV EAX,[0x006793d0]                ; 0048022f | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 00480234 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00480235
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048023a
    TEST EAX,EAX                        ; 0048023d
    JZ 0x00480269                       ; 0048023f
        ;   XREF to: 00480269 (CONDITIONAL_JUMP)  ; LAB_00480269
    MOV AH,byte ptr [ESI + 0x8c8]       ; 00480241
    MOV dword ptr [ESI + 0x2e0],0x3     ; 00480247
    TEST AH,AH                          ; 00480251
    JZ 0x00480269                       ; 00480253
        ;   XREF to: 00480269 (CONDITIONAL_JUMP)  ; LAB_00480269
    LEA EDX,[ESI + 0x8c8]               ; 00480255
    PUSH EDX                            ; 0048025b
    MOV EAX,dword ptr [ESI + 0x154]     ; 0048025c
    PUSH ESI                            ; 00480262
    CALL dword ptr [EAX + 0x24]         ; 00480263
    ADD ESP,0x8                         ; 00480266
    MOV EAX,dword ptr [ESI + 0x9b0]     ; 00480269
        ;   Label: LAB_00480269
    MOV dword ptr [ESI + 0x9ac],EAX     ; 0048026f
    JMP 0x00480176                      ; 00480275
        ;   XREF to: 00480176 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xd8]          ; 0048027a
        ;   Label: caseD_1
    FMUL float ptr [ESI + 0x9b0]        ; 00480281
    FDIV float ptr [ESI + 0x9b4]        ; 00480287
    FLD float ptr [ESI + 0x9b0]         ; 0048028d
    FXCH                                ; 00480293
    FADD float ptr [ESP + 0x80]         ; 00480295
    FLDZ                                ; 0048029c
    FXCH                                ; 0048029e
    FSTP float ptr [ESI + 0x9ac]        ; 004802a0
    FCOMPP                              ; 004802a6
    FNSTSW AX                           ; 004802a8
    SAHF                                ; 004802aa
    JNC 0x004802f5                      ; 004802ab
        ;   XREF to: 004802f5 (CONDITIONAL_JUMP)  ; LAB_004802f5
    FLD float ptr [ESI + 0x9ac]         ; 004802ad
    FCOMP float ptr [ESI + 0x9b0]       ; 004802b3
    FNSTSW AX                           ; 004802b9
    SAHF                                ; 004802bb
    JBE 0x00480176                      ; 004802bc
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2e0],0x2     ; 004802c2
    FLD float ptr [ESI + 0x9b0]         ; 004802cc
    MOV ECX,dword ptr [ESI + 0x9c8]     ; 004802d2
    FSTP float ptr [ESI + 0x9ac]        ; 004802d8
    TEST ECX,ECX                        ; 004802de
    JZ 0x00480176                       ; 004802e0
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x9c8],0x2     ; 004802e6
    JMP 0x00480176                      ; 004802f0
        ;   XREF to: 00480176 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x9ac]         ; 004802f5
        ;   Label: LAB_004802f5
    FCOMP float ptr [ESI + 0x9b0]       ; 004802fb
    FNSTSW AX                           ; 00480301
    SAHF                                ; 00480303
    JNC 0x00480176                      ; 00480304
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2e0],0x2     ; 0048030a
    FLD float ptr [ESI + 0x9b0]         ; 00480314
    MOV EDX,dword ptr [ESI + 0x9c8]     ; 0048031a
    FSTP float ptr [ESI + 0x9ac]        ; 00480320
    TEST EDX,EDX                        ; 00480326
    JZ 0x00480176                       ; 00480328
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x9c8],0x2     ; 0048032e
    JMP 0x00480176                      ; 00480338
        ;   XREF to: 00480176 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0xd8]          ; 0048033d
        ;   Label: caseD_3
    FMUL float ptr [ESI + 0x9b0]        ; 00480344
    FDIV float ptr [ESI + 0x9b8]        ; 0048034a
    FLD float ptr [ESI + 0x9b0]         ; 00480350
    FXCH                                ; 00480356
    FSUBR float ptr [ESP + 0x80]        ; 00480358
    FLDZ                                ; 0048035f
    FXCH                                ; 00480361
    FSTP float ptr [ESI + 0x9ac]        ; 00480363
    FCOMPP                              ; 00480369
    FNSTSW AX                           ; 0048036b
    SAHF                                ; 0048036d
    JNC 0x004803c0                      ; 0048036e
        ;   XREF to: 004803c0 (CONDITIONAL_JUMP)  ; LAB_004803c0
    FLD float ptr [ESI + 0x9ac]         ; 00480370
    FLDZ                                ; 00480376
    FCOMPP                              ; 00480378
    FNSTSW AX                           ; 0048037a
    SAHF                                ; 0048037c
    JBE 0x00480176                      ; 0048037d
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2e0],0x0     ; 00480383
    MOV EDI,dword ptr [ESI + 0x9c8]     ; 0048038d
    MOV dword ptr [ESI + 0x9ac],0x0     ; 00480393
    TEST EDI,EDI                        ; 0048039d
    JZ 0x004803ab                       ; 0048039f
        ;   XREF to: 004803ab (CONDITIONAL_JUMP)  ; LAB_004803ab
    MOV dword ptr [ESI + 0x9c8],0x2     ; 004803a1
    PUSH ESI                            ; 004803ab
        ;   Label: LAB_004803ab
    MOV EBP,dword ptr [0x006810c8]      ; 004803ac | g_CDemonSetPtr
    PUSH EBP                            ; 004803b2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574440 ; 004803b3
        ;   XREF to: 00574440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00574440(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 004803b8
    JMP 0x00480176                      ; 004803bb
        ;   XREF to: 00480176 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESI + 0x9ac]         ; 004803c0
        ;   Label: LAB_004803c0
    FLDZ                                ; 004803c6
    FCOMPP                              ; 004803c8
    FNSTSW AX                           ; 004803ca
    SAHF                                ; 004803cc
    JNC 0x00480176                      ; 004803cd
        ;   XREF to: 00480176 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [ESI + 0x2e0],0x0     ; 004803d3
    MOV ECX,dword ptr [ESI + 0x9c8]     ; 004803dd
    MOV dword ptr [ESI + 0x9ac],0x0     ; 004803e3
    TEST ECX,ECX                        ; 004803ed
    JZ 0x004803fb                       ; 004803ef
        ;   XREF to: 004803fb (CONDITIONAL_JUMP)  ; LAB_004803fb
    MOV dword ptr [ESI + 0x9c8],0x2     ; 004803f1
    PUSH ESI                            ; 004803fb
        ;   Label: LAB_004803fb
    MOV EBX,dword ptr [0x006810c8]      ; 004803fc | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00480402 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_00574440 ; 00480403
        ;   XREF to: 00574440 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_00574440(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00480408
    JMP 0x00480176                      ; 0048040b
        ;   XREF to: 00480176 (UNCONDITIONAL_JUMP)  ; default
    CMP byte ptr [ESI + 0x414],0x0      ; 00480410
        ;   Label: LAB_00480410
    JZ 0x004801a8                       ; 00480417
        ;   XREF to: 004801a8 (CONDITIONAL_JUMP)  ; LAB_004801a8
    LEA EAX,[ESI + 0x414]               ; 0048041d
    PUSH EAX                            ; 00480423
    MOV EAX,[0x006793d0]                ; 00480424 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 00480429 | g_CEventListInstance
    JMP 0x004801a0                      ; 0048042a
        ;   XREF to: 004801a0 (UNCONDITIONAL_JUMP)  ; LAB_004801a0
    MOV EDX,dword ptr [ESP + 0xb8]      ; 0048042f
        ;   Label: LAB_0048042f
    INC EDX                             ; 00480436
    ADD EDI,0x4                         ; 00480437
    MOV dword ptr [ESP + 0xb8],EDX      ; 0048043a
    JMP 0x004801fa                      ; 00480441
        ;   XREF to: 004801fa (UNCONDITIONAL_JUMP)  ; LAB_004801fa
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c] ; 00480446 | g_CDemonSetInstance.characters[0]
        ;   Label: LAB_00480446
    MOV EAX,ESP                         ; 0048044d
    PUSH EAX                            ; 0048044f
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 00480450
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00480455
    MOV EAX,ESP                         ; 00480458
    PUSH EAX                            ; 0048045a
    MOV EDX,dword ptr [EBX + 0x154]     ; 0048045b
    PUSH EBX                            ; 00480461
    CALL dword ptr [EDX + 0x34]         ; 00480462
    ADD ESP,0x8                         ; 00480465
    CMP EAX,0x2                         ; 00480468
    JNZ 0x0048042f                      ; 0048046b
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x14]          ; 0048046d
    FADD float ptr [EBX + 0x24]         ; 00480471
    FLD float ptr [ESI + 0x24]          ; 00480474
    FADD float ptr [ESP + 0x38]         ; 00480477
    FCOMPP                              ; 0048047b
    FNSTSW AX                           ; 0048047d
    SAHF                                ; 0048047f
    JC 0x0048042f                       ; 00480480
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x18]          ; 00480482
    FADD float ptr [EBX + 0x24]         ; 00480486
    FLD float ptr [ESI + 0x24]          ; 00480489
    FADD float ptr [ESP + 0x2c]         ; 0048048c
    FCOMPP                              ; 00480490
    FNSTSW AX                           ; 00480492
    SAHF                                ; 00480494
    JA 0x0048042f                       ; 00480495
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [EBX + 0x20]          ; 00480497
    LEA EAX,[ESP + 0x4c]                ; 0048049a
    FSUB float ptr [EBP]                ; 0048049e
    PUSH EAX                            ; 004804a1
    FSTP float ptr [ESP + 0x50]         ; 004804a2
    LEA EAX,[ESP + 0x44]                ; 004804a6
    FLD float ptr [EBX + 0x24]          ; 004804aa
    PUSH EAX                            ; 004804ad
    FSUB float ptr [EBP + 0x4]          ; 004804ae
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004804b1
    FSTP float ptr [ESP + 0x58]         ; 004804b8
    FLD float ptr [EBX + 0x28]          ; 004804bc
    FSUB float ptr [EBP + 0x8]          ; 004804bf
    PUSH EAX                            ; 004804c2
    FSTP float ptr [ESP + 0x60]         ; 004804c3
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 004804c7
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EBX,EAX                         ; 004804cc
    LEA EAX,[ESP + 0x70]                ; 004804ce
    ADD ESP,0xc                         ; 004804d2
    CMP EAX,EBX                         ; 004804d5
    JZ 0x004804ed                       ; 004804d7
        ;   XREF to: 004804ed (CONDITIONAL_JUMP)  ; LAB_004804ed
    MOV EAX,dword ptr [EBX]             ; 004804d9
    MOV dword ptr [ESP + 0x64],EAX      ; 004804db
    MOV EAX,dword ptr [EBX + 0x4]       ; 004804df
    MOV dword ptr [ESP + 0x68],EAX      ; 004804e2
    MOV EAX,dword ptr [EBX + 0x8]       ; 004804e6
    MOV dword ptr [ESP + 0x6c],EAX      ; 004804e9
    FLD float ptr [ESP + 0x64]          ; 004804ed
        ;   Label: LAB_004804ed
    FADD float ptr [ESP + 0x1c]         ; 004804f1
    FST float ptr [ESP + 0x88]          ; 004804f5
    FCOMP float ptr [ESP + 0x28]        ; 004804fc
    FNSTSW AX                           ; 00480500
    SAHF                                ; 00480502
    JC 0x0048042f                       ; 00480503
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x64]          ; 00480509
    FSUB float ptr [ESP + 0x1c]         ; 0048050d
    FST float ptr [ESP + 0x8c]          ; 00480511
    FCOMP float ptr [ESP + 0x34]        ; 00480518
    FNSTSW AX                           ; 0048051c
    SAHF                                ; 0048051e
    JA 0x0048042f                       ; 0048051f
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x6c]          ; 00480525
    FADD float ptr [ESP + 0x1c]         ; 00480529
    FST float ptr [ESP + 0x90]          ; 0048052d
    FCOMP float ptr [ESP + 0x30]        ; 00480534
    FNSTSW AX                           ; 00480538
    SAHF                                ; 0048053a
    JC 0x0048042f                       ; 0048053b
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x6c]          ; 00480541
    FSUB float ptr [ESP + 0x1c]         ; 00480545
    FST float ptr [ESP + 0x94]          ; 00480549
    FCOMP float ptr [ESP + 0x3c]        ; 00480550
    FNSTSW AX                           ; 00480554
    SAHF                                ; 00480556
    JA 0x0048042f                       ; 00480557
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x8c]          ; 0048055d
    FCOMP float ptr [ESP + 0x28]        ; 00480564
    FNSTSW AX                           ; 00480568
    SAHF                                ; 0048056a
    JC 0x004805d5                       ; 0048056b
        ;   XREF to: 004805d5 (CONDITIONAL_JUMP)  ; LAB_004805d5
    FLD float ptr [ESP + 0x88]          ; 0048056d
    FCOMP float ptr [ESP + 0x34]        ; 00480574
    FNSTSW AX                           ; 00480578
    SAHF                                ; 0048057a
    JA 0x004805d5                       ; 0048057b
        ;   XREF to: 004805d5 (CONDITIONAL_JUMP)  ; LAB_004805d5
    FLD float ptr [ESP + 0x94]          ; 0048057d
    FCOMP float ptr [ESP + 0x30]        ; 00480584
    FNSTSW AX                           ; 00480588
    SAHF                                ; 0048058a
    JC 0x004805d5                       ; 0048058b
        ;   XREF to: 004805d5 (CONDITIONAL_JUMP)  ; LAB_004805d5
    FLD float ptr [ESP + 0x90]          ; 0048058d
    FCOMP float ptr [ESP + 0x3c]        ; 00480594
    FNSTSW AX                           ; 00480598
    SAHF                                ; 0048059a
    JA 0x004805d5                       ; 0048059b
        ;   XREF to: 004805d5 (CONDITIONAL_JUMP)  ; LAB_004805d5
    LEA EDX,[ESI + 0x20]                ; 0048059d
        ;   Label: LAB_0048059d
    MOV EAX,dword ptr [ESP + 0x58]      ; 004805a0
    MOV dword ptr [EDX],EAX             ; 004805a4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004805a6
    MOV dword ptr [EDX + 0x4],EAX       ; 004805aa
    MOV EAX,dword ptr [ESP + 0x60]      ; 004805ad
    MOV dword ptr [EDX + 0x8],EAX       ; 004805b1
    MOV EAX,dword ptr [ESP + 0x80]      ; 004805b4
    PUSH ESI                            ; 004805bb
    MOV dword ptr [ESI + 0x9ac],EAX     ; 004805bc
    CALL core_door.cpp_CDoor_reposition_FUN_0047fd20 ; 004805c2
        ;   XREF to: 0047fd20 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004805c7
    ADD ESP,0xc0                        ; 004805ca
    POP EBP                             ; 004805d0
    POP EDI                             ; 004805d1
    POP ESI                             ; 004805d2
    POP EBX                             ; 004805d3
    RET                                 ; 004805d4
    FLD float ptr [ESP + 0x1c]          ; 004805d5
        ;   Label: LAB_004805d5
    FMUL ST0                            ; 004805d9
    FLD float ptr [ESP + 0x34]          ; 004805db
    FSUB float ptr [ESP + 0x64]         ; 004805df
    FMUL ST0                            ; 004805e3
    FXCH                                ; 004805e5
    FSTP float ptr [ESP + 0xbc]         ; 004805e7
    FSUBR float ptr [ESP + 0xbc]        ; 004805ee
    FSQRT                               ; 004805f5
    FLD float ptr [ESP + 0x6c]          ; 004805f7
    FLD ST0                             ; 004805fb
    FADD ST0,ST2                        ; 004805fd
    FXCH                                ; 004805ff
    FSUBRP ST2,ST0                      ; 00480601
    FSTP float ptr [ESP + 0x9c]         ; 00480603
    FSTP float ptr [ESP + 0xa0]         ; 0048060a
    FLD float ptr [ESP + 0x9c]          ; 00480611
    FCOMP float ptr [ESP + 0x30]        ; 00480618
    FNSTSW AX                           ; 0048061c
    SAHF                                ; 0048061e
    JC 0x00480635                       ; 0048061f
        ;   XREF to: 00480635 (CONDITIONAL_JUMP)  ; LAB_00480635
    FLD float ptr [ESP + 0x9c]          ; 00480621
    FCOMP float ptr [ESP + 0x3c]        ; 00480628
    FNSTSW AX                           ; 0048062c
    SAHF                                ; 0048062e
    JBE 0x0048059d                      ; 0048062f
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0xa0]          ; 00480635
        ;   Label: LAB_00480635
    FCOMP float ptr [ESP + 0x30]        ; 0048063c
    FNSTSW AX                           ; 00480640
    SAHF                                ; 00480642
    JC 0x00480659                       ; 00480643
        ;   XREF to: 00480659 (CONDITIONAL_JUMP)  ; LAB_00480659
    FLD float ptr [ESP + 0xa0]          ; 00480645
    FCOMP float ptr [ESP + 0x3c]        ; 0048064c
    FNSTSW AX                           ; 00480650
    SAHF                                ; 00480652
    JBE 0x0048059d                      ; 00480653
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0x28]          ; 00480659
        ;   Label: LAB_00480659
    FSUB float ptr [ESP + 0x64]         ; 0048065d
    FMUL ST0                            ; 00480661
    FSUBR float ptr [ESP + 0xbc]        ; 00480663
    FSQRT                               ; 0048066a
    FLD float ptr [ESP + 0x6c]          ; 0048066c
    FLD ST0                             ; 00480670
    FADD ST0,ST2                        ; 00480672
    FXCH                                ; 00480674
    FSUBRP ST2,ST0                      ; 00480676
    FSTP float ptr [ESP + 0xac]         ; 00480678
    FSTP float ptr [ESP + 0xb4]         ; 0048067f
    FLD float ptr [ESP + 0xac]          ; 00480686
    FCOMP float ptr [ESP + 0x30]        ; 0048068d
    FNSTSW AX                           ; 00480691
    SAHF                                ; 00480693
    JC 0x004806aa                       ; 00480694
        ;   XREF to: 004806aa (CONDITIONAL_JUMP)  ; LAB_004806aa
    FLD float ptr [ESP + 0xac]          ; 00480696
    FCOMP float ptr [ESP + 0x3c]        ; 0048069d
    FNSTSW AX                           ; 004806a1
    SAHF                                ; 004806a3
    JBE 0x0048059d                      ; 004806a4
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0xb4]          ; 004806aa
        ;   Label: LAB_004806aa
    FCOMP float ptr [ESP + 0x30]        ; 004806b1
    FNSTSW AX                           ; 004806b5
    SAHF                                ; 004806b7
    JC 0x004806ce                       ; 004806b8
        ;   XREF to: 004806ce (CONDITIONAL_JUMP)  ; LAB_004806ce
    FLD float ptr [ESP + 0xb4]          ; 004806ba
    FCOMP float ptr [ESP + 0x3c]        ; 004806c1
    FNSTSW AX                           ; 004806c5
    SAHF                                ; 004806c7
    JBE 0x0048059d                      ; 004806c8
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0x3c]          ; 004806ce
        ;   Label: LAB_004806ce
    FSUB float ptr [ESP + 0x6c]         ; 004806d2
    FMUL ST0                            ; 004806d6
    FSUBR float ptr [ESP + 0xbc]        ; 004806d8
    FSQRT                               ; 004806df
    FLD float ptr [ESP + 0x64]          ; 004806e1
    FLD ST0                             ; 004806e5
    FADD ST0,ST2                        ; 004806e7
    FXCH                                ; 004806e9
    FSUBRP ST2,ST0                      ; 004806eb
    FSTP float ptr [ESP + 0xa8]         ; 004806ed
    FSTP float ptr [ESP + 0xb0]         ; 004806f4
    FLD float ptr [ESP + 0xa8]          ; 004806fb
    FCOMP float ptr [ESP + 0x28]        ; 00480702
    FNSTSW AX                           ; 00480706
    SAHF                                ; 00480708
    JC 0x0048071f                       ; 00480709
        ;   XREF to: 0048071f (CONDITIONAL_JUMP)  ; LAB_0048071f
    FLD float ptr [ESP + 0xa8]          ; 0048070b
    FCOMP float ptr [ESP + 0x34]        ; 00480712
    FNSTSW AX                           ; 00480716
    SAHF                                ; 00480718
    JBE 0x0048059d                      ; 00480719
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0xb0]          ; 0048071f
        ;   Label: LAB_0048071f
    FCOMP float ptr [ESP + 0x28]        ; 00480726
    FNSTSW AX                           ; 0048072a
    SAHF                                ; 0048072c
    JC 0x00480743                       ; 0048072d
        ;   XREF to: 00480743 (CONDITIONAL_JUMP)  ; LAB_00480743
    FLD float ptr [ESP + 0xb0]          ; 0048072f
    FCOMP float ptr [ESP + 0x34]        ; 00480736
    FNSTSW AX                           ; 0048073a
    SAHF                                ; 0048073c
    JBE 0x0048059d                      ; 0048073d
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0x30]          ; 00480743
        ;   Label: LAB_00480743
    FSUB float ptr [ESP + 0x6c]         ; 00480747
    FMUL ST0                            ; 0048074b
    FSUBR float ptr [ESP + 0xbc]        ; 0048074d
    FSQRT                               ; 00480754
    FLD float ptr [ESP + 0x64]          ; 00480756
    FLD ST0                             ; 0048075a
    FADD ST0,ST2                        ; 0048075c
    FXCH                                ; 0048075e
    FSUBRP ST2,ST0                      ; 00480760
    FSTP float ptr [ESP + 0xa4]         ; 00480762
    FSTP float ptr [ESP + 0x98]         ; 00480769
    FLD float ptr [ESP + 0xa4]          ; 00480770
    FCOMP float ptr [ESP + 0x28]        ; 00480777
    FNSTSW AX                           ; 0048077b
    SAHF                                ; 0048077d
    JC 0x00480794                       ; 0048077e
        ;   XREF to: 00480794 (CONDITIONAL_JUMP)  ; LAB_00480794
    FLD float ptr [ESP + 0xa4]          ; 00480780
    FCOMP float ptr [ESP + 0x34]        ; 00480787
    FNSTSW AX                           ; 0048078b
    SAHF                                ; 0048078d
    JBE 0x0048059d                      ; 0048078e
        ;   XREF to: 0048059d (CONDITIONAL_JUMP)  ; LAB_0048059d
    FLD float ptr [ESP + 0x98]          ; 00480794
        ;   Label: LAB_00480794
    FCOMP float ptr [ESP + 0x28]        ; 0048079b
    FNSTSW AX                           ; 0048079f
    SAHF                                ; 004807a1
    JC 0x0048042f                       ; 004807a2
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    FLD float ptr [ESP + 0x98]          ; 004807a8
    FCOMP float ptr [ESP + 0x34]        ; 004807af
    FNSTSW AX                           ; 004807b3
    SAHF                                ; 004807b5
    JA 0x0048042f                       ; 004807b6
        ;   XREF to: 0048042f (CONDITIONAL_JUMP)  ; LAB_0048042f
    JMP 0x0048059d                      ; 004807bc
        ;   XREF to: 0048059d (UNCONDITIONAL_JUMP)  ; LAB_0048059d

