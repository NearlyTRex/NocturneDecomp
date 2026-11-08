; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0d64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_00607f14 = 005b1840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0d64
        ;   Label: FUN_005b0d64
    PUSH ESI                            ; 005b0d65
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b0d66
    PUSH EDX                            ; 005b0d6a
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b0d6b
    PUSH EBX                            ; 005b0d6f
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b0d70
    PUSH ECX                            ; 005b0d74
    MOV ESI,dword ptr [ESP + 0x18]      ; 005b0d75
    PUSH ESI                            ; 005b0d79
    CALL dword ptr [0x00607f14]         ; 005b0d7a | PTR_FUN_00607f14
    ADD ESP,0x10                        ; 005b0d80
    POP ESI                             ; 005b0d83
    POP EBX                             ; 005b0d84
    RET                                 ; 005b0d85

