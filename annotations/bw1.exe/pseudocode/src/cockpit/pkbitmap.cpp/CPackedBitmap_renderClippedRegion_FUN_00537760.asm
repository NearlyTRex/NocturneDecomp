; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_00537760(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)
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
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0 at 005379b9
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537760
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_00537760
    PUSH ESI                            ; 00537761
    PUSH EDI                            ; 00537762
    PUSH EBP                            ; 00537763
    SUB ESP,0x1c                        ; 00537764
    MOV EBP,dword ptr [ESP + 0x44]      ; 00537767
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053776b
    CMP dword ptr [EAX + 0x20],0x0      ; 0053776f
    JZ 0x0053777b                       ; 00537773
        ;   XREF to: 0053777b (CONDITIONAL_JUMP)  ; LAB_0053777b
    CMP dword ptr [EAX + 0x14],0x0      ; 00537775
    JNZ 0x00537783                      ; 00537779
        ;   XREF to: 00537783 (CONDITIONAL_JUMP)  ; LAB_00537783
    ADD ESP,0x1c                        ; 0053777b
        ;   Label: LAB_0053777b
    POP EBP                             ; 0053777e
    POP EDI                             ; 0053777f
    POP ESI                             ; 00537780
    POP EBX                             ; 00537781
    RET                                 ; 00537782
    MOV EDX,dword ptr [ESP + 0x34]      ; 00537783
        ;   Label: LAB_00537783
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00537787
    MOV ESI,dword ptr [0x0061b4a0]      ; 0053778b | DAT_0061b4a0
    SUB EDX,EBX                         ; 00537791
    IMUL EDX,ESI                        ; 00537793
    MOV EAX,EDX                         ; 00537796
    SAR EDX,0x1f                        ; 00537798
    SHL EDX,0x3                         ; 0053779b
    SBB EAX,EDX                         ; 0053779e
    SAR EAX,0x3                         ; 005377a0
    MOV dword ptr [ESP],EAX             ; 005377a3
    CALL cockpit_ckptutil.c_FUN_00437270 ; 005377a6
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
    MOV dword ptr [ESP + 0x14],EAX      ; 005377ab
    MOV EAX,dword ptr [ESP + 0x38]      ; 005377af
    SHL EAX,0x2                         ; 005377b3
    MOV dword ptr [ESP + 0x8],EAX       ; 005377b6
    MOV EAX,dword ptr [ESP + 0x40]      ; 005377ba
    SHL EAX,0x2                         ; 005377be
    MOV dword ptr [ESP + 0xc],EAX       ; 005377c1
    MOV EAX,dword ptr [ESP + 0x48]      ; 005377c5
    SHL EAX,0x2                         ; 005377c9
    MOV dword ptr [ESP + 0x4],EAX       ; 005377cc
    MOV EDX,dword ptr [ESP + 0x30]      ; 005377d0
        ;   Label: LAB_005377d0
    MOV EDI,dword ptr [ESP + 0xc]       ; 005377d4
    MOV EDX,dword ptr [EDX + 0x20]      ; 005377d8
    MOV EAX,dword ptr [ESP + 0x30]      ; 005377db
    ADD EDX,EDI                         ; 005377df
    MOV EAX,dword ptr [EAX + 0x14]      ; 005377e1
    MOV EBX,dword ptr [EDX]             ; 005377e4
    MOV EDX,dword ptr [EDX + 0x4]       ; 005377e6
    ADD EBX,EAX                         ; 005377e9
    ADD EDX,EAX                         ; 005377eb
    MOV EAX,dword ptr [ESP + 0x8]       ; 005377ed
    MOV dword ptr [ESP + 0x18],EDX      ; 005377f1
    MOV EDX,dword ptr [ESP]             ; 005377f5
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 005377f8
    ADD EDX,EAX                         ; 005377fe
    MOV EAX,dword ptr [ESP + 0x18]      ; 00537800
    MOV dword ptr [ESP + 0x10],EDX      ; 00537804
    CMP EBX,EAX                         ; 00537808
    JNC 0x00537818                      ; 0053780a
        ;   XREF to: 00537818 (CONDITIONAL_JUMP)  ; LAB_00537818
        ;   Label: LAB_0053780a
    XOR EAX,EAX                         ; 0053780c
    MOV AX,word ptr [EBX]               ; 0053780e
    LEA ESI,[EBX + 0x4]                 ; 00537811
    CMP EAX,EBP                         ; 00537814
    JLE 0x0053783c                      ; 00537816
        ;   XREF to: 0053783c (CONDITIONAL_JUMP)  ; LAB_0053783c
    MOV ESI,dword ptr [ESP + 0x8]       ; 00537818
        ;   Label: LAB_00537818
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053781c
    MOV EDI,dword ptr [ESP + 0x4]       ; 00537820
    ADD ESI,0x4                         ; 00537824
    ADD EBX,0x4                         ; 00537827
    MOV dword ptr [ESP + 0x8],ESI       ; 0053782a
    MOV dword ptr [ESP + 0xc],EBX       ; 0053782e
    CMP EBX,EDI                         ; 00537832
    JG 0x0053777b                       ; 00537834
        ;   XREF to: 0053777b (CONDITIONAL_JUMP)  ; LAB_0053777b
    JMP 0x005377d0                      ; 0053783a
        ;   XREF to: 005377d0 (UNCONDITIONAL_JUMP)  ; LAB_005377d0
    XOR ECX,ECX                         ; 0053783c
        ;   Label: LAB_0053783c
    MOV CX,word ptr [EBX + 0x2]         ; 0053783e
    LEA EDX,[ECX + 0x3]                 ; 00537842
    LEA EDI,[EAX + ECX*0x1]             ; 00537845
    AND DL,0xfc                         ; 00537848
    DEC EDI                             ; 0053784b
    LEA EBX,[ESI + EDX*0x1]             ; 0053784c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0053784f
    CMP EDI,EDX                         ; 00537853
    JGE 0x0053785d                      ; 00537855
        ;   XREF to: 0053785d (CONDITIONAL_JUMP)  ; LAB_0053785d
    CMP EBX,dword ptr [ESP + 0x18]      ; 00537857
    JMP 0x0053780a                      ; 0053785b
        ;   XREF to: 0053780a (UNCONDITIONAL_JUMP)  ; LAB_0053780a
    CMP EAX,EDX                         ; 0053785d
        ;   Label: LAB_0053785d
    JL 0x0053788f                       ; 0053785f
        ;   XREF to: 0053788f (CONDITIONAL_JUMP)  ; LAB_0053788f
    MOV EDX,dword ptr [0x0061b4a0]      ; 00537861 | DAT_0061b4a0
        ;   Label: LAB_00537861
    IMUL EDX,EAX                        ; 00537867
    MOV EAX,EDX                         ; 0053786a
    SAR EDX,0x1f                        ; 0053786c
    SHL EDX,0x3                         ; 0053786f
    SBB EAX,EDX                         ; 00537872
    SAR EAX,0x3                         ; 00537874
    ADD EAX,dword ptr [ESP + 0x10]      ; 00537877
    CMP EDI,EBP                         ; 0053787b
    JLE 0x0053789b                      ; 0053787d
        ;   XREF to: 0053789b (CONDITIONAL_JUMP)  ; LAB_0053789b
    SUB EDI,EBP                         ; 0053787f
    SUB ECX,EDI                         ; 00537881
    PUSH ECX                            ; 00537883
    PUSH ESI                            ; 00537884
    PUSH EAX                            ; 00537885
    CALL dword ptr [ESP + 0x20]         ; 00537886
    ADD ESP,0xc                         ; 0053788a
    JMP 0x00537818                      ; 0053788d
        ;   XREF to: 00537818 (UNCONDITIONAL_JUMP)  ; LAB_00537818
    SUB EDX,EAX                         ; 0053788f
        ;   Label: LAB_0053788f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00537891
    ADD ESI,EDX                         ; 00537895
    SUB ECX,EDX                         ; 00537897
    JMP 0x00537861                      ; 00537899
        ;   XREF to: 00537861 (UNCONDITIONAL_JUMP)  ; LAB_00537861
    PUSH ECX                            ; 0053789b
        ;   Label: LAB_0053789b
    PUSH ESI                            ; 0053789c
    PUSH EAX                            ; 0053789d
    CALL dword ptr [ESP + 0x20]         ; 0053789e
    ADD ESP,0xc                         ; 005378a2
    CMP EBX,dword ptr [ESP + 0x18]      ; 005378a5
    JNC 0x00537818                      ; 005378a9
        ;   XREF to: 00537818 (CONDITIONAL_JUMP)  ; LAB_00537818
    XOR EAX,EAX                         ; 005378af
    MOV AX,word ptr [EBX]               ; 005378b1
    LEA ESI,[EBX + 0x4]                 ; 005378b4
    CMP EAX,EBP                         ; 005378b7
    JG 0x00537818                       ; 005378b9
        ;   XREF to: 00537818 (CONDITIONAL_JUMP)  ; LAB_00537818
    XOR ECX,ECX                         ; 005378bf
    MOV CX,word ptr [EBX + 0x2]         ; 005378c1
    LEA EBX,[ECX + 0x3]                 ; 005378c5
    LEA EDI,[EAX + ECX*0x1]             ; 005378c8
    AND BL,0xfc                         ; 005378cb
    DEC EDI                             ; 005378ce
    ADD EBX,ESI                         ; 005378cf
    JMP 0x00537861                      ; 005378d1
        ;   XREF to: 00537861 (UNCONDITIONAL_JUMP)  ; LAB_00537861

