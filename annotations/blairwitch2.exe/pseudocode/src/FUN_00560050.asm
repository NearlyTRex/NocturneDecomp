; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00560050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_0043bb50 at 0043bc19
;   FUN_0043bc30 at 0043be84
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc3c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00560050
        ;   Label: FUN_00560050
    CMP dword ptr [0x01c37788],0x0      ; 00560051 | DAT_01c37788
    JNZ 0x0056005e                      ; 00560058
        ;   XREF to: 0056005e (CONDITIONAL_JUMP)  ; LAB_0056005e
    XOR EAX,EAX                         ; 0056005a
    POP EBP                             ; 0056005c
    RET                                 ; 0056005d
    PUSH EDI                            ; 0056005e
        ;   Label: LAB_0056005e
    PUSH ESI                            ; 0056005f
    PUSH EBX                            ; 00560060
    MOV ECX,dword ptr [ESP + 0x24]      ; 00560061
    PUSH ECX                            ; 00560065
    MOV EBX,dword ptr [ESP + 0x24]      ; 00560066
    PUSH EBX                            ; 0056006a
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056006b
    PUSH ESI                            ; 0056006f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00560070
    PUSH EDI                            ; 00560074
    MOV EBP,dword ptr [ESP + 0x24]      ; 00560075
    PUSH EBP                            ; 00560079
    CALL dword ptr [0x0264bc3c]         ; 0056007a | DAT_0264bc3c
    ADD ESP,0x14                        ; 00560080
    POP EBX                             ; 00560083
    POP ESI                             ; 00560084
    POP EDI                             ; 00560085
    POP EBP                             ; 00560086
    RET                                 ; 00560087

