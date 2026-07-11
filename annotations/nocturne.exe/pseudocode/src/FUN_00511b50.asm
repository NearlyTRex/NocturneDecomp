; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00511b50(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   FUN_0042abd0 at 0042acc4
;
; Referenced Globals:
;   undefined4 DAT_00590bc1
;   undefined4 DAT_005c11ec
;   undefined4 DAT_02dd1214
;   undefined4 DAT_02ddd5d0
;
; Called Functions:
;   FUN_0040a290
;   FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511b50
        ;   Label: FUN_00511b50
    PUSH ESI                            ; 00511b51
    PUSH EDI                            ; 00511b52
    PUSH EBP                            ; 00511b53
    SUB ESP,0x24                        ; 00511b54
    MOV EBP,dword ptr [ESP + 0x38]      ; 00511b57
    MOV EAX,[0x005c11ec]                ; 00511b5b | DAT_005c11ec
    TEST dword ptr [EAX + 0x4],0x7fffffff ; 00511b60 | DAT_02dd1214
    JZ 0x00511b78                       ; 00511b67
        ;   XREF to: 00511b78 (CONDITIONAL_JUMP)  ; LAB_00511b78
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00511b69
    FLD float ptr [EDX + 0x4]           ; 00511b6d
    FCOMP float ptr [EAX + 0x4]         ; 00511b70 | DAT_02dd1214
    FNSTSW AX                           ; 00511b73
    SAHF                                ; 00511b75
    JC 0x00511bb9                       ; 00511b76
        ;   XREF to: 00511bb9 (CONDITIONAL_JUMP)  ; LAB_00511bb9
    MOV ECX,dword ptr [EBP + 0x14cd6c]  ; 00511b78
        ;   Label: LAB_00511b78
    XOR ESI,ESI                         ; 00511b7e
    TEST ECX,ECX                        ; 00511b80
    JLE 0x00511baf                      ; 00511b82
        ;   XREF to: 00511baf (CONDITIONAL_JUMP)  ; LAB_00511baf
    MOV EDI,EBP                         ; 00511b84
    MOV EAX,[0x02ddd5d0]                ; 00511b86 | DAT_02ddd5d0
        ;   Label: LAB_00511b86
    PUSH EAX                            ; 00511b8b
    MOV EDX,dword ptr [EDI + 0x14cd70]  ; 00511b8c
    PUSH EDX                            ; 00511b92
    CALL FUN_0040d890                   ; 00511b93
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV EBX,EAX                         ; 00511b98
    ADD ESP,0x8                         ; 00511b9a
    TEST EAX,EAX                        ; 00511b9d
    JNZ 0x00511bc0                      ; 00511b9f
        ;   XREF to: 00511bc0 (CONDITIONAL_JUMP)  ; LAB_00511bc0
    INC ESI                             ; 00511ba1
        ;   Label: LAB_00511ba1
    MOV EBX,dword ptr [EBP + 0x14cd6c]  ; 00511ba2
    ADD EDI,0x4                         ; 00511ba8
    CMP ESI,EBX                         ; 00511bab
    JL 0x00511b86                       ; 00511bad
        ;   XREF to: 00511b86 (CONDITIONAL_JUMP)  ; LAB_00511b86
    XOR EAX,EAX                         ; 00511baf
        ;   Label: LAB_00511baf
    ADD ESP,0x24                        ; 00511bb1
        ;   Label: LAB_00511bb1
    POP EBP                             ; 00511bb4
    POP EDI                             ; 00511bb5
    POP ESI                             ; 00511bb6
    POP EBX                             ; 00511bb7
    RET                                 ; 00511bb8
    MOV EAX,0x1                         ; 00511bb9
        ;   Label: LAB_00511bb9
    JMP 0x00511bb1                      ; 00511bbe
        ;   XREF to: 00511bb1 (UNCONDITIONAL_JUMP)  ; LAB_00511bb1
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00511bc0
        ;   Label: LAB_00511bc0
    PUSH ECX                            ; 00511bc4
    LEA EAX,[ESP + 0x1c]                ; 00511bc5
    PUSH EAX                            ; 00511bc9
    PUSH EBX                            ; 00511bca
    CALL FUN_0040a290                   ; 00511bcb
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 00511bd0
    MOV EAX,ESP                         ; 00511bd3
    PUSH EAX                            ; 00511bd5
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00511bd6
    PUSH EBX                            ; 00511bdc
    CALL dword ptr [EDX + 0x14]         ; 00511bdd
    ADD ESP,0x8                         ; 00511be0
    FLD float ptr [ESP + 0x4]           ; 00511be3
    FADD float ptr [0x00590bc1]         ; 00511be7 | DAT_00590bc1
    FLD float ptr [ESP]                 ; 00511bed
    FXCH                                ; 00511bf0
    FSTP float ptr [ESP + 0x4]          ; 00511bf2
    FCOMP float ptr [ESP + 0x18]        ; 00511bf6
    FNSTSW AX                           ; 00511bfa
    SAHF                                ; 00511bfc
    JA 0x00511ba1                       ; 00511bfd
        ;   XREF to: 00511ba1 (CONDITIONAL_JUMP)  ; LAB_00511ba1
    FLD float ptr [ESP + 0x4]           ; 00511bff
    FCOMP float ptr [ESP + 0x1c]        ; 00511c03
    FNSTSW AX                           ; 00511c07
    SAHF                                ; 00511c09
    JA 0x00511ba1                       ; 00511c0a
        ;   XREF to: 00511ba1 (CONDITIONAL_JUMP)  ; LAB_00511ba1
    FLD float ptr [ESP + 0x8]           ; 00511c0c
    FCOMP float ptr [ESP + 0x20]        ; 00511c10
    FNSTSW AX                           ; 00511c14
    SAHF                                ; 00511c16
    JA 0x00511ba1                       ; 00511c17
        ;   XREF to: 00511ba1 (CONDITIONAL_JUMP)  ; LAB_00511ba1
    FLD float ptr [ESP + 0xc]           ; 00511c19
    FCOMP float ptr [ESP + 0x18]        ; 00511c1d
    FNSTSW AX                           ; 00511c21
    SAHF                                ; 00511c23
    JC 0x00511ba1                       ; 00511c24
        ;   XREF to: 00511ba1 (CONDITIONAL_JUMP)  ; LAB_00511ba1
    FLD float ptr [ESP + 0x10]          ; 00511c2a
    FCOMP float ptr [ESP + 0x1c]        ; 00511c2e
    FNSTSW AX                           ; 00511c32
    SAHF                                ; 00511c34
    JC 0x00511ba1                       ; 00511c35
        ;   XREF to: 00511ba1 (CONDITIONAL_JUMP)  ; LAB_00511ba1
    FLD float ptr [ESP + 0x14]          ; 00511c3b
    FCOMP float ptr [ESP + 0x20]        ; 00511c3f
    FNSTSW AX                           ; 00511c43
    SAHF                                ; 00511c45
    JC 0x00511ba1                       ; 00511c46
        ;   XREF to: 00511ba1 (CONDITIONAL_JUMP)  ; LAB_00511ba1
    MOV EAX,0x1                         ; 00511c4c
    ADD ESP,0x24                        ; 00511c51
    POP EBP                             ; 00511c54
    POP EDI                             ; 00511c55
    POP ESI                             ; 00511c56
    POP EBX                             ; 00511c57
    RET                                 ; 00511c58

