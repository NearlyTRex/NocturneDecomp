; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bba0(int param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   FUN_0047bc10 at 0047bc2c
;   FUN_0047bc60 at 0047bc86
;   FUN_0047bd50 at 0047bf73
;
; Called Functions:
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bba0
        ;   Label: FUN_0047bba0
    PUSH ESI                            ; 0047bba1
    PUSH EDI                            ; 0047bba2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047bba3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047bba7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047bbab
    TEST EDI,EDI                        ; 0047bbaf
    JL 0x0047bc09                       ; 0047bbb1
        ;   XREF to: 0047bc09 (CONDITIONAL_JUMP)  ; LAB_0047bc09
    MOV EDX,dword ptr [EBX + 0x130]     ; 0047bbb3
        ;   Label: LAB_0047bbb3
    CMP ESI,EDX                         ; 0047bbb9
    JLE 0x0047bbbf                      ; 0047bbbb
        ;   XREF to: 0047bbbf (CONDITIONAL_JUMP)  ; LAB_0047bbbf
    MOV ESI,EDX                         ; 0047bbbd
    CMP EDI,ESI                         ; 0047bbbf
        ;   Label: LAB_0047bbbf
    JGE 0x0047bc05                      ; 0047bbc1
        ;   XREF to: 0047bc05 (CONDITIONAL_JUMP)  ; LAB_0047bc05
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047bbc3
    SUB EAX,ESI                         ; 0047bbc9
    PUSH EAX                            ; 0047bbcb
    LEA EAX,[EBX + ESI*0x1]             ; 0047bbcc
    PUSH EAX                            ; 0047bbcf
    LEA EAX,[EBX + EDI*0x1]             ; 0047bbd0
    PUSH EAX                            ; 0047bbd3
    SUB ESI,EDI                         ; 0047bbd4
    CALL FUN_005a54c0                   ; 0047bbd6
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047bbdb
    ADD ESP,0xc                         ; 0047bbe1
    SUB ECX,ESI                         ; 0047bbe4
    MOV ESI,dword ptr [EBX + 0x134]     ; 0047bbe6
    MOV dword ptr [EBX + 0x130],ECX     ; 0047bbec
    CMP ESI,ECX                         ; 0047bbf2
    JLE 0x0047bbfc                      ; 0047bbf4
        ;   XREF to: 0047bbfc (CONDITIONAL_JUMP)  ; LAB_0047bbfc
    MOV dword ptr [EBX + 0x134],ECX     ; 0047bbf6
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047bbfc
        ;   Label: LAB_0047bbfc
    MOV byte ptr [EBX],0x0              ; 0047bc02
    POP EDI                             ; 0047bc05
        ;   Label: LAB_0047bc05
    POP ESI                             ; 0047bc06
    POP EBX                             ; 0047bc07
    RET                                 ; 0047bc08
    XOR EDI,EDI                         ; 0047bc09
        ;   Label: LAB_0047bc09
    JMP 0x0047bbb3                      ; 0047bc0b
        ;   XREF to: 0047bbb3 (UNCONDITIONAL_JUMP)  ; LAB_0047bbb3

