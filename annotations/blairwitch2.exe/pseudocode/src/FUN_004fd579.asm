; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fd579(void)
;
;
; XREF[2]:
;   FUN_004fd490 at 004fd496
;   FUN_004fd58f at 004fd5a5
;
; Referenced Globals:
;   undefined4 DAT_006182dd
;   undefined1 DAT_006182e1
;   undefined4 DAT_00800000
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 004fd579
        ;   Label: FUN_004fd579
    MOV EAX,[0x006182dd]                ; 004fd57a | DAT_006182dd
    TEST EAX,0x800000                   ; 004fd57f | DAT_00800000
    JZ 0x004fd58d                       ; 004fd584
        ;   XREF to: 004fd58d (CONDITIONAL_JUMP)  ; LAB_004fd58d
    MOV byte ptr [0x006182e1],0x1       ; 004fd586 | DAT_006182e1
    POP EAX                             ; 004fd58d
        ;   Label: LAB_004fd58d
    RET                                 ; 004fd58e

