; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_00516410(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   clip_left
; int              Stack[0x14]:4   start_row
; int              Stack[0x18]:4   clip_right
; int              Stack[0x1c]:4   end_row
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_00516590 at 00516669
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516410
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00516410
    PUSH ESI                            ; 00516411
    PUSH EDI                            ; 00516412
    PUSH EBP                            ; 00516413
    SUB ESP,0x1c                        ; 00516414
    MOV EBP,dword ptr [ESP + 0x44]      ; 00516417
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051641b
    CMP dword ptr [EAX + 0x20],0x0      ; 0051641f
    JZ 0x0051642b                       ; 00516423
        ;   XREF to: 0051642b (CONDITIONAL_JUMP)  ; LAB_0051642b
    CMP dword ptr [EAX + 0x14],0x0      ; 00516425
    JNZ 0x00516433                      ; 00516429
        ;   XREF to: 00516433 (CONDITIONAL_JUMP)  ; LAB_00516433
    ADD ESP,0x1c                        ; 0051642b
        ;   Label: LAB_0051642b
    POP EBP                             ; 0051642e
    POP EDI                             ; 0051642f
    POP ESI                             ; 00516430
    POP EBX                             ; 00516431
    RET                                 ; 00516432
    MOV EDX,dword ptr [ESP + 0x34]      ; 00516433
        ;   Label: LAB_00516433
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00516437
    MOV ESI,dword ptr [0x006141c0]      ; 0051643b | DAT_006141c0
    SUB EDX,EBX                         ; 00516441
    IMUL EDX,ESI                        ; 00516443
    MOV EAX,EDX                         ; 00516446
    SAR EDX,0x1f                        ; 00516448
    SHL EDX,0x3                         ; 0051644b
    SBB EAX,EDX                         ; 0051644e
    SAR EAX,0x3                         ; 00516450
    MOV dword ptr [ESP],EAX             ; 00516453
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 00516456
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
    MOV dword ptr [ESP + 0x14],EAX      ; 0051645b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051645f
    SHL EAX,0x2                         ; 00516463
    MOV dword ptr [ESP + 0x8],EAX       ; 00516466
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051646a
    SHL EAX,0x2                         ; 0051646e
    MOV dword ptr [ESP + 0xc],EAX       ; 00516471
    MOV EAX,dword ptr [ESP + 0x48]      ; 00516475
    SHL EAX,0x2                         ; 00516479
    MOV dword ptr [ESP + 0x4],EAX       ; 0051647c
    MOV EDX,dword ptr [ESP + 0x30]      ; 00516480
        ;   Label: LAB_00516480
    MOV EDI,dword ptr [ESP + 0xc]       ; 00516484
    MOV EDX,dword ptr [EDX + 0x20]      ; 00516488
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051648b
    ADD EDX,EDI                         ; 0051648f
    MOV EAX,dword ptr [EAX + 0x14]      ; 00516491
    MOV EBX,dword ptr [EDX]             ; 00516494
    MOV EDX,dword ptr [EDX + 0x4]       ; 00516496
    ADD EBX,EAX                         ; 00516499
    ADD EDX,EAX                         ; 0051649b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051649d
    MOV dword ptr [ESP + 0x18],EDX      ; 005164a1
    MOV EDX,dword ptr [ESP]             ; 005164a5
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 005164a8
    ADD EDX,EAX                         ; 005164ae
    MOV EAX,dword ptr [ESP + 0x18]      ; 005164b0
    MOV dword ptr [ESP + 0x10],EDX      ; 005164b4
    CMP EBX,EAX                         ; 005164b8
    JNC 0x005164c8                      ; 005164ba
        ;   XREF to: 005164c8 (CONDITIONAL_JUMP)  ; LAB_005164c8
        ;   Label: LAB_005164ba
    XOR EAX,EAX                         ; 005164bc
    MOV AX,word ptr [EBX]               ; 005164be
    LEA ESI,[EBX + 0x4]                 ; 005164c1
    CMP EAX,EBP                         ; 005164c4
    JLE 0x005164ec                      ; 005164c6
        ;   XREF to: 005164ec (CONDITIONAL_JUMP)  ; LAB_005164ec
    MOV ESI,dword ptr [ESP + 0x8]       ; 005164c8
        ;   Label: LAB_005164c8
    MOV EBX,dword ptr [ESP + 0xc]       ; 005164cc
    MOV EDI,dword ptr [ESP + 0x4]       ; 005164d0
    ADD ESI,0x4                         ; 005164d4
    ADD EBX,0x4                         ; 005164d7
    MOV dword ptr [ESP + 0x8],ESI       ; 005164da
    MOV dword ptr [ESP + 0xc],EBX       ; 005164de
    CMP EBX,EDI                         ; 005164e2
    JG 0x0051642b                       ; 005164e4
        ;   XREF to: 0051642b (CONDITIONAL_JUMP)  ; LAB_0051642b
    JMP 0x00516480                      ; 005164ea
        ;   XREF to: 00516480 (UNCONDITIONAL_JUMP)  ; LAB_00516480
    XOR ECX,ECX                         ; 005164ec
        ;   Label: LAB_005164ec
    MOV CX,word ptr [EBX + 0x2]         ; 005164ee
    LEA EDX,[ECX + 0x3]                 ; 005164f2
    LEA EDI,[EAX + ECX*0x1]             ; 005164f5
    AND DL,0xfc                         ; 005164f8
    DEC EDI                             ; 005164fb
    LEA EBX,[ESI + EDX*0x1]             ; 005164fc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005164ff
    CMP EDI,EDX                         ; 00516503
    JGE 0x0051650d                      ; 00516505
        ;   XREF to: 0051650d (CONDITIONAL_JUMP)  ; LAB_0051650d
    CMP EBX,dword ptr [ESP + 0x18]      ; 00516507
    JMP 0x005164ba                      ; 0051650b
        ;   XREF to: 005164ba (UNCONDITIONAL_JUMP)  ; LAB_005164ba
    CMP EAX,EDX                         ; 0051650d
        ;   Label: LAB_0051650d
    JL 0x0051653f                       ; 0051650f
        ;   XREF to: 0051653f (CONDITIONAL_JUMP)  ; LAB_0051653f
    MOV EDX,dword ptr [0x006141c0]      ; 00516511 | DAT_006141c0
        ;   Label: LAB_00516511
    IMUL EDX,EAX                        ; 00516517
    MOV EAX,EDX                         ; 0051651a
    SAR EDX,0x1f                        ; 0051651c
    SHL EDX,0x3                         ; 0051651f
    SBB EAX,EDX                         ; 00516522
    SAR EAX,0x3                         ; 00516524
    ADD EAX,dword ptr [ESP + 0x10]      ; 00516527
    CMP EDI,EBP                         ; 0051652b
    JLE 0x0051654b                      ; 0051652d
        ;   XREF to: 0051654b (CONDITIONAL_JUMP)  ; LAB_0051654b
    SUB EDI,EBP                         ; 0051652f
    SUB ECX,EDI                         ; 00516531
    PUSH ECX                            ; 00516533
    PUSH ESI                            ; 00516534
    PUSH EAX                            ; 00516535
    CALL dword ptr [ESP + 0x20]         ; 00516536
    ADD ESP,0xc                         ; 0051653a
    JMP 0x005164c8                      ; 0051653d
        ;   XREF to: 005164c8 (UNCONDITIONAL_JUMP)  ; LAB_005164c8
    SUB EDX,EAX                         ; 0051653f
        ;   Label: LAB_0051653f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00516541
    ADD ESI,EDX                         ; 00516545
    SUB ECX,EDX                         ; 00516547
    JMP 0x00516511                      ; 00516549
        ;   XREF to: 00516511 (UNCONDITIONAL_JUMP)  ; LAB_00516511
    PUSH ECX                            ; 0051654b
        ;   Label: LAB_0051654b
    PUSH ESI                            ; 0051654c
    PUSH EAX                            ; 0051654d
    CALL dword ptr [ESP + 0x20]         ; 0051654e
    ADD ESP,0xc                         ; 00516552
    CMP EBX,dword ptr [ESP + 0x18]      ; 00516555
    JNC 0x005164c8                      ; 00516559
        ;   XREF to: 005164c8 (CONDITIONAL_JUMP)  ; LAB_005164c8
    XOR EAX,EAX                         ; 0051655f
    MOV AX,word ptr [EBX]               ; 00516561
    LEA ESI,[EBX + 0x4]                 ; 00516564
    CMP EAX,EBP                         ; 00516567
    JG 0x005164c8                       ; 00516569
        ;   XREF to: 005164c8 (CONDITIONAL_JUMP)  ; LAB_005164c8
    XOR ECX,ECX                         ; 0051656f
    MOV CX,word ptr [EBX + 0x2]         ; 00516571
    LEA EBX,[ECX + 0x3]                 ; 00516575
    LEA EDI,[EAX + ECX*0x1]             ; 00516578
    AND BL,0xfc                         ; 0051657b
    DEC EDI                             ; 0051657e
    ADD EBX,ESI                         ; 0051657f
    JMP 0x00516511                      ; 00516581
        ;   XREF to: 00516511 (UNCONDITIONAL_JUMP)  ; LAB_00516511

