; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043269e(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0043268c = 00432752
;   undefined1* PTR_caseD_3_00432694 = 00432732
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;   undefined4 DAT_007bee38
;   undefined4 DAT_007bfd08
;   undefined4 DAT_007c0f0c
;   undefined1 DAT_007c0f10
;   undefined4 DAT_007c0f14
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043269e
        ;   Label: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_0043269e
    PUSH EBX                            ; 004326a0
    PUSH ESI                            ; 004326a1
    PUSH EDI                            ; 004326a2
    PUSH EBP                            ; 004326a3
    SUB ESP,0x4                         ; 004326a4
    XOR EDX,EDX                         ; 004326a7
    MOV ECX,dword ptr [0x007bfd08]      ; 004326a9 | DAT_007bfd08
    MOV dword ptr [ESP],EDX             ; 004326af
    TEST ECX,ECX                        ; 004326b2
    JLE 0x0043274a                      ; 004326b4
        ;   XREF to: 0043274a (CONDITIONAL_JUMP)  ; LAB_0043274a
    MOV EBX,0x7c0f0c                    ; 004326ba
    MOV EAX,dword ptr [ESP]             ; 004326bf
        ;   Label: LAB_004326bf
    MOV EBP,dword ptr [0x007bfd08]      ; 004326c2 | DAT_007bfd08
    INC EAX                             ; 004326c8
    CMP EAX,EBP                         ; 004326c9
    JNZ 0x004326cf                      ; 004326cb
        ;   XREF to: 004326cf (CONDITIONAL_JUMP)  ; LAB_004326cf
    XOR EAX,EBP                         ; 004326cd
    IMUL EAX,EAX,0x30                   ; 004326cf
        ;   Label: LAB_004326cf
    MOV EBP,0x7c0f0c                    ; 004326d2 | DAT_007c0f0c
    MOV EDX,EBX                         ; 004326d7
    MOV EDI,dword ptr [EBX + 0x8]       ; 004326d9
    MOV ECX,dword ptr [EBX + 0x4]       ; 004326dc
    NEG EDI                             ; 004326df
    ADD EBP,EAX                         ; 004326e1
    XOR EAX,EAX                         ; 004326e3
    CMP EDI,ECX                         ; 004326e5
    JL 0x004326ee                       ; 004326e7
        ;   XREF to: 004326ee (CONDITIONAL_JUMP)  ; LAB_004326ee
    MOV EAX,0x1                         ; 004326e9
    MOV EDI,dword ptr [EBP + 0x8]       ; 004326ee | DAT_007c0f14
        ;   Label: LAB_004326ee
    MOV ESI,dword ptr [EBP + 0x4]       ; 004326f1 | DAT_007c0f10
    NEG EDI                             ; 004326f4
    CMP EDI,ESI                         ; 004326f6
    JL 0x004326fc                       ; 004326f8
        ;   XREF to: 004326fc (CONDITIONAL_JUMP)  ; LAB_004326fc
    OR AL,0x2                           ; 004326fa
    CMP EAX,0x3                         ; 004326fc
        ;   Label: LAB_004326fc
    JA 0x00432732                       ; 004326ff
        ;   XREF to: 00432732 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432688]  ; 00432701 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00432708 | DAT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043270f
    MOV ESI,EDX                         ; 00432714
    ADD EDI,0x7bee34                    ; 00432716 | DAT_007bee34
    PUSH EDI                            ; 0043271c
    MOV EAX,ECX                         ; 0043271d
    SHR ECX,0x2                         ; 0043271f
    MOVSD.REP ES:EDI,ESI                ; 00432722 | DAT_007bee34 | DAT_007bee38
    MOV CL,AL                           ; 00432724
    AND CL,0x3                          ; 00432726
    MOVSB.REP ES:EDI,ESI                ; 00432729 | DAT_007bee38
    POP EDI                             ; 0043272b
    INC dword ptr [0x007bee30]          ; 0043272c | DAT_007bee30
    MOV ESI,dword ptr [ESP]             ; 00432732
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007bfd08]      ; 00432735 | DAT_007bfd08
    INC ESI                             ; 0043273b
    ADD EBX,0x30                        ; 0043273c
    MOV dword ptr [ESP],ESI             ; 0043273f
    CMP ESI,EDI                         ; 00432742
    JL 0x004326bf                       ; 00432744
        ;   XREF to: 004326bf (CONDITIONAL_JUMP)  ; LAB_004326bf
    ADD ESP,0x4                         ; 0043274a
        ;   Label: LAB_0043274a
    POP EBP                             ; 0043274d
    POP EDI                             ; 0043274e
    POP ESI                             ; 0043274f
    POP EBX                             ; 00432750
    RET                                 ; 00432751
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 00432752 | DAT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 00432759 | DAT_007bee34
    PUSH EAX                            ; 0043275e
    PUSH EDX                            ; 0043275f
    PUSH EBP                            ; 00432760
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0 ; 00432761
        ;   XREF to: 004321a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bee30]      ; 00432766 | DAT_007bee30
    INC ESI                             ; 0043276c
    ADD ESP,0xc                         ; 0043276d
    MOV dword ptr [0x007bee30],ESI      ; 00432770 | DAT_007bee30
    JMP 0x00432732                      ; 00432776
        ;   XREF to: 00432732 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00432778 | DAT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043277f
    MOV ESI,EDX                         ; 00432784
    ADD EDI,0x7bee34                    ; 00432786 | DAT_007bee34
    PUSH EDI                            ; 0043278c
    MOV EAX,ECX                         ; 0043278d
    SHR ECX,0x2                         ; 0043278f
    MOVSD.REP ES:EDI,ESI                ; 00432792 | DAT_007bee34 | DAT_007bee38
    MOV CL,AL                           ; 00432794
    AND CL,0x3                          ; 00432796
    MOVSB.REP ES:EDI,ESI                ; 00432799 | DAT_007bee38
    POP EDI                             ; 0043279b
    MOV ECX,dword ptr [0x007bee30]      ; 0043279c | DAT_007bee30
    INC ECX                             ; 004327a2
    MOV dword ptr [0x007bee30],ECX      ; 004327a3 | DAT_007bee30
    IMUL EAX,ECX,0x30                   ; 004327a9
    ADD EAX,0x7bee34                    ; 004327ac | DAT_007bee34
    PUSH EAX                            ; 004327b1
    PUSH EBP                            ; 004327b2
    PUSH EDX                            ; 004327b3
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0 ; 004327b4
        ;   XREF to: 004321a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_004321a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bee30]      ; 004327b9 | DAT_007bee30
    INC EDI                             ; 004327bf
    ADD ESP,0xc                         ; 004327c0
    MOV dword ptr [0x007bee30],EDI      ; 004327c3 | DAT_007bee30
    JMP 0x00432732                      ; 004327c9
        ;   XREF to: 00432732 (UNCONDITIONAL_JUMP)  ; caseD_3

