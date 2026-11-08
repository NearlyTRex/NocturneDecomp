; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004a90e0 at 004a910f
;
; Called Functions:
;   FUN_004a90b0
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9130
        ;   Label: FUN_004a9130
    PUSH ESI                            ; 004a9131
    PUSH EDI                            ; 004a9132
    PUSH EBP                            ; 004a9133
    SUB ESP,0x1000                      ; 004a9134
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004a913a
    PUSH EDX                            ; 004a9141
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004a9142
    PUSH ECX                            ; 004a9149
    LEA EAX,[ESP + 0x8]                 ; 004a914a
    PUSH EAX                            ; 004a914e
    CALL FUN_005b7768                   ; 004a914f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 004a9154
    MOV EAX,ESP                         ; 004a9157
    PUSH EAX                            ; 004a9159
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004a915a
    PUSH EBX                            ; 004a9161
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004a9162
    PUSH ESI                            ; 004a9169
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004a916a
    PUSH EDI                            ; 004a9171
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004a9172
    PUSH EBP                            ; 004a9179
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004a917a
    PUSH EAX                            ; 004a9181
    CALL FUN_004a90b0                   ; 004a9182
        ;   XREF to: 004a90b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a90b0()
    ADD ESP,0x18                        ; 004a9187
    ADD ESP,0x1000                      ; 004a918a
    POP EBP                             ; 004a9190
    POP EDI                             ; 004a9191
    POP ESI                             ; 004a9192
    POP EBX                             ; 004a9193
    RET                                 ; 004a9194

