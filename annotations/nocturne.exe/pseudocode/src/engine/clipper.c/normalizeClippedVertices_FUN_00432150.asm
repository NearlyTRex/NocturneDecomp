; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_normalizeClippedVertices_FUN_00432150(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432150
        ;   Label: engine_clipper.c_normalizeClippedVertices_FUN_00432150
    PUSH ESI                            ; 00432151
    PUSH EDI                            ; 00432152
    PUSH EBP                            ; 00432153
    MOV ESI,dword ptr [0x00766c70]      ; 00432154 | DAT_00766c70
    XOR ECX,ECX                         ; 0043215a
    TEST ESI,ESI                        ; 0043215c
    JLE 0x0043217d                      ; 0043215e
        ;   XREF to: 0043217d (CONDITIONAL_JUMP)  ; LAB_0043217d
    MOV EAX,0x766c74                    ; 00432160
    MOV EDX,dword ptr [EAX + 0x8]       ; 00432165
        ;   Label: LAB_00432165
    TEST EDX,EDX                        ; 00432168
    JZ 0x00432188                       ; 0043216a
        ;   XREF to: 00432188 (CONDITIONAL_JUMP)  ; LAB_00432188
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043216c
    CMP EBX,dword ptr [EAX]             ; 0043216f
    JGE 0x00432196                      ; 00432171
        ;   XREF to: 00432196 (CONDITIONAL_JUMP)  ; LAB_00432196
    MOV dword ptr [EAX],EBX             ; 00432173
    INC ECX                             ; 00432175
        ;   Label: LAB_00432175
    ADD EAX,0x30                        ; 00432176
    CMP ECX,ESI                         ; 00432179
    JL 0x00432165                       ; 0043217b
        ;   XREF to: 00432165 (CONDITIONAL_JUMP)  ; LAB_00432165
    MOV dword ptr [0x00766c70],ESI      ; 0043217d | DAT_00766c70
        ;   Label: LAB_0043217d
    POP EBP                             ; 00432183
    POP EDI                             ; 00432184
    POP ESI                             ; 00432185
    POP EBX                             ; 00432186
    RET                                 ; 00432187
    MOV dword ptr [EAX + 0x8],0x1       ; 00432188
        ;   Label: LAB_00432188
    MOV dword ptr [EAX],EDX             ; 0043218f
    MOV dword ptr [EAX + 0x4],EDX       ; 00432191
    JMP 0x00432175                      ; 00432194
        ;   XREF to: 00432175 (UNCONDITIONAL_JUMP)  ; LAB_00432175
    MOV EDX,EBX                         ; 00432196
        ;   Label: LAB_00432196
    MOV EDI,dword ptr [EAX]             ; 00432198
    NEG EDX                             ; 0043219a
    CMP EDX,EDI                         ; 0043219c
    JLE 0x004321a4                      ; 0043219e
        ;   XREF to: 004321a4 (CONDITIONAL_JUMP)  ; LAB_004321a4
    MOV dword ptr [EAX],EDX             ; 004321a0
    JMP 0x00432175                      ; 004321a2
        ;   XREF to: 00432175 (UNCONDITIONAL_JUMP)  ; LAB_00432175
    MOV EBP,dword ptr [EAX + 0x8]       ; 004321a4
        ;   Label: LAB_004321a4
    MOV EBX,dword ptr [EAX + 0x4]       ; 004321a7
    CMP EBX,EBP                         ; 004321aa
    JLE 0x004321b3                      ; 004321ac
        ;   XREF to: 004321b3 (CONDITIONAL_JUMP)  ; LAB_004321b3
    MOV dword ptr [EAX + 0x4],EBP       ; 004321ae
    JMP 0x00432175                      ; 004321b1
        ;   XREF to: 00432175 (UNCONDITIONAL_JUMP)  ; LAB_00432175
    CMP EDX,EBX                         ; 004321b3
        ;   Label: LAB_004321b3
    JLE 0x00432175                      ; 004321b5
        ;   XREF to: 00432175 (CONDITIONAL_JUMP)  ; LAB_00432175
    MOV dword ptr [EAX + 0x4],EDX       ; 004321b7
    JMP 0x00432175                      ; 004321ba
        ;   XREF to: 00432175 (UNCONDITIONAL_JUMP)  ; LAB_00432175

