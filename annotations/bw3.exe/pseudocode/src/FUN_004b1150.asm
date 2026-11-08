; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_004b10b0
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1150
        ;   Label: FUN_004b1150
    PUSH ESI                            ; 004b1151
    PUSH EDI                            ; 004b1152
    PUSH EBP                            ; 004b1153
    SUB ESP,0x1000                      ; 004b1154
    MOV EDX,dword ptr [ESP + 0x1028]    ; 004b115a
    PUSH EDX                            ; 004b1161
    MOV ECX,dword ptr [ESP + 0x1028]    ; 004b1162
    PUSH ECX                            ; 004b1169
    LEA EAX,[ESP + 0x8]                 ; 004b116a
    PUSH EAX                            ; 004b116e
    CALL FUN_005a2898                   ; 004b116f
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 004b1174
    MOV EAX,ESP                         ; 004b1177
    PUSH EAX                            ; 004b1179
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004b117a
    PUSH EBX                            ; 004b1181
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004b1182
    PUSH ESI                            ; 004b1189
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004b118a
    PUSH EDI                            ; 004b1191
    MOV EBP,dword ptr [ESP + 0x1024]    ; 004b1192
    PUSH EBP                            ; 004b1199
    CALL FUN_004b10b0                   ; 004b119a
        ;   XREF to: 004b10b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b10b0()
    ADD ESP,0x14                        ; 004b119f
    ADD ESP,0x1000                      ; 004b11a2
    POP EBP                             ; 004b11a8
    POP EDI                             ; 004b11a9
    POP ESI                             ; 004b11aa
    POP EBX                             ; 004b11ab
    RET                                 ; 004b11ac

