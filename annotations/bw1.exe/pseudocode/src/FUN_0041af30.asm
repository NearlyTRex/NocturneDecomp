; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041af30(int param_1)
;
;
; Called Functions:
;   FUN_00409d70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041af30
        ;   Label: FUN_0041af30
    CMP dword ptr [EAX + 0x158],0x0     ; 0041af34
    JZ 0x0041af40                       ; 0041af3b
        ;   XREF to: 0041af40 (CONDITIONAL_JUMP)  ; LAB_0041af40
    XOR EAX,EAX                         ; 0041af3d
    RET                                 ; 0041af3f
    PUSH EAX                            ; 0041af40
        ;   Label: LAB_0041af40
    CALL FUN_00409d70                   ; 0041af41
        ;   XREF to: 00409d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d70()
    ADD ESP,0x4                         ; 0041af46
    RET                                 ; 0041af49

