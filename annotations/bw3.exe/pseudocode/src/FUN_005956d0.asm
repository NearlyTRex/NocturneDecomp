; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005956d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00431470
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005956d0
        ;   Label: FUN_005956d0
    ADD EAX,0x158                       ; 005956d4
    PUSH EAX                            ; 005956d9
    CALL FUN_004fc070                   ; 005956da
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005956df
    ADD ESP,0x4                         ; 005956e2
    CMP EAX,0x13                        ; 005956e5
    JNZ 0x005956eb                      ; 005956e8
        ;   XREF to: 005956eb (CONDITIONAL_JUMP)  ; LAB_005956eb
    RET                                 ; 005956ea
    PUSH dword ptr [ESP + 0x10]         ; 005956eb
        ;   Label: LAB_005956eb
    MOV EDX,dword ptr [ESP + 0xc]       ; 005956ef
    PUSH dword ptr [ESP + 0x10]         ; 005956f3
    PUSH EDX                            ; 005956f7
    MOV ECX,dword ptr [ESP + 0x10]      ; 005956f8
    PUSH ECX                            ; 005956fc
    CALL FUN_00431470                   ; 005956fd
        ;   XREF to: 00431470 (UNCONDITIONAL_CALL)  ; undefined FUN_00431470()
    ADD ESP,0x10                        ; 00595702
    RET                                 ; 00595705

