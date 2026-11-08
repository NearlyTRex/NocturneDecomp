; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558a30(UINT_PTR param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined1       Stack[-0x2f]:1  local_2f
;
; XREF[1]:
;   FUN_00552d00 at 00552d37
;
; Referenced Globals:
;   void* PTR_waveInGetDevCapsA_005c8458 = 001c894a
;   TerminatedCString s_WavIn_005ea6d4
;
; Called Functions:
;   FUN_0050fe80
;   waveInGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558a30
        ;   Label: FUN_00558a30
    PUSH ESI                            ; 00558a31
    SUB ESP,0x30                        ; 00558a32
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00558a35
    MOV EBX,dword ptr [ESP + 0x40]      ; 00558a39
    PUSH 0x30                           ; 00558a3d
    LEA EAX,[ESP + 0x4]                 ; 00558a3f
    PUSH EAX                            ; 00558a43
    PUSH ESI                            ; 00558a44
    CALL dword ptr CS:[0x5c8458]        ; 00558a45 | PTR_waveInGetDevCapsA_005c8458
    TEST EAX,EAX                        ; 00558a4c
    JZ 0x00558a58                       ; 00558a4e
        ;   XREF to: 00558a58 (CONDITIONAL_JUMP)  ; LAB_00558a58
    XOR EAX,EAX                         ; 00558a50
    ADD ESP,0x30                        ; 00558a52
    POP ESI                             ; 00558a55
    POP EBX                             ; 00558a56
    RET                                 ; 00558a57
    PUSH EDI                            ; 00558a58
        ;   Label: LAB_00558a58
    MOV dword ptr [EBX + 0x100],EAX     ; 00558a59
    PUSH 0x5ea6d4                       ; 00558a5f | = "WavIn: "
    MOV dword ptr [EBX + 0x104],ESI     ; 00558a64
    CALL FUN_0050fe80                   ; 00558a6a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 00558a6f
    MOV EDI,EBX                         ; 00558a72
    MOV ESI,EAX                         ; 00558a74
    PUSH EDI                            ; 00558a76
    MOV AL,byte ptr [ESI]               ; 00558a77
        ;   Label: LAB_00558a77
    MOV byte ptr [EDI],AL               ; 00558a79
    CMP AL,0x0                          ; 00558a7b
    JZ 0x00558a8f                       ; 00558a7d
        ;   XREF to: 00558a8f (CONDITIONAL_JUMP)  ; LAB_00558a8f
    MOV AL,byte ptr [ESI + 0x1]         ; 00558a7f
    ADD ESI,0x2                         ; 00558a82
    MOV byte ptr [EDI + 0x1],AL         ; 00558a85
    ADD EDI,0x2                         ; 00558a88
    CMP AL,0x0                          ; 00558a8b
    JNZ 0x00558a77                      ; 00558a8d
        ;   XREF to: 00558a77 (CONDITIONAL_JUMP)  ; LAB_00558a77
    POP EDI                             ; 00558a8f
        ;   Label: LAB_00558a8f
    LEA ESI,[ESP + 0xc]                 ; 00558a90
    PUSH EDI                            ; 00558a94
    SUB ECX,ECX                         ; 00558a95
    DEC ECX                             ; 00558a97
    MOV AL,0x0                          ; 00558a98
    SCASB.REPNE ES:EDI                  ; 00558a9a
    DEC EDI                             ; 00558a9c
    MOV AL,byte ptr [ESI]               ; 00558a9d
        ;   Label: LAB_00558a9d
    MOV byte ptr [EDI],AL               ; 00558a9f
    CMP AL,0x0                          ; 00558aa1
    JZ 0x00558ab5                       ; 00558aa3
        ;   XREF to: 00558ab5 (CONDITIONAL_JUMP)  ; LAB_00558ab5
    MOV AL,byte ptr [ESI + 0x1]         ; 00558aa5
    ADD ESI,0x2                         ; 00558aa8
    MOV byte ptr [EDI + 0x1],AL         ; 00558aab
    ADD EDI,0x2                         ; 00558aae
    CMP AL,0x0                          ; 00558ab1
    JNZ 0x00558a9d                      ; 00558ab3
        ;   XREF to: 00558a9d (CONDITIONAL_JUMP)  ; LAB_00558a9d
    POP EDI                             ; 00558ab5
        ;   Label: LAB_00558ab5
    MOV EAX,0x1                         ; 00558ab6
    POP EDI                             ; 00558abb
    ADD ESP,0x30                        ; 00558abc
    POP ESI                             ; 00558abf
    POP EBX                             ; 00558ac0
    RET                                 ; 00558ac1

