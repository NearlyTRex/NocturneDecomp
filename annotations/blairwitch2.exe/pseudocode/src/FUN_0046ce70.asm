; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0046ce70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ce70
        ;   Label: FUN_0046ce70
    PUSH ESI                            ; 0046ce71
    PUSH EDI                            ; 0046ce72
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046ce73
    PUSH EBX                            ; 0046ce77
    CALL FUN_00408790                   ; 0046ce78
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0046ce7d
    ADD EAX,0x2b4                       ; 0046ce80
    PUSH EAX                            ; 0046ce85
    CALL FUN_0044fc80                   ; 0046ce86
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0046ce8b
    LEA EBX,[EAX + 0xfffffd4c]          ; 0046ce8e
    PUSH 0x5d1773                       ; 0046ce94
    LEA EAX,[EBX + 0x2b4]               ; 0046ce99
    PUSH EAX                            ; 0046ce9f
    MOV dword ptr [EBX + 0x2b0],0x5f5844 ; 0046cea0
    CALL FUN_0044fd70                   ; 0046ceaa
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x430],0x2     ; 0046ceaf
    LEA EAX,[EBX + 0x460]               ; 0046ceb9
    MOV dword ptr [EBX + 0x434],0x1     ; 0046cebf
    MOV dword ptr [EAX + 0x8],0x0       ; 0046cec9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046ced0
    MOV dword ptr [EAX + 0x4],EDX       ; 0046ced3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046ced6
    MOV dword ptr [EAX],EDX             ; 0046ced9
    MOV dword ptr [EBX + 0x43c],0x40a00000 ; 0046cedb
    MOV dword ptr [EBX + 0x440],0x41200000 ; 0046cee5
    MOV dword ptr [EBX + 0x438],0x0     ; 0046ceef
    MOV ESI,0x5d177e                    ; 0046cef9
    MOV dword ptr [EBX + 0x444],0x0     ; 0046cefe
    ADD ESP,0x8                         ; 0046cf08
    MOV dword ptr [EBX + 0x46c],0x41200000 ; 0046cf0b
    LEA EDI,[EBX + 0x470]               ; 0046cf15
    MOV dword ptr [EBX + 0x494],0x0     ; 0046cf1b
    PUSH EDI                            ; 0046cf25
    MOV AL,byte ptr [ESI]               ; 0046cf26
        ;   Label: LAB_0046cf26
    MOV byte ptr [EDI],AL               ; 0046cf28
    CMP AL,0x0                          ; 0046cf2a
    JZ 0x0046cf3e                       ; 0046cf2c
        ;   XREF to: 0046cf3e (CONDITIONAL_JUMP)  ; LAB_0046cf3e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cf2e
    ADD ESI,0x2                         ; 0046cf31
    MOV byte ptr [EDI + 0x1],AL         ; 0046cf34
    ADD EDI,0x2                         ; 0046cf37
    CMP AL,0x0                          ; 0046cf3a
    JNZ 0x0046cf26                      ; 0046cf3c
        ;   XREF to: 0046cf26 (CONDITIONAL_JUMP)  ; LAB_0046cf26
    POP EDI                             ; 0046cf3e
        ;   Label: LAB_0046cf3e
    MOV EAX,EBX                         ; 0046cf3f
    MOV dword ptr [EBX + 0x490],0x0     ; 0046cf41
    POP EDI                             ; 0046cf4b
    POP ESI                             ; 0046cf4c
    POP EBX                             ; 0046cf4d
    RET                                 ; 0046cf4e

