; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_locale_c___get_lc_monetary_FUN_1000ddc0(lconv *lc)
;
; Parameters:
; lconv *          Stack[0x4]:4   lc
;
; Referenced Globals:
;   undefined2 DAT_10017954
;
; Called Functions:
;   crt_locale.c___getlocaleinfo_FUN_1000f6e0
;   crt_locale.c__fix_grouping_FUN_1000df10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000ddc0
        ;   Label: crt_locale.c___get_lc_monetary_FUN_1000ddc0
    PUSH ESI                            ; 1000ddc1
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000ddc2
    PUSH EDI                            ; 1000ddc6
    PUSH EBP                            ; 1000ddc7
    XOR EDI,EDI                         ; 1000ddc8
    MOV DI,word ptr [0x10017954]        ; 1000ddca | DAT_10017954
    TEST ESI,ESI                        ; 1000ddd1
    JNZ 0x1000dddf                      ; 1000ddd3
        ;   XREF to: 1000dddf (CONDITIONAL_JUMP)  ; LAB_1000dddf
    MOV EAX,0xffffffff                  ; 1000ddd5
    POP EBP                             ; 1000ddda
    POP EDI                             ; 1000dddb
    POP ESI                             ; 1000dddc
    POP EBX                             ; 1000dddd
    RET                                 ; 1000ddde
    LEA EAX,[ESI + 0xc]                 ; 1000dddf
        ;   Label: LAB_1000dddf
    PUSH EAX                            ; 1000dde2
    PUSH 0x15                           ; 1000dde3
    PUSH EDI                            ; 1000dde5
    PUSH 0x1                            ; 1000dde6
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000dde8
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000dded
    MOV EBX,EAX                         ; 1000ddf0
    LEA EAX,[ESI + 0x10]                ; 1000ddf2
    PUSH EAX                            ; 1000ddf5
    PUSH 0x14                           ; 1000ddf6
    PUSH EDI                            ; 1000ddf8
    PUSH 0x1                            ; 1000ddf9
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000ddfb
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de00
    OR EBX,EAX                          ; 1000de03
    LEA EAX,[ESI + 0x14]                ; 1000de05
    PUSH EAX                            ; 1000de08
    PUSH 0x16                           ; 1000de09
    PUSH EDI                            ; 1000de0b
    PUSH 0x1                            ; 1000de0c
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de0e
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de13
    OR EBX,EAX                          ; 1000de16
    LEA EAX,[ESI + 0x18]                ; 1000de18
    PUSH EAX                            ; 1000de1b
    PUSH 0x17                           ; 1000de1c
    PUSH EDI                            ; 1000de1e
    LEA EBP,[ESI + 0x1c]                ; 1000de1f
    PUSH 0x1                            ; 1000de22
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de24
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de29
    OR EBX,EAX                          ; 1000de2c
    PUSH EBP                            ; 1000de2e
    PUSH 0x18                           ; 1000de2f
    PUSH EDI                            ; 1000de31
    PUSH 0x1                            ; 1000de32
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de34
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de39
    OR EBX,EAX                          ; 1000de3c
    MOV EAX,dword ptr [EBP]             ; 1000de3e
    PUSH EAX                            ; 1000de41
    CALL crt_locale.c__fix_grouping_FUN_1000df10 ; 1000de42
        ;   XREF to: 1000df10 (UNCONDITIONAL_CALL)  ; void crt_locale.c__fix_grouping_FUN_1000df10(char * grouping)
    ADD ESP,0x4                         ; 1000de47
    LEA EAX,[ESI + 0x20]                ; 1000de4a
    PUSH EAX                            ; 1000de4d
    PUSH 0x50                           ; 1000de4e
    PUSH EDI                            ; 1000de50
    PUSH 0x1                            ; 1000de51
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de53
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de58
    OR EBX,EAX                          ; 1000de5b
    LEA EAX,[ESI + 0x24]                ; 1000de5d
    PUSH EAX                            ; 1000de60
    PUSH 0x51                           ; 1000de61
    PUSH EDI                            ; 1000de63
    PUSH 0x1                            ; 1000de64
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de66
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de6b
    OR EBX,EAX                          ; 1000de6e
    LEA EAX,[ESI + 0x28]                ; 1000de70
    PUSH EAX                            ; 1000de73
    PUSH 0x1a                           ; 1000de74
    PUSH EDI                            ; 1000de76
    PUSH 0x0                            ; 1000de77
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de79
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de7e
    OR EBX,EAX                          ; 1000de81
    LEA EAX,[ESI + 0x29]                ; 1000de83
    PUSH EAX                            ; 1000de86
    PUSH 0x19                           ; 1000de87
    PUSH EDI                            ; 1000de89
    PUSH 0x0                            ; 1000de8a
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de8c
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000de91
    OR EBX,EAX                          ; 1000de94
    LEA EAX,[ESI + 0x2a]                ; 1000de96
    PUSH EAX                            ; 1000de99
    PUSH 0x54                           ; 1000de9a
    PUSH EDI                            ; 1000de9c
    PUSH 0x0                            ; 1000de9d
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000de9f
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000dea4
    OR EBX,EAX                          ; 1000dea7
    LEA EAX,[ESI + 0x2b]                ; 1000dea9
    PUSH EAX                            ; 1000deac
    PUSH 0x55                           ; 1000dead
    PUSH EDI                            ; 1000deaf
    PUSH 0x0                            ; 1000deb0
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000deb2
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000deb7
    OR EBX,EAX                          ; 1000deba
    LEA EAX,[ESI + 0x2c]                ; 1000debc
    PUSH EAX                            ; 1000debf
    PUSH 0x56                           ; 1000dec0
    PUSH EDI                            ; 1000dec2
    PUSH 0x0                            ; 1000dec3
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000dec5
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000deca
    OR EBX,EAX                          ; 1000decd
    LEA EAX,[ESI + 0x2d]                ; 1000decf
    PUSH EAX                            ; 1000ded2
    PUSH 0x57                           ; 1000ded3
    PUSH EDI                            ; 1000ded5
    PUSH 0x0                            ; 1000ded6
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000ded8
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000dedd
    OR EBX,EAX                          ; 1000dee0
    LEA EAX,[ESI + 0x2e]                ; 1000dee2
    PUSH EAX                            ; 1000dee5
    PUSH 0x52                           ; 1000dee6
    PUSH EDI                            ; 1000dee8
    ADD ESI,0x2f                        ; 1000dee9
    PUSH 0x0                            ; 1000deec
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000deee
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000def3
    OR EBX,EAX                          ; 1000def6
    PUSH ESI                            ; 1000def8
    PUSH 0x53                           ; 1000def9
    PUSH EDI                            ; 1000defb
    PUSH 0x0                            ; 1000defc
    CALL crt_locale.c___getlocaleinfo_FUN_1000f6e0 ; 1000defe
        ;   XREF to: 1000f6e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___getlocaleinfo_FUN_1000f6e0(int type, LCID lcid, LCTYPE lc_type, void * out)
    ADD ESP,0x10                        ; 1000df03
    OR EBX,EAX                          ; 1000df06
    MOV EAX,EBX                         ; 1000df08
    POP EBP                             ; 1000df0a
    POP EDI                             ; 1000df0b
    POP ESI                             ; 1000df0c
    POP EBX                             ; 1000df0d
    RET                                 ; 1000df0e

