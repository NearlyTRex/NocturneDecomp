; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bcd10(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005b8010 at 005b8028
;   crt_unknown.c_FUN_005b8e10 at 005b8e27
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_unknown.c_FUN_005bb050
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005be1d0
;   crt_unknown.c_FUN_005bea80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bcd10
        ;   Label: crt_unknown.c_FUN_005bcd10
    PUSH ESI                            ; 005bcd11
    PUSH EDI                            ; 005bcd12
    PUSH EBP                            ; 005bcd13
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bcd14
    MOV EDX,dword ptr [EBX + 0x10]      ; 005bcd18
    PUSH EDX                            ; 005bcd1b
    CALL dword ptr [0x0061f2a8]         ; 005bcd1c | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005bcd22
    MOV ECX,dword ptr [EAX + 0xc]       ; 005bcd25
    ADD ESP,0x4                         ; 005bcd28
    CMP ECX,0x1                         ; 005bcd2b
    JZ 0x005bcd4f                       ; 005bcd2e
        ;   XREF to: 005bcd4f (CONDITIONAL_JUMP)  ; LAB_005bcd4f
    TEST ECX,ECX                        ; 005bcd30
    JZ 0x005bcd48                       ; 005bcd32
        ;   XREF to: 005bcd48 (CONDITIONAL_JUMP)  ; LAB_005bcd48
    MOV EDI,dword ptr [EBX + 0x10]      ; 005bcd34
    PUSH EDI                            ; 005bcd37
    CALL dword ptr [0x0061f2ac]         ; 005bcd38 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bcd3e
    XOR EAX,EAX                         ; 005bcd41
    POP EBP                             ; 005bcd43
    POP EDI                             ; 005bcd44
    POP ESI                             ; 005bcd45
    POP EBX                             ; 005bcd46
    RET                                 ; 005bcd47
    MOV dword ptr [EAX + 0xc],0x1       ; 005bcd48
        ;   Label: LAB_005bcd48
    MOV AH,byte ptr [EBX + 0xc]         ; 005bcd4f
        ;   Label: LAB_005bcd4f
    AND AH,0xcf                         ; 005bcd52
    MOV EBP,dword ptr [EBX + 0xc]       ; 005bcd55
    MOV byte ptr [EBX + 0xc],AH         ; 005bcd58
    MOV EAX,dword ptr [EBX + 0x8]       ; 005bcd5b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bcd5e
    AND EBP,0x30                        ; 005bcd61
    TEST EDX,EDX                        ; 005bcd64
    JNZ 0x005bcd71                      ; 005bcd66
        ;   XREF to: 005bcd71 (CONDITIONAL_JUMP)  ; LAB_005bcd71
    PUSH EBX                            ; 005bcd68
    CALL crt_unknown.c_FUN_005be1d0     ; 005bcd69
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be1d0()
    ADD ESP,0x4                         ; 005bcd6e
    MOV DL,byte ptr [EBX + 0xd]         ; 005bcd71
        ;   Label: LAB_005bcd71
    XOR EDI,EDI                         ; 005bcd74
    TEST DL,0x4                         ; 005bcd76
    JZ 0x005bcd90                       ; 005bcd79
        ;   XREF to: 005bcd90 (CONDITIONAL_JUMP)  ; LAB_005bcd90
    MOV DH,DL                           ; 005bcd7b
    AND DH,0xfa                         ; 005bcd7d
    MOV CL,DH                           ; 005bcd80
    MOV byte ptr [EBX + 0xd],DH         ; 005bcd82
    OR CL,0x1                           ; 005bcd85
    MOV EDI,0x1                         ; 005bcd88
    MOV byte ptr [EBX + 0xd],CL         ; 005bcd8d
    PUSH 0x5bccf0                       ; 005bcd90
        ;   Label: LAB_005bcd90
    MOV ECX,dword ptr [ESP + 0x20]      ; 005bcd95
    PUSH ECX                            ; 005bcd99
    MOV ESI,dword ptr [ESP + 0x20]      ; 005bcd9a
    PUSH ESI                            ; 005bcd9e
    PUSH EBX                            ; 005bcd9f
    CALL crt_unknown.c_FUN_005bb050     ; 005bcda0
        ;   XREF to: 005bb050 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb050()
    ADD ESP,0x10                        ; 005bcda5
    MOV ESI,EAX                         ; 005bcda8
    TEST EDI,EDI                        ; 005bcdaa
    JZ 0x005bcdc7                       ; 005bcdac
        ;   XREF to: 005bcdc7 (CONDITIONAL_JUMP)  ; LAB_005bcdc7
    MOV CH,byte ptr [EBX + 0xd]         ; 005bcdae
    AND CH,0xfa                         ; 005bcdb1
    MOV AL,CH                           ; 005bcdb4
    MOV byte ptr [EBX + 0xd],CH         ; 005bcdb6
    OR AL,0x4                           ; 005bcdb9
    PUSH EBX                            ; 005bcdbb
    MOV byte ptr [EBX + 0xd],AL         ; 005bcdbc
    CALL crt_unknown.c_FUN_005bea80     ; 005bcdbf
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005bcdc4
    TEST byte ptr [EBX + 0xc],0x20      ; 005bcdc7
        ;   Label: LAB_005bcdc7
    JZ 0x005bcdd2                       ; 005bcdcb
        ;   XREF to: 005bcdd2 (CONDITIONAL_JUMP)  ; LAB_005bcdd2
    MOV ESI,0xffffffff                  ; 005bcdcd
    MOV EDI,dword ptr [EBX + 0xc]       ; 005bcdd2
        ;   Label: LAB_005bcdd2
    OR EDI,EBP                          ; 005bcdd5
    MOV EBP,dword ptr [EBX + 0x10]      ; 005bcdd7
    PUSH EBP                            ; 005bcdda
    MOV dword ptr [EBX + 0xc],EDI       ; 005bcddb
    CALL dword ptr [0x0061f2ac]         ; 005bcdde | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bcde4
    MOV EAX,ESI                         ; 005bcde7
    POP EBP                             ; 005bcde9
    POP EDI                             ; 005bcdea
    POP ESI                             ; 005bcdeb
    POP EBX                             ; 005bcdec
    RET                                 ; 005bcded

