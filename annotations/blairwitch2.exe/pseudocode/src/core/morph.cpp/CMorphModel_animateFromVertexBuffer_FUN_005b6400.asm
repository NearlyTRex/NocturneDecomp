; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3i *      Stack[0xc]:4   vertex_buffer
; int              Stack[0x10]:4   start_offset
; int              Stack[0x14]:4   vertex_count
;
; XREF[4]:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 at 005b6195
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200 at 005b62db
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510 at 005b6551
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560 at 005b6588
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f15ad
;   TerminatedCString s_CMorphModel_animate_inva_005f15bf
;   TerminatedCString s_core_morph_cpp_005f15e9
;   TerminatedCString s_CMorphModel_animate_inva_005f15fb
;   undefined4 DAT_006013a8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6400
        ;   Label: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
    PUSH ESI                            ; 005b6401
    PUSH EDI                            ; 005b6402
    PUSH EBP                            ; 005b6403
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b6404
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b6408
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b640c
    TEST EBX,EBX                        ; 005b6410
    JL 0x005b641c                       ; 005b6412
        ;   XREF to: 005b641c (CONDITIONAL_JUMP)  ; LAB_005b641c
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b6414
    CMP EBX,dword ptr [EDX]             ; 005b6418
    JL 0x005b643e                       ; 005b641a
        ;   XREF to: 005b643e (CONDITIONAL_JUMP)  ; LAB_005b643e
    MOV ESI,0x5f15ad                    ; 005b641c | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b641c
    MOV EAX,0x112                       ; 005b6421
    PUSH 0x5f15bf                       ; 005b6426 | = "CMorphModel::animate - invalid part i..."
    MOV dword ptr [0x01d046a0],ESI      ; 005b642b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005b6431 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b6436
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b643b
    MOV ECX,EBX                         ; 005b643e
        ;   Label: LAB_005b643e
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b6440
    SHL ECX,0x4                         ; 005b6444
    ADD ECX,EDX                         ; 005b6447
    MOV EBX,dword ptr [ECX + 0xc]       ; 005b6449
    MOV ESI,dword ptr [ECX + 0x4]       ; 005b644c
    ADD EDI,EBX                         ; 005b644f
    LEA EDX,[EBX + ESI*0x1]             ; 005b6451
    LEA ECX,[EDI + EBP*0x1]             ; 005b6454
    CMP ECX,EDX                         ; 005b6457
    JLE 0x005b647d                      ; 005b6459
        ;   XREF to: 005b647d (CONDITIONAL_JUMP)  ; LAB_005b647d
    MOV EAX,0x5f15e9                    ; 005b645b | = "..\\core\\morph.cpp"
    MOV EDX,0x119                       ; 005b6460
    PUSH 0x5f15fb                       ; 005b6465 | = "CMorphModel::animate - invalid vertex..."
    MOV [0x01d046a0],EAX                ; 005b646a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005b646f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b6475
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b647a
    XOR ECX,ECX                         ; 005b647d
        ;   Label: LAB_005b647d
    TEST EBP,EBP                        ; 005b647f
    JLE 0x005b64d0                      ; 005b6481
        ;   XREF to: 005b64d0 (CONDITIONAL_JUMP)  ; LAB_005b64d0
    MOV ESI,EDI                         ; 005b6483
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b6485
    SHL ESI,0x4                         ; 005b6489
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b648c
        ;   Label: LAB_005b648c
    MOV EAX,EDX                         ; 005b6490
    MOV EBX,dword ptr [EBX + 0x58]      ; 005b6492
    INC EDI                             ; 005b6495
    ADD EBX,ESI                         ; 005b6496
    INC ECX                             ; 005b6498
    ADD EBX,0x4                         ; 005b6499
    ADD EDX,0xc                         ; 005b649c
    FILD dword ptr [EAX]                ; 005b649f
    FMUL float ptr [0x006013a8]         ; 005b64a1 | DAT_006013a8
    FSTP float ptr [EBX]                ; 005b64a7
    FILD dword ptr [EAX + 0x4]          ; 005b64a9
    FMUL float ptr [0x006013a8]         ; 005b64ac | DAT_006013a8
    FSTP float ptr [EBX + 0x4]          ; 005b64b2
    FILD dword ptr [EAX + 0x8]          ; 005b64b5
    FMUL float ptr [0x006013a8]         ; 005b64b8 | DAT_006013a8
    FSTP float ptr [EBX + 0x8]          ; 005b64be
    ADD ESI,0x10                        ; 005b64c1
    CMP ECX,EBP                         ; 005b64c4
    JL 0x005b648c                       ; 005b64c6
        ;   XREF to: 005b648c (CONDITIONAL_JUMP)  ; LAB_005b648c
    LEA EAX,[EAX]                       ; 005b64c8
    MOV EDX,EDX                         ; 005b64ce
    POP EBP                             ; 005b64d0
        ;   Label: LAB_005b64d0
    POP EDI                             ; 005b64d1
    POP ESI                             ; 005b64d2
    POP EBX                             ; 005b64d3
    RET                                 ; 005b64d4

