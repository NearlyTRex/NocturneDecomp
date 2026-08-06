; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   poly_count
; int              Stack[0x10]:4   texture_count
; int              Stack[0x14]:4   part_count
; int              Stack[0x18]:4   frame_count
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0 at 0045285f
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990 at 00452a74
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057cb76
;   TerminatedCString s_Too_many_materials_0057cb89
;   TerminatedCString s_core_dmodel_cpp_0057cb9d
;   TerminatedCString s_Too_many_parts_0057cbb0
;   TerminatedCString s_core_dmodel_cpp_0057cbc0
;   TerminatedCString s_Out_of_memory_in_CKeyFra_0057cbd3
;   TerminatedCString s_core_dmodel_cpp_0057cc2c
;   TerminatedCString s_Out_of_memory_for_vertex_0057cc3f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_FUN_00452f10
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004533e0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
    PUSH ESI                            ; 004533e1
    PUSH EDI                            ; 004533e2
    PUSH EBP                            ; 004533e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004533e4
    PUSH EBX                            ; 004533e8
    CALL core_dmodel.cpp_CKeyFramedModel_FUN_00452f10 ; 004533e9
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004533ee
    MOV EAX,dword ptr [ESP + 0x18]      ; 004533f1
    MOV dword ptr [EBX + 0x104],EAX     ; 004533f5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004533fb
    MOV dword ptr [EBX + 0x110],EAX     ; 004533ff
    MOV EAX,dword ptr [ESP + 0x20]      ; 00453405
    MOV dword ptr [EBX + 0x120],EAX     ; 00453409
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045340f
    MOV dword ptr [EBX + 0x244],EAX     ; 00453413
    MOV EAX,dword ptr [ESP + 0x28]      ; 00453419
    MOV EDX,dword ptr [EBX + 0x120]     ; 0045341d
    MOV dword ptr [EBX + 0x100],EAX     ; 00453423
    CMP EDX,0x4                         ; 00453429
    JG 0x0045354b                       ; 0045342c
        ;   XREF to: 0045354b (CONDITIONAL_JUMP)  ; LAB_0045354b
    CMP dword ptr [EBX + 0x244],0x1e    ; 00453432
        ;   Label: LAB_00453432
    JLE 0x0045345d                      ; 00453439
        ;   XREF to: 0045345d (CONDITIONAL_JUMP)  ; LAB_0045345d
    MOV EBP,0x57cb9d                    ; 0045343b | = "..\\core\\dmodel.cpp"
    MOV EAX,0x2c1                       ; 00453440
    PUSH 0x57cbb0                       ; 00453445 | = "Too many parts!"
    MOV dword ptr [0x01cc4800],EBP      ; 0045344a | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 00453450 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00453455
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0045345a
    MOV EAX,dword ptr [EBX + 0x104]     ; 0045345d
        ;   Label: LAB_0045345d
    MOV EDX,dword ptr [EBX + 0x100]     ; 00453463
    IMUL EDX,EAX                        ; 00453469
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045346c
    SUB EAX,EDX                         ; 00453473
    SHL EAX,0x2                         ; 00453475
    PUSH EAX                            ; 00453478
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 00453479
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    MOV EDX,dword ptr [EBX + 0x110]     ; 0045347e
    MOV dword ptr [EBX + 0x10c],EAX     ; 00453484
    LEA EAX,[EDX*0x8 + 0x0]             ; 0045348a
    ADD EAX,EDX                         ; 00453491
    ADD ESP,0x4                         ; 00453493
    SHL EAX,0x3                         ; 00453496
    PUSH EAX                            ; 00453499
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0045349a
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    MOV dword ptr [EBX + 0x114],EAX     ; 0045349f
    MOV EAX,dword ptr [EBX + 0x110]     ; 004534a5
    ADD ESP,0x4                         ; 004534ab
    SHL EAX,0x2                         ; 004534ae
    PUSH EAX                            ; 004534b1
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004534b2
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    MOV ESI,dword ptr [EBX + 0x100]     ; 004534b7
    MOV dword ptr [EBX + 0x118],EAX     ; 004534bd
    LEA EAX,[ESI*0x4 + 0x0]             ; 004534c3
    SUB EAX,ESI                         ; 004534ca
    SHL EAX,0x3                         ; 004534cc
    ADD ESP,0x4                         ; 004534cf
    ADD EAX,0x4                         ; 004534d2
    PUSH EAX                            ; 004534d5
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004534d6
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 004534db
    TEST EAX,EAX                        ; 004534de
    JZ 0x004534e8                       ; 004534e0
        ;   XREF to: 004534e8 (CONDITIONAL_JUMP)  ; LAB_004534e8
    ADD EAX,0x4                         ; 004534e2
    MOV dword ptr [EAX + -0x4],ESI      ; 004534e5
    MOV ECX,dword ptr [EBX + 0x10c]     ; 004534e8
        ;   Label: LAB_004534e8
    MOV dword ptr [EBX + 0x350],EAX     ; 004534ee
    TEST ECX,ECX                        ; 004534f4
    JNZ 0x00453573                      ; 004534f6
        ;   XREF to: 00453573 (CONDITIONAL_JUMP)  ; LAB_00453573
    PUSH EBX                            ; 004534f8
        ;   Label: LAB_004534f8
    CALL core_dmodel.cpp_CKeyFramedModel_FUN_00452f10 ; 004534f9
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_FUN_00452f10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 004534fe
    MOV EDI,dword ptr [EBX + 0x110]     ; 00453501
    PUSH EDI                            ; 00453507
    MOV EBP,dword ptr [EBX + 0x104]     ; 00453508
    PUSH EBP                            ; 0045350e
    MOV EAX,dword ptr [EBX + 0x100]     ; 0045350f
    PUSH EAX                            ; 00453515
    MOV ESI,0x2d3                       ; 00453516
    MOV ECX,0x57cbc0                    ; 0045351b | = "..\\core\\dmodel.cpp"
    PUSH 0x57cbd3                       ; 00453520 | = "Out of memory in CKeyFramedModel::all..."
    MOV dword ptr [0x01cc4804],ESI      ; 00453525 | g_CurrentLineNumber
    MOV dword ptr [0x01cc4800],ECX      ; 0045352b | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00453531
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 00453536
    CMP dword ptr [EBX + 0x100],0x1     ; 00453539
    JZ 0x004535ba                       ; 00453540
        ;   XREF to: 004535ba (CONDITIONAL_JUMP)  ; LAB_004535ba
    POP EBP                             ; 00453546
        ;   Label: LAB_00453546
    POP EDI                             ; 00453547
    POP ESI                             ; 00453548
    POP EBX                             ; 00453549
    RET                                 ; 0045354a
    MOV ECX,0x57cb76                    ; 0045354b | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0045354b
    MOV ESI,0x2c0                       ; 00453550
    PUSH 0x57cb89                       ; 00453555 | = "Too many materials!"
    MOV dword ptr [0x01cc4800],ECX      ; 0045355a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00453560 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00453566
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0045356b
    JMP 0x00453432                      ; 0045356e
        ;   XREF to: 00453432 (UNCONDITIONAL_JUMP)  ; LAB_00453432
    CMP dword ptr [EBX + 0x110],0x0     ; 00453573
        ;   Label: LAB_00453573
    JLE 0x00453589                      ; 0045357a
        ;   XREF to: 00453589 (CONDITIONAL_JUMP)  ; LAB_00453589
    CMP dword ptr [EBX + 0x114],0x0     ; 0045357c
    JZ 0x004534f8                       ; 00453583
        ;   XREF to: 004534f8 (CONDITIONAL_JUMP)  ; LAB_004534f8
    CMP dword ptr [EBX + 0x110],0x0     ; 00453589
        ;   Label: LAB_00453589
    JLE 0x0045359f                      ; 00453590
        ;   XREF to: 0045359f (CONDITIONAL_JUMP)  ; LAB_0045359f
    CMP dword ptr [EBX + 0x118],0x0     ; 00453592
    JZ 0x004534f8                       ; 00453599
        ;   XREF to: 004534f8 (CONDITIONAL_JUMP)  ; LAB_004534f8
    CMP dword ptr [EBX + 0x350],0x0     ; 0045359f
        ;   Label: LAB_0045359f
    JZ 0x004534f8                       ; 004535a6
        ;   XREF to: 004534f8 (CONDITIONAL_JUMP)  ; LAB_004534f8
    CMP dword ptr [EBX + 0x100],0x1     ; 004535ac
    JZ 0x004535ba                       ; 004535b3
        ;   XREF to: 004535ba (CONDITIONAL_JUMP)  ; LAB_004535ba
    POP EBP                             ; 004535b5
    POP EDI                             ; 004535b6
    POP ESI                             ; 004535b7
    POP EBX                             ; 004535b8
    RET                                 ; 004535b9
    MOV EDX,dword ptr [EBX + 0x104]     ; 004535ba
        ;   Label: LAB_004535ba
    LEA EAX,[EDX*0x4 + 0x0]             ; 004535c0
    SUB EAX,EDX                         ; 004535c7
    SHL EAX,0x2                         ; 004535c9
    PUSH EAX                            ; 004535cc
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004535cd
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 004535d2
    MOV dword ptr [EBX + 0x108],EAX     ; 004535d5
    TEST EAX,EAX                        ; 004535db
    JNZ 0x00453546                      ; 004535dd
        ;   XREF to: 00453546 (CONDITIONAL_JUMP)  ; LAB_00453546
    MOV EBP,dword ptr [EBX + 0x104]     ; 004535e3
    PUSH EBP                            ; 004535e9
    MOV ESI,0x57cc2c                    ; 004535ea | = "..\\core\\dmodel.cpp"
    MOV EDI,0x2db                       ; 004535ef
    PUSH 0x57cc3f                       ; 004535f4 | = "Out of memory for vertex normals in C..."
    MOV dword ptr [0x01cc4800],ESI      ; 004535f9 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 004535ff | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00453605
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 0045360a
    POP EBP                             ; 0045360d
    POP EDI                             ; 0045360e
    POP ESI                             ; 0045360f
    POP EBX                             ; 00453610
    RET                                 ; 00453611

