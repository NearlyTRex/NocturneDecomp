; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setupSoftwareEdgeWithZMode_FUN_004f9620(SRenderVertex *start_vertex,SRenderVertex *end_vertex)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   start_vertex
; SRenderVertex *  Stack[0x8]:4   end_vertex
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01c0399c
;   int g_VertexPreprocessMode
;   undefined4 DAT_01e52a68
;   undefined4 DAT_01e52a6c
;   undefined4 DAT_01e52eec
;   undefined4 DAT_01e52ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9620
        ;   Label: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_004f9620
    PUSH ESI                            ; 004f9621
    PUSH EDI                            ; 004f9622
    PUSH EBP                            ; 004f9623
    SUB ESP,0x4                         ; 004f9624
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f9627
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f962b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f962f
    MOV EDI,dword ptr [ESI + 0x14]      ; 004f9632
    SAR EBX,0x10                        ; 004f9635
    SAR EDI,0x10                        ; 004f9638
    CMP EDI,EBX                         ; 004f963b
    JZ 0x004f97d9                       ; 004f963d
        ;   XREF to: 004f97d9 (CONDITIONAL_JUMP)  ; LAB_004f97d9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f9643
    CMP EDX,dword ptr [ESI + 0x14]      ; 004f9646
    JGE 0x004f9657                      ; 004f9649
        ;   XREF to: 004f9657 (CONDITIONAL_JUMP)  ; LAB_004f9657
    MOV EAX,ESI                         ; 004f964b
    MOV ESI,EBP                         ; 004f964d
    MOV EBP,EAX                         ; 004f964f
    MOV EAX,EDI                         ; 004f9651
    MOV EDI,EBX                         ; 004f9653
    MOV EBX,EAX                         ; 004f9655
    MOV EAX,[0x01e52a68]                ; 004f9657 | DAT_01e52a68
        ;   Label: LAB_004f9657
    LEA ECX,[EAX*0x8 + 0x0]             ; 004f965c
    ADD ECX,EAX                         ; 004f9663
    SHL ECX,0x3                         ; 004f9665
    ADD ECX,0x1e52a6c                   ; 004f9668
    MOV dword ptr [ECX],EDI             ; 004f966e | DAT_01e52a6c
    MOV EAX,[0x01e52eec]                ; 004f9670 | DAT_01e52eec
    MOV dword ptr [ECX + 0x4],EBX       ; 004f9675
    CMP EDI,EAX                         ; 004f9678
    JGE 0x004f9682                      ; 004f967a
        ;   XREF to: 004f9682 (CONDITIONAL_JUMP)  ; LAB_004f9682
    MOV dword ptr [0x01e52eec],EDI      ; 004f967c | DAT_01e52eec
    CMP EBX,dword ptr [0x01e52ef0]      ; 004f9682 | DAT_01e52ef0
        ;   Label: LAB_004f9682
    JLE 0x004f9690                      ; 004f9688
        ;   XREF to: 004f9690 (CONDITIONAL_JUMP)  ; LAB_004f9690
    MOV dword ptr [0x01e52ef0],EBX      ; 004f968a | DAT_01e52ef0
    MOV EDI,dword ptr [ESI + 0x14]      ; 004f9690
        ;   Label: LAB_004f9690
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f9693
    SUB EBX,EDI                         ; 004f9696
    CMP EBX,0x10000                     ; 004f9698
    JNC 0x004f97e1                      ; 004f969e
        ;   XREF to: 004f97e1 (CONDITIONAL_JUMP)  ; LAB_004f97e1
    XOR EBX,EBX                         ; 004f96a4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f96a6
        ;   Label: LAB_004f96a6
    MOV EDX,dword ptr [ESI + 0x10]      ; 004f96a9
    MOV EDI,dword ptr [ESI + 0x14]      ; 004f96ac
    SUB EAX,EDX                         ; 004f96af
    AND EDI,0xffff                      ; 004f96b1
    MOV EDX,EAX                         ; 004f96b7
    MOV EAX,EBX                         ; 004f96b9
    XOR DI,0xffff                       ; 004f96bb
    IMUL EDX                            ; 004f96bf
    SHRD EAX,EDX,0x10                   ; 004f96c1
    MOV EDX,EAX                         ; 004f96c5
    MOV dword ptr [ECX + 0xc],EAX       ; 004f96c7
    MOV EAX,EDI                         ; 004f96ca
    IMUL EDX                            ; 004f96cc
    SHRD EAX,EDX,0x10                   ; 004f96ce
    MOV dword ptr [ESP],EAX             ; 004f96d2
    MOV EDX,dword ptr [ESP]             ; 004f96d5
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f96d8
    ADD EAX,EDX                         ; 004f96db
    MOV dword ptr [ECX + 0x8],EAX       ; 004f96dd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f96e0
    MOV EDX,dword ptr [ESI + 0x18]      ; 004f96e3
    SUB EAX,EDX                         ; 004f96e6
    MOV EDX,EAX                         ; 004f96e8
    MOV EAX,EBX                         ; 004f96ea
    IMUL EDX                            ; 004f96ec
    SHRD EAX,EDX,0x10                   ; 004f96ee
    MOV EDX,EAX                         ; 004f96f2
    MOV dword ptr [ECX + 0x1c],EAX      ; 004f96f4
    MOV EAX,EDI                         ; 004f96f7
    IMUL EDX                            ; 004f96f9
    SHRD EAX,EDX,0x10                   ; 004f96fb
    MOV dword ptr [ESP],EAX             ; 004f96ff
    MOV EDX,dword ptr [ESP]             ; 004f9702
    MOV EAX,dword ptr [ESI + 0x18]      ; 004f9705
    ADD EAX,EDX                         ; 004f9708
    MOV dword ptr [ECX + 0x18],EAX      ; 004f970a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f970d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004f9710
    SUB EAX,EDX                         ; 004f9713
    MOV EDX,EAX                         ; 004f9715
    MOV EAX,EBX                         ; 004f9717
    IMUL EDX                            ; 004f9719
    SHRD EAX,EDX,0x10                   ; 004f971b
    MOV EDX,EAX                         ; 004f971f
    MOV dword ptr [ECX + 0x24],EAX      ; 004f9721
    MOV EAX,EDI                         ; 004f9724
    IMUL EDX                            ; 004f9726
    SHRD EAX,EDX,0x10                   ; 004f9728
    MOV dword ptr [ESP],EAX             ; 004f972c
    MOV EDX,dword ptr [ESP]             ; 004f972f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004f9732
    ADD EAX,EDX                         ; 004f9735
    MOV dword ptr [ECX + 0x20],EAX      ; 004f9737
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f973a
    MOV EDX,dword ptr [ESI + 0x20]      ; 004f973d
    SUB EAX,EDX                         ; 004f9740
    MOV EDX,EAX                         ; 004f9742
    MOV EAX,EBX                         ; 004f9744
    IMUL EDX                            ; 004f9746
    SHRD EAX,EDX,0x10                   ; 004f9748
    MOV EDX,EAX                         ; 004f974c
    MOV dword ptr [ECX + 0x14],EAX      ; 004f974e
    MOV EAX,EDI                         ; 004f9751
    IMUL EDX                            ; 004f9753
    SHRD EAX,EDX,0x10                   ; 004f9755
    MOV dword ptr [ESP],EAX             ; 004f9759
    MOV EDX,dword ptr [ESP]             ; 004f975c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004f975f
    ADD EAX,EDX                         ; 004f9762
    MOV dword ptr [ECX + 0x10],EAX      ; 004f9764
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004f9767
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004f976a
    SUB EAX,EDX                         ; 004f976d
    MOV EDX,EAX                         ; 004f976f
    MOV EAX,EBX                         ; 004f9771
    IMUL EDX                            ; 004f9773
    SHRD EAX,EDX,0x10                   ; 004f9775
    MOV EDX,EAX                         ; 004f9779
    MOV dword ptr [ECX + 0x34],EAX      ; 004f977b
    MOV EAX,EDI                         ; 004f977e
    IMUL EDX                            ; 004f9780
    SHRD EAX,EDX,0x10                   ; 004f9782
    MOV dword ptr [ESP],EAX             ; 004f9786
    MOV EDX,dword ptr [ESP]             ; 004f9789
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004f978c
    ADD EAX,EDX                         ; 004f978f
    MOV dword ptr [ECX + 0x30],EAX      ; 004f9791
    CMP dword ptr [0x01c039a4],0x1      ; 004f9794 | g_VertexPreprocessMode
    JNZ 0x004f97f9                      ; 004f979b
        ;   XREF to: 004f97f9 (CONDITIONAL_JUMP)  ; LAB_004f97f9
    CMP dword ptr [0x01c0399c],0x0      ; 004f979d | DAT_01c0399c
    JZ 0x004f97f1                       ; 004f97a4
        ;   XREF to: 004f97f1 (CONDITIONAL_JUMP)  ; LAB_004f97f1
    MOV EAX,0x7fffffff                  ; 004f97a6
    MOV EDX,dword ptr [ESI + 0x8]       ; 004f97ab
    MOV ESI,EAX                         ; 004f97ae
    SUB ESI,EDX                         ; 004f97b0
    SUB EAX,dword ptr [EBP + 0x8]       ; 004f97b2
    MOV EDX,EAX                         ; 004f97b5
        ;   Label: LAB_004f97b5
    MOV EAX,EBX                         ; 004f97b7
    SUB EDX,ESI                         ; 004f97b9
    IMUL EDX                            ; 004f97bb
    SHRD EAX,EDX,0x10                   ; 004f97bd
    MOV EDX,EAX                         ; 004f97c1
    MOV dword ptr [ECX + 0x2c],EAX      ; 004f97c3
    MOV EAX,EDI                         ; 004f97c6
    IMUL EDX                            ; 004f97c8
    SHRD EAX,EDX,0x10                   ; 004f97ca
    ADD ESI,EAX                         ; 004f97ce
    MOV dword ptr [ECX + 0x28],ESI      ; 004f97d0
    INC dword ptr [0x01e52a68]          ; 004f97d3 | DAT_01e52a68
    ADD ESP,0x4                         ; 004f97d9
        ;   Label: LAB_004f97d9
    POP EBP                             ; 004f97dc
    POP EDI                             ; 004f97dd
    POP ESI                             ; 004f97de
    POP EBX                             ; 004f97df
    RET                                 ; 004f97e0
    MOV EAX,0xffffffff                  ; 004f97e1
        ;   Label: LAB_004f97e1
    XOR EDX,EDX                         ; 004f97e6
    DIV EBX                             ; 004f97e8
    MOV EBX,EAX                         ; 004f97ea
    JMP 0x004f96a6                      ; 004f97ec
        ;   XREF to: 004f96a6 (UNCONDITIONAL_JUMP)  ; LAB_004f96a6
    MOV EAX,dword ptr [EBP + 0xc]       ; 004f97f1
        ;   Label: LAB_004f97f1
    MOV ESI,dword ptr [ESI + 0xc]       ; 004f97f4
    JMP 0x004f97b5                      ; 004f97f7
        ;   XREF to: 004f97b5 (UNCONDITIONAL_JUMP)  ; LAB_004f97b5
    MOV EAX,dword ptr [EBP + 0x8]       ; 004f97f9
        ;   Label: LAB_004f97f9
    MOV EDX,dword ptr [ESI + 0x8]       ; 004f97fc
    SUB EAX,EDX                         ; 004f97ff
    MOV EDX,EAX                         ; 004f9801
    MOV EAX,EBX                         ; 004f9803
    IMUL EDX                            ; 004f9805
    SHRD EAX,EDX,0x10                   ; 004f9807
    MOV EDX,EAX                         ; 004f980b
    MOV dword ptr [ECX + 0x2c],EAX      ; 004f980d
    MOV EAX,EDI                         ; 004f9810
    IMUL EDX                            ; 004f9812
    SHRD EAX,EDX,0x10                   ; 004f9814
    MOV EDX,EAX                         ; 004f9818
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f981a
    ADD EAX,EDX                         ; 004f981d
    MOV dword ptr [ECX + 0x28],EAX      ; 004f981f
    INC dword ptr [0x01e52a68]          ; 004f9822 | DAT_01e52a68
    ADD ESP,0x4                         ; 004f9828
    POP EBP                             ; 004f982b
    POP EDI                             ; 004f982c
    POP ESI                             ; 004f982d
    POP EBX                             ; 004f982e
    RET                                 ; 004f982f

