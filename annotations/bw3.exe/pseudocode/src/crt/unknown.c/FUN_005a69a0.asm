; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a69a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a6a78 at 005a6d0c
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005ad360_00607d80 = 005ad360
;
; Called Functions:
;   crt_unknown.c_FUN_005ad360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a69a0
        ;   Label: crt_unknown.c_FUN_005a69a0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a69a1
    PUSH EDX                            ; 005a69a5
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a69a6
    PUSH EBX                            ; 005a69aa
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a69ab
    PUSH ECX                            ; 005a69af
    CALL dword ptr [0x00607d80]         ; 005a69b0 | PTR_crt_unknown.c_FUN_005ad360_00607d80
    ADD ESP,0xc                         ; 005a69b6
    POP EBX                             ; 005a69b9
    RET                                 ; 005a69ba

