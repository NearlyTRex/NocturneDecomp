; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bb10(int param_1,undefined1 param_2,int param_3)
;
;
; XREF[3]:
;   FUN_0047bcf0 at 0047bd33
;   FUN_0047c2c0 at 0047c6a2
;   FUN_0047e470 at 0047e8cb
;
; Called Functions:
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bb10
        ;   Label: FUN_0047bb10
    PUSH EDI                            ; 0047bb11
    PUSH EBP                            ; 0047bb12
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047bb13
    MOV EAX,dword ptr [EBX + 0x12c]     ; 0047bb17
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047bb1d
    DEC EAX                             ; 0047bb23
    CMP EAX,EDX                         ; 0047bb24
    JLE 0x0047bb73                      ; 0047bb26
        ;   XREF to: 0047bb73 (CONDITIONAL_JUMP)  ; LAB_0047bb73
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047bb28
    CMP EAX,ECX                         ; 0047bb2e
    JLE 0x0047bb3d                      ; 0047bb30
        ;   XREF to: 0047bb3d (CONDITIONAL_JUMP)  ; LAB_0047bb3d
    PUSH ESI                            ; 0047bb32
    LEA ESI,[ECX + 0x1]                 ; 0047bb33
    MOV dword ptr [EBX + 0x130],ESI     ; 0047bb36
    POP ESI                             ; 0047bb3c
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047bb3d
        ;   Label: LAB_0047bb3d
    MOV EDI,dword ptr [EBX + 0x134]     ; 0047bb43
    SUB EAX,EDI                         ; 0047bb49
    PUSH EAX                            ; 0047bb4b
    LEA EAX,[EDI + EBX*0x1]             ; 0047bb4c
    PUSH EAX                            ; 0047bb4f
    LEA EAX,[EDI + 0x1]                 ; 0047bb50
    ADD EAX,EBX                         ; 0047bb53
    PUSH EAX                            ; 0047bb55
    CALL FUN_005a54c0                   ; 0047bb56
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 0047bb5b
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047bb5e
    MOV DL,byte ptr [ESP + 0x14]        ; 0047bb64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047bb68
    MOV byte ptr [EBX + EAX*0x1],DL     ; 0047bb6c
    TEST EBP,EBP                        ; 0047bb6f
    JNZ 0x0047bb80                      ; 0047bb71
        ;   XREF to: 0047bb80 (CONDITIONAL_JUMP)  ; LAB_0047bb80
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047bb73
        ;   Label: LAB_0047bb73
    MOV byte ptr [EBX],0x0              ; 0047bb79
    POP EBP                             ; 0047bb7c
    POP EDI                             ; 0047bb7d
    POP EBX                             ; 0047bb7e
    RET                                 ; 0047bb7f
    INC dword ptr [EBX + 0x134]         ; 0047bb80
        ;   Label: LAB_0047bb80
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047bb86
    MOV byte ptr [EBX],0x0              ; 0047bb8c
    POP EBP                             ; 0047bb8f
    POP EDI                             ; 0047bb90
    POP EBX                             ; 0047bb91
    RET                                 ; 0047bb92

