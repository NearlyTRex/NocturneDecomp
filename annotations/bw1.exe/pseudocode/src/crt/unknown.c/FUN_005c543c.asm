; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c543c(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   crt_unknown.c_FUN_005c5450 at 005c54ce
;   crt_unknown.c_FUN_005c5818 at 005c5847
;   crt_unknown.c_FUN_005c594c at 005c5a80
;   crt_unknown.c_FUN_005c5b64 at 005c5c3d
;   crt_unknown.c_FUN_005c5c78 at 005c5ea5
;   crt_unknown.c_FUN_005c5f7c at 005c6290
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005c543c
        ;   Label: crt_unknown.c_FUN_005c543c
    PUSH EAX                            ; 005c5440
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c5441
    PUSH EDX                            ; 005c5445
    CALL dword ptr [EAX + 0x4]          ; 005c5446
    ADD ESP,0x8                         ; 005c5449
    RET                                 ; 005c544c

