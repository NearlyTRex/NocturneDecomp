; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00547030(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547030
        ;   Label: FUN_00547030
    MOV EDX,dword ptr [ESP + 0x8]       ; 00547031
    PUSH EDX                            ; 00547035
    CALL FUN_0057ad70                   ; 00547036
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 0054703b
    PUSH 0x5d153e                       ; 0054703e
    MOV EBX,EAX                         ; 00547043
    ADD EAX,0x158                       ; 00547045
    PUSH EAX                            ; 0054704a
    MOV dword ptr [EAX + -0x4],0x5e44f4 ; 0054704b
    CALL FUN_004625f0                   ; 00547052
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2e0],0x7     ; 00547057
    MOV dword ptr [EBX + 0x56c],0xffffffff ; 00547061
    MOV dword ptr [EBX + 0x568],0x0     ; 0054706b
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00547075
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0054707f
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00547089
    ADD ESP,0x8                         ; 00547093
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 00547096
    MOV EAX,EBX                         ; 005470a0
    MOV dword ptr [EBX + 0x2ec],0x0     ; 005470a2
    POP EBX                             ; 005470ac
    RET                                 ; 005470ad

