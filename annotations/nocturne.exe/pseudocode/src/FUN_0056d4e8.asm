; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0056d4e8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c1f20
;
; *****************************************************************************

section .text

    MOV DL,byte ptr [0x005c1f20]        ; 0056d4e8 | DAT_005c1f20
        ;   Label: FUN_0056d4e8
    OR DL,0x1                           ; 0056d4ee
    MOV EAX,[0x005c1f20]                ; 0056d4f1 | DAT_005c1f20
    MOV byte ptr [0x005c1f20],DL        ; 0056d4f6 | DAT_005c1f20
    MOV DH,DL                           ; 0056d4fc
    AND DH,0xfd                         ; 0056d4fe
    AND EAX,0x1                         ; 0056d501
    MOV byte ptr [0x005c1f20],DH        ; 0056d504 | DAT_005c1f20
    RET                                 ; 0056d50a

