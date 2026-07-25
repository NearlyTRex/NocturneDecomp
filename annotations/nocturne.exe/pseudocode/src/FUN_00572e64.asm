; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005c2168 = 00573ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572e64
        ;   Label: FUN_00572e64
    PUSH ESI                            ; 00572e65
    MOV EDX,dword ptr [ESP + 0x18]      ; 00572e66
    PUSH EDX                            ; 00572e6a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00572e6b
    PUSH EBX                            ; 00572e6f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00572e70
    PUSH ECX                            ; 00572e74
    MOV ESI,dword ptr [ESP + 0x18]      ; 00572e75
    PUSH ESI                            ; 00572e79
    CALL dword ptr [0x005c2168]         ; 00572e7a | PTR_FUN_005c2168
    ADD ESP,0x10                        ; 00572e80
    POP ESI                             ; 00572e83
    POP EBX                             ; 00572e84
    RET                                 ; 00572e85

