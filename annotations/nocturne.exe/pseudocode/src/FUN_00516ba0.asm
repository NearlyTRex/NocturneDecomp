; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00516ba0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_question.kfm_00591105
;   undefined1 DAT_00591112
;   undefined1 DAT_00591113
;   undefined1 DAT_00591114
;   undefined1 DAT_00591115
;   undefined1* PTR_FUN_005a1d74 = 00516c60
;
; Called Functions:
;   FUN_00409d30
;   FUN_0041a610
;   FUN_00454490
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516ba0
        ;   Label: FUN_00516ba0
    PUSH ESI                            ; 00516ba1
    PUSH EDI                            ; 00516ba2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00516ba3
    PUSH EBX                            ; 00516ba7
    CALL FUN_00409d30                   ; 00516ba8
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 00516bad
    ADD EAX,0x150                       ; 00516bb0
    PUSH EAX                            ; 00516bb5
    CALL FUN_00454490                   ; 00516bb6
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined FUN_00454490()
    ADD ESP,0x4                         ; 00516bbb
    ADD EAX,0x200                       ; 00516bbe
    PUSH EAX                            ; 00516bc3
    CALL FUN_0041a610                   ; 00516bc4
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a610()
    ADD ESP,0x4                         ; 00516bc9
    LEA EBX,[EAX + 0xfffffcb0]          ; 00516bcc
    PUSH 0x591105                       ; 00516bd2 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 00516bd7
    PUSH EAX                            ; 00516bdd
    MOV dword ptr [EBX + 0x14c],0x5a1d74 ; 00516bde | PTR_FUN_005a1d74
    CALL FUN_00454580                   ; 00516be8
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 00516bed
    MOV ESI,0x591112                    ; 00516bf0 | DAT_00591112
    LEA EDI,[EBX + 0x2d4]               ; 00516bf5
    PUSH EDI                            ; 00516bfb
    MOV AL,byte ptr [ESI]               ; 00516bfc | DAT_00591112 | DAT_00591114
        ;   Label: LAB_00516bfc
    MOV byte ptr [EDI],AL               ; 00516bfe
    CMP AL,0x0                          ; 00516c00
    JZ 0x00516c14                       ; 00516c02
        ;   XREF to: 00516c14 (CONDITIONAL_JUMP)  ; LAB_00516c14
    MOV AL,byte ptr [ESI + 0x1]         ; 00516c04 | DAT_00591113 | DAT_00591115
    ADD ESI,0x2                         ; 00516c07
    MOV byte ptr [EDI + 0x1],AL         ; 00516c0a
    ADD EDI,0x2                         ; 00516c0d
    CMP AL,0x0                          ; 00516c10
    JNZ 0x00516bfc                      ; 00516c12
        ;   XREF to: 00516bfc (CONDITIONAL_JUMP)  ; LAB_00516bfc
    POP EDI                             ; 00516c14
        ;   Label: LAB_00516c14
    LEA EAX,[EBX + 0x338]               ; 00516c15
    MOV dword ptr [EAX + 0x8],0x0       ; 00516c1b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00516c22
    MOV dword ptr [EAX + 0x4],EDX       ; 00516c25
    MOV EDX,dword ptr [EAX + 0x4]       ; 00516c28
    MOV dword ptr [EAX],EDX             ; 00516c2b
    LEA EAX,[EBX + 0x344]               ; 00516c2d
    MOV dword ptr [EAX + 0x8],0x0       ; 00516c33
    MOV EDX,dword ptr [EAX + 0x8]       ; 00516c3a
    MOV dword ptr [EAX + 0x4],EDX       ; 00516c3d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00516c40
    MOV dword ptr [EAX],EDX             ; 00516c43
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00516c45
    MOV EAX,EBX                         ; 00516c4f
    MOV dword ptr [EBX + 0x2d0],0x42c80000 ; 00516c51
    POP EDI                             ; 00516c5b
    POP ESI                             ; 00516c5c
    POP EBX                             ; 00516c5d
    RET                                 ; 00516c5e

