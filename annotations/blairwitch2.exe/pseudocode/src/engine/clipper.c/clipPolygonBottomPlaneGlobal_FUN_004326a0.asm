; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_004326a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bfd08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004326a0
        ;   Label: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_004326a0
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
    MOV EBP,0x7c0f0c                    ; 004326d2
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
    MOV EDI,dword ptr [EBP + 0x8]       ; 004326ee
        ;   Label: LAB_004326ee
    MOV ESI,dword ptr [EBP + 0x4]       ; 004326f1
    NEG EDI                             ; 004326f4
    CMP EDI,ESI                         ; 004326f6
    JL 0x004326fc                       ; 004326f8
        ;   XREF to: 004326fc (CONDITIONAL_JUMP)  ; LAB_004326fc
    OR AL,0x2                           ; 004326fa
    CMP EAX,0x3                         ; 004326fc
        ;   Label: LAB_004326fc
    JA 0x00432732                       ; 004326ff
        ;   XREF to: 00432732 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432688]  ; 00432701
        ;   Label: switchD
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

