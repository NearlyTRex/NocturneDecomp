; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00561f80(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005f19e7
;   TerminatedCString s_shotgun_cock_wav_005f19f1
;   undefined4 DAT_0061c010
;
; Called Functions:
;   FUN_00408ac0
;   FUN_0040cc00
;   FUN_0045f3e0
;   FUN_0045f690
;   FUN_00468780
;   FUN_004b7270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561f80
        ;   Label: FUN_00561f80
    PUSH EBP                            ; 00561f81
    SUB ESP,0x74                        ; 00561f82
    MOV EBX,dword ptr [ESP + 0x80]      ; 00561f85
    CMP dword ptr [EBX + 0x568],0x0     ; 00561f8c
    JG 0x00561f9b                       ; 00561f93
        ;   XREF to: 00561f9b (CONDITIONAL_JUMP)  ; LAB_00561f9b
    ADD ESP,0x74                        ; 00561f95
    POP EBP                             ; 00561f98
    POP EBX                             ; 00561f99
    RET                                 ; 00561f9a
    PUSH EDI                            ; 00561f9b
        ;   Label: LAB_00561f9b
    PUSH ESI                            ; 00561f9c
    PUSH 0x3ec90fdb                     ; 00561f9d
    MOV ECX,0x40a00000                  ; 00561fa2
    MOV ESI,0x40c00000                  ; 00561fa7
    MOV EDI,0xc0c00000                  ; 00561fac
    PUSH 0xbec90fdb                     ; 00561fb1
    MOV dword ptr [ESP + 0x44],ECX      ; 00561fb6
    MOV dword ptr [ESP + 0x48],ESI      ; 00561fba
    MOV dword ptr [ESP + 0x4c],EDI      ; 00561fbe
    CALL FUN_0040cc00                   ; 00561fc2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 00561fc7
    FLD float ptr [ESP + 0x80]          ; 00561fce
    ADD ESP,0x8                         ; 00561fd5
    PUSH 0x3ec90fdb                     ; 00561fd8
    PUSH 0xbec90fdb                     ; 00561fdd
    FSTP float ptr [ESP + 0x50]         ; 00561fe2
    CALL FUN_0040cc00                   ; 00561fe6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 00561feb
    FLD float ptr [ESP + 0x80]          ; 00561ff2
    ADD ESP,0x8                         ; 00561ff9
    LEA EAX,[ESP + 0x48]                ; 00561ffc
    PUSH EAX                            ; 00562000
    LEA EAX,[ESP + 0xc]                 ; 00562001
    XOR EBP,EBP                         ; 00562005
    PUSH EAX                            ; 00562007
    FSTP float ptr [ESP + 0x54]         ; 00562008
    MOV dword ptr [ESP + 0x58],EBP      ; 0056200c
    CALL FUN_0045f3e0                   ; 00562010
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00562015
    LEA EAX,[ESP + 0x3c]                ; 00562018
    PUSH EAX                            ; 0056201c
    LEA EAX,[ESP + 0xc]                 ; 0056201d
    PUSH EAX                            ; 00562021
    LEA ESI,[ESP + 0x38]                ; 00562022
    LEA EDI,[ESP + 0x74]                ; 00562026
    CALL FUN_0045f690                   ; 0056202a
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    ADD ESP,0x8                         ; 0056202f
    LEA EAX,[ESP + 0x6c]                ; 00562032
    LEA ESI,[ESP + 0x30]                ; 00562036
    PUSH EAX                            ; 0056203a
    MOVSD ES:EDI,ESI                    ; 0056203b
    MOVSD ES:EDI,ESI                    ; 0056203c
    MOVSD ES:EDI,ESI                    ; 0056203d
    PUSH EBX                            ; 0056203e
    LEA ESI,[ESP + 0x5c]                ; 0056203f
    LEA EDI,[ESP + 0x68]                ; 00562043
    CALL FUN_00408ac0                   ; 00562047
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    LEA ESI,[ESP + 0x5c]                ; 0056204c
    ADD ESP,0x8                         ; 00562050
    MOVSD ES:EDI,ESI                    ; 00562053
    MOVSD ES:EDI,ESI                    ; 00562054
    MOVSD ES:EDI,ESI                    ; 00562055
    LEA EAX,[ESP + 0x60]                ; 00562056
    LEA ESI,[ESP + 0x3c]                ; 0056205a
    CMP ESI,EAX                         ; 0056205e
    JZ 0x0056207a                       ; 00562060
        ;   XREF to: 0056207a (CONDITIONAL_JUMP)  ; LAB_0056207a
    MOV EAX,dword ptr [ESP + 0x60]      ; 00562062
    MOV dword ptr [ESP + 0x3c],EAX      ; 00562066
    MOV EAX,dword ptr [ESP + 0x64]      ; 0056206a
    MOV dword ptr [ESP + 0x40],EAX      ; 0056206e
    MOV EAX,dword ptr [ESP + 0x68]      ; 00562072
    MOV dword ptr [ESP + 0x44],EAX      ; 00562076
    PUSH 0x5f19e7                       ; 0056207a | = "shell.kfm"
        ;   Label: LAB_0056207a
    CALL FUN_00468780                   ; 0056207f
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; undefined FUN_00468780()
    ADD ESP,0x4                         ; 00562084
    PUSH EAX                            ; 00562087
    LEA EAX,[ESP + 0x40]                ; 00562088
    PUSH EAX                            ; 0056208c
    LEA EAX,[EBX + 0x30]                ; 0056208d
    PUSH EAX                            ; 00562090
    LEA EAX,[EBX + 0x20]                ; 00562091
    PUSH EAX                            ; 00562094
    MOV EAX,[0x0061c010]                ; 00562095 | DAT_0061c010
    PUSH EAX                            ; 0056209a
    CALL FUN_004b7270                   ; 0056209b
        ;   XREF to: 004b7270 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7270()
    ADD ESP,0x14                        ; 005620a0
    PUSH 0x5f19f1                       ; 005620a3 | = "shotgun-cock.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005620a8
    PUSH EBX                            ; 005620ae
    CALL dword ptr [EAX + 0x2c]         ; 005620af
    ADD ESP,0x8                         ; 005620b2
    POP ESI                             ; 005620b5
    POP EDI                             ; 005620b6
    ADD ESP,0x74                        ; 005620b7
    POP EBP                             ; 005620ba
    POP EBX                             ; 005620bb
    RET                                 ; 005620bc

