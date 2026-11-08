; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4070(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4070
        ;   Label: FUN_004e4070
    PUSH ESI                            ; 004e4071
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e4072
    CMP dword ptr [EBX + 0x160],0x0     ; 004e4076
    JNZ 0x004e40a9                      ; 004e407d
        ;   XREF to: 004e40a9 (CONDITIONAL_JUMP)  ; LAB_004e40a9
    LEA EAX,[EBX + 0x164]               ; 004e407f
    PUSH EAX                            ; 004e4085
    MOV ESI,dword ptr [0x005fba60]      ; 004e4086 | DAT_005fba60
    PUSH ESI                            ; 004e408c
    CALL FUN_00491aa0                   ; 004e408d
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 004e4092
    TEST EAX,EAX                        ; 004e4095
    JNZ 0x004e409c                      ; 004e4097
        ;   XREF to: 004e409c (CONDITIONAL_JUMP)  ; LAB_004e409c
    POP ESI                             ; 004e4099
        ;   Label: LAB_004e4099
    POP EBX                             ; 004e409a
    RET                                 ; 004e409b
    MOV dword ptr [EBX + 0x160],0x1     ; 004e409c
        ;   Label: LAB_004e409c
    POP ESI                             ; 004e40a6
    POP EBX                             ; 004e40a7
    RET                                 ; 004e40a8
    LEA EAX,[EBX + 0x1c8]               ; 004e40a9
        ;   Label: LAB_004e40a9
    PUSH EAX                            ; 004e40af
    MOV ECX,dword ptr [0x005fba60]      ; 004e40b0 | DAT_005fba60
    PUSH ECX                            ; 004e40b6
    CALL FUN_00491aa0                   ; 004e40b7
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 004e40bc
    TEST EAX,EAX                        ; 004e40bf
    JZ 0x004e4099                       ; 004e40c1
        ;   XREF to: 004e4099 (CONDITIONAL_JUMP)  ; LAB_004e4099
    MOV dword ptr [EBX + 0x160],0x0     ; 004e40c3
    POP ESI                             ; 004e40cd
    POP EBX                             ; 004e40ce
    RET                                 ; 004e40cf

