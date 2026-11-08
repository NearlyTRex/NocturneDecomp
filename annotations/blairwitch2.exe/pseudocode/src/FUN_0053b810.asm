; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 FUN_0053b810(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0052d980 at 0052dbc9
;
; Referenced Globals:
;   undefined4 DAT_005e6339
;
; Called Functions:
;   FUN_00449280
;   FUN_0044b5b0
;   FUN_0044d570
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b810
        ;   Label: FUN_0053b810
    PUSH ESI                            ; 0053b811
    PUSH EDI                            ; 0053b812
    PUSH EBP                            ; 0053b813
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053b814
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053b818
    LEA EAX,[EBP + 0x4]                 ; 0053b81c
    LEA EDX,[EBX + 0x104]               ; 0053b81f
    CMP EAX,EDX                         ; 0053b825
    JZ 0x0053b839                       ; 0053b827
        ;   XREF to: 0053b839 (CONDITIONAL_JUMP)  ; LAB_0053b839
    MOV ECX,dword ptr [EDX]             ; 0053b829
    MOV dword ptr [EAX],ECX             ; 0053b82b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053b82d
    MOV dword ptr [EAX + 0x4],ECX       ; 0053b830
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053b833
    MOV dword ptr [EAX + 0x8],ECX       ; 0053b836
    LEA EAX,[EBX + 0x110]               ; 0053b839
        ;   Label: LAB_0053b839
    PUSH EAX                            ; 0053b83f
    LEA EAX,[EBP + 0x10]                ; 0053b840
    PUSH EAX                            ; 0053b843
    CALL FUN_00449280                   ; 0053b844
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0053b849
    MOV dword ptr [EBP + 0x38],EAX      ; 0053b84f
    FLD float ptr [EBX + 0x120]         ; 0053b852
    FMUL double ptr [0x005e6339]        ; 0053b858 | DAT_005e6339
    ADD ESP,0x8                         ; 0053b85e
    CALL FUN_005b7ff0                   ; 0053b861
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EBP + 0x2fa4]      ; 0053b866
    PUSH dword ptr [EBX + 0x124]        ; 0053b86c
    PUSH EBP                            ; 0053b872
    LEA ESI,[EBX + 0x4]                 ; 0053b873
    CALL FUN_0044d570                   ; 0053b876
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d570()
    ADD ESP,0x8                         ; 0053b87b
    MOV dword ptr [EBX + 0x11e8],0x0    ; 0053b87e
    LEA EDI,[EBP + 0x40]                ; 0053b888
    MOV dword ptr [EBX + 0x1894],0x0    ; 0053b88b
    PUSH EDI                            ; 0053b895
    MOV AL,byte ptr [ESI]               ; 0053b896
        ;   Label: LAB_0053b896
    MOV byte ptr [EDI],AL               ; 0053b898
    CMP AL,0x0                          ; 0053b89a
    JZ 0x0053b8ae                       ; 0053b89c
        ;   XREF to: 0053b8ae (CONDITIONAL_JUMP)  ; LAB_0053b8ae
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b89e
    ADD ESI,0x2                         ; 0053b8a1
    MOV byte ptr [EDI + 0x1],AL         ; 0053b8a4
    ADD EDI,0x2                         ; 0053b8a7
    CMP AL,0x0                          ; 0053b8aa
    JNZ 0x0053b896                      ; 0053b8ac
        ;   XREF to: 0053b896 (CONDITIONAL_JUMP)  ; LAB_0053b896
    POP EDI                             ; 0053b8ae
        ;   Label: LAB_0053b8ae
    CMP dword ptr [EBX + 0x17f4],0x0    ; 0053b8af
    JNZ 0x0053b8c1                      ; 0053b8b6
        ;   XREF to: 0053b8c1 (CONDITIONAL_JUMP)  ; LAB_0053b8c1
    POP EBP                             ; 0053b8b8
    POP EDI                             ; 0053b8b9
    POP ESI                             ; 0053b8ba
    POP EBX                             ; 0053b8bb
    LEA EAX,[EAX]                       ; 0053b8bc
    PUSH EBP                            ; 0053b8c1
        ;   Label: LAB_0053b8c1
    CALL FUN_0044b5b0                   ; 0053b8c2
        ;   XREF to: 0044b5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b5b0()
    ADD ESP,0x4                         ; 0053b8c7
    POP EBP                             ; 0053b8ca
    POP EDI                             ; 0053b8cb
    POP ESI                             ; 0053b8cc
    POP EBX                             ; 0053b8cd
    RET                                 ; 0053b8ce

