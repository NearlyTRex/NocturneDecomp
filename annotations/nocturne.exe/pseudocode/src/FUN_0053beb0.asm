; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053beb0(int param_1)
;
;
; XREF[1]:
;   FUN_00537cd0 at 0053827e
;
; Referenced Globals:
;   undefined4 s_actionPending_=_%d_stranger.cpp_l_00595ace+1
;   undefined4 DAT_005b6d50
;   undefined4 DAT_00764230
;
; Called Functions:
;   FUN_0040d890
;   FUN_0040f1a0
;   FUN_0046fb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053beb0
        ;   Label: FUN_0053beb0
    PUSH EBP                            ; 0053beb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053beb2
    CMP dword ptr [EBX + 0x1fa08],0x0   ; 0053beb6
    JZ 0x0053bf08                       ; 0053bebd
        ;   XREF to: 0053bf08 (CONDITIONAL_JUMP)  ; LAB_0053bf08
    MOV ECX,dword ptr [EBX + 0x1faa0]   ; 0053bebf
    CMP ECX,0x4                         ; 0053bec5
    JNZ 0x0053bf0b                      ; 0053bec8
        ;   XREF to: 0053bf0b (CONDITIONAL_JUMP)  ; LAB_0053bf0b
    MOV EBP,dword ptr [0x00764230]      ; 0053beca | DAT_00764230
        ;   Label: LAB_0053beca
    PUSH EBP                            ; 0053bed0
    MOV EAX,dword ptr [EBX + 0x1fa08]   ; 0053bed1
    PUSH EAX                            ; 0053bed7
    CALL FUN_0040d890                   ; 0053bed8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 0053bedd
    TEST EAX,EAX                        ; 0053bee0
    JZ 0x0053bef4                       ; 0053bee2
        ;   XREF to: 0053bef4 (CONDITIONAL_JUMP)  ; LAB_0053bef4
    LEA EDX,[EBX + 0x1f5a0]             ; 0053bee4
    PUSH EDX                            ; 0053beea
    PUSH EAX                            ; 0053beeb
    CALL FUN_0040f1a0                   ; 0053beec
        ;   XREF to: 0040f1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f1a0()
    ADD ESP,0x8                         ; 0053bef1
    MOV dword ptr [EBX + 0x1faa0],0x1   ; 0053bef4
        ;   Label: LAB_0053bef4
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 0053befe
    POP EBP                             ; 0053bf08
        ;   Label: LAB_0053bf08
    POP EBX                             ; 0053bf09
    RET                                 ; 0053bf0a
    PUSH EDI                            ; 0053bf0b
        ;   Label: LAB_0053bf0b
    PUSH 0xd49                          ; 0053bf0c
    PUSH ECX                            ; 0053bf11
    PUSH 0x595acf                       ; 0053bf12 | s_actionPending_=_%d_stranger.cpp_l_00595ace+1
    MOV EDI,dword ptr [0x005b6d50]      ; 0053bf17 | DAT_005b6d50
    PUSH EDI                            ; 0053bf1d
    CALL FUN_0046fb40                   ; 0053bf1e
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0x10                        ; 0053bf23
    POP EDI                             ; 0053bf26
    JMP 0x0053beca                      ; 0053bf27
        ;   XREF to: 0053beca (UNCONDITIONAL_JUMP)  ; LAB_0053beca

