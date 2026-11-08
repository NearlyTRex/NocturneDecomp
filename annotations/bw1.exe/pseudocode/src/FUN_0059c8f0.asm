; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c8f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0052c500 at 0052c50c
;
; Called Functions:
;   FUN_0059cc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c8f0
        ;   Label: FUN_0059c8f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c8f1
    PUSH EBX                            ; 0059c8f5
    CALL FUN_0059cc40                   ; 0059c8f6
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cc40()
    ADD ESP,0x4                         ; 0059c8fb
    MOV EAX,EBX                         ; 0059c8fe
    POP EBX                             ; 0059c900
    RET                                 ; 0059c901

