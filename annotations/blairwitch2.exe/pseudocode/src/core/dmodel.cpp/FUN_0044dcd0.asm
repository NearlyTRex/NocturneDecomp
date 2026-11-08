; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044dcd0(char *param_1,char *param_2)
;
;
; XREF[4]:
;   FUN_0044fba0 at 0044fc2a
;   FUN_004e1480 at 004e1505
;   FUN_0052c0e0 at 0052cc50
;   FUN_005adeb0 at 005adf80
;
; Referenced Globals:
;   undefined4 DAT_005cf58f
;   TerminatedCString s_models_005cf592
;   TerminatedCString s_core_dmodel_cpp_005cf599
;   TerminatedCString s_Can_t_open_keyframed_mod_005cf5ac
;   undefined4 DAT_005cf5ca
;   TerminatedCString s_models_005cf5cd
;   TerminatedCString s_core_dmodel_cpp_005cf5d4
;   TerminatedCString s_Can_t_open_keyframed_mod_005cf5e7
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0044de20
;   FUN_0044e010
;   FUN_0044e590
;   FUN_0044ecb0
;   FUN_0044ee60
;   FUN_00460c70
;   FUN_004e4500
;   FUN_005b8180
;   FUN_005b8350
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dcd0
        ;   Label: FUN_0044dcd0
    PUSH ESI                            ; 0044dcd1
    PUSH EDI                            ; 0044dcd2
    PUSH EBP                            ; 0044dcd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044dcd4
    PUSH EBX                            ; 0044dcd8
    CALL FUN_0044e590                   ; 0044dcd9
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e590()
    ADD ESP,0x4                         ; 0044dcde
    PUSH 0x5cf58f                       ; 0044dce1 | DAT_005cf58f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044dce6
    PUSH EDX                            ; 0044dcea
    PUSH 0x5cf592                       ; 0044dceb | = "models"
    CALL FUN_00460c70                   ; 0044dcf0
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0044dcf5
    MOV EBP,EAX                         ; 0044dcf8
    TEST EAX,EAX                        ; 0044dcfa
    JZ 0x0044ddde                       ; 0044dcfc
        ;   XREF to: 0044ddde (CONDITIONAL_JUMP)  ; LAB_0044ddde
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044dd02
        ;   Label: LAB_0044dd02
    MOV EDI,EBX                         ; 0044dd06
    PUSH EDI                            ; 0044dd08
    MOV AL,byte ptr [ESI]               ; 0044dd09
        ;   Label: LAB_0044dd09
    MOV byte ptr [EDI],AL               ; 0044dd0b
    CMP AL,0x0                          ; 0044dd0d
    JZ 0x0044dd21                       ; 0044dd0f
        ;   XREF to: 0044dd21 (CONDITIONAL_JUMP)  ; LAB_0044dd21
    MOV AL,byte ptr [ESI + 0x1]         ; 0044dd11
    ADD ESI,0x2                         ; 0044dd14
    MOV byte ptr [EDI + 0x1],AL         ; 0044dd17
    ADD EDI,0x2                         ; 0044dd1a
    CMP AL,0x0                          ; 0044dd1d
    JNZ 0x0044dd09                      ; 0044dd1f
        ;   XREF to: 0044dd09 (CONDITIONAL_JUMP)  ; LAB_0044dd09
    POP EDI                             ; 0044dd21
        ;   Label: LAB_0044dd21
    PUSH EBP                            ; 0044dd22
    CALL FUN_005b8180                   ; 0044dd23
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 0044dd28
    PUSH EBP                            ; 0044dd2b
    PUSH EAX                            ; 0044dd2c
    MOV ESI,EAX                         ; 0044dd2d
    CALL FUN_005b8350                   ; 0044dd2f
        ;   XREF to: 005b8350 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8350()
    ADD ESP,0x8                         ; 0044dd34
    CMP ESI,0x2f                        ; 0044dd37
    JNZ 0x0044de0b                      ; 0044dd3a
        ;   XREF to: 0044de0b (CONDITIONAL_JUMP)  ; LAB_0044de0b
    PUSH EBP                            ; 0044dd40
    CALL FUN_005b89c0                   ; 0044dd41
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0044dd46
    PUSH 0x5cf5ca                       ; 0044dd49 | DAT_005cf5ca
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0044dd4e
    PUSH EBP                            ; 0044dd52
    PUSH 0x5cf5cd                       ; 0044dd53 | = "models"
    CALL FUN_00460c70                   ; 0044dd58
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 0044dd5d
    MOV EBP,EAX                         ; 0044dd60
    TEST EAX,EAX                        ; 0044dd62
    JNZ 0x0044dd8d                      ; 0044dd64
        ;   XREF to: 0044dd8d (CONDITIONAL_JUMP)  ; LAB_0044dd8d
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044dd66
    PUSH ECX                            ; 0044dd6a
    MOV EAX,0x5cf5d4                    ; 0044dd6b | = "..\\core\\dmodel.cpp"
    MOV EDX,0xc5                        ; 0044dd70
    PUSH 0x5cf5e7                       ; 0044dd75 | = "Can't open keyframed model %s"
    MOV [0x01d046a0],EAX                ; 0044dd7a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0044dd7f | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044dd85
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0044dd8a
    PUSH EBP                            ; 0044dd8d
        ;   Label: LAB_0044dd8d
    PUSH EBX                            ; 0044dd8e
    CALL FUN_0044e010                   ; 0044dd8f
        ;   XREF to: 0044e010 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e010()
    ADD ESP,0x8                         ; 0044dd94
        ;   Label: LAB_0044dd94
    PUSH EBP                            ; 0044dd97
    CALL FUN_005b89c0                   ; 0044dd98
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0044dd9d
    PUSH EBX                            ; 0044dda0
    CALL FUN_0044ee60                   ; 0044dda1
        ;   XREF to: 0044ee60 (UNCONDITIONAL_CALL)  ; undefined FUN_0044ee60()
    ADD ESP,0x4                         ; 0044dda6
    MOV ESI,dword ptr [EBX + 0x120]     ; 0044dda9
    XOR EDX,EDX                         ; 0044ddaf
    TEST ESI,ESI                        ; 0044ddb1
    JLE 0x0044ddd0                      ; 0044ddb3
        ;   XREF to: 0044ddd0 (CONDITIONAL_JUMP)  ; LAB_0044ddd0
    MOV EAX,EBX                         ; 0044ddb5
    MOV dword ptr [EAX + 0x128],0x0     ; 0044ddb7
        ;   Label: LAB_0044ddb7
    INC EDX                             ; 0044ddc1
    MOV EDI,dword ptr [EBX + 0x120]     ; 0044ddc2
    ADD EAX,0x48                        ; 0044ddc8
    CMP EDX,EDI                         ; 0044ddcb
    JL 0x0044ddb7                       ; 0044ddcd
        ;   XREF to: 0044ddb7 (CONDITIONAL_JUMP)  ; LAB_0044ddb7
    NOP                                 ; 0044ddcf
    PUSH EBX                            ; 0044ddd0
        ;   Label: LAB_0044ddd0
    CALL FUN_0044ecb0                   ; 0044ddd1
        ;   XREF to: 0044ecb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044ecb0()
    ADD ESP,0x4                         ; 0044ddd6
    POP EBP                             ; 0044ddd9
    POP EDI                             ; 0044ddda
    POP ESI                             ; 0044dddb
    POP EBX                             ; 0044dddc
    RET                                 ; 0044dddd
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044ddde
        ;   Label: LAB_0044ddde
    PUSH EDI                            ; 0044dde2
    MOV ECX,0x5cf599                    ; 0044dde3 | = "..\\core\\dmodel.cpp"
    MOV ESI,0xb8                        ; 0044dde8
    PUSH 0x5cf5ac                       ; 0044dded | = "Can't open keyframed model %s"
    MOV dword ptr [0x01d046a0],ECX      ; 0044ddf2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044ddf8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044ddfe
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0044de03
    JMP 0x0044dd02                      ; 0044de06
        ;   XREF to: 0044dd02 (UNCONDITIONAL_JUMP)  ; LAB_0044dd02
    PUSH EBP                            ; 0044de0b
        ;   Label: LAB_0044de0b
    PUSH EBX                            ; 0044de0c
    CALL FUN_0044de20                   ; 0044de0d
        ;   XREF to: 0044de20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044de20()
    JMP 0x0044dd94                      ; 0044de12
        ;   XREF to: 0044dd94 (UNCONDITIONAL_JUMP)  ; LAB_0044dd94

