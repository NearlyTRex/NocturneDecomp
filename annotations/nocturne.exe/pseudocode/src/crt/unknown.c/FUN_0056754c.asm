; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056754c(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   crt_unknown.c_FUN_00567560 at 005675de
;   crt_unknown.c_FUN_00567928 at 00567957
;   crt_unknown.c_FUN_00567a5c at 00567b90
;   crt_unknown.c_FUN_00567c74 at 00567d4d
;   crt_unknown.c_FUN_00567d88 at 00567fb5
;   crt_unknown.c_FUN_0056808c at 005683a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0056754c
        ;   Label: crt_unknown.c_FUN_0056754c
    PUSH EAX                            ; 00567550
    MOV EDX,dword ptr [ESP + 0x8]       ; 00567551
    PUSH EDX                            ; 00567555
    CALL dword ptr [EAX + 0x4]          ; 00567556
    ADD ESP,0x8                         ; 00567559
    RET                                 ; 0056755c

