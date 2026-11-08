; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499fe0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0049a3a0 at 0049a4b5
;
; Referenced Globals:
;   undefined4 DAT_005d5692
;   undefined4 DAT_005d569a
;   undefined4 DAT_01c3f5a8
;   undefined4 DAT_01c3f5ac
;   undefined4 DAT_01c3f674
;   undefined4 DAT_01c3f678
;
; Called Functions:
;   FUN_00408de0
;   FUN_00426e70
;   FUN_004a08d0
;   FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499fe0
        ;   Label: FUN_00499fe0
    PUSH ESI                            ; 00499fe1
    PUSH EDI                            ; 00499fe2
    PUSH EBP                            ; 00499fe3
    MOV EBP,ESP                         ; 00499fe4
    SUB ESP,0x40                        ; 00499fe6
    AND ESP,0xfffffff8                  ; 00499fe9
    XOR EDX,EDX                         ; 00499fec
    MOV ECX,dword ptr [0x01c3f5a8]      ; 00499fee | DAT_01c3f5a8
    MOV dword ptr [ESP + 0x34],EDX      ; 00499ff4
    TEST ECX,ECX                        ; 00499ff8
    JLE 0x0049a04e                      ; 00499ffa
        ;   XREF to: 0049a04e (CONDITIONAL_JUMP)  ; LAB_0049a04e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499ffc
    ADD EAX,0x4                         ; 00499fff
    MOV dword ptr [ESP + 0x30],EDX      ; 0049a002
    MOV dword ptr [ESP + 0x38],EAX      ; 0049a006
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049a00a
        ;   Label: LAB_0049a00a
    MOV EBX,dword ptr [ESP + 0x30]      ; 0049a00d
    MOV ECX,dword ptr [EAX + 0x20]      ; 0049a011
    MOV EBX,dword ptr [EBX + 0x1c3f5ac] ; 0049a014 | DAT_01c3f5ac
    CMP ECX,0x2                         ; 0049a01a
    JZ 0x0049a0b8                       ; 0049a01d
        ;   XREF to: 0049a0b8 (CONDITIONAL_JUMP)  ; LAB_0049a0b8
    CMP dword ptr [EBX + 0x282c],0x0    ; 0049a023
    JNZ 0x0049a0b8                      ; 0049a02a
        ;   XREF to: 0049a0b8 (CONDITIONAL_JUMP)  ; LAB_0049a0b8
    MOV EBX,dword ptr [ESP + 0x30]      ; 0049a030
        ;   Label: LAB_0049a030
    MOV ESI,dword ptr [ESP + 0x34]      ; 0049a034
    MOV EDI,dword ptr [0x01c3f5a8]      ; 0049a038 | DAT_01c3f5a8
    ADD EBX,0x4                         ; 0049a03e
    INC ESI                             ; 0049a041
    MOV dword ptr [ESP + 0x30],EBX      ; 0049a042
    MOV dword ptr [ESP + 0x34],ESI      ; 0049a046
    CMP ESI,EDI                         ; 0049a04a
    JL 0x0049a00a                       ; 0049a04c
        ;   XREF to: 0049a00a (CONDITIONAL_JUMP)  ; LAB_0049a00a
    MOV EAX,[0x01c3f674]                ; 0049a04e | DAT_01c3f674
        ;   Label: LAB_0049a04e
    XOR ESI,ESI                         ; 0049a053
    TEST EAX,EAX                        ; 0049a055
    JLE 0x0049a0b1                      ; 0049a057
        ;   XREF to: 0049a0b1 (CONDITIONAL_JUMP)  ; LAB_0049a0b1
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049a059
    MOV dword ptr [ESP + 0x2c],ESI      ; 0049a05c
    ADD EDI,0x4                         ; 0049a060
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0049a063
        ;   Label: LAB_0049a063
    MOV EDX,dword ptr [EDX + 0x1c3f678] ; 0049a067 | DAT_01c3f678
    LEA EBX,[EDX + 0x20]                ; 0049a06d
    FLD float ptr [EBX]                 ; 0049a070
    FSUB float ptr [EDI]                ; 0049a072
    FMUL ST0                            ; 0049a074
    FLD float ptr [EBX + 0x4]           ; 0049a076
    FSUB float ptr [EDI + 0x4]          ; 0049a079
    FMUL ST0                            ; 0049a07c
    FLD float ptr [EBX + 0x8]           ; 0049a07e
    FXCH                                ; 0049a081
    FADDP ST2,ST0                       ; 0049a083
    FSUB float ptr [EDI + 0x8]          ; 0049a085
    FMUL ST0                            ; 0049a088
    FADDP                               ; 0049a08a
    FCOMP double ptr [0x005d569a]       ; 0049a08c | DAT_005d569a
    FNSTSW AX                           ; 0049a092
    SAHF                                ; 0049a094
    JBE 0x0049a142                      ; 0049a095
        ;   XREF to: 0049a142 (CONDITIONAL_JUMP)  ; LAB_0049a142
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0049a09b
        ;   Label: LAB_0049a09b
    MOV EBX,dword ptr [0x01c3f674]      ; 0049a09f | DAT_01c3f674
    ADD ECX,0x4                         ; 0049a0a5
    INC ESI                             ; 0049a0a8
    MOV dword ptr [ESP + 0x2c],ECX      ; 0049a0a9
    CMP ESI,EBX                         ; 0049a0ad
    JL 0x0049a063                       ; 0049a0af
        ;   XREF to: 0049a063 (CONDITIONAL_JUMP)  ; LAB_0049a063
    MOV ESP,EBP                         ; 0049a0b1
        ;   Label: LAB_0049a0b1
    POP EBP                             ; 0049a0b3
    POP EDI                             ; 0049a0b4
    POP ESI                             ; 0049a0b5
    POP EBX                             ; 0049a0b6
    RET                                 ; 0049a0b7
    LEA EAX,[EBX + 0x20]                ; 0049a0b8
        ;   Label: LAB_0049a0b8
    MOV EDX,dword ptr [ESP + 0x38]      ; 0049a0bb
    FLD float ptr [EAX]                 ; 0049a0bf
    FSUB float ptr [EDX]                ; 0049a0c1
    FMUL ST0                            ; 0049a0c3
    FLD float ptr [EAX + 0x4]           ; 0049a0c5
    FSUB float ptr [EDX + 0x4]          ; 0049a0c8
    FMUL ST0                            ; 0049a0cb
    FLD float ptr [EAX + 0x8]           ; 0049a0cd
    FXCH                                ; 0049a0d0
    FADDP ST2,ST0                       ; 0049a0d2
    FSUB float ptr [EDX + 0x8]          ; 0049a0d4
    FMUL ST0                            ; 0049a0d7
    FADDP                               ; 0049a0d9
    FCOMP float ptr [0x005d5692]        ; 0049a0db | DAT_005d5692
    FNSTSW AX                           ; 0049a0e1
    SAHF                                ; 0049a0e3
    JA 0x0049a030                       ; 0049a0e4
        ;   XREF to: 0049a030 (CONDITIONAL_JUMP)  ; LAB_0049a030
    LEA EAX,[EBX + 0x2b4]               ; 0049a0ea
    PUSH EAX                            ; 0049a0f0
    CALL FUN_00547810                   ; 0049a0f1
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 0049a0f6
    MOV EDI,dword ptr [ESP + 0x38]      ; 0049a0f9
    PUSH EDI                            ; 0049a0fd
    PUSH EBX                            ; 0049a0fe
    LEA ESI,[ESP + 0x14]                ; 0049a0ff
    LEA EDI,[ESP + 0x8]                 ; 0049a103
    CALL FUN_00408de0                   ; 0049a107
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 0049a10c
    LEA ESI,[ESP + 0xc]                 ; 0049a10f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049a113
    MOVSD ES:EDI,ESI                    ; 0049a116
    MOVSD ES:EDI,ESI                    ; 0049a117
    MOVSD ES:EDI,ESI                    ; 0049a118
    CMP dword ptr [EAX + 0x20],0x2      ; 0049a119
    SETZ AL                             ; 0049a11d
    AND EAX,0xff                        ; 0049a120
    PUSH EAX                            ; 0049a125
    PUSH 0x3f800000                     ; 0049a126
    PUSH 0x0                            ; 0049a12b
    PUSH 0x0                            ; 0049a12d
    LEA EAX,[ESP + 0x10]                ; 0049a12f
    PUSH EAX                            ; 0049a133
    PUSH EBX                            ; 0049a134
    CALL FUN_00426e70                   ; 0049a135
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00426e70()
    ADD ESP,0x18                        ; 0049a13a
    JMP 0x0049a030                      ; 0049a13d
        ;   XREF to: 0049a030 (UNCONDITIONAL_JUMP)  ; LAB_0049a030
    PUSH EDX                            ; 0049a142
        ;   Label: LAB_0049a142
    CALL FUN_004a08d0                   ; 0049a143
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a08d0()
    ADD ESP,0x4                         ; 0049a148
    JMP 0x0049a09b                      ; 0049a14b
        ;   XREF to: 0049a09b (UNCONDITIONAL_JUMP)  ; LAB_0049a09b

