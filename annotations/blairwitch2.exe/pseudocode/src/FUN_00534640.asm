; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534640(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00489670 at 0048c7d1
;   FUN_004b82e0 at 004b8844
;   FUN_005346c0 at 005346f6
;
; Called Functions:
;   FUN_00441e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534640
        ;   Label: FUN_00534640
    MOV EDX,dword ptr [ESP + 0x8]       ; 00534641
    MOV ECX,dword ptr [ESP + 0xc]       ; 00534645
    IMUL EAX,ECX,0x1a4                  ; 00534649
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053464f
    MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX ; 00534653
    CMP ECX,dword ptr [EDX + 0x15aeb8]  ; 0053465a
    JZ 0x00534664                       ; 00534660
        ;   XREF to: 00534664 (CONDITIONAL_JUMP)  ; LAB_00534664
    POP EBX                             ; 00534662
    RET                                 ; 00534663
    PUSH dword ptr [ESP + 0x10]         ; 00534664
        ;   Label: LAB_00534664
    PUSH 0x1fc7838                      ; 00534668
    CALL FUN_00441e80                   ; 0053466d
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00441e80()
    ADD ESP,0x8                         ; 00534672
    POP EBX                             ; 00534675
    RET                                 ; 00534676

