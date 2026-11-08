; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c2150(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00480480 at 00480599
;
; Called Functions:
;   FUN_004c2060
;   FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2150
        ;   Label: FUN_004c2150
    PUSH ESI                            ; 004c2151
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2152
    PUSH EAX                            ; 004c2156
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c2157
    PUSH EDX                            ; 004c215b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c215c
    PUSH ECX                            ; 004c2160
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c2161
    PUSH EBX                            ; 004c2165
    PUSH EAX                            ; 004c2166
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c2167
    PUSH ESI                            ; 004c216b
    CALL FUN_004c3ea0                   ; 004c216c
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD ESP,0x8                         ; 004c2171
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c2174
    SUB EDX,EAX                         ; 004c2178
    LEA EAX,[EDX + 0x1]                 ; 004c217a
    PUSH EAX                            ; 004c217d
    PUSH ESI                            ; 004c217e
    CALL FUN_004c2060                   ; 004c217f
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; undefined FUN_004c2060()
    ADD ESP,0x18                        ; 004c2184
    POP ESI                             ; 004c2187
    POP EBX                             ; 004c2188
    RET                                 ; 004c2189

