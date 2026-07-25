; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004efc30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e4008c
;   undefined4 DAT_01e40090
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01e40090]      ; 004efc30 | DAT_01e40090
        ;   Label: FUN_004efc30
    MOV EAX,[0x01e4008c]                ; 004efc36 | DAT_01e4008c
    CMP EAX,EDX                         ; 004efc3b
    SETZ AL                             ; 004efc3d
    AND EAX,0xff                        ; 004efc40
    RET                                 ; 004efc45

