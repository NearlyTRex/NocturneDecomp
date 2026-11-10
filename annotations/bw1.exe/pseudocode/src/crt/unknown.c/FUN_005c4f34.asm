; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4f34(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c4f70 at 005c4f94
;
; Referenced Globals:
;   undefined4 DAT_0062621d
;   undefined4 DAT_00626a34
;   undefined4 DAT_00626a38
;   undefined4 DAT_00626a3c
;
; Called Functions:
;   crt_unknown.c_FUN_005ca8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4f34
        ;   Label: crt_unknown.c_FUN_005c4f34
    CMP byte ptr [0x0062621d],0x0       ; 005c4f35 | DAT_0062621d
    JZ 0x005c4f54                       ; 005c4f3c
        ;   XREF to: 005c4f54 (CONDITIONAL_JUMP)  ; LAB_005c4f54
    MOV EDX,0x5c4f20                    ; 005c4f3e
    MOV EBX,0x5c4f2c                    ; 005c4f43
    MOV dword ptr [0x00626a34],EDX      ; 005c4f48 | DAT_00626a34
    MOV dword ptr [0x00626a38],EBX      ; 005c4f4e | DAT_00626a38
    XOR EAX,EAX                         ; 005c4f54
        ;   Label: LAB_005c4f54
    MOV AX,[0x00626a3c]                 ; 005c4f56 | DAT_00626a3c
    CALL crt_unknown.c_FUN_005ca8f0     ; 005c4f5c
        ;   XREF to: 005ca8f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca8f0()
    POP EBX                             ; 005c4f61
    RET                                 ; 005c4f62

