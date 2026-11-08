; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00459ce0(int param_1)
;
;
; XREF[2]:
;   FUN_00459cc0 at 00459cc6
;   FUN_00459d00 at 00459d18
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459ce0
        ;   Label: FUN_00459ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459ce1
    MOV EDX,dword ptr [EBX + 0x4]       ; 00459ce5
    TEST EDX,EDX                        ; 00459ce8
    JNZ 0x00459cee                      ; 00459cea
        ;   XREF to: 00459cee (CONDITIONAL_JUMP)  ; LAB_00459cee
    POP EBX                             ; 00459cec
    RET                                 ; 00459ced
    PUSH EDX                            ; 00459cee
        ;   Label: LAB_00459cee
    CALL FUN_005a3770                   ; 00459cef
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00459cf4
    MOV dword ptr [EBX + 0x4],0x0       ; 00459cf7
    POP EBX                             ; 00459cfe
    RET                                 ; 00459cff

