; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548850(int param_1,int param_2,int param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0054e420 at 0054e449
;
; Referenced Globals:
;   undefined4 DAT_005e4758
;
; Called Functions:
;   FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548850
        ;   Label: FUN_00548850
    PUSH ESI                            ; 00548851
    PUSH EDI                            ; 00548852
    PUSH EBP                            ; 00548853
    SUB ESP,0x70                        ; 00548854
    MOV EAX,dword ptr [ESP + 0x90]      ; 00548857
    XOR EDX,EDX                         ; 0054885e
    MOV dword ptr [ESP + 0x58],EAX      ; 00548860
    MOV EAX,dword ptr [ESP + 0x88]      ; 00548864
    MOV dword ptr [ESP + 0x5c],EDX      ; 0054886b
    SHL EAX,0x2                         ; 0054886f
    MOV dword ptr [ESP + 0x60],EDX      ; 00548872
    MOV dword ptr [ESP + 0x54],EAX      ; 00548876
    MOV EAX,dword ptr [ESP + 0x84]      ; 0054887a
        ;   Label: LAB_0054887a
    ADD EAX,dword ptr [ESP + 0x54]      ; 00548881
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00548885
    CMP EBX,dword ptr [EAX + 0x2c]      ; 00548889
    JGE 0x00548a23                      ; 0054888c
        ;   XREF to: 00548a23 (CONDITIONAL_JUMP)  ; LAB_00548a23
    MOV EBX,dword ptr [ESP + 0x60]      ; 00548892
    MOV EAX,dword ptr [EAX + 0x40]      ; 00548896
    ADD EBX,EAX                         ; 00548899
    MOV dword ptr [ESP + 0x64],EBX      ; 0054889b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054889f
    MOV DL,byte ptr [EAX]               ; 005488a3
    ADD EBX,0x10                        ; 005488a5
    CMP DL,0x1                          ; 005488a8
    JZ 0x00548989                       ; 005488ab
        ;   XREF to: 00548989 (CONDITIONAL_JUMP)  ; LAB_00548989
    ADD EAX,0x4                         ; 005488b1
    MOV dword ptr [ESP + 0x6c],EBX      ; 005488b4
    XOR EDI,EDI                         ; 005488b8
    XOR EBP,EBP                         ; 005488ba
    MOV EBX,dword ptr [ESP + 0x64]      ; 005488bc
    MOV dword ptr [ESP + 0x40],EDI      ; 005488c0
    MOV dword ptr [ESP + 0x3c],EDI      ; 005488c4
    MOV dword ptr [ESP + 0x44],EDI      ; 005488c8
    MOV dword ptr [ESP + 0x68],EBX      ; 005488cc
    MOV EBX,EAX                         ; 005488d0
    MOV ESI,dword ptr [ESP + 0x64]      ; 005488d2
        ;   Label: LAB_005488d2
    XOR EAX,EAX                         ; 005488d6
    MOV AL,byte ptr [ESI]               ; 005488d8
    CMP EBP,EAX                         ; 005488da
    JGE 0x005489d9                      ; 005488dc
        ;   XREF to: 005489d9 (CONDITIONAL_JUMP)  ; LAB_005489d9
    MOV ESI,dword ptr [ESP + 0x68]      ; 005488e2
    XOR EAX,EAX                         ; 005488e6
    MOV AL,byte ptr [ESI + 0x1]         ; 005488e8
    IMUL EAX,EAX,0x30                   ; 005488eb
    ADD EAX,dword ptr [ESP + 0x8c]      ; 005488ee
    PUSH EAX                            ; 005488f5
    MOV ESI,dword ptr [ESP + 0x70]      ; 005488f6
    PUSH ESI                            ; 005488fa
    LEA ESI,[ESP + 0x50]                ; 005488fb
    LEA EDI,[ESP + 0x8]                 ; 005488ff
    CALL FUN_00583260                   ; 00548903
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[ESP + 0x50]                ; 00548908
    ADD ESP,0x8                         ; 0054890c
    MOVSD ES:EDI,ESI                    ; 0054890f
    MOVSD ES:EDI,ESI                    ; 00548910
    MOVSD ES:EDI,ESI                    ; 00548911
    FLD float ptr [ESP]                 ; 00548912
    FMUL float ptr [EBX]                ; 00548915
    FLD float ptr [ESP + 0x4]           ; 00548917
    FMUL float ptr [EBX]                ; 0054891b
    FLD float ptr [ESP + 0x8]           ; 0054891d
    FMUL float ptr [EBX]                ; 00548921
    ADD EBX,0x4                         ; 00548923
    INC EBP                             ; 00548926
    FLD float ptr [ESP + 0x3c]          ; 00548927
    FLD float ptr [ESP + 0x40]          ; 0054892b
    FLD float ptr [ESP + 0x44]          ; 0054892f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00548933
    LEA EDI,[ESP + 0xc]                 ; 00548937
    LEA ESI,[ESP + 0x18]                ; 0054893b
    INC EAX                             ; 0054893f
    FXCH ST5                            ; 00548940
    FSTP float ptr [ESP + 0x18]         ; 00548942
    FXCH ST3                            ; 00548946
    FSTP float ptr [ESP + 0x1c]         ; 00548948
    FXCH                                ; 0054894c
    FSTP float ptr [ESP + 0x20]         ; 0054894e
    MOVSD ES:EDI,ESI                    ; 00548952
    MOVSD ES:EDI,ESI                    ; 00548953
    MOVSD ES:EDI,ESI                    ; 00548954
    MOV dword ptr [ESP + 0x68],EAX      ; 00548955
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00548959
    FADD float ptr [ESP + 0xc]          ; 0054895d
    FXCH                                ; 00548961
    FADD float ptr [ESP + 0x10]         ; 00548963
    FXCH ST2                            ; 00548967
    FADD float ptr [ESP + 0x14]         ; 00548969
    FXCH                                ; 0054896d
    FSTP float ptr [ESP + 0x3c]         ; 0054896f
    FXCH                                ; 00548973
    FSTP float ptr [ESP + 0x40]         ; 00548975
    ADD EDI,0xc                         ; 00548979
    FSTP float ptr [ESP + 0x44]         ; 0054897c
    MOV dword ptr [ESP + 0x6c],EDI      ; 00548980
    JMP 0x005488d2                      ; 00548984
        ;   XREF to: 005488d2 (UNCONDITIONAL_JUMP)  ; LAB_005488d2
    MOV ESI,dword ptr [ESP + 0x64]      ; 00548989
        ;   Label: LAB_00548989
    XOR EAX,EAX                         ; 0054898d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054898f
    IMUL EAX,EAX,0x30                   ; 00548992
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00548995
    PUSH EAX                            ; 0054899c
    PUSH EBX                            ; 0054899d
    LEA ESI,[ESP + 0x2c]                ; 0054899e
    LEA EDI,[ESP + 0x38]                ; 005489a2
    CALL FUN_00583260                   ; 005489a6
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[ESP + 0x2c]                ; 005489ab
    LEA EBX,[ESP + 0x38]                ; 005489af
    ADD ESP,0x8                         ; 005489b3
    LEA EAX,[ESP + 0x3c]                ; 005489b6
    MOVSD ES:EDI,ESI                    ; 005489ba
    MOVSD ES:EDI,ESI                    ; 005489bb
    MOVSD ES:EDI,ESI                    ; 005489bc
    CMP EAX,EBX                         ; 005489bd
    JZ 0x005489d9                       ; 005489bf
        ;   XREF to: 005489d9 (CONDITIONAL_JUMP)  ; LAB_005489d9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005489c1
    MOV dword ptr [ESP + 0x3c],EAX      ; 005489c5
    MOV EAX,dword ptr [ESP + 0x34]      ; 005489c9
    MOV dword ptr [ESP + 0x40],EAX      ; 005489cd
    MOV EAX,dword ptr [ESP + 0x38]      ; 005489d1
    MOV dword ptr [ESP + 0x44],EAX      ; 005489d5
    MOV EBX,dword ptr [ESP + 0x58]      ; 005489d9
        ;   Label: LAB_005489d9
    LEA EAX,[ESP + 0x3c]                ; 005489dd
    MOV ECX,dword ptr [ESP + 0x60]      ; 005489e1
    FLD float ptr [EAX]                 ; 005489e5
    FMUL float ptr [0x005e4758]         ; 005489e7 | DAT_005e4758
    FISTP dword ptr [EBX]               ; 005489ed
    FLD float ptr [EAX + 0x4]           ; 005489ef
    FMUL float ptr [0x005e4758]         ; 005489f2 | DAT_005e4758
    FISTP dword ptr [EBX + 0x4]         ; 005489f8
    FLD float ptr [EAX + 0x8]           ; 005489fb
    FMUL float ptr [0x005e4758]         ; 005489fe | DAT_005e4758
    FISTP dword ptr [EBX + 0x8]         ; 00548a04
    LEA EDX,[EBX + 0xc]                 ; 00548a07
    ADD ECX,0x34                        ; 00548a0a
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00548a0d
    MOV dword ptr [ESP + 0x58],EDX      ; 00548a11
    INC EBX                             ; 00548a15
    MOV dword ptr [ESP + 0x60],ECX      ; 00548a16
    MOV dword ptr [ESP + 0x5c],EBX      ; 00548a1a
    JMP 0x0054887a                      ; 00548a1e
        ;   XREF to: 0054887a (UNCONDITIONAL_JUMP)  ; LAB_0054887a
    ADD ESP,0x70                        ; 00548a23
        ;   Label: LAB_00548a23
    POP EBP                             ; 00548a26
    POP EDI                             ; 00548a27
    POP ESI                             ; 00548a28
    POP EBX                             ; 00548a29
    RET                                 ; 00548a2a

