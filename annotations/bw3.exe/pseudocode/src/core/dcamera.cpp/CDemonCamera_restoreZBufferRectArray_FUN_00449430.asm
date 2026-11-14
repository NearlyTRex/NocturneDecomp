; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 00535df5
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_0149e704
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00449350
;   core_dstrendr.cpp_memcpyMMX_FUN_00471271
;   engine_special.cpp_restoreZBuffer_FUN_00566370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449430
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430
    PUSH ESI                            ; 00449431
    PUSH EDI                            ; 00449432
    PUSH EBP                            ; 00449433
    SUB ESP,0x24                        ; 00449434
    MOV EDX,dword ptr [0x01c6cee8]      ; 00449437 | DAT_01c6cee8
    TEST EDX,EDX                        ; 0044943d
    JNZ 0x00449670                      ; 0044943f
        ;   XREF to: 00449670 (CONDITIONAL_JUMP)  ; LAB_00449670
    MOV EAX,dword ptr [ESP + 0x38]      ; 00449445
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 00449449
    CMP ECX,0x100                       ; 0044944f
    JG 0x00449694                       ; 00449455
        ;   XREF to: 00449694 (CONDITIONAL_JUMP)  ; LAB_00449694
    XOR EBX,EBX                         ; 0044945b
    TEST ECX,ECX                        ; 0044945d
    JLE 0x004494bb                      ; 0044945f
        ;   XREF to: 004494bb (CONDITIONAL_JUMP)  ; LAB_004494bb
    LEA EDX,[EAX + 0x1d4]               ; 00449461
    MOV EBP,dword ptr [EDX]             ; 00449467
        ;   Label: LAB_00449467
    MOV EAX,EDX                         ; 00449469
    TEST EBP,EBP                        ; 0044946b
    JL 0x004496cd                       ; 0044946d
        ;   XREF to: 004496cd (CONDITIONAL_JUMP)  ; LAB_004496cd
    MOV ESI,dword ptr [ESP + 0x38]      ; 00449473
        ;   Label: LAB_00449473
    MOV ECX,dword ptr [EAX + 0x4]       ; 00449477
    MOV EDI,dword ptr [ESI + 0x144]     ; 0044947a
    CMP ECX,EDI                         ; 00449480
    JGE 0x004496d8                      ; 00449482
        ;   XREF to: 004496d8 (CONDITIONAL_JUMP)  ; LAB_004496d8
    CMP dword ptr [EAX + 0x8],0x0       ; 00449488
        ;   Label: LAB_00449488
    JL 0x004496e3                       ; 0044948c
        ;   XREF to: 004496e3 (CONDITIONAL_JUMP)  ; LAB_004496e3
    MOV ESI,dword ptr [ESP + 0x38]      ; 00449492
        ;   Label: LAB_00449492
    MOV ECX,dword ptr [EAX + 0xc]       ; 00449496
    MOV EDI,dword ptr [ESI + 0x148]     ; 00449499
    CMP ECX,EDI                         ; 0044949f
    JL 0x004494a9                       ; 004494a1
        ;   XREF to: 004494a9 (CONDITIONAL_JUMP)  ; LAB_004494a9
    LEA ECX,[EDI + -0x1]                ; 004494a3
    MOV dword ptr [EAX + 0xc],ECX       ; 004494a6
    MOV EAX,dword ptr [ESP + 0x38]      ; 004494a9
        ;   Label: LAB_004494a9
    INC EBX                             ; 004494ad
    MOV ECX,dword ptr [EAX + 0x1d0]     ; 004494ae
    ADD EDX,0x10                        ; 004494b4
    CMP EBX,ECX                         ; 004494b7
    JL 0x00449467                       ; 004494b9
        ;   XREF to: 00449467 (CONDITIONAL_JUMP)  ; LAB_00449467
    MOV EAX,dword ptr [ESP + 0x38]      ; 004494bb
        ;   Label: LAB_004494bb
    MOV EBX,dword ptr [ESP + 0x38]      ; 004494bf
    XOR ESI,ESI                         ; 004494c3
    XOR ECX,ECX                         ; 004494c5
    MOV dword ptr [ESP + 0x18],ESI      ; 004494c7
    MOV EDI,dword ptr [EAX + 0x1d0]     ; 004494cb
    MOV EBX,dword ptr [EBX + 0x148]     ; 004494d1
    TEST EDI,EDI                        ; 004494d7
    JLE 0x0044950c                      ; 004494d9
        ;   XREF to: 0044950c (CONDITIONAL_JUMP)  ; LAB_0044950c
    ADD EAX,0x1d4                       ; 004494db
    MOV ESI,dword ptr [EAX + 0x8]       ; 004494e0
        ;   Label: LAB_004494e0
    MOV EDX,EAX                         ; 004494e3
    CMP EBX,ESI                         ; 004494e5
    JLE 0x004494eb                      ; 004494e7
        ;   XREF to: 004494eb (CONDITIONAL_JUMP)  ; LAB_004494eb
    MOV EBX,ESI                         ; 004494e9
    MOV EDI,dword ptr [ESP + 0x18]      ; 004494eb
        ;   Label: LAB_004494eb
    MOV ESI,dword ptr [EDX + 0xc]       ; 004494ef
    CMP ESI,EDI                         ; 004494f2
    JLE 0x004494fa                      ; 004494f4
        ;   XREF to: 004494fa (CONDITIONAL_JUMP)  ; LAB_004494fa
    MOV dword ptr [ESP + 0x18],ESI      ; 004494f6
    MOV EDX,dword ptr [ESP + 0x38]      ; 004494fa
        ;   Label: LAB_004494fa
    INC ECX                             ; 004494fe
    MOV EBP,dword ptr [EDX + 0x1d0]     ; 004494ff
    ADD EAX,0x10                        ; 00449505
    CMP ECX,EBP                         ; 00449508
    JL 0x004494e0                       ; 0044950a
        ;   XREF to: 004494e0 (CONDITIONAL_JUMP)  ; LAB_004494e0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044950c
        ;   Label: LAB_0044950c
    MOV dword ptr [ESP + 0x20],EBX      ; 00449510
    CMP EBX,EAX                         ; 00449514
    JG 0x00449668                       ; 00449516
        ;   XREF to: 00449668 (CONDITIONAL_JUMP)  ; LAB_00449668
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044951c
    SHL EBX,0x2                         ; 00449520
    ADD EAX,0x1d4                       ; 00449523
    MOV dword ptr [ESP + 0x14],EBX      ; 00449528
    MOV dword ptr [ESP + 0x10],EAX      ; 0044952c
    XOR ECX,ECX                         ; 00449530
        ;   Label: LAB_00449530
    MOV EAX,dword ptr [ESP + 0x38]      ; 00449532
    MOV dword ptr [ESP + 0x1c],ECX      ; 00449536
    MOV ESI,dword ptr [EAX + 0x1d0]     ; 0044953a
    MOV dword ptr [0x0149e704],ECX      ; 00449540 | DAT_0149e704
    TEST ESI,ESI                        ; 00449546
    JLE 0x004495d0                      ; 00449548
        ;   XREF to: 004495d0 (CONDITIONAL_JUMP)  ; LAB_004495d0
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044954e
    XOR EBP,EBP                         ; 00449552
    MOV EAX,dword ptr [ESP + 0x20]      ; 00449554
        ;   Label: LAB_00449554
    MOV ESI,dword ptr [EDI + 0x8]       ; 00449558
    MOV EDX,EDI                         ; 0044955b
    CMP EAX,ESI                         ; 0044955d
    JL 0x004495b6                       ; 0044955f
        ;   XREF to: 004495b6 (CONDITIONAL_JUMP)  ; LAB_004495b6
    CMP EAX,dword ptr [EDI + 0xc]       ; 00449561
    JG 0x004495b6                       ; 00449564
        ;   XREF to: 004495b6 (CONDITIONAL_JUMP)  ; LAB_004495b6
    MOV EBX,dword ptr [0x0149e704]      ; 00449566 | DAT_0149e704
    XOR ECX,ECX                         ; 0044956c
    TEST EBX,EBX                        ; 0044956e
    JLE 0x00449591                      ; 00449570
        ;   XREF to: 00449591 (CONDITIONAL_JUMP)  ; LAB_00449591
    LEA ESI,[EBX*0x4 + 0x0]             ; 00449572
    XOR EAX,EAX                         ; 00449579
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044957b
        ;   Label: LAB_0044957b
    CMP EBX,dword ptr [EAX + 0x149e708] ; 0044957e
    JGE 0x004496ef                      ; 00449584
        ;   XREF to: 004496ef (CONDITIONAL_JUMP)  ; LAB_004496ef
    ADD EAX,0x4                         ; 0044958a
        ;   Label: LAB_0044958a
    CMP EAX,ESI                         ; 0044958d
    JL 0x0044957b                       ; 0044958f
        ;   XREF to: 0044957b (CONDITIONAL_JUMP)  ; LAB_0044957b
    TEST ECX,ECX                        ; 00449591
        ;   Label: LAB_00449591
    JNZ 0x004495b6                      ; 00449593
        ;   XREF to: 004495b6 (CONDITIONAL_JUMP)  ; LAB_004495b6
    MOV EAX,dword ptr [EDX]             ; 00449595
    MOV dword ptr [EBP + 0x149e708],EAX ; 00449597
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044959d
    MOV EDX,dword ptr [0x0149e704]      ; 004495a0 | DAT_0149e704
    ADD EBP,0x4                         ; 004495a6
    INC EDX                             ; 004495a9
    MOV dword ptr [EBP + 0x149eb04],EAX ; 004495aa
    MOV dword ptr [0x0149e704],EDX      ; 004495b0 | DAT_0149e704
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004495b6
        ;   Label: LAB_004495b6
    MOV EDX,dword ptr [ESP + 0x38]      ; 004495ba
    ADD EDI,0x10                        ; 004495be
    INC EAX                             ; 004495c1
    MOV ECX,dword ptr [EDX + 0x1d0]     ; 004495c2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004495c8
    CMP EAX,ECX                         ; 004495cc
    JL 0x00449554                       ; 004495ce
        ;   XREF to: 00449554 (CONDITIONAL_JUMP)  ; LAB_00449554
    MOV EBX,dword ptr [0x0149e704]      ; 004495d0 | DAT_0149e704
        ;   Label: LAB_004495d0
    XOR EDI,EDI                         ; 004495d6
    TEST EBX,EBX                        ; 004495d8
    JLE 0x00449648                      ; 004495da
        ;   XREF to: 00449648 (CONDITIONAL_JUMP)  ; LAB_00449648
    MOV EBP,dword ptr [ESP + 0x14]      ; 004495dc
    XOR ESI,ESI                         ; 004495e0
    MOV EAX,dword ptr [ESI + 0x149e708] ; 004495e2
        ;   Label: LAB_004495e2
    MOV EDX,dword ptr [EBP + 0x1c60dac] ; 004495e8 | DAT_01c60dac
    SHL EAX,0x2                         ; 004495ee
    LEA ECX,[EDX + EAX*0x1]             ; 004495f1
    MOV EDX,dword ptr [ESP + 0x38]      ; 004495f4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004495f8
    IMUL EAX,dword ptr [EDX + 0x144]    ; 004495fc
    ADD EAX,dword ptr [ESI + 0x149e708] ; 00449603
    LEA EDX,[EAX*0x4 + 0x0]             ; 00449609
    MOV EAX,dword ptr [ESP + 0x38]      ; 00449610
    MOV EAX,dword ptr [EAX + 0x15c]     ; 00449614
    MOV EBX,dword ptr [ESI + 0x149e708] ; 0044961a
    ADD EDX,EAX                         ; 00449620
    MOV EAX,dword ptr [ESI + 0x149eb08] ; 00449622
    SUB EAX,EBX                         ; 00449628
    SHL EAX,0x2                         ; 0044962a
    ADD EAX,0x4                         ; 0044962d
    PUSH EAX                            ; 00449630
    PUSH EDX                            ; 00449631
    PUSH ECX                            ; 00449632
    ADD ESI,0x4                         ; 00449633
    INC EDI                             ; 00449636
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00471271 ; 00449637
        ;   XREF to: 00471271 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00471271(void * dest, void * src, int byte_count)
    MOV EAX,[0x0149e704]                ; 0044963c | DAT_0149e704
    ADD ESP,0xc                         ; 00449641
    CMP EDI,EAX                         ; 00449644
    JL 0x004495e2                       ; 00449646
        ;   XREF to: 004495e2 (CONDITIONAL_JUMP)  ; LAB_004495e2
    MOV EBP,dword ptr [ESP + 0x14]      ; 00449648
        ;   Label: LAB_00449648
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044964c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00449650
    ADD EBP,0x4                         ; 00449654
    INC EAX                             ; 00449657
    MOV dword ptr [ESP + 0x14],EBP      ; 00449658
    MOV dword ptr [ESP + 0x20],EAX      ; 0044965c
    CMP EAX,EDX                         ; 00449660
    JLE 0x00449530                      ; 00449662
        ;   XREF to: 00449530 (CONDITIONAL_JUMP)  ; LAB_00449530
    ADD ESP,0x24                        ; 00449668
        ;   Label: LAB_00449668
    POP EBP                             ; 0044966b
    POP EDI                             ; 0044966c
    POP ESI                             ; 0044966d
    POP EBX                             ; 0044966e
    RET                                 ; 0044966f
    MOV EAX,[0x005fba1c]                ; 00449670 | DAT_005fba1c
        ;   Label: LAB_00449670
    DEC EAX                             ; 00449675
    PUSH EAX                            ; 00449676
    MOV EAX,[0x005fba18]                ; 00449677 | DAT_005fba18
    DEC EAX                             ; 0044967c
    PUSH EAX                            ; 0044967d
    PUSH 0x0                            ; 0044967e
    PUSH 0x0                            ; 00449680
    PUSH 0x0                            ; 00449682
    CALL engine_special.cpp_restoreZBuffer_FUN_00566370 ; 00449684
        ;   XREF to: 00566370 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreZBuffer_FUN_00566370(int slot, int left, int top, int right, ...)
    ADD ESP,0x14                        ; 00449689
    ADD ESP,0x24                        ; 0044968c
    POP EBP                             ; 0044968f
    POP EDI                             ; 00449690
    POP ESI                             ; 00449691
    POP EBX                             ; 00449692
    RET                                 ; 00449693
    MOV dword ptr [ESP],EDX             ; 00449694
        ;   Label: LAB_00449694
    MOV dword ptr [ESP + 0x8],EDX       ; 00449697
    MOV EAX,dword ptr [EAX + 0x144]     ; 0044969b
    DEC EAX                             ; 004496a1
    MOV dword ptr [ESP + 0x4],EAX       ; 004496a2
    MOV EAX,dword ptr [ESP + 0x38]      ; 004496a6
    MOV EAX,dword ptr [EAX + 0x148]     ; 004496aa
    DEC EAX                             ; 004496b0
    MOV dword ptr [ESP + 0xc],EAX       ; 004496b1
    MOV EAX,ESP                         ; 004496b5
    PUSH EAX                            ; 004496b7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004496b8
    PUSH EAX                            ; 004496bc
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00449350 ; 004496bd
        ;   XREF to: 00449350 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00449350(CDemonCamera * this_ptr, CRect * rect_ptr)
    ADD ESP,0x8                         ; 004496c2
    ADD ESP,0x24                        ; 004496c5
    POP EBP                             ; 004496c8
    POP EDI                             ; 004496c9
    POP ESI                             ; 004496ca
    POP EBX                             ; 004496cb
    RET                                 ; 004496cc
    MOV dword ptr [EDX],0x0             ; 004496cd
        ;   Label: LAB_004496cd
    JMP 0x00449473                      ; 004496d3
        ;   XREF to: 00449473 (UNCONDITIONAL_JUMP)  ; LAB_00449473
    LEA ECX,[EDI + -0x1]                ; 004496d8
        ;   Label: LAB_004496d8
    MOV dword ptr [EAX + 0x4],ECX       ; 004496db
    JMP 0x00449488                      ; 004496de
        ;   XREF to: 00449488 (UNCONDITIONAL_JUMP)  ; LAB_00449488
    MOV dword ptr [EAX + 0x8],0x0       ; 004496e3
        ;   Label: LAB_004496e3
    JMP 0x00449492                      ; 004496ea
        ;   XREF to: 00449492 (UNCONDITIONAL_JUMP)  ; LAB_00449492
    MOV EBX,dword ptr [EDX]             ; 004496ef
        ;   Label: LAB_004496ef
    CMP EBX,dword ptr [EAX + 0x149eb08] ; 004496f1
    JG 0x0044958a                       ; 004496f7
        ;   XREF to: 0044958a (CONDITIONAL_JUMP)  ; LAB_0044958a
    CMP EBX,dword ptr [EAX + 0x149e708] ; 004496fd
    JL 0x00449714                       ; 00449703
        ;   XREF to: 00449714 (CONDITIONAL_JUMP)  ; LAB_00449714
    MOV EBX,dword ptr [EDX + 0x4]       ; 00449705
    CMP EBX,dword ptr [EAX + 0x149eb08] ; 00449708
    JLE 0x004495b6                      ; 0044970e
        ;   XREF to: 004495b6 (CONDITIONAL_JUMP)  ; LAB_004495b6
    MOV EBX,dword ptr [EDX]             ; 00449714
        ;   Label: LAB_00449714
    CMP EBX,dword ptr [EAX + 0x149e708] ; 00449716
    JGE 0x00449729                      ; 0044971c
        ;   XREF to: 00449729 (CONDITIONAL_JUMP)  ; LAB_00449729
    MOV ECX,0x1                         ; 0044971e
    MOV dword ptr [EAX + 0x149e708],EBX ; 00449723
    MOV EBX,dword ptr [EDX + 0x4]       ; 00449729
        ;   Label: LAB_00449729
    CMP EBX,dword ptr [EAX + 0x149eb08] ; 0044972c
    JLE 0x0044973f                      ; 00449732
        ;   XREF to: 0044973f (CONDITIONAL_JUMP)  ; LAB_0044973f
    MOV dword ptr [EAX + 0x149eb08],EBX ; 00449734
    JMP 0x004495b6                      ; 0044973a
        ;   XREF to: 004495b6 (UNCONDITIONAL_JUMP)  ; LAB_004495b6
    TEST ECX,ECX                        ; 0044973f
        ;   Label: LAB_0044973f
    JNZ 0x00449591                      ; 00449741
        ;   XREF to: 00449591 (CONDITIONAL_JUMP)  ; LAB_00449591
    JMP 0x0044958a                      ; 00449747
        ;   XREF to: 0044958a (UNCONDITIONAL_JUMP)  ; LAB_0044958a

