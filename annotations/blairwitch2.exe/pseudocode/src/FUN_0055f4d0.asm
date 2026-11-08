; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055f4d0(void)
;
;
; XREF[2]:
;   FUN_004ebf10 at 004ec84f
;   FUN_00588900 at 0058892c
;
; Referenced Globals:
;   undefined4 DAT_0264bbbc
;   undefined4 DAT_0264bcdc
;
; Called Functions:
;   FUN_0055dcf0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bcdc],0x0      ; 0055f4d0 | DAT_0264bcdc
        ;   Label: FUN_0055f4d0
    JNZ 0x0055f4df                      ; 0055f4d7
        ;   XREF to: 0055f4df (CONDITIONAL_JUMP)  ; LAB_0055f4df
    MOV EAX,0x1                         ; 0055f4d9
    RET                                 ; 0055f4de
    CALL dword ptr [0x0264bbbc]         ; 0055f4df | DAT_0264bbbc
        ;   Label: LAB_0055f4df
    CALL FUN_0055dcf0                   ; 0055f4e5
        ;   XREF to: 0055dcf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055dcf0()
    MOV EAX,0x1                         ; 0055f4ea
    RET                                 ; 0055f4ef

