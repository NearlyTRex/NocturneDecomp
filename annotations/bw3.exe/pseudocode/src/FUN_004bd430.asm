; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bd430(void)
;
;
; XREF[1]:
;   FUN_004b7f90 at 004b82e9
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_005fed24
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_004a24a0
;   FUN_004cec70
;   FUN_004da570
;   FUN_00539ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd430
        ;   Label: FUN_004bd430
    MOV EDX,dword ptr [0x00603b28]      ; 004bd431 | DAT_00603b28
    PUSH EDX                            ; 004bd437 | DAT_01ed78c8
    CALL FUN_00539ee0                   ; 004bd438
        ;   XREF to: 00539ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00539ee0()
    ADD ESP,0x4                         ; 004bd43d
    MOV ECX,dword ptr [0x005fc5a0]      ; 004bd440 | DAT_005fc5a0
    PUSH ECX                            ; 004bd446
    CALL FUN_004a24a0                   ; 004bd447
        ;   XREF to: 004a24a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a24a0()
    ADD ESP,0x4                         ; 004bd44c
    MOV EBX,dword ptr [0x005fed24]      ; 004bd44f | DAT_005fed24
    PUSH EBX                            ; 004bd455
    CALL FUN_004cec70                   ; 004bd456
        ;   XREF to: 004cec70 (UNCONDITIONAL_CALL)  ; undefined FUN_004cec70()
    ADD ESP,0x4                         ; 004bd45b
    CALL FUN_004da570                   ; 004bd45e
        ;   XREF to: 004da570 (UNCONDITIONAL_CALL)  ; undefined FUN_004da570()
    POP EBX                             ; 004bd463
    RET                                 ; 004bd464

