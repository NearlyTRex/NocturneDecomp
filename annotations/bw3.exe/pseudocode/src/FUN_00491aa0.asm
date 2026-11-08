; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00491aa0(undefined4 param_1,char *param_2)
;
;
; XREF[55]:
;   FUN_0040fe90 at 0040fef5
;   FUN_0040ff30 at 0040ff4e
;   FUN_00411d70 at 004121b7
;   FUN_00415350 at 004154dc
;   FUN_004179b0 at 004179f3
;   FUN_00419b40 at 00419b63
;   FUN_0041f360 at 0041f82b
;   FUN_00421300 at 0042144f
;   FUN_00425960 at 00425a63
;   FUN_00432330 at 004324dc
;   ... and 45 more
;
; Referenced Globals:
;   undefined4 DAT_005bf4c5
;   undefined4 DAT_005bf4ca
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01c734ac
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   FUN_00441ff0
;   FUN_00491b80
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491aa0
        ;   Label: FUN_00491aa0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00491aa1
    TEST EBX,EBX                        ; 00491aa5
    JZ 0x00491aae                       ; 00491aa7
        ;   XREF to: 00491aae (CONDITIONAL_JUMP)  ; LAB_00491aae
    CMP byte ptr [EBX],0x0              ; 00491aa9
    JNZ 0x00491ab2                      ; 00491aac
        ;   XREF to: 00491ab2 (CONDITIONAL_JUMP)  ; LAB_00491ab2
    XOR EAX,EAX                         ; 00491aae
        ;   Label: LAB_00491aae
    POP EBX                             ; 00491ab0
        ;   Label: LAB_00491ab0
    RET                                 ; 00491ab1
    PUSH 0x5bf4c5                       ; 00491ab2 | DAT_005bf4c5
        ;   Label: LAB_00491ab2
    PUSH EBX                            ; 00491ab7
    CALL FUN_005a3260                   ; 00491ab8
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00491abd
    TEST EAX,EAX                        ; 00491ac0
    JZ 0x00491ab0                       ; 00491ac2
        ;   XREF to: 00491ab0 (CONDITIONAL_JUMP)  ; LAB_00491ab0
    PUSH EBX                            ; 00491ac4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491ac5
    XOR EDX,EDX                         ; 00491ac9
    PUSH ECX                            ; 00491acb
    MOV dword ptr [0x01c734ac],EDX      ; 00491acc | DAT_01c734ac
    CALL FUN_00491b80                   ; 00491ad2
        ;   XREF to: 00491b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00491b80()
    ADD ESP,0x8                         ; 00491ad7
    TEST EAX,EAX                        ; 00491ada
    JGE 0x00491ab0                      ; 00491adc
        ;   XREF to: 00491ab0 (CONDITIONAL_JUMP)  ; LAB_00491ab0
    PUSH 0x1c734b0                      ; 00491ade | DAT_01c734b0
    PUSH 0x5bf4ca                       ; 00491ae3 | DAT_005bf4ca
    MOV EBX,dword ptr [0x005f1690]      ; 00491ae8 | PTR_DAT_005f1690
    PUSH EBX                            ; 00491aee | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 00491aef
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 00491af4
    XOR EAX,EAX                         ; 00491af7
    POP EBX                             ; 00491af9
    RET                                 ; 00491afa

