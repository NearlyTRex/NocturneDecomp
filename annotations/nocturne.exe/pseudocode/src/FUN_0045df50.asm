; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045df50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   FUN_0045df20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df50
        ;   Label: FUN_0045df50
    PUSH ESI                            ; 0045df51
    PUSH EDI                            ; 0045df52
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045df53
    PUSH EDX                            ; 0045df57
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045df58
    PUSH ECX                            ; 0045df5c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045df5d
    PUSH EBX                            ; 0045df61
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045df62
    PUSH ESI                            ; 0045df66
    MOV EDI,dword ptr [ESP + 0x20]      ; 0045df67
    PUSH EDI                            ; 0045df6b
    CALL FUN_0045df20                   ; 0045df6c
        ;   XREF to: 0045df20 (UNCONDITIONAL_CALL)  ; undefined FUN_0045df20()
    ADD ESP,0x14                        ; 0045df71
    POP EDI                             ; 0045df74
    POP ESI                             ; 0045df75
    POP EBX                             ; 0045df76
    RET                                 ; 0045df77

