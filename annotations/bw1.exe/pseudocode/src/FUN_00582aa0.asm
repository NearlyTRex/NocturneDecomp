; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_0044d210 at 0044d2d9
;   FUN_0044d2f0 at 0044d544
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c8340c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00582aa0
        ;   Label: FUN_00582aa0
    CMP dword ptr [0x01c50948],0x0      ; 00582aa1 | DAT_01c50948
    JNZ 0x00582aae                      ; 00582aa8
        ;   XREF to: 00582aae (CONDITIONAL_JUMP)  ; LAB_00582aae
    XOR EAX,EAX                         ; 00582aaa
    POP EBP                             ; 00582aac
    RET                                 ; 00582aad
    PUSH EDI                            ; 00582aae
        ;   Label: LAB_00582aae
    PUSH ESI                            ; 00582aaf
    PUSH EBX                            ; 00582ab0
    MOV ECX,dword ptr [ESP + 0x24]      ; 00582ab1
    PUSH ECX                            ; 00582ab5
    MOV EBX,dword ptr [ESP + 0x24]      ; 00582ab6
    PUSH EBX                            ; 00582aba
    MOV ESI,dword ptr [ESP + 0x24]      ; 00582abb
    PUSH ESI                            ; 00582abf
    MOV EDI,dword ptr [ESP + 0x24]      ; 00582ac0
    PUSH EDI                            ; 00582ac4
    MOV EBP,dword ptr [ESP + 0x24]      ; 00582ac5
    PUSH EBP                            ; 00582ac9
    CALL dword ptr [0x02c8340c]         ; 00582aca | DAT_02c8340c
    ADD ESP,0x14                        ; 00582ad0
    POP EBX                             ; 00582ad3
    POP ESI                             ; 00582ad4
    POP EDI                             ; 00582ad5
    POP EBP                             ; 00582ad6
    RET                                 ; 00582ad7

