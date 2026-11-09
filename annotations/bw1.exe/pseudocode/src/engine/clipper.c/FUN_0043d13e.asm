; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_0043d13e(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043d128 = 0043d1a1
;   undefined1* PTR_caseD_3_0043d134 = 0043d1cb
;   undefined4 DAT_007c8420
;   undefined4 DAT_007c8424
;   undefined4 DAT_007c8430
;   undefined1 DAT_007c8434
;   undefined4 DAT_007c8a30
;   undefined4 DAT_007c8a38
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043d13e
        ;   Label: engine_clipper.c_FUN_0043d13e
    PUSH EBX                            ; 0043d140
    PUSH ESI                            ; 0043d141
    PUSH EDI                            ; 0043d142
    PUSH EBP                            ; 0043d143
    SUB ESP,0x4                         ; 0043d144
    XOR EDX,EDX                         ; 0043d147
    MOV ECX,dword ptr [0x007c8420]      ; 0043d149 | DAT_007c8420
    MOV dword ptr [ESP],EDX             ; 0043d14f
    TEST ECX,ECX                        ; 0043d152
    JLE 0x0043d1df                      ; 0043d154
        ;   XREF to: 0043d1df (CONDITIONAL_JUMP)  ; LAB_0043d1df
    MOV EBX,0x7c8a30                    ; 0043d15a
    MOV EAX,dword ptr [ESP]             ; 0043d15f
        ;   Label: LAB_0043d15f
    MOV EBP,dword ptr [0x007c8420]      ; 0043d162 | DAT_007c8420
    INC EAX                             ; 0043d168
    CMP EAX,EBP                         ; 0043d169
    JNZ 0x0043d16f                      ; 0043d16b
        ;   XREF to: 0043d16f (CONDITIONAL_JUMP)  ; LAB_0043d16f
    XOR EAX,EBP                         ; 0043d16d
    IMUL EAX,EAX,0x30                   ; 0043d16f
        ;   Label: LAB_0043d16f
    MOV EBP,0x7c8a30                    ; 0043d172 | DAT_007c8a30
    MOV EDX,EBX                         ; 0043d177
    MOV EDI,dword ptr [EBX]             ; 0043d179
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043d17b
    ADD EBP,EAX                         ; 0043d17e
    XOR EAX,EAX                         ; 0043d180
    CMP EDI,ECX                         ; 0043d182
    JL 0x0043d18b                       ; 0043d184
        ;   XREF to: 0043d18b (CONDITIONAL_JUMP)  ; LAB_0043d18b
    MOV EAX,0x1                         ; 0043d186
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043d18b | DAT_007c8a38
        ;   Label: LAB_0043d18b
    CMP ESI,dword ptr [EBP]             ; 0043d18e | DAT_007c8a30
    JG 0x0043d195                       ; 0043d191
        ;   XREF to: 0043d195 (CONDITIONAL_JUMP)  ; LAB_0043d195
    OR AL,0x2                           ; 0043d193
    CMP EAX,0x3                         ; 0043d195
        ;   Label: LAB_0043d195
    JA 0x0043d1cb                       ; 0043d198
        ;   XREF to: 0043d1cb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d128]  ; 0043d19a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043d1a1 | DAT_007c8424
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043d1a8
    MOV ESI,EDX                         ; 0043d1ad
    ADD EDI,0x7c8430                    ; 0043d1af | DAT_007c8430
    PUSH EDI                            ; 0043d1b5
    MOV EAX,ECX                         ; 0043d1b6
    SHR ECX,0x2                         ; 0043d1b8
    MOVSD.REP ES:EDI,ESI                ; 0043d1bb | DAT_007c8430 | DAT_007c8434
    MOV CL,AL                           ; 0043d1bd
    AND CL,0x3                          ; 0043d1bf
    MOVSB.REP ES:EDI,ESI                ; 0043d1c2 | DAT_007c8434
    POP EDI                             ; 0043d1c4
    INC dword ptr [0x007c8424]          ; 0043d1c5 | DAT_007c8424
    MOV ESI,dword ptr [ESP]             ; 0043d1cb
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007c8420]      ; 0043d1ce | DAT_007c8420
    INC ESI                             ; 0043d1d4
    ADD EBX,0x30                        ; 0043d1d5
    MOV dword ptr [ESP],ESI             ; 0043d1d8
    CMP ESI,EDI                         ; 0043d1db
    JL 0x0043d15f                       ; 0043d1dd
        ;   XREF to: 0043d15f (CONDITIONAL_JUMP)  ; LAB_0043d15f
    ADD ESP,0x4                         ; 0043d1df
        ;   Label: LAB_0043d1df
    POP EBP                             ; 0043d1e2
    POP EDI                             ; 0043d1e3
    POP ESI                             ; 0043d1e4
    POP EBX                             ; 0043d1e5
    RET                                 ; 0043d1e6
    IMUL EAX,dword ptr [0x007c8424],0x30 ; 0043d1e7 | DAT_007c8424
        ;   Label: caseD_1
    ADD EAX,0x7c8430                    ; 0043d1ee | DAT_007c8430
    PUSH EAX                            ; 0043d1f3
    PUSH EDX                            ; 0043d1f4
    PUSH EBP                            ; 0043d1f5
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043d1f6
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70()
    MOV ESI,dword ptr [0x007c8424]      ; 0043d1fb | DAT_007c8424
    INC ESI                             ; 0043d201
    ADD ESP,0xc                         ; 0043d202
    MOV dword ptr [0x007c8424],ESI      ; 0043d205 | DAT_007c8424
    JMP 0x0043d1cb                      ; 0043d20b
        ;   XREF to: 0043d1cb (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043d20d | DAT_007c8424
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043d214
    MOV ESI,EDX                         ; 0043d219
    ADD EDI,0x7c8430                    ; 0043d21b | DAT_007c8430
    PUSH EDI                            ; 0043d221
    MOV EAX,ECX                         ; 0043d222
    SHR ECX,0x2                         ; 0043d224
    MOVSD.REP ES:EDI,ESI                ; 0043d227 | DAT_007c8430 | DAT_007c8434
    MOV CL,AL                           ; 0043d229
    AND CL,0x3                          ; 0043d22b
    MOVSB.REP ES:EDI,ESI                ; 0043d22e | DAT_007c8434
    POP EDI                             ; 0043d230
    MOV ECX,dword ptr [0x007c8424]      ; 0043d231 | DAT_007c8424
    INC ECX                             ; 0043d237
    MOV dword ptr [0x007c8424],ECX      ; 0043d238 | DAT_007c8424
    IMUL EAX,ECX,0x30                   ; 0043d23e
    ADD EAX,0x7c8430                    ; 0043d241 | DAT_007c8430
    PUSH EAX                            ; 0043d246
    PUSH EBP                            ; 0043d247
    PUSH EDX                            ; 0043d248
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043d249
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70()
    MOV EDI,dword ptr [0x007c8424]      ; 0043d24e | DAT_007c8424
    INC EDI                             ; 0043d254
    ADD ESP,0xc                         ; 0043d255
    MOV dword ptr [0x007c8424],EDI      ; 0043d258 | DAT_007c8424
    JMP 0x0043d1cb                      ; 0043d25e
        ;   XREF to: 0043d1cb (UNCONDITIONAL_JUMP)  ; caseD_3

