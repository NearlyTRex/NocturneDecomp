; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e0f0(int param_1)
;
;
; XREF[1]:
;   FUN_005792b0 at 005792ba
;
; Referenced Globals:
;   undefined4 DAT_00600530
;
; Called Functions:
;   FUN_00408890
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e0f0
        ;   Label: FUN_0056e0f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056e0f1
    PUSH EBX                            ; 0056e0f5
    CALL FUN_00408890                   ; 0056e0f6
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    MOV EAX,[0x00600530]                ; 0056e0fb | DAT_00600530
    MOV dword ptr [EBX + 0xf8],0x0      ; 0056e100
    MOV EAX,dword ptr [EAX + 0x1008]    ; 0056e10a
    MOV dword ptr [EBX + 0x100],0x1     ; 0056e110
    ADD ESP,0x4                         ; 0056e11a
    MOV EDX,dword ptr [EBX + 0x174]     ; 0056e11d
    MOV dword ptr [EBX + 0xfc],EAX      ; 0056e123
    CMP EDX,0x5                         ; 0056e129
    JZ 0x0056e1dc                       ; 0056e12c
        ;   XREF to: 0056e1dc (CONDITIONAL_JUMP)  ; LAB_0056e1dc
    CMP dword ptr [EBX + 0x174],0x4     ; 0056e132
        ;   Label: LAB_0056e132
    JNZ 0x0056e145                      ; 0056e139
        ;   XREF to: 0056e145 (CONDITIONAL_JUMP)  ; LAB_0056e145
    MOV dword ptr [EBX + 0x100],0x0     ; 0056e13b
    CMP dword ptr [EBX + 0x174],0x7     ; 0056e145
        ;   Label: LAB_0056e145
    JNZ 0x0056e158                      ; 0056e14c
        ;   XREF to: 0056e158 (CONDITIONAL_JUMP)  ; LAB_0056e158
    MOV dword ptr [EBX + 0x100],0x0     ; 0056e14e
    CMP dword ptr [EBX + 0x174],0xa     ; 0056e158
        ;   Label: LAB_0056e158
    JNZ 0x0056e16b                      ; 0056e15f
        ;   XREF to: 0056e16b (CONDITIONAL_JUMP)  ; LAB_0056e16b
    MOV dword ptr [EBX + 0x100],0x0     ; 0056e161
    PUSH 0x5d65ff                       ; 0056e16b
        ;   Label: LAB_0056e16b
    LEA EAX,[EBX + 0x224]               ; 0056e170
    MOV dword ptr [EBX + 0x2f0],0x0     ; 0056e176
    PUSH EAX                            ; 0056e180
    MOV dword ptr [EBX + 0x36c],0x0     ; 0056e181
    CALL FUN_005a3260                   ; 0056e18b
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0056e190
    TEST EAX,EAX                        ; 0056e193
    JNZ 0x0056e19e                      ; 0056e195
        ;   XREF to: 0056e19e (CONDITIONAL_JUMP)  ; LAB_0056e19e
    MOV byte ptr [EBX + 0x224],0x0      ; 0056e197
    PUSH 0x5d6604                       ; 0056e19e
        ;   Label: LAB_0056e19e
    LEA EAX,[EBX + 0x288]               ; 0056e1a3
    PUSH EAX                            ; 0056e1a9
    CALL FUN_005a3260                   ; 0056e1aa
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 0056e1af
    TEST EAX,EAX                        ; 0056e1b2
    JNZ 0x0056e1bd                      ; 0056e1b4
        ;   XREF to: 0056e1bd (CONDITIONAL_JUMP)  ; LAB_0056e1bd
    MOV byte ptr [EBX + 0x288],0x0      ; 0056e1b6
    MOV AH,byte ptr [EBX + 0x224]       ; 0056e1bd
        ;   Label: LAB_0056e1bd
    MOV dword ptr [EBX + 0x104],0x0     ; 0056e1c3
    TEST AH,AH                          ; 0056e1cd
    JNZ 0x0056e1da                      ; 0056e1cf
        ;   XREF to: 0056e1da (CONDITIONAL_JUMP)  ; LAB_0056e1da
    CMP byte ptr [EBX + 0x288],0x0      ; 0056e1d1
    JZ 0x0056e1eb                       ; 0056e1d8
        ;   XREF to: 0056e1eb (CONDITIONAL_JUMP)  ; LAB_0056e1eb
    POP EBX                             ; 0056e1da
        ;   Label: LAB_0056e1da
    RET                                 ; 0056e1db
    MOV dword ptr [EBX + 0x100],0x0     ; 0056e1dc
        ;   Label: LAB_0056e1dc
    JMP 0x0056e132                      ; 0056e1e6
        ;   XREF to: 0056e132 (UNCONDITIONAL_JUMP)  ; LAB_0056e132
    MOV dword ptr [EBX + 0x104],0x1     ; 0056e1eb
        ;   Label: LAB_0056e1eb
    POP EBX                             ; 0056e1f5
    RET                                 ; 0056e1f6

