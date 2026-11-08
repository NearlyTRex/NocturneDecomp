; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce0f0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
;
; XREF[1]:
;   FUN_004cf0c0 at 004cf0ff
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_d_005c4711
;   TerminatedCString s_d_d_005c471e
;   TerminatedCString s_d_f_d_d_d_005c4725
;
; Called Functions:
;   FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce0f0
        ;   Label: FUN_004ce0f0
    PUSH ESI                            ; 004ce0f1
    PUSH EDI                            ; 004ce0f2
    PUSH EBP                            ; 004ce0f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ce0f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ce0f8
    MOV EDX,dword ptr [EBX + 0x14]      ; 004ce0fc
    PUSH EDX                            ; 004ce0ff
    SUB ESP,0x8                         ; 004ce100
    FLD float ptr [EBX + 0xc]           ; 004ce103
    FSTP double ptr [ESP]               ; 004ce106
    SUB ESP,0x8                         ; 004ce109
    FLD float ptr [EBX + 0x8]           ; 004ce10c
    FSTP double ptr [ESP]               ; 004ce10f
    SUB ESP,0x8                         ; 004ce112
    FLD float ptr [EBX + 0x4]           ; 004ce115
    FSTP double ptr [ESP]               ; 004ce118
    PUSH 0x5c4711                       ; 004ce11b | = "%f,%f,%f,%d\n"
    PUSH ESI                            ; 004ce120
    CALL FUN_005a3140                   ; 004ce121
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x24                        ; 004ce126
    MOV ECX,dword ptr [EBX + 0x10]      ; 004ce129
    PUSH ECX                            ; 004ce12c
    MOV EDI,dword ptr [EBX]             ; 004ce12d
    PUSH EDI                            ; 004ce12f
    PUSH 0x5c471e                       ; 004ce130 | = "%d,%d\n"
    PUSH ESI                            ; 004ce135
    CALL FUN_005a3140                   ; 004ce136
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 004ce13b
    MOV EBP,dword ptr [EBX + 0x28]      ; 004ce13e
    PUSH EBP                            ; 004ce141
    MOV EAX,dword ptr [EBX + 0x24]      ; 004ce142
    PUSH EAX                            ; 004ce145
    MOV EDX,dword ptr [EBX + 0x20]      ; 004ce146
    PUSH EDX                            ; 004ce149
    SUB ESP,0x8                         ; 004ce14a
    FLD float ptr [EBX + 0x1c]          ; 004ce14d
    FSTP double ptr [ESP]               ; 004ce150
    MOV ECX,dword ptr [EBX + 0x18]      ; 004ce153
    PUSH ECX                            ; 004ce156
    PUSH 0x5c4725                       ; 004ce157 | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004ce15c
    CALL FUN_005a3140                   ; 004ce15d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x20                        ; 004ce162
    POP EBP                             ; 004ce165
    POP EDI                             ; 004ce166
    POP ESI                             ; 004ce167
    POP EBX                             ; 004ce168
    RET                                 ; 004ce169

