; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c80f0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1 DAT_00587ad0
;   undefined1 DAT_00587ad1
;   undefined1 DAT_00587ad2
;   undefined1 DAT_00587ad3
;   undefined1 DAT_00587ad5
;   undefined1 DAT_00587ad6
;   undefined1 DAT_00587ad7
;   undefined1 DAT_00587ad8
;   undefined1* PTR_FUN_0059fed4 = 004c8190
;
; Called Functions:
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c80f0
        ;   Label: FUN_004c80f0
    PUSH EDI                            ; 004c80f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c80f2
    PUSH EDX                            ; 004c80f6
    CALL FUN_00409d30                   ; 004c80f7
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    MOV dword ptr [EAX + 0x14c],0x59fed4 ; 004c80fc | PTR_FUN_0059fed4
    MOV ESI,0x587ad0                    ; 004c8106 | DAT_00587ad0
    MOV dword ptr [EAX + 0x150],0x42600000 ; 004c810b
    MOV EDX,EAX                         ; 004c8115
    MOV dword ptr [EAX + 0x154],0x40c00000 ; 004c8117
    ADD ESP,0x4                         ; 004c8121
    MOV dword ptr [EAX + 0xfc],0x1      ; 004c8124
    LEA EDI,[EAX + 0x15c]               ; 004c812e
    MOV dword ptr [EAX + 0x158],0x1     ; 004c8134
    PUSH EDI                            ; 004c813e
    MOV AL,byte ptr [ESI]               ; 004c813f | DAT_00587ad0 | DAT_00587ad2
        ;   Label: LAB_004c813f
    MOV byte ptr [EDI],AL               ; 004c8141
    CMP AL,0x0                          ; 004c8143
    JZ 0x004c8157                       ; 004c8145
        ;   XREF to: 004c8157 (CONDITIONAL_JUMP)  ; LAB_004c8157
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8147 | DAT_00587ad1 | DAT_00587ad3
    ADD ESI,0x2                         ; 004c814a
    MOV byte ptr [EDI + 0x1],AL         ; 004c814d
    ADD EDI,0x2                         ; 004c8150
    CMP AL,0x0                          ; 004c8153
    JNZ 0x004c813f                      ; 004c8155
        ;   XREF to: 004c813f (CONDITIONAL_JUMP)  ; LAB_004c813f
    POP EDI                             ; 004c8157
        ;   Label: LAB_004c8157
    MOV ESI,0x587ad5                    ; 004c8158 | DAT_00587ad5
    LEA EDI,[EDX + 0x1c0]               ; 004c815d
    PUSH EDI                            ; 004c8163
    MOV AL,byte ptr [ESI]               ; 004c8164 | DAT_00587ad5 | DAT_00587ad7
        ;   Label: LAB_004c8164
    MOV byte ptr [EDI],AL               ; 004c8166
    CMP AL,0x0                          ; 004c8168
    JZ 0x004c817c                       ; 004c816a
        ;   XREF to: 004c817c (CONDITIONAL_JUMP)  ; LAB_004c817c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c816c | DAT_00587ad6 | DAT_00587ad8
    ADD ESI,0x2                         ; 004c816f
    MOV byte ptr [EDI + 0x1],AL         ; 004c8172
    ADD EDI,0x2                         ; 004c8175
    CMP AL,0x0                          ; 004c8178
    JNZ 0x004c8164                      ; 004c817a
        ;   XREF to: 004c8164 (CONDITIONAL_JUMP)  ; LAB_004c8164
    POP EDI                             ; 004c817c
        ;   Label: LAB_004c817c
    MOV EAX,EDX                         ; 004c817d
    POP EDI                             ; 004c817f
    POP ESI                             ; 004c8180
    RET                                 ; 004c8181

