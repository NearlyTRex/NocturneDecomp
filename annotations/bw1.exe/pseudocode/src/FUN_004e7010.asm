; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_004e7010(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040c870 at 0040cacb
;   FUN_004b56a0 at 004b58ca
;
; Referenced Globals:
;   void* switchdataD_004e6fd0 = 004e7021
;   undefined4 DAT_005e4248
;   undefined4 DAT_005e424b
;   undefined4 DAT_005e424e
;   undefined4 DAT_005e4251
;   undefined4 DAT_005e4254
;   undefined4 DAT_005e4257
;   undefined4 DAT_005e425a
;   undefined4 DAT_005e425d
;   undefined4 DAT_005e4260
;   undefined4 DAT_005e4263
;   undefined4 DAT_005e4266
;   undefined4 DAT_005e4269
;   undefined4 DAT_005e426c
;   undefined4 DAT_005e426f
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7010
        ;   Label: FUN_004e7010
    DEC EAX                             ; 004e7014
    CMP EAX,0xd                         ; 004e7015
    JA 0x004e7075                       ; 004e7018
        ;   XREF to: 004e7075 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e6fd0]  ; 004e701a | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5e4248                    ; 004e7021 | DAT_005e4248
        ;   Label: caseD_1
    RET                                 ; 004e7026
    MOV EAX,0x5e424b                    ; 004e7027 | DAT_005e424b
        ;   Label: caseD_2
    RET                                 ; 004e702c
    MOV EAX,0x5e424e                    ; 004e702d | DAT_005e424e
        ;   Label: caseD_3
    RET                                 ; 004e7032
    MOV EAX,0x5e4251                    ; 004e7033 | DAT_005e4251
        ;   Label: caseD_4
    RET                                 ; 004e7038
    MOV EAX,0x5e4254                    ; 004e7039 | DAT_005e4254
        ;   Label: caseD_5
    RET                                 ; 004e703e
    MOV EAX,0x5e4257                    ; 004e703f | DAT_005e4257
        ;   Label: caseD_6
    RET                                 ; 004e7044
    MOV EAX,0x5e425a                    ; 004e7045 | DAT_005e425a
        ;   Label: caseD_7
    RET                                 ; 004e704a
    MOV EAX,0x5e425d                    ; 004e704b | DAT_005e425d
        ;   Label: caseD_8
    RET                                 ; 004e7050
    MOV EAX,0x5e4260                    ; 004e7051 | DAT_005e4260
        ;   Label: caseD_9
    RET                                 ; 004e7056
    MOV EAX,0x5e4263                    ; 004e7057 | DAT_005e4263
        ;   Label: caseD_a
    RET                                 ; 004e705c
    MOV EAX,0x5e4266                    ; 004e705d | DAT_005e4266
        ;   Label: caseD_b
    RET                                 ; 004e7062
    MOV EAX,0x5e4269                    ; 004e7063 | DAT_005e4269
        ;   Label: caseD_c
    RET                                 ; 004e7068
    MOV EAX,0x5e426c                    ; 004e7069 | DAT_005e426c
        ;   Label: caseD_d
    RET                                 ; 004e706e
    MOV EAX,0x5e426f                    ; 004e706f | DAT_005e426f
        ;   Label: caseD_e
    RET                                 ; 004e7074
    MOV EAX,0x5e4272                    ; 004e7075 | DAT_005e4272
        ;   Label: default
    RET                                 ; 004e707a

