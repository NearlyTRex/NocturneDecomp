; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ac80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00548c70 at 00548da5
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d21520
;   undefined4 DAT_01d21524
;
; Called Functions:
;   FUN_0046d540
;   FUN_0046dbd0
;   FUN_0053a6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ac80
        ;   Label: FUN_0053ac80
    PUSH EBP                            ; 0053ac81
    MOV EAX,[0x005fe9dc]                ; 0053ac82 | DAT_005fe9dc | DAT_01d2130c
    CMP dword ptr [EAX + 0x214],0x0     ; 0053ac87 | DAT_01d21520
    JNZ 0x0053acca                      ; 0053ac8e
        ;   XREF to: 0053acca (CONDITIONAL_JUMP)  ; LAB_0053acca
    CMP dword ptr [EAX + 0x218],0x0     ; 0053ac90 | DAT_01d21524
    JZ 0x0053acac                       ; 0053ac97
        ;   XREF to: 0053acac (CONDITIONAL_JUMP)  ; LAB_0053acac
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ac99 | DAT_005f2afc
    PUSH EBX                            ; 0053ac9f | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 0053aca0
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0053aca5
    TEST EAX,EAX                        ; 0053aca8
    JZ 0x0053accd                       ; 0053acaa
        ;   XREF to: 0053accd (CONDITIONAL_JUMP)  ; LAB_0053accd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053acac
        ;   Label: LAB_0053acac
    PUSH EAX                            ; 0053acb0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053acb1
    PUSH EDX                            ; 0053acb5
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053acb6
    PUSH ECX                            ; 0053acba
    MOV EBX,dword ptr [0x005f2afc]      ; 0053acbb | DAT_005f2afc
    PUSH EBX                            ; 0053acc1 | DAT_01bdd7e4
    CALL FUN_0046dbd0                   ; 0053acc2
        ;   XREF to: 0046dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046dbd0()
    ADD ESP,0x10                        ; 0053acc7
    POP EBP                             ; 0053acca
        ;   Label: LAB_0053acca
    POP EBX                             ; 0053accb
    RET                                 ; 0053accc
    PUSH EDI                            ; 0053accd
        ;   Label: LAB_0053accd
    PUSH ESI                            ; 0053acce
    PUSH 0xffff                         ; 0053accf
    MOV ESI,dword ptr [ESP + 0x20]      ; 0053acd4
    PUSH ESI                            ; 0053acd8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0053acd9
    PUSH EDI                            ; 0053acdd
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053acde
    PUSH EBP                            ; 0053ace2
    CALL FUN_0053a6c0                   ; 0053ace3
        ;   XREF to: 0053a6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a6c0()
    ADD ESP,0x10                        ; 0053ace8
    POP ESI                             ; 0053aceb
    POP EDI                             ; 0053acec
    POP EBP                             ; 0053aced
    POP EBX                             ; 0053acee
    RET                                 ; 0053acef

