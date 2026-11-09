; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bd16c(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   crt_unknown.c_FUN_005bd180 at 005bd1fe
;   crt_unknown.c_FUN_005bd548 at 005bd577
;   crt_unknown.c_FUN_005bd67c at 005bd7b0
;   crt_unknown.c_FUN_005bd894 at 005bd96d
;   crt_unknown.c_FUN_005bd9a8 at 005bdbd5
;   crt_unknown.c_FUN_005bdcac at 005bdfc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005bd16c
        ;   Label: crt_unknown.c_FUN_005bd16c
    PUSH EAX                            ; 005bd170
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bd171
    PUSH EDX                            ; 005bd175
    CALL dword ptr [EAX + 0x4]          ; 005bd176
    ADD ESP,0x8                         ; 005bd179
    RET                                 ; 005bd17c

