; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_perspectiveDivideVertices_FUN_00434160(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c7c
;   undefined4 DAT_00766ca4
;   undefined4 DAT_00766ca8
;   undefined4 DAT_00766cac
;   undefined4 DAT_00766cd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434160
        ;   Label: engine_clipper.c_perspectiveDivideVertices_FUN_00434160
    PUSH ESI                            ; 00434161
    PUSH EDI                            ; 00434162
    PUSH EBP                            ; 00434163
    MOV ESI,dword ptr [0x00766c70]      ; 00434164 | DAT_00766c70
    MOV EAX,0x766c74                    ; 0043416a | DAT_00766c74
    XOR ECX,ECX                         ; 0043416f
    TEST ESI,ESI                        ; 00434171
    JLE 0x0043418d                      ; 00434173
        ;   XREF to: 0043418d (CONDITIONAL_JUMP)  ; LAB_0043418d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00434175 | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_00434175
    TEST EDX,EDX                        ; 00434178
    JZ 0x00434198                       ; 0043417a
        ;   XREF to: 00434198 (CONDITIONAL_JUMP)  ; LAB_00434198
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043417c | DAT_00766c7c | DAT_00766cac
    CMP EBX,dword ptr [EAX]             ; 0043417f | DAT_00766c74 | DAT_00766ca4
    JGE 0x004341a6                      ; 00434181
        ;   XREF to: 004341a6 (CONDITIONAL_JUMP)  ; LAB_004341a6
    MOV dword ptr [EAX],EBX             ; 00434183 | DAT_00766c74 | DAT_00766ca4
    INC ECX                             ; 00434185
        ;   Label: LAB_00434185
    ADD EAX,0x30                        ; 00434186 | DAT_00766ca4 | DAT_00766cd4
    CMP ECX,ESI                         ; 00434189
    JL 0x00434175                       ; 0043418b
        ;   XREF to: 00434175 (CONDITIONAL_JUMP)  ; LAB_00434175
    MOV dword ptr [0x00766c70],ESI      ; 0043418d | DAT_00766c70
        ;   Label: LAB_0043418d
    POP EBP                             ; 00434193
    POP EDI                             ; 00434194
    POP ESI                             ; 00434195
    POP EBX                             ; 00434196
    RET                                 ; 00434197
    MOV dword ptr [EAX + 0x8],0x1       ; 00434198 | DAT_00766cac
        ;   Label: LAB_00434198
    MOV dword ptr [EAX],EDX             ; 0043419f | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],EDX       ; 004341a1 | DAT_00766ca8
    JMP 0x00434185                      ; 004341a4
        ;   XREF to: 00434185 (UNCONDITIONAL_JUMP)  ; LAB_00434185
    MOV EDX,EBX                         ; 004341a6
        ;   Label: LAB_004341a6
    MOV EDI,dword ptr [EAX]             ; 004341a8 | DAT_00766ca4
    NEG EDX                             ; 004341aa
    CMP EDX,EDI                         ; 004341ac
    JLE 0x004341b4                      ; 004341ae
        ;   XREF to: 004341b4 (CONDITIONAL_JUMP)  ; LAB_004341b4
    MOV dword ptr [EAX],EDX             ; 004341b0 | DAT_00766ca4
    JMP 0x00434185                      ; 004341b2
        ;   XREF to: 00434185 (UNCONDITIONAL_JUMP)  ; LAB_00434185
    MOV EBP,dword ptr [EAX + 0x8]       ; 004341b4 | DAT_00766cac
        ;   Label: LAB_004341b4
    MOV EBX,dword ptr [EAX + 0x4]       ; 004341b7 | DAT_00766ca8
    CMP EBX,EBP                         ; 004341ba
    JLE 0x004341c3                      ; 004341bc
        ;   XREF to: 004341c3 (CONDITIONAL_JUMP)  ; LAB_004341c3
    MOV dword ptr [EAX + 0x4],EBP       ; 004341be | DAT_00766ca8
    JMP 0x00434185                      ; 004341c1
        ;   XREF to: 00434185 (UNCONDITIONAL_JUMP)  ; LAB_00434185
    CMP EDX,EBX                         ; 004341c3
        ;   Label: LAB_004341c3
    JLE 0x00434185                      ; 004341c5
        ;   XREF to: 00434185 (CONDITIONAL_JUMP)  ; LAB_00434185
    MOV dword ptr [EAX + 0x4],EDX       ; 004341c7 | DAT_00766ca8
    JMP 0x00434185                      ; 004341ca
        ;   XREF to: 00434185 (UNCONDITIONAL_JUMP)  ; LAB_00434185

