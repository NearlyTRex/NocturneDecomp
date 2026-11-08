; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b1e0(int *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005e2805
;   TerminatedCString s_Can_t_re_mount_s_005e2817
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00519f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b1e0
        ;   Label: FUN_0051b1e0
    PUSH ESI                            ; 0051b1e1
    PUSH EDI                            ; 0051b1e2
    PUSH EBP                            ; 0051b1e3
    SUB ESP,0x100                       ; 0051b1e4
    MOV EAX,dword ptr [ESP + 0x114]     ; 0051b1ea
    MOV EDX,dword ptr [EAX]             ; 0051b1f1
    XOR EBP,EBP                         ; 0051b1f3
    TEST EDX,EDX                        ; 0051b1f5
    JLE 0x0051b241                      ; 0051b1f7
        ;   XREF to: 0051b241 (CONDITIONAL_JUMP)  ; LAB_0051b241
    MOV EBX,EAX                         ; 0051b1f9
    MOV ESI,dword ptr [EBX + 0x4]       ; 0051b1fb
        ;   Label: LAB_0051b1fb
    MOV EDI,ESP                         ; 0051b1fe
    ADD ESI,0x4                         ; 0051b200
    PUSH EDI                            ; 0051b203
    MOV AL,byte ptr [ESI]               ; 0051b204
        ;   Label: LAB_0051b204
    MOV byte ptr [EDI],AL               ; 0051b206
    CMP AL,0x0                          ; 0051b208
    JZ 0x0051b21c                       ; 0051b20a
        ;   XREF to: 0051b21c (CONDITIONAL_JUMP)  ; LAB_0051b21c
    MOV AL,byte ptr [ESI + 0x1]         ; 0051b20c
    ADD ESI,0x2                         ; 0051b20f
    MOV byte ptr [EDI + 0x1],AL         ; 0051b212
    ADD EDI,0x2                         ; 0051b215
    CMP AL,0x0                          ; 0051b218
    JNZ 0x0051b204                      ; 0051b21a
        ;   XREF to: 0051b204 (CONDITIONAL_JUMP)  ; LAB_0051b204
    POP EDI                             ; 0051b21c
        ;   Label: LAB_0051b21c
    MOV EAX,ESP                         ; 0051b21d
    PUSH EAX                            ; 0051b21f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0051b220
    PUSH ESI                            ; 0051b223
    CALL FUN_00519f00                   ; 0051b224
        ;   XREF to: 00519f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00519f00()
    ADD ESP,0x8                         ; 0051b229
    TEST EAX,EAX                        ; 0051b22c
    JZ 0x0051b24c                       ; 0051b22e
        ;   XREF to: 0051b24c (CONDITIONAL_JUMP)  ; LAB_0051b24c
    MOV EAX,dword ptr [ESP + 0x114]     ; 0051b230
        ;   Label: LAB_0051b230
    INC EBP                             ; 0051b237
    MOV ECX,dword ptr [EAX]             ; 0051b238
    ADD EBX,0x4                         ; 0051b23a
    CMP EBP,ECX                         ; 0051b23d
    JL 0x0051b1fb                       ; 0051b23f
        ;   XREF to: 0051b1fb (CONDITIONAL_JUMP)  ; LAB_0051b1fb
    ADD ESP,0x100                       ; 0051b241
        ;   Label: LAB_0051b241
    POP EBP                             ; 0051b247
    POP EDI                             ; 0051b248
    POP ESI                             ; 0051b249
    POP EBX                             ; 0051b24a
    RET                                 ; 0051b24b
    MOV dword ptr [0x01d046a4],0x404    ; 0051b24c | DAT_01d046a4
        ;   Label: LAB_0051b24c
    MOV EAX,ESP                         ; 0051b256
    PUSH EAX                            ; 0051b258
    MOV EDI,0x5e2805                    ; 0051b259 | = "..\\engine\\pod.cpp"
    PUSH 0x5e2817                       ; 0051b25e | = "Can't re-mount %s"
    MOV dword ptr [0x01d046a0],EDI      ; 0051b263 | DAT_01d046a0
    CALL FUN_004e4500                   ; 0051b269
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0051b26e
    JMP 0x0051b230                      ; 0051b271
        ;   XREF to: 0051b230 (UNCONDITIONAL_JUMP)  ; LAB_0051b230

