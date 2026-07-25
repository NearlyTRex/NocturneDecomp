; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e2ce(void)
;
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 0040e2ce
        ;   Label: FUN_0040e2ce
    ADD byte ptr [EBX + 0x8b042454],CL  ; 0040e2cf
    INC ESP                             ; 0040e2d5
    AND AL,0x8                          ; 0040e2d6
    MOV EAX,dword ptr [EAX]             ; 0040e2d8
    MOV dword ptr [EDX],EAX             ; 0040e2da
    MOV EAX,EDX                         ; 0040e2dc
    RET                                 ; 0040e2de

