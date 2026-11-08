; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00467bc0(int param_1)
;
;
; XREF[2]:
;   FUN_0043e6d0 at 0043e7a9
;   FUN_00468780 at 00468813
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467bc0
        ;   Label: FUN_00467bc0
    PUSH EDI                            ; 00467bc1
    PUSH EBP                            ; 00467bc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00467bc3
    MOV EDX,dword ptr [EDI + 0x120]     ; 00467bc7
    XOR EBX,EBX                         ; 00467bcd
    TEST EDX,EDX                        ; 00467bcf
    JLE 0x00467bf9                      ; 00467bd1
        ;   XREF to: 00467bf9 (CONDITIONAL_JUMP)  ; LAB_00467bf9
    PUSH ESI                            ; 00467bd3
    LEA ESI,[EDI + 0x124]               ; 00467bd4
    PUSH ESI                            ; 00467bda
        ;   Label: LAB_00467bda
    MOV ECX,dword ptr [0x00612560]      ; 00467bdb | DAT_00612560
    PUSH ECX                            ; 00467be1 | DAT_01bc120c
    INC EBX                             ; 00467be2
    CALL FUN_00484f00                   ; 00467be3
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESI,0x48                        ; 00467be8
    MOV EBP,dword ptr [EDI + 0x120]     ; 00467beb
    ADD ESP,0x8                         ; 00467bf1
    CMP EBX,EBP                         ; 00467bf4
    JL 0x00467bda                       ; 00467bf6
        ;   XREF to: 00467bda (CONDITIONAL_JUMP)  ; LAB_00467bda
    POP ESI                             ; 00467bf8
    POP EBP                             ; 00467bf9
        ;   Label: LAB_00467bf9
    POP EDI                             ; 00467bfa
    POP EBX                             ; 00467bfb
    RET                                 ; 00467bfc

