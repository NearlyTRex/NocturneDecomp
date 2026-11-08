; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ee70(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   FUN_0047ed30 at 0047edb7
;
; Called Functions:
;   FUN_0047e870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ee70
        ;   Label: FUN_0047ee70
    PUSH ESI                            ; 0047ee71
    PUSH EDI                            ; 0047ee72
    PUSH EBP                            ; 0047ee73
    SUB ESP,0x10                        ; 0047ee74
    MOV EDI,dword ptr [ESP + 0x28]      ; 0047ee77
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047ee7b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0047ee7f
    MOV ESI,dword ptr [ESP + 0x34]      ; 0047ee83
    MOV EDX,0x1                         ; 0047ee87
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047ee8c
    MOV dword ptr [ESP],EDX             ; 0047ee90
    MOV ECX,dword ptr [EAX + 0x8]       ; 0047ee93
    MOV EDX,dword ptr [EAX + 0xc]       ; 0047ee96
    SUB EDI,ECX                         ; 0047ee99
    SUB EBX,EDX                         ; 0047ee9b
    SUB ESI,EDX                         ; 0047ee9d
    SUB EBP,ECX                         ; 0047ee9f
    CMP EBX,ESI                         ; 0047eea1
    JLE 0x0047eeb1                      ; 0047eea3
        ;   XREF to: 0047eeb1 (CONDITIONAL_JUMP)  ; LAB_0047eeb1
    MOV EAX,EDI                         ; 0047eea5
    MOV EDI,EBP                         ; 0047eea7
    MOV EBP,EAX                         ; 0047eea9
    MOV EAX,EBX                         ; 0047eeab
    MOV EBX,ESI                         ; 0047eead
    MOV ESI,EAX                         ; 0047eeaf
    SUB ESI,EBX                         ; 0047eeb1
        ;   Label: LAB_0047eeb1
    SUB EBP,EDI                         ; 0047eeb3
    MOV dword ptr [ESP + 0xc],ESI       ; 0047eeb5
    TEST EBP,EBP                        ; 0047eeb9
    JL 0x0047ef0b                       ; 0047eebb
        ;   XREF to: 0047ef0b (CONDITIONAL_JUMP)  ; LAB_0047ef0b
    MOV ESI,EDI                         ; 0047eebd
        ;   Label: LAB_0047eebd
    MOV EDI,dword ptr [ESP + 0xc]       ; 0047eebf
    CMP EBP,EDI                         ; 0047eec3
    JLE 0x0047ef17                      ; 0047eec5
        ;   XREF to: 0047ef17 (CONDITIONAL_JUMP)  ; LAB_0047ef17
    XOR EAX,EAX                         ; 0047eec7
    ADD EDI,EDI                         ; 0047eec9
    MOV dword ptr [ESP + 0x4],EAX       ; 0047eecb
    SUB EDI,EBP                         ; 0047eecf
    TEST EBP,EBP                        ; 0047eed1
    JL 0x0047ef03                       ; 0047eed3
        ;   XREF to: 0047ef03 (CONDITIONAL_JUMP)  ; LAB_0047ef03
    PUSH EBX                            ; 0047eed5
        ;   Label: LAB_0047eed5
    PUSH ESI                            ; 0047eed6
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0047eed7
    PUSH EDX                            ; 0047eedb
    CALL FUN_0047e870                   ; 0047eedc
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e870()
    ADD ESP,0xc                         ; 0047eee1
    TEST EDI,EDI                        ; 0047eee4
    JLE 0x0047eeeb                      ; 0047eee6
        ;   XREF to: 0047eeeb (CONDITIONAL_JUMP)  ; LAB_0047eeeb
    INC EBX                             ; 0047eee8
    SUB EDI,EBP                         ; 0047eee9
    MOV EAX,dword ptr [ESP]             ; 0047eeeb
        ;   Label: LAB_0047eeeb
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047eeee
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047eef2
    INC ECX                             ; 0047eef6
    ADD ESI,EAX                         ; 0047eef7
    ADD EDI,EDX                         ; 0047eef9
    MOV dword ptr [ESP + 0x4],ECX       ; 0047eefb
    CMP EBP,ECX                         ; 0047eeff
    JGE 0x0047eed5                      ; 0047ef01
        ;   XREF to: 0047eed5 (CONDITIONAL_JUMP)  ; LAB_0047eed5
    ADD ESP,0x10                        ; 0047ef03
        ;   Label: LAB_0047ef03
    POP EBP                             ; 0047ef06
    POP EDI                             ; 0047ef07
    POP ESI                             ; 0047ef08
    POP EBX                             ; 0047ef09
    RET                                 ; 0047ef0a
    MOV ECX,0xffffffff                  ; 0047ef0b
        ;   Label: LAB_0047ef0b
    NEG EBP                             ; 0047ef10
    MOV dword ptr [ESP],ECX             ; 0047ef12
    JMP 0x0047eebd                      ; 0047ef15
        ;   XREF to: 0047eebd (UNCONDITIONAL_JUMP)  ; LAB_0047eebd
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047ef17
        ;   Label: LAB_0047ef17
    XOR EDX,EDX                         ; 0047ef1b
    LEA EDI,[EBP + EBP*0x1]             ; 0047ef1d
    MOV dword ptr [ESP + 0x8],EDX       ; 0047ef21
    SUB EDI,EAX                         ; 0047ef25
    TEST EAX,EAX                        ; 0047ef27
    JL 0x0047ef03                       ; 0047ef29
        ;   XREF to: 0047ef03 (CONDITIONAL_JUMP)  ; LAB_0047ef03
    PUSH EBX                            ; 0047ef2b
        ;   Label: LAB_0047ef2b
    PUSH ESI                            ; 0047ef2c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047ef2d
    PUSH EAX                            ; 0047ef31
    CALL FUN_0047e870                   ; 0047ef32
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e870()
    ADD ESP,0xc                         ; 0047ef37
    TEST EDI,EDI                        ; 0047ef3a
    JLE 0x0047ef49                      ; 0047ef3c
        ;   XREF to: 0047ef49 (CONDITIONAL_JUMP)  ; LAB_0047ef49
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ef3e
    MOV EDX,dword ptr [ESP]             ; 0047ef42
    SUB EDI,ECX                         ; 0047ef45
    ADD ESI,EDX                         ; 0047ef47
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047ef49
        ;   Label: LAB_0047ef49
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ef4d
    INC EBX                             ; 0047ef51
    INC EDX                             ; 0047ef52
    ADD EDI,EBP                         ; 0047ef53
    MOV dword ptr [ESP + 0x8],EDX       ; 0047ef55
    CMP EDX,ECX                         ; 0047ef59
    JG 0x0047ef03                       ; 0047ef5b
        ;   XREF to: 0047ef03 (CONDITIONAL_JUMP)  ; LAB_0047ef03
    JMP 0x0047ef2b                      ; 0047ef5d
        ;   XREF to: 0047ef2b (UNCONDITIONAL_JUMP)  ; LAB_0047ef2b

