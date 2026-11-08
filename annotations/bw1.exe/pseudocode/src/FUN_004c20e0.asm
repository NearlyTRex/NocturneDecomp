; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c20e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004c2090 at 004c20bf
;
; Called Functions:
;   FUN_004c2060
;   FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c20e0
        ;   Label: FUN_004c20e0
    PUSH ESI                            ; 004c20e1
    PUSH EDI                            ; 004c20e2
    PUSH EBP                            ; 004c20e3
    SUB ESP,0x1000                      ; 004c20e4
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004c20ea
    PUSH EDX                            ; 004c20f1
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004c20f2
    PUSH ECX                            ; 004c20f9
    LEA EAX,[ESP + 0x8]                 ; 004c20fa
    PUSH EAX                            ; 004c20fe
    CALL FUN_005bfb18                   ; 004c20ff
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb18()
    ADD ESP,0xc                         ; 004c2104
    MOV EAX,ESP                         ; 004c2107
    PUSH EAX                            ; 004c2109
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004c210a
    PUSH EBX                            ; 004c2111
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004c2112
    PUSH ESI                            ; 004c2119
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004c211a
    PUSH EDI                            ; 004c2121
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004c2122
    PUSH EBP                            ; 004c2129
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004c212a
    PUSH EAX                            ; 004c2131
    CALL FUN_004c2060                   ; 004c2132
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; undefined FUN_004c2060()
    ADD ESP,0x18                        ; 004c2137
    ADD ESP,0x1000                      ; 004c213a
    POP EBP                             ; 004c2140
    POP EDI                             ; 004c2141
    POP ESI                             ; 004c2142
    POP EBX                             ; 004c2143
    RET                                 ; 004c2144

