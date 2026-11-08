; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045f080(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0045f100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f080
        ;   Label: FUN_0045f080
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045f081
    PUSH EBX                            ; 0045f085
    CALL FUN_0045f100                   ; 0045f086
        ;   XREF to: 0045f100 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f100()
    ADD ESP,0x4                         ; 0045f08b
    MOV EAX,EBX                         ; 0045f08e
    POP EBX                             ; 0045f090
    RET                                 ; 0045f091

