; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004442a0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350 at 0045197e
;
; Referenced Globals:
;   undefined4 DAT_012b022c
;   undefined4 DAT_012b0230
;   undefined4 DAT_012b0660
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004442a0
        ;   Label: FUN_004442a0
    PUSH ESI                            ; 004442a1
    PUSH EDI                            ; 004442a2
    PUSH EBP                            ; 004442a3
    MOV EBP,ESP                         ; 004442a4
    SUB ESP,0x1c                        ; 004442a6
    MOV EDI,dword ptr [EBP + 0x18]      ; 004442a9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004442ac
    SUB EDX,dword ptr [0x01c00c5c]      ; 004442af | DAT_01c00c5c
    MOV ECX,dword ptr [0x012b0660]      ; 004442b5 | DAT_012b0660
    MOV dword ptr [EBP + 0x14],EDX      ; 004442bb
    CMP ECX,0x1                         ; 004442be
    JNZ 0x004442cd                      ; 004442c1
        ;   XREF to: 004442cd (CONDITIONAL_JUMP)  ; LAB_004442cd
    TEST byte ptr [EBP + 0x14],0x1      ; 004442c3
    JNZ 0x00444436                      ; 004442c7
        ;   XREF to: 00444436 (CONDITIONAL_JUMP)  ; LAB_00444436
    CMP dword ptr [0x012b0660],0x2      ; 004442cd | DAT_012b0660
        ;   Label: LAB_004442cd
    JNZ 0x004442e0                      ; 004442d4
        ;   XREF to: 004442e0 (CONDITIONAL_JUMP)  ; LAB_004442e0
    TEST byte ptr [EBP + 0x14],0x3      ; 004442d6
    JNZ 0x00444436                      ; 004442da
        ;   XREF to: 00444436 (CONDITIONAL_JUMP)  ; LAB_00444436
    MOV ESI,dword ptr [EBP + 0x14]      ; 004442e0
        ;   Label: LAB_004442e0
    MOV CL,byte ptr [0x012b0660]        ; 004442e3 | DAT_012b0660
    SAR ESI,CL                          ; 004442e9
    MOV dword ptr [EBP + 0x14],ESI      ; 004442eb
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004442ee
    MOV EAX,[0x01c00c58]                ; 004442f1 | DAT_01c00c58
    MOV EBX,dword ptr [EDI + 0x8]       ; 004442f6
    MOV ESI,dword ptr [ESI + 0x8]       ; 004442f9
    SAR EBX,0x10                        ; 004442fc
    SAR ESI,0x10                        ; 004442ff
    SUB EBX,EAX                         ; 00444302
    SUB ESI,EAX                         ; 00444304
    SAR EBX,CL                          ; 00444306
    SAR ESI,CL                          ; 00444308
    CMP EBX,ESI                         ; 0044430a
    JLE 0x0044431c                      ; 0044430c
        ;   XREF to: 0044431c (CONDITIONAL_JUMP)  ; LAB_0044431c
    MOV EAX,EBX                         ; 0044430e
    MOV EBX,ESI                         ; 00444310
    MOV ESI,EAX                         ; 00444312
    MOV EAX,EDI                         ; 00444314
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00444316
    MOV dword ptr [EBP + 0x1c],EAX      ; 00444319
    MOV EAX,dword ptr [EDI + 0x28]      ; 0044431c
        ;   Label: LAB_0044431c
    MOV EDX,EAX                         ; 0044431f
    SAR EDX,0x1f                        ; 00444321
    SHL EDX,0x8                         ; 00444324
    SBB EAX,EDX                         ; 00444327
    SAR EAX,0x8                         ; 00444329
    MOV dword ptr [EBP + -0x1c],EAX     ; 0044432c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044432f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00444332
    MOV EDX,dword ptr [EDX + 0x28]      ; 00444335
    MOV EAX,dword ptr [EAX + 0x28]      ; 00444338
    SAR EDX,0x1f                        ; 0044433b
    SHL EDX,0x8                         ; 0044433e
    SBB EAX,EDX                         ; 00444341
    SAR EAX,0x8                         ; 00444343
    MOV ECX,EAX                         ; 00444346
    MOV EAX,dword ptr [EDI + 0x28]      ; 00444348
    MOV EDX,EAX                         ; 0044434b
    SAR EDX,0x1f                        ; 0044434d
    SHL EDX,0x8                         ; 00444350
    SBB EAX,EDX                         ; 00444353
    SAR EAX,0x8                         ; 00444355
    MOV EDX,ECX                         ; 00444358
    MOV ECX,ESI                         ; 0044435a
    SUB EDX,EAX                         ; 0044435c
    SUB ECX,EBX                         ; 0044435e
    MOV EAX,EDX                         ; 00444360
    INC ECX                             ; 00444362
    SAR EDX,0x1f                        ; 00444363
    IDIV ECX                            ; 00444366
    MOV dword ptr [EBP + -0x18],EAX     ; 00444368
    MOV EAX,dword ptr [EDI + 0x10]      ; 0044436b
    MOV dword ptr [EBP + -0x14],EAX     ; 0044436e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00444371
    MOV EDX,dword ptr [EDX + 0x10]      ; 00444374
    SUB EDX,EAX                         ; 00444377
    MOV EAX,EDX                         ; 00444379
    SAR EDX,0x1f                        ; 0044437b
    IDIV ECX                            ; 0044437e
    MOV dword ptr [EBP + -0x10],EAX     ; 00444380
    MOV CL,byte ptr [0x012b0660]        ; 00444383 | DAT_012b0660
    MOV EDX,EBX                         ; 00444389
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044438b
    SHL EDX,CL                          ; 0044438e
    SHL EAX,CL                          ; 00444390
    SHL EDX,0x2                         ; 00444392
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 00444395 | DAT_01bd4260
    ADD EAX,EDX                         ; 0044439c
    MOV dword ptr [EBP + -0xc],EAX      ; 0044439e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004443a1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004443a4
    ADD EAX,EDX                         ; 004443ab
    SHL EAX,0x6                         ; 004443ad
    ADD EAX,0x12ceb78                   ; 004443b0
    ADD EAX,EBX                         ; 004443b5
    MOV dword ptr [EBP + -0x8],EAX      ; 004443b7
    SUB ESI,EBX                         ; 004443ba
    MOV dword ptr [EBP + -0x4],ESI      ; 004443bc
    MOV ECX,dword ptr [EBP + 0xfffffffc] ; 004443bf
    SHL ECX,0x2                         ; 004443c5
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 004443c8
    MOV EDI,dword ptr [0x012b0230]      ; 004443ce | DAT_012b0230
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 004443d4
    MOV EDX,dword ptr [EBP + 0xffffffec] ; 004443da
    MOV EAX,ECX                         ; 004443e0
        ;   Label: LAB_004443e0
    ADD EAX,dword ptr [EBP + 0xfffffff4] ; 004443e2
    CMP EBX,dword ptr [EAX]             ; 004443e8
    JLE 0x00444414                      ; 004443ea
        ;   XREF to: 00444414 (CONDITIONAL_JUMP)  ; LAB_00444414
    MOVZX EAX,byte ptr [ESI]            ; 004443ec
    SHL EAX,0x8                         ; 004443ef
    ADD EAX,EDX                         ; 004443f2
    ADD EAX,dword ptr [EDI + 0x12b0234] ; 004443f4
    ADD EDI,0x4                         ; 004443fa
    AND EDI,0x3fc                       ; 004443fd
    SHR EAX,0x8                         ; 00444403
    CMP EAX,0xff                        ; 00444406
    JC 0x00444412                       ; 0044440b
        ;   XREF to: 00444412 (CONDITIONAL_JUMP)  ; LAB_00444412
    MOV EAX,0xff                        ; 0044440d
    MOV byte ptr [ESI],AL               ; 00444412
        ;   Label: LAB_00444412
    ADD EDX,dword ptr [EBP + 0xfffffff0] ; 00444414
        ;   Label: LAB_00444414
    ADD EBX,dword ptr [EBP + 0xffffffe8] ; 0044441a
    INC ESI                             ; 00444420
    SUB ECX,0x4                         ; 00444421
    JG 0x004443e0                       ; 00444424
        ;   XREF to: 004443e0 (CONDITIONAL_JUMP)  ; LAB_004443e0
    MOV dword ptr [0x012b0230],EDI      ; 00444426 | DAT_012b0230
    MOV dword ptr [0x012b022c],0x1      ; 0044442c | DAT_012b022c
    MOV ESP,EBP                         ; 00444436
        ;   Label: LAB_00444436
    POP EBP                             ; 00444438
    POP EDI                             ; 00444439
    POP ESI                             ; 0044443a
    POP EBX                             ; 0044443b
    RET                                 ; 0044443c

