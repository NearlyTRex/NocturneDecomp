; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539ee0(void)
;
;
; XREF[1]:
;   FUN_004bd430 at 004bd438
;
; Referenced Globals:
;   undefined4 DAT_00606b20
;   undefined4 DAT_02cfd950
;
; Called Functions:
;   FUN_0045de60
;   FUN_00577260
;
; *****************************************************************************

section .text

    CALL FUN_0045de60                   ; 00539ee0
        ;   XREF to: 0045de60 (UNCONDITIONAL_CALL)  ; undefined FUN_0045de60()
        ;   Label: FUN_00539ee0
    MOV EDX,dword ptr [0x00606b20]      ; 00539ee5 | DAT_00606b20
    PUSH EDX                            ; 00539eeb | DAT_02cfd950
    CALL FUN_00577260                   ; 00539eec
        ;   XREF to: 00577260 (UNCONDITIONAL_CALL)  ; undefined FUN_00577260()
    ADD ESP,0x4                         ; 00539ef1
    RET                                 ; 00539ef4

