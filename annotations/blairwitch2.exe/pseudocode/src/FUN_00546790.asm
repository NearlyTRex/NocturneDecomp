; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546790(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   FUN_0041ede0 at 0041ee01
;   FUN_004b20d0 at 004b21db
;   FUN_004c3da0 at 004c3dc1
;   FUN_004f0e10 at 004f1136
;   FUN_005469a0 at 00546a58
;   FUN_00598fa0 at 00598fe9
;
; Called Functions:
;   FUN_00547890
;   FUN_00591530
;   FUN_00591930
;   FUN_005938c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546790
        ;   Label: FUN_00546790
    PUSH EDI                            ; 00546791
    PUSH EBP                            ; 00546792
    SUB ESP,0xac                        ; 00546793
    MOV EBX,dword ptr [ESP + 0xbc]      ; 00546799
    MOV EBP,ESI                         ; 005467a0
    CMP dword ptr [ESP + 0xc0],0x0      ; 005467a2
    JL 0x005468ae                       ; 005467aa
        ;   XREF to: 005468ae (CONDITIONAL_JUMP)  ; LAB_005468ae
    PUSH EBX                            ; 005467b0
    CALL FUN_00547890                   ; 005467b1
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 005467b6
    MOV ESI,dword ptr [ESP + 0xc0]      ; 005467b9
    MOV EDX,EAX                         ; 005467c0
    LEA EAX,[ESI*0x8 + 0x0]             ; 005467c2
    ADD EAX,ESI                         ; 005467c9
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x1d21c] ; 005467cb
    LEA EAX,[ESI*0x4 + 0x0]             ; 005467d2
    SUB EAX,ESI                         ; 005467d9
    SHL EAX,0x2                         ; 005467db
    MOV dword ptr [ESP + 0xa8],EAX      ; 005467de
    TEST EDX,EDX                        ; 005467e5
    JL 0x005468db                       ; 005467e7
        ;   XREF to: 005468db (CONDITIONAL_JUMP)  ; LAB_005468db
    PUSH EDX                            ; 005467ed
    PUSH EBX                            ; 005467ee
    LEA ESI,[ESP + 0x8]                 ; 005467ef
    LEA EDI,[ESP + 0x68]                ; 005467f3
    CALL FUN_00546790                   ; 005467f7
        ;   XREF to: 00546790 (UNCONDITIONAL_CALL)  ; undefined FUN_00546790()
    MOV ECX,0xc                         ; 005467fc
    LEA ESI,[ESP + 0x8]                 ; 00546801
    ADD ESP,0x8                         ; 00546805
    LEA EAX,[ESP + 0x60]                ; 00546808
    MOVSD.REP ES:EDI,ESI                ; 0054680c
    PUSH EAX                            ; 0054680e
    MOV ECX,dword ptr [ESP + 0xac]      ; 0054680f
    LEA EAX,[EBX + 0x58]                ; 00546816
    ADD EAX,ECX                         ; 00546819
    PUSH EAX                            ; 0054681b
    LEA ESI,[ESP + 0xa4]                ; 0054681c
    LEA EDI,[ESP + 0x98]                ; 00546823
    CALL FUN_00591530                   ; 0054682a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0xa4]                ; 0054682f
    ADD ESP,0x8                         ; 00546836
    MOVSD ES:EDI,ESI                    ; 00546839
    MOVSD ES:EDI,ESI                    ; 0054683a
    MOVSD ES:EDI,ESI                    ; 0054683b
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054683c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00546843
    MOV EAX,dword ptr [ESP + 0x94]      ; 00546847
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054684e
    MOV EAX,dword ptr [ESP + 0x98]      ; 00546852
    MOV dword ptr [ESP + 0x5c],EAX      ; 00546859
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0054685d
        ;   Label: LAB_0054685d
    LEA EAX,[EBX + 0x6b0]               ; 00546864
    SHL EDX,0x4                         ; 0054686a
    ADD EAX,EDX                         ; 0054686d
    PUSH EAX                            ; 0054686f
    LEA EAX,[ESP + 0x34]                ; 00546870
    PUSH EAX                            ; 00546874
    CALL FUN_005938c0                   ; 00546875
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005938c0()
    ADD ESP,0x8                         ; 0054687a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0054687d
    SHL EAX,0x2                         ; 00546884
    ADD EBX,EAX                         ; 00546887
    CMP dword ptr [EBX + 0xcf0],0x3f800000 ; 00546889
    JNZ 0x0054690a                      ; 00546893
        ;   XREF to: 0054690a (CONDITIONAL_JUMP)  ; LAB_0054690a
    MOV ECX,0xc                         ; 00546895
        ;   Label: LAB_00546895
    LEA ESI,[ESP + 0x30]                ; 0054689a
    MOV EDI,EBP                         ; 0054689e
    MOVSD.REP ES:EDI,ESI                ; 005468a0
    MOV EAX,EBP                         ; 005468a2
    ADD ESP,0xac                        ; 005468a4
    POP EBP                             ; 005468aa
    POP EDI                             ; 005468ab
    POP EBX                             ; 005468ac
    RET                                 ; 005468ad
    LEA EAX,[ESP + 0x30]                ; 005468ae
        ;   Label: LAB_005468ae
    PUSH EAX                            ; 005468b2
    CALL FUN_00591930                   ; 005468b3
        ;   XREF to: 00591930 (UNCONDITIONAL_CALL)  ; undefined FUN_00591930()
    ADD ESP,0x4                         ; 005468b8
    MOV EAX,dword ptr [EBX + 0x6a4]     ; 005468bb
    MOV dword ptr [ESP + 0x3c],EAX      ; 005468c1
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 005468c5
    MOV dword ptr [ESP + 0x4c],EAX      ; 005468cb
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 005468cf
    MOV dword ptr [ESP + 0x5c],EAX      ; 005468d5
    JMP 0x00546895                      ; 005468d9
        ;   XREF to: 00546895 (UNCONDITIONAL_JUMP)  ; LAB_00546895
    FLD float ptr [EBX + 0x6a4]         ; 005468db
        ;   Label: LAB_005468db
    FADD float ptr [EBX + EAX*0x1 + 0x58] ; 005468e1
    FSTP float ptr [ESP + 0x3c]         ; 005468e5
    FLD float ptr [EBX + 0x6a8]         ; 005468e9
    FADD float ptr [EBX + EAX*0x1 + 0x5c] ; 005468ef
    FSTP float ptr [ESP + 0x4c]         ; 005468f3
    FLD float ptr [EBX + 0x6ac]         ; 005468f7
    FADD float ptr [EBX + EAX*0x1 + 0x60] ; 005468fd
    FSTP float ptr [ESP + 0x5c]         ; 00546901
    JMP 0x0054685d                      ; 00546905
        ;   XREF to: 0054685d (UNCONDITIONAL_JUMP)  ; LAB_0054685d
    FLD float ptr [ESP + 0x30]          ; 0054690a
        ;   Label: LAB_0054690a
    FMUL float ptr [EBX + 0xcf0]        ; 0054690e
    FLD float ptr [ESP + 0x34]          ; 00546914
    FXCH                                ; 00546918
    FSTP float ptr [ESP + 0x30]         ; 0054691a
    FMUL float ptr [EBX + 0xcf0]        ; 0054691e
    FLD float ptr [ESP + 0x38]          ; 00546924
    FXCH                                ; 00546928
    FSTP float ptr [ESP + 0x34]         ; 0054692a
    FMUL float ptr [EBX + 0xcf0]        ; 0054692e
    FLD float ptr [ESP + 0x40]          ; 00546934
    FXCH                                ; 00546938
    FSTP float ptr [ESP + 0x38]         ; 0054693a
    FMUL float ptr [EBX + 0xcf0]        ; 0054693e
    FLD float ptr [ESP + 0x44]          ; 00546944
    FXCH                                ; 00546948
    FSTP float ptr [ESP + 0x40]         ; 0054694a
    FMUL float ptr [EBX + 0xcf0]        ; 0054694e
    FLD float ptr [ESP + 0x48]          ; 00546954
    FXCH                                ; 00546958
    FSTP float ptr [ESP + 0x44]         ; 0054695a
    FMUL float ptr [EBX + 0xcf0]        ; 0054695e
    FLD float ptr [ESP + 0x50]          ; 00546964
    FXCH                                ; 00546968
    FSTP float ptr [ESP + 0x48]         ; 0054696a
    FMUL float ptr [EBX + 0xcf0]        ; 0054696e
    FLD float ptr [ESP + 0x54]          ; 00546974
    FXCH                                ; 00546978
    FSTP float ptr [ESP + 0x50]         ; 0054697a
    FMUL float ptr [EBX + 0xcf0]        ; 0054697e
    FLD float ptr [ESP + 0x58]          ; 00546984
    FXCH                                ; 00546988
    FSTP float ptr [ESP + 0x54]         ; 0054698a
    FMUL float ptr [EBX + 0xcf0]        ; 0054698e
    FSTP float ptr [ESP + 0x58]         ; 00546994
    JMP 0x00546895                      ; 00546998
        ;   XREF to: 00546895 (UNCONDITIONAL_JUMP)  ; LAB_00546895

