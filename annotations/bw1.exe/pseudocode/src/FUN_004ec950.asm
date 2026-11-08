; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ec950(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00475650 at 00475825
;
; Referenced Globals:
;   undefined4 caseD_1
;   void* switchdataD_004ec920 = 004ec9a7
;
; Called Functions:
;   FUN_00432c40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec950
        ;   Label: FUN_004ec950
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ec954
    CMP dword ptr [EAX + 0x1ff88],0x0   ; 004ec958
    JNZ 0x004ec9c0                      ; 004ec95f
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EAX + 0x1ff74],0x0   ; 004ec965
    JNZ 0x004ec9c0                      ; 004ec96c
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EAX + 0x1ff78],0x0   ; 004ec96e
    JNZ 0x004ec9c0                      ; 004ec975
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EAX + 0x1ff7c],0x0   ; 004ec977
    JNZ 0x004ec9c0                      ; 004ec97e
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EAX + 0x1ff80],0x0   ; 004ec980
    JNZ 0x004ec9c0                      ; 004ec987
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EAX + 0x1ff84],0x0   ; 004ec989
    JNZ 0x004ec9c0                      ; 004ec990
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EAX + 0x1ff8c],0x0   ; 004ec992
    JNZ 0x004ec9c0                      ; 004ec999
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    CMP EDX,0xb                         ; 004ec99b
    JA 0x004ec9c0                       ; 004ec99e
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4ec920]  ; 004ec9a0 | caseD_b | caseD_2 | caseD_9
        ;   Label: switchD
    PUSH EAX                            ; 004ec9a7
        ;   Label: caseD_0
    CALL FUN_00432c40                   ; 004ec9a8
        ;   XREF to: 00432c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00432c40()
    ADD ESP,0x4                         ; 004ec9ad
    TEST EAX,EAX                        ; 004ec9b0
    JZ 0x004eadb0                       ; 004ec9b2
        ;   XREF to: 004eadb0 (CONDITIONAL_JUMP)  ; caseD_2
    LEA EAX,[EAX]                       ; 004ec9b8
    MOV EDX,EDX                         ; 004ec9be
    XOR EAX,EAX                         ; 004ec9c0
        ;   Label: default
    RET                                 ; 004ec9c2
    PUSH EAX                            ; 004ec9c3
        ;   Label: caseD_9
    CALL FUN_00432c40                   ; 004ec9c4
        ;   XREF to: 00432c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00432c40()
    ADD ESP,0x4                         ; 004ec9c9
    TEST EAX,EAX                        ; 004ec9cc
    JNZ 0x004ec9c0                      ; 004ec9ce
        ;   XREF to: 004ec9c0 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x1                         ; 004ec9d0
    RET                                 ; 004ec9d5

