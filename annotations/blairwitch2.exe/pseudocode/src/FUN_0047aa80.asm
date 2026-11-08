; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047aa80(int param_1,undefined1 param_2,int param_3)
;
;
; XREF[3]:
;   FUN_0047ac60 at 0047aca3
;   FUN_0047b1f0 at 0047b5bf
;   FUN_0047d270 at 0047d6be
;
; Called Functions:
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047aa80
        ;   Label: FUN_0047aa80
    PUSH EDI                            ; 0047aa81
    PUSH EBP                            ; 0047aa82
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047aa83
    MOV EAX,dword ptr [EBX + 0x12c]     ; 0047aa87
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047aa8d
    DEC EAX                             ; 0047aa93
    CMP EAX,EDX                         ; 0047aa94
    JLE 0x0047aae3                      ; 0047aa96
        ;   XREF to: 0047aae3 (CONDITIONAL_JUMP)  ; LAB_0047aae3
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047aa98
    CMP EAX,ECX                         ; 0047aa9e
    JLE 0x0047aaad                      ; 0047aaa0
        ;   XREF to: 0047aaad (CONDITIONAL_JUMP)  ; LAB_0047aaad
    PUSH ESI                            ; 0047aaa2
    LEA ESI,[ECX + 0x1]                 ; 0047aaa3
    MOV dword ptr [EBX + 0x130],ESI     ; 0047aaa6
    POP ESI                             ; 0047aaac
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047aaad
        ;   Label: LAB_0047aaad
    MOV EDI,dword ptr [EBX + 0x134]     ; 0047aab3
    SUB EAX,EDI                         ; 0047aab9
    PUSH EAX                            ; 0047aabb
    LEA EAX,[EDI + EBX*0x1]             ; 0047aabc
    PUSH EAX                            ; 0047aabf
    LEA EAX,[EDI + 0x1]                 ; 0047aac0
    ADD EAX,EBX                         ; 0047aac3
    PUSH EAX                            ; 0047aac5
    CALL FUN_005ba1f0                   ; 0047aac6
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 0047aacb
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047aace
    MOV DL,byte ptr [ESP + 0x14]        ; 0047aad4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047aad8
    MOV byte ptr [EBX + EAX*0x1],DL     ; 0047aadc
    TEST EBP,EBP                        ; 0047aadf
    JNZ 0x0047aaf0                      ; 0047aae1
        ;   XREF to: 0047aaf0 (CONDITIONAL_JUMP)  ; LAB_0047aaf0
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047aae3
        ;   Label: LAB_0047aae3
    MOV byte ptr [EBX],0x0              ; 0047aae9
    POP EBP                             ; 0047aaec
    POP EDI                             ; 0047aaed
    POP EBX                             ; 0047aaee
    RET                                 ; 0047aaef
    INC dword ptr [EBX + 0x134]         ; 0047aaf0
        ;   Label: LAB_0047aaf0
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047aaf6
    MOV byte ptr [EBX],0x0              ; 0047aafc
    POP EBP                             ; 0047aaff
    POP EDI                             ; 0047ab00
    POP EBX                             ; 0047ab01
    RET                                 ; 0047ab02

