; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ab80(int param_1,int param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_0043f460 at 0043f5d1
;   FUN_00448060 at 00448295
;   FUN_00461050 at 00461239
;   FUN_005787f0 at 005789e5
;
; Referenced Globals:
;   undefined4 DAT_0044d320
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d21520
;   undefined4 DAT_01d21524
;
; Called Functions:
;   FUN_0046d330
;   FUN_0046d540
;   FUN_0046d8f0
;   FUN_0053a420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ab80
        ;   Label: FUN_0053ab80
    PUSH ESI                            ; 0053ab81
    PUSH EDI                            ; 0053ab82
    PUSH EBP                            ; 0053ab83
    SUB ESP,0x28                        ; 0053ab84
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0053ab87
    MOV EBP,dword ptr [ESP + 0x40]      ; 0053ab8b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0053ab8f
    MOV EAX,[0x005fe9dc]                ; 0053ab93 | DAT_005fe9dc
    CMP dword ptr [EAX + 0x214],0x0     ; 0053ab98 | DAT_01d21520
    JNZ 0x0053ac46                      ; 0053ab9f
        ;   XREF to: 0053ac46 (CONDITIONAL_JUMP)  ; LAB_0053ac46
    CMP dword ptr [EAX + 0x218],0x0     ; 0053aba5 | DAT_01d21524
    JNZ 0x0053ac4e                      ; 0053abac
        ;   XREF to: 0053ac4e (CONDITIONAL_JUMP)  ; LAB_0053ac4e
    CMP dword ptr [EBX + 0x15ac88],0x0  ; 0053abb2
        ;   Label: LAB_0053abb2
    JZ 0x0053ac30                       ; 0053abb9
        ;   XREF to: 0053ac30 (CONDITIONAL_JUMP)  ; LAB_0053ac30
    MOV EBX,EBP                         ; 0053abbf
    XOR ESI,ESI                         ; 0053abc1
    TEST EDI,EDI                        ; 0053abc3
    JLE 0x0053ac30                      ; 0053abc5
        ;   XREF to: 0053ac30 (CONDITIONAL_JUMP)  ; LAB_0053ac30
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053abc7
        ;   Label: LAB_0053abc7
    MOV dword ptr [ESP + 0x4],EAX       ; 0053abca
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053abce
    MOV dword ptr [ESP + 0x8],EAX       ; 0053abd1
    MOV EAX,dword ptr [EBX + 0xc]       ; 0053abd5
    MOV dword ptr [ESP + 0xc],EAX       ; 0053abd8
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053abdc
    MOV dword ptr [ESP + 0x10],EAX      ; 0053abdf
    MOV EAX,dword ptr [EBX + 0x14]      ; 0053abe3
    MOV dword ptr [ESP + 0x14],EAX      ; 0053abe6
    MOV EAX,dword ptr [EBX + 0x18]      ; 0053abea
    MOV dword ptr [ESP + 0x18],EAX      ; 0053abed
    MOV EAX,dword ptr [EBX + 0x24]      ; 0053abf1
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053abf4
    MOV EAX,dword ptr [EBX + 0x30]      ; 0053abf8
    MOV dword ptr [ESP + 0x20],EAX      ; 0053abfb
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0053abff
    PUSH 0x44d320                       ; 0053ac02 | DAT_0044d320
    MOV dword ptr [ESP + 0x28],EAX      ; 0053ac07
    LEA EAX,[ESP + 0x4]                 ; 0053ac0b
    PUSH EAX                            ; 0053ac0f
    MOV EDX,dword ptr [0x005f2afc]      ; 0053ac10 | DAT_005f2afc
    PUSH EDX                            ; 0053ac16 | DAT_01bdd7e4
    ADD EBX,0x48                        ; 0053ac17
    INC ESI                             ; 0053ac1a
    CALL FUN_0046d330                   ; 0053ac1b
        ;   XREF to: 0046d330 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d330()
    ADD ESP,0xc                         ; 0053ac20
    CMP ESI,EDI                         ; 0053ac23
    JL 0x0053abc7                       ; 0053ac25
        ;   XREF to: 0053abc7 (CONDITIONAL_JUMP)  ; LAB_0053abc7
    LEA EAX,[EAX]                       ; 0053ac27
    LEA EDX,[EDX]                       ; 0053ac2d
    MOV ECX,dword ptr [ESP + 0x48]      ; 0053ac30
        ;   Label: LAB_0053ac30
    PUSH ECX                            ; 0053ac34
    PUSH EDI                            ; 0053ac35
    PUSH EBP                            ; 0053ac36
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ac37 | DAT_005f2afc
    PUSH EBX                            ; 0053ac3d | DAT_01bdd7e4
    CALL FUN_0046d8f0                   ; 0053ac3e
        ;   XREF to: 0046d8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d8f0()
    ADD ESP,0x10                        ; 0053ac43
    ADD ESP,0x28                        ; 0053ac46
        ;   Label: LAB_0053ac46
    POP EBP                             ; 0053ac49
    POP EDI                             ; 0053ac4a
    POP ESI                             ; 0053ac4b
    POP EBX                             ; 0053ac4c
    RET                                 ; 0053ac4d
    MOV ESI,dword ptr [0x005f2afc]      ; 0053ac4e | DAT_005f2afc
        ;   Label: LAB_0053ac4e
    PUSH ESI                            ; 0053ac54 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 0053ac55
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0053ac5a
    TEST EAX,EAX                        ; 0053ac5d
    JNZ 0x0053abb2                      ; 0053ac5f
        ;   XREF to: 0053abb2 (CONDITIONAL_JUMP)  ; LAB_0053abb2
    PUSH 0xffff                         ; 0053ac65
    PUSH EDI                            ; 0053ac6a
    PUSH EBP                            ; 0053ac6b
    PUSH EBX                            ; 0053ac6c
    CALL FUN_0053a420                   ; 0053ac6d
        ;   XREF to: 0053a420 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a420()
    ADD ESP,0x10                        ; 0053ac72
    ADD ESP,0x28                        ; 0053ac75
    POP EBP                             ; 0053ac78
    POP EDI                             ; 0053ac79
    POP ESI                             ; 0053ac7a
    POP EBX                             ; 0053ac7b
    RET                                 ; 0053ac7c

