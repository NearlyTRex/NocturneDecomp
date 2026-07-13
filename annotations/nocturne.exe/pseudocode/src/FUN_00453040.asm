; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[8]:
;   FUN_004544d0 at 004544f9
;   FUN_00484d40 at 00484dff
;   FUN_004856c0 at 004858bd
;   FUN_004896d0 at 004897ac
;   FUN_004c59e0 at 004c5e00
;   FUN_004dec50 at 004ded3f
;   FUN_004df040 at 004df142
;   FUN_00507c80 at 00507db3
;
; Called Functions:
;   FUN_004530c0
;   FUN_00453170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453040
        ;   Label: FUN_00453040
    PUSH EBP                            ; 00453041
    MOV EBX,dword ptr [ESP + 0xc]       ; 00453042
    CMP dword ptr [EBX + 0x110],0x1     ; 00453046
    JGE 0x00453052                      ; 0045304d
        ;   XREF to: 00453052 (CONDITIONAL_JUMP)  ; LAB_00453052
    POP EBP                             ; 0045304f
    POP EBX                             ; 00453050
    RET                                 ; 00453051
    PUSH EDI                            ; 00453052
        ;   Label: LAB_00453052
    PUSH ESI                            ; 00453053
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00453054
    PUSH ECX                            ; 00453058
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00453059
    PUSH ESI                            ; 0045305d
    PUSH EBX                            ; 0045305e
    CALL FUN_004530c0                   ; 0045305f
        ;   XREF to: 004530c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004530c0()
    ADD ESP,0xc                         ; 00453064
    MOV EDI,dword ptr [ESP + 0x20]      ; 00453067
    PUSH EDI                            ; 0045306b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045306c
    PUSH EBP                            ; 00453070
    PUSH EBX                            ; 00453071
    CALL FUN_00453170                   ; 00453072
        ;   XREF to: 00453170 (UNCONDITIONAL_CALL)  ; undefined FUN_00453170()
    ADD ESP,0xc                         ; 00453077
    POP ESI                             ; 0045307a
    POP EDI                             ; 0045307b
    POP EBP                             ; 0045307c
    POP EBX                             ; 0045307d
    RET                                 ; 0045307e

