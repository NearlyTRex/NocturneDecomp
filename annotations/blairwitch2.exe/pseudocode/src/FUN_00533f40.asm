; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00533f40(int param_1,int param_2,int param_3,undefined4 param_4)
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
; XREF[3]:
;   FUN_0044e7d0 at 0044e9b9
;   FUN_00587400 at 005875e5
;   FUN_005b0fe0 at 005b1151
;
; Referenced Globals:
;   undefined4 DAT_0043fb20
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb6b0c
;   undefined4 DAT_01cb6b10
;
; Called Functions:
;   FUN_0046b750
;   FUN_0046b960
;   FUN_0046bd10
;   FUN_005337e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533f40
        ;   Label: FUN_00533f40
    PUSH ESI                            ; 00533f41
    PUSH EDI                            ; 00533f42
    PUSH EBP                            ; 00533f43
    SUB ESP,0x28                        ; 00533f44
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00533f47
    MOV EBP,dword ptr [ESP + 0x40]      ; 00533f4b
    MOV EDI,dword ptr [ESP + 0x44]      ; 00533f4f
    MOV EAX,[0x00616494]                ; 00533f53 | DAT_00616494
    CMP dword ptr [EAX + 0x20c],0x0     ; 00533f58 | DAT_01cb6b0c
    JNZ 0x00534006                      ; 00533f5f
        ;   XREF to: 00534006 (CONDITIONAL_JUMP)  ; LAB_00534006
    CMP dword ptr [EAX + 0x210],0x0     ; 00533f65 | DAT_01cb6b10
    JNZ 0x0053400e                      ; 00533f6c
        ;   XREF to: 0053400e (CONDITIONAL_JUMP)  ; LAB_0053400e
    CMP dword ptr [EBX + 0x15ac88],0x0  ; 00533f72
        ;   Label: LAB_00533f72
    JZ 0x00533ff0                       ; 00533f79
        ;   XREF to: 00533ff0 (CONDITIONAL_JUMP)  ; LAB_00533ff0
    MOV EBX,EBP                         ; 00533f7f
    XOR ESI,ESI                         ; 00533f81
    TEST EDI,EDI                        ; 00533f83
    JLE 0x00533ff0                      ; 00533f85
        ;   XREF to: 00533ff0 (CONDITIONAL_JUMP)  ; LAB_00533ff0
    MOV EAX,dword ptr [EBX + 0x4]       ; 00533f87
        ;   Label: LAB_00533f87
    MOV dword ptr [ESP + 0x4],EAX       ; 00533f8a
    MOV EAX,dword ptr [EBX + 0x8]       ; 00533f8e
    MOV dword ptr [ESP + 0x8],EAX       ; 00533f91
    MOV EAX,dword ptr [EBX + 0xc]       ; 00533f95
    MOV dword ptr [ESP + 0xc],EAX       ; 00533f98
    MOV EAX,dword ptr [EBX + 0x10]      ; 00533f9c
    MOV dword ptr [ESP + 0x10],EAX      ; 00533f9f
    MOV EAX,dword ptr [EBX + 0x14]      ; 00533fa3
    MOV dword ptr [ESP + 0x14],EAX      ; 00533fa6
    MOV EAX,dword ptr [EBX + 0x18]      ; 00533faa
    MOV dword ptr [ESP + 0x18],EAX      ; 00533fad
    MOV EAX,dword ptr [EBX + 0x24]      ; 00533fb1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00533fb4
    MOV EAX,dword ptr [EBX + 0x30]      ; 00533fb8
    MOV dword ptr [ESP + 0x20],EAX      ; 00533fbb
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00533fbf
    PUSH 0x43fb20                       ; 00533fc2 | DAT_0043fb20
    MOV dword ptr [ESP + 0x28],EAX      ; 00533fc7
    LEA EAX,[ESP + 0x4]                 ; 00533fcb
    PUSH EAX                            ; 00533fcf
    MOV EDX,dword ptr [0x0060b280]      ; 00533fd0 | DAT_0060b280
    PUSH EDX                            ; 00533fd6 | DAT_01ba5c50
    ADD EBX,0x48                        ; 00533fd7
    INC ESI                             ; 00533fda
    CALL FUN_0046b750                   ; 00533fdb
        ;   XREF to: 0046b750 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b750()
    ADD ESP,0xc                         ; 00533fe0
    CMP ESI,EDI                         ; 00533fe3
    JL 0x00533f87                       ; 00533fe5
        ;   XREF to: 00533f87 (CONDITIONAL_JUMP)  ; LAB_00533f87
    LEA EAX,[EAX]                       ; 00533fe7
    LEA EDX,[EDX]                       ; 00533fed
    MOV ECX,dword ptr [ESP + 0x48]      ; 00533ff0
        ;   Label: LAB_00533ff0
    PUSH ECX                            ; 00533ff4
    PUSH EDI                            ; 00533ff5
    PUSH EBP                            ; 00533ff6
    MOV EBX,dword ptr [0x0060b280]      ; 00533ff7 | DAT_0060b280
    PUSH EBX                            ; 00533ffd | DAT_01ba5c50
    CALL FUN_0046bd10                   ; 00533ffe
        ;   XREF to: 0046bd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0046bd10()
    ADD ESP,0x10                        ; 00534003
    ADD ESP,0x28                        ; 00534006
        ;   Label: LAB_00534006
    POP EBP                             ; 00534009
    POP EDI                             ; 0053400a
    POP ESI                             ; 0053400b
    POP EBX                             ; 0053400c
    RET                                 ; 0053400d
    MOV ESI,dword ptr [0x0060b280]      ; 0053400e | DAT_0060b280
        ;   Label: LAB_0053400e
    PUSH ESI                            ; 00534014 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 00534015
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0053401a
    TEST EAX,EAX                        ; 0053401d
    JNZ 0x00533f72                      ; 0053401f
        ;   XREF to: 00533f72 (CONDITIONAL_JUMP)  ; LAB_00533f72
    PUSH 0xffff                         ; 00534025
    PUSH EDI                            ; 0053402a
    PUSH EBP                            ; 0053402b
    PUSH EBX                            ; 0053402c
    CALL FUN_005337e0                   ; 0053402d
        ;   XREF to: 005337e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005337e0()
    ADD ESP,0x10                        ; 00534032
    ADD ESP,0x28                        ; 00534035
    POP EBP                             ; 00534038
    POP EDI                             ; 00534039
    POP ESI                             ; 0053403a
    POP EBX                             ; 0053403b
    RET                                 ; 0053403c

