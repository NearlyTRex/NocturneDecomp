; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0056d4d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c1f20
;
; *****************************************************************************

section .text

    MOV DL,byte ptr [0x005c1f20]        ; 0056d4d0 | DAT_005c1f20
        ;   Label: FUN_0056d4d0
    MOV EAX,[0x005c1f20]                ; 0056d4d6 | DAT_005c1f20
    AND DL,0xfc                         ; 0056d4db
    AND EAX,0x1                         ; 0056d4de
    MOV byte ptr [0x005c1f20],DL        ; 0056d4e1 | DAT_005c1f20
    RET                                 ; 0056d4e7

