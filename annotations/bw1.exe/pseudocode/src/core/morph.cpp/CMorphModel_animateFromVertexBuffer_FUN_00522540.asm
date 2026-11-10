; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3i *      Stack[0xc]:4   vertex_buffer
; int              Stack[0x10]:4   start_offset
; int              Stack[0x14]:4   vertex_count
;
; XREF[4]:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0 at 005222d5
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340 at 0052241b
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_00522650 at 00522691
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0 at 005226c8
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea6c8
;   TerminatedCString s_CMorphModel_animate_inva_005ea6da
;   TerminatedCString s_core_morph_cpp_005ea704
;   TerminatedCString s_CMorphModel_animate_inva_005ea716
;   undefined4 DAT_00604268
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522540
        ;   Label: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
    PUSH ESI                            ; 00522541
    PUSH EDI                            ; 00522542
    PUSH EBP                            ; 00522543
    MOV EBX,dword ptr [ESP + 0x18]      ; 00522544
    MOV EDI,dword ptr [ESP + 0x20]      ; 00522548
    MOV EBP,dword ptr [ESP + 0x24]      ; 0052254c
    TEST EBX,EBX                        ; 00522550
    JL 0x0052255c                       ; 00522552
        ;   XREF to: 0052255c (CONDITIONAL_JUMP)  ; LAB_0052255c
    MOV EDX,dword ptr [ESP + 0x14]      ; 00522554
    CMP EBX,dword ptr [EDX]             ; 00522558
    JL 0x0052257e                       ; 0052255a
        ;   XREF to: 0052257e (CONDITIONAL_JUMP)  ; LAB_0052257e
    MOV ESI,0x5ea6c8                    ; 0052255c | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052255c
    MOV EAX,0x112                       ; 00522561
    PUSH 0x5ea6da                       ; 00522566 | = "CMorphModel::animate - invalid part i..."
    MOV dword ptr [0x01d1d400],ESI      ; 0052256b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00522571 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00522576
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052257b
    MOV ECX,EBX                         ; 0052257e
        ;   Label: LAB_0052257e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00522580
    SHL ECX,0x4                         ; 00522584
    ADD ECX,EDX                         ; 00522587
    MOV EBX,dword ptr [ECX + 0xc]       ; 00522589
    MOV ESI,dword ptr [ECX + 0x4]       ; 0052258c
    ADD EDI,EBX                         ; 0052258f
    LEA EDX,[EBX + ESI*0x1]             ; 00522591
    LEA ECX,[EDI + EBP*0x1]             ; 00522594
    CMP ECX,EDX                         ; 00522597
    JLE 0x005225bd                      ; 00522599
        ;   XREF to: 005225bd (CONDITIONAL_JUMP)  ; LAB_005225bd
    MOV EAX,0x5ea704                    ; 0052259b | = "..\\core\\morph.cpp"
    MOV EDX,0x119                       ; 005225a0
    PUSH 0x5ea716                       ; 005225a5 | = "CMorphModel::animate - invalid vertex..."
    MOV [0x01d1d400],EAX                ; 005225aa | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005225af | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005225b5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005225ba
    XOR ECX,ECX                         ; 005225bd
        ;   Label: LAB_005225bd
    TEST EBP,EBP                        ; 005225bf
    JLE 0x00522610                      ; 005225c1
        ;   XREF to: 00522610 (CONDITIONAL_JUMP)  ; LAB_00522610
    MOV ESI,EDI                         ; 005225c3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005225c5
    SHL ESI,0x4                         ; 005225c9
    MOV EBX,dword ptr [ESP + 0x14]      ; 005225cc
        ;   Label: LAB_005225cc
    MOV EAX,EDX                         ; 005225d0
    MOV EBX,dword ptr [EBX + 0x58]      ; 005225d2
    INC EDI                             ; 005225d5
    ADD EBX,ESI                         ; 005225d6
    INC ECX                             ; 005225d8
    ADD EBX,0x4                         ; 005225d9
    ADD EDX,0xc                         ; 005225dc
    FILD dword ptr [EAX]                ; 005225df
    FMUL float ptr [0x00604268]         ; 005225e1 | DAT_00604268
    FSTP float ptr [EBX]                ; 005225e7
    FILD dword ptr [EAX + 0x4]          ; 005225e9
    FMUL float ptr [0x00604268]         ; 005225ec | DAT_00604268
    FSTP float ptr [EBX + 0x4]          ; 005225f2
    FILD dword ptr [EAX + 0x8]          ; 005225f5
    FMUL float ptr [0x00604268]         ; 005225f8 | DAT_00604268
    FSTP float ptr [EBX + 0x8]          ; 005225fe
    ADD ESI,0x10                        ; 00522601
    CMP ECX,EBP                         ; 00522604
    JL 0x005225cc                       ; 00522606
        ;   XREF to: 005225cc (CONDITIONAL_JUMP)  ; LAB_005225cc
    LEA EAX,[EAX]                       ; 00522608
    MOV EDX,EDX                         ; 0052260e
    POP EBP                             ; 00522610
        ;   Label: LAB_00522610
    POP EDI                             ; 00522611
    POP ESI                             ; 00522612
    POP EBX                             ; 00522613
    RET                                 ; 00522614

