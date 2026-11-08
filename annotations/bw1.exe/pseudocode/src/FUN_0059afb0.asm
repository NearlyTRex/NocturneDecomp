; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059afb0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005ab9c0 at 005ab9c5
;
; Called Functions:
;   FUN_004085c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059afb0
        ;   Label: FUN_0059afb0
    PUSH EDI                            ; 0059afb1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059afb2
    PUSH EDX                            ; 0059afb6
    CALL FUN_004085c0                   ; 0059afb7
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    MOV dword ptr [EAX + 0x154],0x6071d4 ; 0059afbc
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 0059afc6
    MOV dword ptr [EAX + 0x164],0x41100000 ; 0059afd0
    MOV dword ptr [EAX + 0x168],0x40a00000 ; 0059afda
    MOV dword ptr [EAX + 0x170],0x0     ; 0059afe4
    MOV dword ptr [EAX + 0x15c],0x0     ; 0059afee
    MOV ESI,0x5f807d                    ; 0059aff8
    MOV byte ptr [EAX + 0x224],0x0      ; 0059affd
    MOV EDX,EAX                         ; 0059b004
    MOV byte ptr [EAX + 0x288],0x0      ; 0059b006
    ADD ESP,0x4                         ; 0059b00d
    MOV dword ptr [EAX + 0x16c],0x0     ; 0059b010
    LEA EDI,[EAX + 0x178]               ; 0059b01a
    MOV dword ptr [EAX + 0x174],0x0     ; 0059b020
    PUSH EDI                            ; 0059b02a
    MOV AL,byte ptr [ESI]               ; 0059b02b
        ;   Label: LAB_0059b02b
    MOV byte ptr [EDI],AL               ; 0059b02d
    CMP AL,0x0                          ; 0059b02f
    JZ 0x0059b043                       ; 0059b031
        ;   XREF to: 0059b043 (CONDITIONAL_JUMP)  ; LAB_0059b043
    MOV AL,byte ptr [ESI + 0x1]         ; 0059b033
    ADD ESI,0x2                         ; 0059b036
    MOV byte ptr [EDI + 0x1],AL         ; 0059b039
    ADD EDI,0x2                         ; 0059b03c
    CMP AL,0x0                          ; 0059b03f
    JNZ 0x0059b02b                      ; 0059b041
        ;   XREF to: 0059b02b (CONDITIONAL_JUMP)  ; LAB_0059b02b
    POP EDI                             ; 0059b043
        ;   Label: LAB_0059b043
    MOV ESI,0x5f8084                    ; 0059b044
    LEA EDI,[EDX + 0x1c8]               ; 0059b049
    PUSH EDI                            ; 0059b04f
    MOV AL,byte ptr [ESI]               ; 0059b050
        ;   Label: LAB_0059b050
    MOV byte ptr [EDI],AL               ; 0059b052
    CMP AL,0x0                          ; 0059b054
    JZ 0x0059b068                       ; 0059b056
        ;   XREF to: 0059b068 (CONDITIONAL_JUMP)  ; LAB_0059b068
    MOV AL,byte ptr [ESI + 0x1]         ; 0059b058
    ADD ESI,0x2                         ; 0059b05b
    MOV byte ptr [EDI + 0x1],AL         ; 0059b05e
    ADD EDI,0x2                         ; 0059b061
    CMP AL,0x0                          ; 0059b064
    JNZ 0x0059b050                      ; 0059b066
        ;   XREF to: 0059b050 (CONDITIONAL_JUMP)  ; LAB_0059b050
    POP EDI                             ; 0059b068
        ;   Label: LAB_0059b068
    MOV dword ptr [EDX + 0x218],0x0     ; 0059b069
    MOV dword ptr [EDX + 0x21c],0x3e800000 ; 0059b073
    MOV dword ptr [EDX + 0x220],0x3f800000 ; 0059b07d
    MOV dword ptr [EDX + 0x2ec],0x0     ; 0059b087
    MOV dword ptr [EDX + 0x2f0],0x0     ; 0059b091
    MOV dword ptr [EDX + 0x2f4],0x1     ; 0059b09b
    MOV dword ptr [EDX + 0x2f8],0x42c80000 ; 0059b0a5
    MOV dword ptr [EDX + 0x64],0x96     ; 0059b0af
    MOV dword ptr [EDX + 0x36c],0x0     ; 0059b0b6
    MOV dword ptr [EDX + 0x300],0x0     ; 0059b0c0
    MOV dword ptr [EDX + 0x158],0x47c34ff3 ; 0059b0ca
    MOV dword ptr [EDX + 0x304],0x1     ; 0059b0d4
    MOV byte ptr [EDX + 0x308],0x0      ; 0059b0de
    MOV dword ptr [EDX + 0x370],0x0     ; 0059b0e5
    MOV EAX,EDX                         ; 0059b0ef
    MOV dword ptr [EDX + 0x2fc],EDX     ; 0059b0f1
    POP EDI                             ; 0059b0f7
    POP ESI                             ; 0059b0f8
    RET                                 ; 0059b0f9

