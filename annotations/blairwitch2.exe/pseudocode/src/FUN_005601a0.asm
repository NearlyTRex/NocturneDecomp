; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005601a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b5190 at 004b59e6
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc5c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 005601a0 | DAT_01c37788
        ;   Label: FUN_005601a0
    JNZ 0x005601ac                      ; 005601a7
        ;   XREF to: 005601ac (CONDITIONAL_JUMP)  ; LAB_005601ac
    XOR EAX,EAX                         ; 005601a9
    RET                                 ; 005601ab
    MOV ECX,dword ptr [ESP + 0x4]       ; 005601ac
        ;   Label: LAB_005601ac
    PUSH ECX                            ; 005601b0
    CALL dword ptr [0x0264bc5c]         ; 005601b1 | DAT_0264bc5c
    ADD ESP,0x4                         ; 005601b7
    RET                                 ; 005601ba

