; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ba220(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d22c6c
;
; Called Functions:
;   FUN_00534890
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ba220
        ;   Label: FUN_004ba220
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ba221
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ba225
    CMP EDX,dword ptr [ECX + 0x264]     ; 004ba229
    JZ 0x004ba23d                       ; 004ba22f
        ;   XREF to: 004ba23d (CONDITIONAL_JUMP)  ; LAB_004ba23d
    TEST EDX,EDX                        ; 004ba231
    JNZ 0x004ba23f                      ; 004ba233
        ;   XREF to: 004ba23f (CONDITIONAL_JUMP)  ; LAB_004ba23f
    MOV dword ptr [ECX + 0x264],EDX     ; 004ba235
    JZ 0x004ba259                       ; 004ba23b
        ;   XREF to: 004ba259 (CONDITIONAL_JUMP)  ; LAB_004ba259
    POP EBP                             ; 004ba23d
        ;   Label: LAB_004ba23d
    RET                                 ; 004ba23e
    MOV EAX,[0x00603b28]                ; 004ba23f | DAT_00603b28
        ;   Label: LAB_004ba23f
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004ba244
    MOV [0x01d22c6c],EAX                ; 004ba24a | DAT_01d22c6c
    MOV dword ptr [ECX + 0x264],EDX     ; 004ba24f
    JZ 0x004ba259                       ; 004ba255
        ;   XREF to: 004ba259 (CONDITIONAL_JUMP)  ; LAB_004ba259
    POP EBP                             ; 004ba257
    RET                                 ; 004ba258
    PUSH EDI                            ; 004ba259
        ;   Label: LAB_004ba259
    MOV EDI,dword ptr [0x01d22c6c]      ; 004ba25a | DAT_01d22c6c
    PUSH EDI                            ; 004ba260
    MOV EBP,dword ptr [0x00603b28]      ; 004ba261 | DAT_00603b28
    PUSH EBP                            ; 004ba267
    CALL FUN_00534890                   ; 004ba268
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; undefined FUN_00534890()
    ADD ESP,0x8                         ; 004ba26d
    POP EDI                             ; 004ba270
    POP EBP                             ; 004ba271
    RET                                 ; 004ba272

