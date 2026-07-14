; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __setdefaultprecision(void)
;
;
; XREF[2]:
;   FUN_100098f0 at 100098fa
;   __fpmath at 1000558f
;
; Called Functions:
;   __controlfp
;
; *****************************************************************************

section .text

    PUSH 0x30000                        ; 10006d30
        ;   Label: __setdefaultprecision
    PUSH 0x10000                        ; 10006d35
    CALL __controlfp                    ; 10006d3a
        ;   XREF to: 100098d0 (UNCONDITIONAL_CALL)  ; uint __controlfp(uint _NewValue, uint _Mask)
    ADD ESP,0x8                         ; 10006d3f
    RET                                 ; 10006d42

