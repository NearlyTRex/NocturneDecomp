; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00544fd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00431470
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544fd0
        ;   Label: FUN_00544fd0
    ADD EAX,0x158                       ; 00544fd4
    PUSH EAX                            ; 00544fd9
    CALL FUN_004fc070                   ; 00544fda
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 00544fdf
    PUSH dword ptr [ESP + 0x10]         ; 00544fe2
    MOV EDX,dword ptr [ESP + 0xc]       ; 00544fe6
    PUSH dword ptr [ESP + 0x10]         ; 00544fea
    PUSH EDX                            ; 00544fee
    MOV ECX,dword ptr [ESP + 0x10]      ; 00544fef
    PUSH ECX                            ; 00544ff3
    CALL FUN_00431470                   ; 00544ff4
        ;   XREF to: 00431470 (UNCONDITIONAL_CALL)  ; undefined FUN_00431470()
    ADD ESP,0x10                        ; 00544ff9
    RET                                 ; 00544ffc

