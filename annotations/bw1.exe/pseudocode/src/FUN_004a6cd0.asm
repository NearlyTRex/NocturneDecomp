; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_004a6cd0(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_004d27b0 at 004d3f6e
;   FUN_00544460 at 00545bbd
;
; Referenced Globals:
;   undefined4 DAT_01c56ecc
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   FUN_004a1b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6cd0
        ;   Label: FUN_004a6cd0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a6cd1
    CMP byte ptr [EAX],0x0              ; 004a6cd5
    JNZ 0x004a6cde                      ; 004a6cd8
        ;   XREF to: 004a6cde (CONDITIONAL_JUMP)  ; LAB_004a6cde
    XOR EAX,EAX                         ; 004a6cda
        ;   Label: LAB_004a6cda
    POP EBX                             ; 004a6cdc
    RET                                 ; 004a6cdd
    PUSH EAX                            ; 004a6cde
        ;   Label: LAB_004a6cde
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a6cdf
    MOV EDX,0x1                         ; 004a6ce3
    PUSH ECX                            ; 004a6ce8
    XOR EBX,EBX                         ; 004a6ce9
    MOV dword ptr [0x01c56ecc],EDX      ; 004a6ceb | DAT_01c56ecc
    CALL FUN_004a1b90                   ; 004a6cf1
        ;   XREF to: 004a1b90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b90()
    ADD ESP,0x8                         ; 004a6cf6
    MOV dword ptr [0x01c56ecc],EBX      ; 004a6cf9 | DAT_01c56ecc
    TEST EAX,EAX                        ; 004a6cff
    JNZ 0x004a6cda                      ; 004a6d01
        ;   XREF to: 004a6cda (CONDITIONAL_JUMP)  ; LAB_004a6cda
    MOV EAX,0x1c56ed0                   ; 004a6d03 | DAT_01c56ed0
    POP EBX                             ; 004a6d08
    RET                                 ; 004a6d09

