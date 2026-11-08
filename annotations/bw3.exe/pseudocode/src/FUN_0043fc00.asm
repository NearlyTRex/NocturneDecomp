; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043fc00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[5]:
;   FUN_0042b0e0 at 0042b2aa
;   FUN_00433350 at 004333cd
;   FUN_005992f0 at 00599387
;   FUN_0059a060 at 0059a10b
;   FUN_0059aba0 at 0059ac4b
;
; Called Functions:
;   FUN_0043e270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fc00
        ;   Label: FUN_0043fc00
    PUSH EDI                            ; 0043fc01
    PUSH EBP                            ; 0043fc02
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043fc03
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043fc07
    MOV EDX,dword ptr [EDI]             ; 0043fc0b
    XOR EBX,EBX                         ; 0043fc0d
    TEST EDX,EDX                        ; 0043fc0f
    JLE 0x0043fc43                      ; 0043fc11
        ;   XREF to: 0043fc43 (CONDITIONAL_JUMP)  ; LAB_0043fc43
    PUSH ESI                            ; 0043fc13
    MOV ESI,EDI                         ; 0043fc14
    PUSH EBP                            ; 0043fc16
        ;   Label: LAB_0043fc16
    PUSH dword ptr [ESP + 0x28]         ; 0043fc17
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043fc1b
    PUSH dword ptr [ESP + 0x28]         ; 0043fc1f
    PUSH ECX                            ; 0043fc23
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043fc24
    PUSH EAX                            ; 0043fc28
    MOV EDX,dword ptr [ESI + 0x194]     ; 0043fc29
    PUSH EDX                            ; 0043fc2f
    ADD ESI,0x4                         ; 0043fc30
    INC EBX                             ; 0043fc33
    CALL FUN_0043e270                   ; 0043fc34
        ;   XREF to: 0043e270 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e270()
    MOV ECX,dword ptr [EDI]             ; 0043fc39
    ADD ESP,0x18                        ; 0043fc3b
    CMP EBX,ECX                         ; 0043fc3e
    JL 0x0043fc16                       ; 0043fc40
        ;   XREF to: 0043fc16 (CONDITIONAL_JUMP)  ; LAB_0043fc16
    POP ESI                             ; 0043fc42
    POP EBP                             ; 0043fc43
        ;   Label: LAB_0043fc43
    POP EDI                             ; 0043fc44
    POP EBX                             ; 0043fc45
    RET                                 ; 0043fc46

