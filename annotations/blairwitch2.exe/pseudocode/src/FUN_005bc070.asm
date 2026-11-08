; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bc070(void)
;
;
; Referenced Globals:
;   void* PTR_FUN_0061f65c = 005c21f0
;   void* PTR_FUN_0061f660 = 005c21f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bc070
        ;   Label: FUN_005bc070
    MOV EDX,0x5c23bf                    ; 005bc071
    MOV EBX,0x5bc089                    ; 005bc076
    MOV dword ptr [0x0061f65c],EDX      ; 005bc07b | PTR_FUN_0061f65c
    MOV dword ptr [0x0061f660],EBX      ; 005bc081 | PTR_FUN_0061f660
    POP EBX                             ; 005bc087
    RET                                 ; 005bc088

