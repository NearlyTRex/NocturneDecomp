; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a3e30(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;
; Called Functions:
;   FUN_005ad9a0
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 005a3e30 | DAT_0061d95c
        ;   Label: FUN_005a3e30
    CMP dword ptr [EAX + 0x220],0x0     ; 005a3e35
    JNZ 0x005a3e41                      ; 005a3e3c
        ;   XREF to: 005a3e41 (CONDITIONAL_JUMP)  ; LAB_005a3e41
    XOR EAX,EAX                         ; 005a3e3e
    RET                                 ; 005a3e40
    PUSH EBX                            ; 005a3e41
        ;   Label: LAB_005a3e41
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a3e42
    PUSH ECX                            ; 005a3e46
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3e47
    PUSH EBX                            ; 005a3e4b
    CALL FUN_005ad9a0                   ; 005a3e4c
        ;   XREF to: 005ad9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad9a0()
    ADD ESP,0x8                         ; 005a3e51
    POP EBX                             ; 005a3e54
    RET                                 ; 005a3e55

