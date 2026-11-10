; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3b30(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c3c08 at 005c3e9c
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005ca4f0_006269dc = 005ca4f0
;
; Called Functions:
;   crt_unknown.c_FUN_005ca4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3b30
        ;   Label: crt_unknown.c_FUN_005c3b30
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c3b31
    PUSH EDX                            ; 005c3b35
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c3b36
    PUSH EBX                            ; 005c3b3a
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c3b3b
    PUSH ECX                            ; 005c3b3f
    CALL dword ptr [0x006269dc]         ; 005c3b40 | PTR_crt_unknown.c_FUN_005ca4f0_006269dc
    ADD ESP,0xc                         ; 005c3b46
    POP EBX                             ; 005c3b49
    RET                                 ; 005c3b4a

