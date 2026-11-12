; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ce470(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005ce300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce470
        ;   Label: crt_unknown.c_FUN_005ce470
    PUSH 0x0                            ; 005ce471
    MOV EDX,dword ptr [ESP + 0x14]      ; 005ce473
    PUSH EDX                            ; 005ce477
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ce478
    PUSH EBX                            ; 005ce47c
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ce47d
    PUSH ECX                            ; 005ce481
    CALL crt_unknown.c_FUN_005ce300     ; 005ce482
        ;   XREF to: 005ce300 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce300()
    ADD ESP,0x10                        ; 005ce487
    POP EBX                             ; 005ce48a
    RET                                 ; 005ce48b

