; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0053ffb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;   FUN_005b1bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ffb0
        ;   Label: FUN_0053ffb0
    PUSH ESI                            ; 0053ffb1
    PUSH EDI                            ; 0053ffb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053ffb3
    PUSH EBX                            ; 0053ffb7
    CALL FUN_00408790                   ; 0053ffb8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0053ffbd
    ADD EAX,0x2b4                       ; 0053ffc0
    PUSH EAX                            ; 0053ffc5
    CALL FUN_0044fc80                   ; 0053ffc6
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0053ffcb
    ADD EAX,0x200                       ; 0053ffce
    PUSH EAX                            ; 0053ffd3
    CALL FUN_005b1bc0                   ; 0053ffd4
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1bc0()
    ADD ESP,0x4                         ; 0053ffd9
    LEA EBX,[EAX + 0xfffffb4c]          ; 0053ffdc
    PUSH 0x5e6881                       ; 0053ffe2
    LEA EAX,[EBX + 0x2b4]               ; 0053ffe7
    PUSH EAX                            ; 0053ffed
    MOV dword ptr [EBX + 0x2b0],0x5fb864 ; 0053ffee
    CALL FUN_0044fd70                   ; 0053fff8
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0053fffd
    MOV ESI,0x5e688e                    ; 00540000
    LEA EDI,[EBX + 0x438]               ; 00540005
    PUSH EDI                            ; 0054000b
    MOV AL,byte ptr [ESI]               ; 0054000c
        ;   Label: LAB_0054000c
    MOV byte ptr [EDI],AL               ; 0054000e
    CMP AL,0x0                          ; 00540010
    JZ 0x00540024                       ; 00540012
        ;   XREF to: 00540024 (CONDITIONAL_JUMP)  ; LAB_00540024
    MOV AL,byte ptr [ESI + 0x1]         ; 00540014
    ADD ESI,0x2                         ; 00540017
    MOV byte ptr [EDI + 0x1],AL         ; 0054001a
    ADD EDI,0x2                         ; 0054001d
    CMP AL,0x0                          ; 00540020
    JNZ 0x0054000c                      ; 00540022
        ;   XREF to: 0054000c (CONDITIONAL_JUMP)  ; LAB_0054000c
    POP EDI                             ; 00540024
        ;   Label: LAB_00540024
    LEA EAX,[EBX + 0x49c]               ; 00540025
    MOV dword ptr [EAX + 0x8],0x0       ; 0054002b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00540032
    MOV dword ptr [EAX + 0x4],EDX       ; 00540035
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540038
    MOV dword ptr [EAX],EDX             ; 0054003b
    LEA EAX,[EBX + 0x4a8]               ; 0054003d
    MOV dword ptr [EAX + 0x8],0x0       ; 00540043
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054004a
    MOV dword ptr [EAX + 0x4],EDX       ; 0054004d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00540050
    MOV dword ptr [EAX],EDX             ; 00540053
    MOV dword ptr [EBX + 0x430],0x0     ; 00540055
    MOV EAX,EBX                         ; 0054005f
    MOV dword ptr [EBX + 0x434],0x42c80000 ; 00540061
    POP EDI                             ; 0054006b
    POP ESI                             ; 0054006c
    POP EBX                             ; 0054006d
    RET                                 ; 0054006e

