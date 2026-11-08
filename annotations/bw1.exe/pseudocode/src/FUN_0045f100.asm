; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045f100(int param_1)
;
;
; XREF[1]:
;   FUN_0045f080 at 0045f086
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f100
        ;   Label: FUN_0045f100
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045f101
    MOV EDX,dword ptr [EBX + 0x300]     ; 0045f105
    TEST EDX,EDX                        ; 0045f10b
    JNZ 0x0045f111                      ; 0045f10d
        ;   XREF to: 0045f111 (CONDITIONAL_JUMP)  ; LAB_0045f111
    POP EBX                             ; 0045f10f
    RET                                 ; 0045f110
    PUSH EDX                            ; 0045f111
        ;   Label: LAB_0045f111
    CALL FUN_005c09f0                   ; 0045f112
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0045f117
    MOV dword ptr [EBX + 0x300],0x0     ; 0045f11a
    POP EBX                             ; 0045f124
    RET                                 ; 0045f125

