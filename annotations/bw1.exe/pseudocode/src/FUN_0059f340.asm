; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059f340(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059f340
        ;   Label: FUN_0059f340
    PUSH EDI                            ; 0059f341
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059f342
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059f346
    MOV EDI,EAX                         ; 0059f34a
    MOVSD ES:EDI,ESI                    ; 0059f34c
    MOVSD ES:EDI,ESI                    ; 0059f34d
    POP EDI                             ; 0059f34e
    POP ESI                             ; 0059f34f
    RET                                 ; 0059f350

