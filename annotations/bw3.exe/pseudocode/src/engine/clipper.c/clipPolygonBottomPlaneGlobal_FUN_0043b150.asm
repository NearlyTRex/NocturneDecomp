; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043b150(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007e4d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b150
        ;   Label: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_0043b150
    PUSH ESI                            ; 0043b151
    PUSH EDI                            ; 0043b152
    PUSH EBP                            ; 0043b153
    SUB ESP,0x4                         ; 0043b154
    XOR EDX,EDX                         ; 0043b157
    MOV ECX,dword ptr [0x007e4d60]      ; 0043b159 | DAT_007e4d60
    MOV dword ptr [ESP],EDX             ; 0043b15f
    TEST ECX,ECX                        ; 0043b162
    JLE 0x0043b1fa                      ; 0043b164
        ;   XREF to: 0043b1fa (CONDITIONAL_JUMP)  ; LAB_0043b1fa
    MOV EBX,0x7e5f64                    ; 0043b16a
    MOV EAX,dword ptr [ESP]             ; 0043b16f
        ;   Label: LAB_0043b16f
    MOV EBP,dword ptr [0x007e4d60]      ; 0043b172 | DAT_007e4d60
    INC EAX                             ; 0043b178
    CMP EAX,EBP                         ; 0043b179
    JNZ 0x0043b17f                      ; 0043b17b
        ;   XREF to: 0043b17f (CONDITIONAL_JUMP)  ; LAB_0043b17f
    XOR EAX,EBP                         ; 0043b17d
    IMUL EAX,EAX,0x30                   ; 0043b17f
        ;   Label: LAB_0043b17f
    MOV EBP,0x7e5f64                    ; 0043b182
    MOV EDX,EBX                         ; 0043b187
    MOV EDI,dword ptr [EBX + 0x8]       ; 0043b189
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043b18c
    NEG EDI                             ; 0043b18f
    ADD EBP,EAX                         ; 0043b191
    XOR EAX,EAX                         ; 0043b193
    CMP EDI,ECX                         ; 0043b195
    JL 0x0043b19e                       ; 0043b197
        ;   XREF to: 0043b19e (CONDITIONAL_JUMP)  ; LAB_0043b19e
    MOV EAX,0x1                         ; 0043b199
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043b19e
        ;   Label: LAB_0043b19e
    MOV ESI,dword ptr [EBP + 0x4]       ; 0043b1a1
    NEG EDI                             ; 0043b1a4
    CMP EDI,ESI                         ; 0043b1a6
    JL 0x0043b1ac                       ; 0043b1a8
        ;   XREF to: 0043b1ac (CONDITIONAL_JUMP)  ; LAB_0043b1ac
    OR AL,0x2                           ; 0043b1aa
    CMP EAX,0x3                         ; 0043b1ac
        ;   Label: LAB_0043b1ac
    JA 0x0043b1e2                       ; 0043b1af
        ;   XREF to: 0043b1e2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b138]  ; 0043b1b1
        ;   Label: switchD
    MOV ESI,dword ptr [ESP]             ; 0043b1e2
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007e4d60]      ; 0043b1e5 | DAT_007e4d60
    INC ESI                             ; 0043b1eb
    ADD EBX,0x30                        ; 0043b1ec
    MOV dword ptr [ESP],ESI             ; 0043b1ef
    CMP ESI,EDI                         ; 0043b1f2
    JL 0x0043b16f                       ; 0043b1f4
        ;   XREF to: 0043b16f (CONDITIONAL_JUMP)  ; LAB_0043b16f
    ADD ESP,0x4                         ; 0043b1fa
        ;   Label: LAB_0043b1fa
    POP EBP                             ; 0043b1fd
    POP EDI                             ; 0043b1fe
    POP ESI                             ; 0043b1ff
    POP EBX                             ; 0043b200
    RET                                 ; 0043b201

