; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057edf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00431470
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057edf0
        ;   Label: FUN_0057edf0
    ADD EAX,0x158                       ; 0057edf4
    PUSH EAX                            ; 0057edf9
    CALL FUN_004fc070                   ; 0057edfa
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057edff
    ADD ESP,0x4                         ; 0057ee02
    CMP EAX,0x13                        ; 0057ee05
    JNZ 0x0057ee0b                      ; 0057ee08
        ;   XREF to: 0057ee0b (CONDITIONAL_JUMP)  ; LAB_0057ee0b
    RET                                 ; 0057ee0a
    PUSH dword ptr [ESP + 0x10]         ; 0057ee0b
        ;   Label: LAB_0057ee0b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057ee0f
    PUSH dword ptr [ESP + 0x10]         ; 0057ee13
    PUSH EDX                            ; 0057ee17
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057ee18
    PUSH ECX                            ; 0057ee1c
    CALL FUN_00431470                   ; 0057ee1d
        ;   XREF to: 00431470 (UNCONDITIONAL_CALL)  ; undefined FUN_00431470()
    ADD ESP,0x10                        ; 0057ee22
    RET                                 ; 0057ee25

