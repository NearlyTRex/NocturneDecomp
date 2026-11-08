; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0234(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_006079e0 = 005a7f68
;   void* PTR_FUN_006079e4 = 005a7f68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0234
        ;   Label: FUN_005b0234
    MOV EDX,0x5b01c8                    ; 005b0235
    MOV EBX,0x5b020c                    ; 005b023a
    MOV dword ptr [0x006079e0],EDX      ; 005b023f | PTR_FUN_006079e0
    MOV dword ptr [0x006079e4],EBX      ; 005b0245 | PTR_FUN_006079e4
    POP EBX                             ; 005b024b
    RET                                 ; 005b024c

