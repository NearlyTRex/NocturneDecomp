; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00428ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 s_STAND_0057a0f9+1
;   string s_STAND_0057a100
;
; Called Functions:
;   FUN_004e10a0
;   FUN_004e1740
;   FUN_004e1890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428ab0
        ;   Label: FUN_00428ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428ab1
    CMP dword ptr [ESP + 0xc],0x0       ; 00428ab5
    JNZ 0x00428b53                      ; 00428aba
        ;   XREF to: 00428b53 (CONDITIONAL_JUMP)  ; LAB_00428b53
    PUSH ESI                            ; 00428ac0
    CMP dword ptr [EBX + 0x25a8],0x0    ; 00428ac1
    JZ 0x00428ae4                       ; 00428ac8
        ;   XREF to: 00428ae4 (CONDITIONAL_JUMP)  ; LAB_00428ae4
    CMP dword ptr [EBX + 0x2598],0x0    ; 00428aca
    JZ 0x00428ae4                       ; 00428ad1
        ;   XREF to: 00428ae4 (CONDITIONAL_JUMP)  ; LAB_00428ae4
    LEA ESI,[EBX + 0x150]               ; 00428ad3
    LEA EAX,[EBX + 0x23b0]              ; 00428ad9
    CMP byte ptr [EAX],0x0              ; 00428adf
    JNZ 0x00428b24                      ; 00428ae2
        ;   XREF to: 00428b24 (CONDITIONAL_JUMP)  ; LAB_00428b24
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00428ae4
        ;   Label: LAB_00428ae4
    POP ESI                             ; 00428aee
    MOV EAX,dword ptr [ESP + 0xc]       ; 00428aef
        ;   Label: LAB_00428aef
    MOV dword ptr [EBX + 0x2598],EAX    ; 00428af3
    MOV EAX,dword ptr [ESP + 0x10]      ; 00428af9
    MOV dword ptr [EBX + 0x259c],EAX    ; 00428afd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00428b03
    PUSH 0xbf800000                     ; 00428b07
    MOV dword ptr [EBX + 0x25a0],EAX    ; 00428b0c
    PUSH EBX                            ; 00428b12
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428b13
    CALL dword ptr [EAX + 0x130]        ; 00428b19
    ADD ESP,0x8                         ; 00428b1f
    POP EBX                             ; 00428b22
    RET                                 ; 00428b23
    PUSH 0x0                            ; 00428b24
        ;   Label: LAB_00428b24
    PUSH 0x57a0fa                       ; 00428b26 | s_STAND_0057a0f9+1
    PUSH ESI                            ; 00428b2b
    CALL FUN_004e1890                   ; 00428b2c
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1890()
    ADD ESP,0x4                         ; 00428b31
    PUSH EAX                            ; 00428b34
    CALL FUN_004e10a0                   ; 00428b35
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e10a0()
    ADD ESP,0xc                         ; 00428b3a
    TEST EAX,EAX                        ; 00428b3d
    JL 0x00428ae4                       ; 00428b3f
        ;   XREF to: 00428ae4 (CONDITIONAL_JUMP)  ; LAB_00428ae4
    PUSH 0x1                            ; 00428b41
    PUSH 0x57a100                       ; 00428b43 | = "STAND"
    PUSH ESI                            ; 00428b48
    CALL FUN_004e1740                   ; 00428b49
        ;   XREF to: 004e1740 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1740()
    ADD ESP,0xc                         ; 00428b4e
    JMP 0x00428ae4                      ; 00428b51
        ;   XREF to: 00428ae4 (UNCONDITIONAL_JUMP)  ; LAB_00428ae4
    MOV dword ptr [EBX + 0x25a8],0x1    ; 00428b53
        ;   Label: LAB_00428b53
    JMP 0x00428aef                      ; 00428b5d
        ;   XREF to: 00428aef (UNCONDITIONAL_JUMP)  ; LAB_00428aef

