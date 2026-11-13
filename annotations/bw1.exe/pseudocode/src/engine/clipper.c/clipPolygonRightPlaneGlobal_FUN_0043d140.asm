; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043d140(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c8420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d140
        ;   Label: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_0043d140
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
    MOV EBP,0x7c8a30                    ; 0043d172
    MOV EDX,EBX                         ; 0043d177
    MOV EDI,dword ptr [EBX]             ; 0043d179
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043d17b
    ADD EBP,EAX                         ; 0043d17e
    XOR EAX,EAX                         ; 0043d180
    CMP EDI,ECX                         ; 0043d182
    JL 0x0043d18b                       ; 0043d184
        ;   XREF to: 0043d18b (CONDITIONAL_JUMP)  ; LAB_0043d18b
    MOV EAX,0x1                         ; 0043d186
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043d18b
        ;   Label: LAB_0043d18b
    CMP ESI,dword ptr [EBP]             ; 0043d18e
    JG 0x0043d195                       ; 0043d191
        ;   XREF to: 0043d195 (CONDITIONAL_JUMP)  ; LAB_0043d195
    OR AL,0x2                           ; 0043d193
    CMP EAX,0x3                         ; 0043d195
        ;   Label: LAB_0043d195
    JA 0x0043d1cb                       ; 0043d198
        ;   XREF to: 0043d1cb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d128]  ; 0043d19a
        ;   Label: switchD
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

