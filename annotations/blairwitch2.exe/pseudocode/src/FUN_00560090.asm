; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00560090(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004ebf10 at 004ebfc0
;
; Referenced Globals:
;   undefined4 DAT_0264bc40
;   undefined4 DAT_0264bcdc
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bcdc],0x0      ; 00560090 | DAT_0264bcdc
        ;   Label: FUN_00560090
    JNZ 0x0056009c                      ; 00560097
        ;   XREF to: 0056009c (CONDITIONAL_JUMP)  ; LAB_0056009c
    XOR EAX,EAX                         ; 00560099
    RET                                 ; 0056009b
    PUSH ESI                            ; 0056009c
        ;   Label: LAB_0056009c
    PUSH EBX                            ; 0056009d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056009e
    PUSH ECX                            ; 005600a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005600a3
    PUSH EBX                            ; 005600a7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005600a8
    PUSH ESI                            ; 005600ac
    CALL dword ptr [0x0264bc40]         ; 005600ad | DAT_0264bc40
    ADD ESP,0xc                         ; 005600b3
    POP EBX                             ; 005600b6
    POP ESI                             ; 005600b7
    RET                                 ; 005600b8

