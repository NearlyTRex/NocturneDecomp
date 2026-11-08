; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052b100(undefined1 *param_1)
;
;
; XREF[4]:
;   FUN_0052ae80 at 0052ae86
;   FUN_0052af80 at 0052af8c
;   FUN_0056e830 at 0056eaad
;   FUN_00574410 at 00574638
;
; Called Functions:
;   FUN_005c09f0
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b100
        ;   Label: FUN_0052b100
    PUSH ESI                            ; 0052b101
    PUSH EDI                            ; 0052b102
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052b103
    MOV dword ptr [EDI + 0x10c],0x0     ; 0052b107
    LEA EBX,[EDI + 0x5320]              ; 0052b111
    MOV dword ptr [EDI + 0x108],0x0     ; 0052b117
    MOV EDX,dword ptr [EBX]             ; 0052b121
    MOV ESI,EBX                         ; 0052b123
    TEST EDX,EDX                        ; 0052b125
    JNZ 0x0052b137                      ; 0052b127
        ;   XREF to: 0052b137 (CONDITIONAL_JUMP)  ; LAB_0052b137
    MOV EBX,dword ptr [ESI + 0x4]       ; 0052b129
    TEST EBX,EBX                        ; 0052b12c
    JNZ 0x0052b154                      ; 0052b12e
        ;   XREF to: 0052b154 (CONDITIONAL_JUMP)  ; LAB_0052b154
    MOV byte ptr [EDI],0x0              ; 0052b130
    POP EDI                             ; 0052b133
    POP ESI                             ; 0052b134
    POP EBX                             ; 0052b135
    RET                                 ; 0052b136
    PUSH EDX                            ; 0052b137
        ;   Label: LAB_0052b137
    CALL FUN_005c0d10                   ; 0052b138
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 0052b13d
    MOV dword ptr [EBX],0x0             ; 0052b140
    MOV EBX,dword ptr [ESI + 0x4]       ; 0052b146
    TEST EBX,EBX                        ; 0052b149
    JNZ 0x0052b154                      ; 0052b14b
        ;   XREF to: 0052b154 (CONDITIONAL_JUMP)  ; LAB_0052b154
    MOV byte ptr [EDI],0x0              ; 0052b14d
    POP EDI                             ; 0052b150
    POP ESI                             ; 0052b151
    POP EBX                             ; 0052b152
    RET                                 ; 0052b153
    PUSH EBX                            ; 0052b154
        ;   Label: LAB_0052b154
    CALL FUN_005c09f0                   ; 0052b155
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 0052b15a
    MOV dword ptr [ESI + 0x4],0x0       ; 0052b15d
    MOV byte ptr [EDI],0x0              ; 0052b164
    POP EDI                             ; 0052b167
    POP ESI                             ; 0052b168
    POP EBX                             ; 0052b169
    RET                                 ; 0052b16a

