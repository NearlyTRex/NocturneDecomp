; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045dd70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0045dd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd70
        ;   Label: FUN_0045dd70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045dd71
    PUSH EBX                            ; 0045dd75
    CALL FUN_0045dd90                   ; 0045dd76
        ;   XREF to: 0045dd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0045dd90()
    ADD ESP,0x4                         ; 0045dd7b
    MOV EAX,EBX                         ; 0045dd7e
    POP EBX                             ; 0045dd80
    RET                                 ; 0045dd81

