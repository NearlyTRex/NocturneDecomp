; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ceba8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cdff8 at 005cdff8
;
; Referenced Globals:
;   void* PTR_ExitThread_005d0548 = 001d0d1e
;   void* PTR_crt_unknown.c_FUN_005c50f8_00626640 = 005c50f8
;   undefined4 DAT_02c9f060
;
; Called Functions:
;   crt_unknown.c_FUN_005c50f8
;   crt_unknown.c_FUN_005cad34
;   crt_unknown.c_FUN_005cb5f4
;   ExitThread
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00626640]         ; 005ceba8 | PTR_crt_unknown.c_FUN_005c50f8_00626640
        ;   Label: crt_unknown.c_FUN_005ceba8
    CALL crt_unknown.c_FUN_005cb5f4     ; 005cebae
        ;   XREF to: 005cb5f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cb5f4()
    CMP dword ptr [0x02c9f060],0x0      ; 005cebb3 | DAT_02c9f060
    JNZ 0x005cebc6                      ; 005cebba
        ;   XREF to: 005cebc6 (CONDITIONAL_JUMP)  ; LAB_005cebc6
    PUSH 0x1                            ; 005cebbc
    CALL crt_unknown.c_FUN_005cad34     ; 005cebbe
        ;   XREF to: 005cad34 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cad34()
    ADD ESP,0x4                         ; 005cebc3
    PUSH 0x0                            ; 005cebc6
        ;   Label: LAB_005cebc6
    CALL dword ptr CS:[0x5d0548]        ; 005cebc8 | PTR_ExitThread_005d0548
    RET                                 ; 005cebcf

