; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d6320(void)
;
;
; XREF[3]:
;   FUN_004737b0 at 00473a7b
;   FUN_004cab10 at 004cacf8
;   FUN_0058fcb0 at 0058ff01
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_004fa740
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d06ab4]                ; 004d6320 | DAT_01d06ab4
        ;   Label: FUN_004d6320
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d6325
    ADD EAX,0x1fae8                     ; 004d632c
    PUSH EAX                            ; 004d6331
    CALL FUN_004fa740                   ; 004d6332
        ;   XREF to: 004fa740 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa740()
    ADD ESP,0x4                         ; 004d6337
    RET                                 ; 004d633a

