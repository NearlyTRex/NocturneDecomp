; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041aef0(int param_1)
;
;
; XREF[1]:
;   FUN_00419740 at 00419785
;
; Referenced Globals:
;   undefined4 DAT_0061dca4
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_0040cd00
;   FUN_004e5f40
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 0041aef0
        ;   Label: FUN_0041aef0
    CALL FUN_0040cd00                   ; 0041aef5
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0041aefa
    TEST EAX,EAX                        ; 0041aefd
    JNZ 0x0041af02                      ; 0041aeff
        ;   XREF to: 0041af02 (CONDITIONAL_JUMP)  ; LAB_0041af02
    RET                                 ; 0041af01
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041af02
        ;   Label: LAB_0041af02
    MOV EDX,dword ptr [EAX + 0xcb8]     ; 0041af06
    PUSH EDX                            ; 0041af0c
    PUSH 0x2c8af28                      ; 0041af0d | DAT_02c8af28
    ADD EAX,0x20                        ; 0041af12
    PUSH EAX                            ; 0041af15
    MOV ECX,dword ptr [0x0061dca4]      ; 0041af16 | DAT_0061dca4
    PUSH ECX                            ; 0041af1c
    CALL FUN_004e5f40                   ; 0041af1d
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 0041af22
    RET                                 ; 0041af25

