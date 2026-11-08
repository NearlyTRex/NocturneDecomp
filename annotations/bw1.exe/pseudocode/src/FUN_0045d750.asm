; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045d750(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0045d770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d750
        ;   Label: FUN_0045d750
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d751
    PUSH EBX                            ; 0045d755
    CALL FUN_0045d770                   ; 0045d756
        ;   XREF to: 0045d770 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d770()
    ADD ESP,0x4                         ; 0045d75b
    MOV EAX,EBX                         ; 0045d75e
    POP EBX                             ; 0045d760
    RET                                 ; 0045d761

