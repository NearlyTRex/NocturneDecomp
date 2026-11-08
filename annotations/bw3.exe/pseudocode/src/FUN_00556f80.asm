; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00556f80(void)
;
;
; XREF[1]:
;   FUN_004b6f30 at 004b76ae
;
; Referenced Globals:
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02ce7284
;   undefined4 DAT_02ce739c
;   undefined4 DAT_02ce73a0
;
; *****************************************************************************

section .text

    MOV EAX,0x2ce721c                   ; 00556f80
        ;   Label: FUN_00556f80
    XOR EDX,EDX                         ; 00556f85
    LEA ECX,[EAX + 0x4700]              ; 00556f87
    CMP dword ptr [EAX + 0x68],0x0      ; 00556f8d | DAT_02ce7284 | DAT_02ce73a0
        ;   Label: LAB_00556f8d
    JZ 0x00556f9a                       ; 00556f91
        ;   XREF to: 00556f9a (CONDITIONAL_JUMP)  ; LAB_00556f9a
    CMP dword ptr [EAX + 0x64],0x0      ; 00556f93 | DAT_02ce7280 | DAT_02ce739c
    JZ 0x00556f9a                       ; 00556f97
        ;   XREF to: 00556f9a (CONDITIONAL_JUMP)  ; LAB_00556f9a
    INC EDX                             ; 00556f99
    ADD EAX,0x11c                       ; 00556f9a
        ;   Label: LAB_00556f9a
    CMP EAX,ECX                         ; 00556f9f
    JNZ 0x00556f8d                      ; 00556fa1
        ;   XREF to: 00556f8d (CONDITIONAL_JUMP)  ; LAB_00556f8d
    MOV EAX,EDX                         ; 00556fa3
    RET                                 ; 00556fa5

