; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057cdb0(void)
;
;
; XREF[2]:
;   FUN_004cf5e0 at 004cfccb
;   FUN_004d1a80 at 004d1b04
;
; Referenced Globals:
;   undefined4 DAT_02c832a4
;   undefined4 DAT_02c83368
;   undefined4 DAT_02c8336c
;
; Called Functions:
;   FUN_00573a80
;   FUN_005750e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cdb0
        ;   Label: FUN_0057cdb0
    PUSH ESI                            ; 0057cdb1
    XOR EDX,EDX                         ; 0057cdb2
    XOR EBX,EBX                         ; 0057cdb4
    MOV dword ptr [0x02c832a4],EDX      ; 0057cdb6 | DAT_02c832a4
    MOV ECX,dword ptr [EBX + 0x2c832c0] ; 0057cdbc
        ;   Label: LAB_0057cdbc
    PUSH ECX                            ; 0057cdc2
    ADD EBX,0x10                        ; 0057cdc3
    CALL FUN_00573a80                   ; 0057cdc6
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0057cdcb
    CMP EBX,0xa0                        ; 0057cdce
    JNZ 0x0057cdbc                      ; 0057cdd4
        ;   XREF to: 0057cdbc (CONDITIONAL_JUMP)  ; LAB_0057cdbc
    MOV EBX,dword ptr [0x02c83368]      ; 0057cdd6 | DAT_02c83368
    PUSH EBX                            ; 0057cddc
    CALL FUN_00573a80                   ; 0057cddd
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0057cde2
    MOV ESI,dword ptr [0x02c8336c]      ; 0057cde5 | DAT_02c8336c
    PUSH ESI                            ; 0057cdeb
    CALL FUN_00573a80                   ; 0057cdec
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0057cdf1
    CALL FUN_005750e0                   ; 0057cdf4
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005750e0()
    POP ESI                             ; 0057cdf9
    POP EBX                             ; 0057cdfa
    RET                                 ; 0057cdfb

