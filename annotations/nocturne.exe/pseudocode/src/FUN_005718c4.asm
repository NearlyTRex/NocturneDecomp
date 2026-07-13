; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005718c4(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_005c1afc = 00567208
;   void* PTR_FUN_005c1b00 = 00567208
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005718c4
        ;   Label: FUN_005718c4
    MOV EDX,0x571858                    ; 005718c5
    MOV EBX,0x57189c                    ; 005718ca
    MOV dword ptr [0x005c1afc],EDX      ; 005718cf | PTR_FUN_005c1afc
    MOV dword ptr [0x005c1b00],EBX      ; 005718d5 | PTR_FUN_005c1b00
    POP EBX                             ; 005718db
    RET                                 ; 005718dc

