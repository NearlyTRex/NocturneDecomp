; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fd5e0(int param_1)
;
;
; Called Functions:
;   FUN_00468900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd5e0
        ;   Label: FUN_004fd5e0
    ADD EAX,0x158                       ; 004fd5e4
    PUSH EAX                            ; 004fd5e9
    CALL FUN_00468900                   ; 004fd5ea
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004fd5ef
    ADD ESP,0x4                         ; 004fd5f5
    CMP EDX,0x1                         ; 004fd5f8
    JGE 0x004fd600                      ; 004fd5fb
        ;   XREF to: 004fd600 (CONDITIONAL_JUMP)  ; LAB_004fd600
    XOR EAX,EAX                         ; 004fd5fd
    RET                                 ; 004fd5ff
    MOV EAX,0x1                         ; 004fd600
        ;   Label: LAB_004fd600
    RET                                 ; 004fd605

