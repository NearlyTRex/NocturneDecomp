; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d5780(int param_1)
;
;
; XREF[1]:
;   FUN_004d4c50 at 004d51b5
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d5780
        ;   Label: FUN_004d5780
    CMP dword ptr [EAX + 0x25660],0x0   ; 004d5784
    JNZ 0x004d5790                      ; 004d578b
        ;   XREF to: 004d5790 (CONDITIONAL_JUMP)  ; LAB_004d5790
    XOR EAX,EAX                         ; 004d578d
    RET                                 ; 004d578f
    PUSH 0x1                            ; 004d5790
        ;   Label: LAB_004d5790
    PUSH 0x16                           ; 004d5792
    ADD EAX,0x2b4                       ; 004d5794
    PUSH EAX                            ; 004d5799
    CALL FUN_00503620                   ; 004d579a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    MOV EAX,0x1                         ; 004d579f
    ADD ESP,0xc                         ; 004d57a4
    RET                                 ; 004d57a7

