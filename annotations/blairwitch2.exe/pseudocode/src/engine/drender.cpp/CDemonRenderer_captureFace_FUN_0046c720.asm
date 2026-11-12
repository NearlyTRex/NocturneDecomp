; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; STrianglePackedIndices * Stack[0x8]:4   triangle_indices
; int              Stack[0xc]:4   render_flags
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620 at 0046c6b4
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580 at 0046c612
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0 at 0046c01e
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80 at 00469f06
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005d16ec
;   TerminatedCString s_CDR_captureFace_too_many_005d1702
;   undefined4 DAT_01ba5cc4
;   undefined4 DAT_01ba5cc8
;   undefined4 DAT_01ba5ccc
;   undefined4 DAT_01ba5cd0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c720
        ;   Label: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
    PUSH ESI                            ; 0046c721
    PUSH EBP                            ; 0046c722
    MOV EBP,dword ptr [ESP + 0x10]      ; 0046c723
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046c727
    CMP dword ptr [EBP + 0x10],0x0      ; 0046c72b
    JZ 0x0046c84e                       ; 0046c72f
        ;   XREF to: 0046c84e (CONDITIONAL_JUMP)  ; LAB_0046c84e
    XOR EDX,EDX                         ; 0046c735
    MOV DX,word ptr [EBX + 0x2]         ; 0046c737
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046c73b
    SUB EAX,EDX                         ; 0046c742
    XOR ECX,ECX                         ; 0046c744
    SHL EAX,0x4                         ; 0046c746
    MOV EDX,dword ptr [EBP]             ; 0046c749
    MOV CX,word ptr [EBX]               ; 0046c74c
    LEA ESI,[EDX + EAX*0x1]             ; 0046c74f
    LEA EAX,[ECX*0x4 + 0x0]             ; 0046c752
    SUB EAX,ECX                         ; 0046c759
    SHL EAX,0x4                         ; 0046c75b
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 0046c75e
    MOV ECX,dword ptr [ESI + 0x10]      ; 0046c762
    MOV ESI,EAX                         ; 0046c765
    AND ESI,ECX                         ; 0046c767
    XOR ECX,ECX                         ; 0046c769
    MOV CX,word ptr [EBX + 0x4]         ; 0046c76b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0046c76f
    SUB EAX,ECX                         ; 0046c776
    SHL EAX,0x4                         ; 0046c778
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 0046c77b
    AND EAX,ESI                         ; 0046c77f
    TEST EAX,0x80000000                 ; 0046c781
    JZ 0x0046c790                       ; 0046c786
        ;   XREF to: 0046c790 (CONDITIONAL_JUMP)  ; LAB_0046c790
    TEST AL,0xff                        ; 0046c788
    JNZ 0x0046c84a                      ; 0046c78a
        ;   XREF to: 0046c84a (CONDITIONAL_JUMP)  ; LAB_0046c84a
    PUSH EDI                            ; 0046c790
        ;   Label: LAB_0046c790
    CMP dword ptr [0x01ba5cc4],0x1388   ; 0046c791 | DAT_01ba5cc4
    JL 0x0046c7bf                       ; 0046c79b
        ;   XREF to: 0046c7bf (CONDITIONAL_JUMP)  ; LAB_0046c7bf
    MOV EDI,0x5d16ec                    ; 0046c79d | = "..\\engine\\drender.cpp"
    MOV EAX,0xb78                       ; 0046c7a2
    PUSH 0x5d1702                       ; 0046c7a7 | = "CDR::captureFace - too many faces cap..."
    MOV dword ptr [0x01d046a0],EDI      ; 0046c7ac | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0046c7b2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046c7b7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0046c7bc
    MOV EDX,dword ptr [0x01ba5cc4]      ; 0046c7bf | DAT_01ba5cc4
        ;   Label: LAB_0046c7bf
    SHL EDX,0x5                         ; 0046c7c5
    MOV ESI,EBX                         ; 0046c7c8
    LEA EDI,[EDX + 0x1ba5cd8]           ; 0046c7ca
    MOV EAX,[0x01ba5cc8]                ; 0046c7d0 | DAT_01ba5cc8
    MOVSD ES:EDI,ESI                    ; 0046c7d5
    MOVSD ES:EDI,ESI                    ; 0046c7d6
    MOVSD ES:EDI,ESI                    ; 0046c7d7
    MOVSD ES:EDI,ESI                    ; 0046c7d8
    MOVSW ES:EDI,ESI                    ; 0046c7d9
    MOV dword ptr [EDX + 0x1ba5ccc],EAX ; 0046c7db | DAT_01ba5ccc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c7e1
    XOR ECX,ECX                         ; 0046c7e5
    MOV dword ptr [EDX + 0x1ba5cd0],EAX ; 0046c7e7 | DAT_01ba5cd0
    MOV CX,word ptr [EBX]               ; 0046c7ed
    LEA EAX,[ECX*0x4 + 0x0]             ; 0046c7f0
    XOR EDI,EDI                         ; 0046c7f7
    SUB EAX,ECX                         ; 0046c7f9
    MOV ECX,dword ptr [EBP]             ; 0046c7fb
    SHL EAX,0x4                         ; 0046c7fe
    MOV DI,word ptr [EBX + 0x2]         ; 0046c801
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 0046c805
    LEA EAX,[EDI*0x4 + 0x0]             ; 0046c809
    SUB EAX,EDI                         ; 0046c810
    SHL EAX,0x4                         ; 0046c812
    LEA EDI,[ECX + EAX*0x1]             ; 0046c815
    MOV BX,word ptr [EBX + 0x4]         ; 0046c818
    MOV EDI,dword ptr [EDI + 0x8]       ; 0046c81c
    AND EBX,0xffff                      ; 0046c81f
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046c825
    SUB EAX,EBX                         ; 0046c82c
    SHL EAX,0x4                         ; 0046c82e
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 0046c831
    CMP ESI,EDI                         ; 0046c835
    JGE 0x0046c863                      ; 0046c837
        ;   XREF to: 0046c863 (CONDITIONAL_JUMP)  ; LAB_0046c863
    CMP ESI,EAX                         ; 0046c839
    JGE 0x0046c863                      ; 0046c83b
        ;   XREF to: 0046c863 (CONDITIONAL_JUMP)  ; LAB_0046c863
    MOV dword ptr [EDX + 0x1ba5cd4],ESI ; 0046c83d
    INC dword ptr [0x01ba5cc4]          ; 0046c843 | DAT_01ba5cc4
    POP EDI                             ; 0046c849
    POP EBP                             ; 0046c84a
        ;   Label: LAB_0046c84a
    POP ESI                             ; 0046c84b
    POP EBX                             ; 0046c84c
    RET                                 ; 0046c84d
    PUSH EBX                            ; 0046c84e
        ;   Label: LAB_0046c84e
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00 ; 0046c84f
        ;   XREF to: 0051ca00 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_0051ca00(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 0046c854
    TEST EAX,EAX                        ; 0046c857
    JNZ 0x0046c790                      ; 0046c859
        ;   XREF to: 0046c790 (CONDITIONAL_JUMP)  ; LAB_0046c790
    POP EBP                             ; 0046c85f
    POP ESI                             ; 0046c860
    POP EBX                             ; 0046c861
    RET                                 ; 0046c862
    MOV EDX,dword ptr [0x01ba5cc4]      ; 0046c863 | DAT_01ba5cc4
        ;   Label: LAB_0046c863
    SHL EDX,0x5                         ; 0046c869
    CMP EDI,EAX                         ; 0046c86c
    JGE 0x0046c881                      ; 0046c86e
        ;   XREF to: 0046c881 (CONDITIONAL_JUMP)  ; LAB_0046c881
    MOV dword ptr [EDX + 0x1ba5cd4],EDI ; 0046c870
    INC dword ptr [0x01ba5cc4]          ; 0046c876 | DAT_01ba5cc4
    POP EDI                             ; 0046c87c
    POP EBP                             ; 0046c87d
    POP ESI                             ; 0046c87e
    POP EBX                             ; 0046c87f
    RET                                 ; 0046c880
    MOV dword ptr [EDX + 0x1ba5cd4],EAX ; 0046c881
        ;   Label: LAB_0046c881
    INC dword ptr [0x01ba5cc4]          ; 0046c887 | DAT_01ba5cc4
    POP EDI                             ; 0046c88d
    POP EBP                             ; 0046c88e
    POP ESI                             ; 0046c88f
    POP EBX                             ; 0046c890
    RET                                 ; 0046c891

