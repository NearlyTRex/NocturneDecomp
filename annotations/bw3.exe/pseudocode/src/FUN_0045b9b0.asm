; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0045b9b0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[7]:
;   FUN_0041b470 at 0041ba79
;   FUN_00423050 at 0042381e
;   FUN_0045d170 at 0045d1a0
;   FUN_0045ed70 at 0045efb9
;   FUN_0046cc40 at 0046cc58
;   FUN_0049a390 at 0049a401
;   FUN_00534890 at 00534b64
;
; Referenced Globals:
;   undefined4 DAT_005bb16e
;   undefined4 DAT_005bb176
;   undefined4 DAT_005bb17e
;   undefined4 DAT_005bb186
;   undefined4 DAT_005bb18e
;   undefined4 DAT_005bb196
;   undefined4 DAT_005bb19a
;
; Called Functions:
;   FUN_005a4b46
;   FUN_005a4b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b9b0
        ;   Label: FUN_0045b9b0
    PUSH EDI                            ; 0045b9b1
    PUSH EBP                            ; 0045b9b2
    MOV EBP,ESP                         ; 0045b9b3
    SUB ESP,0x90                        ; 0045b9b5
    AND ESP,0xfffffff8                  ; 0045b9bb
    MOV ECX,dword ptr [EBP + 0x10]      ; 0045b9be
    MOV EDX,ESI                         ; 0045b9c1
    FLD float ptr [ECX + 0x14]          ; 0045b9c3
    FCHS                                ; 0045b9c6
    FST double ptr [ESP + 0x68]         ; 0045b9c8
    FCOMP double ptr [0x005bb16e]       ; 0045b9cc | DAT_005bb16e
    FNSTSW AX                           ; 0045b9d2
    SAHF                                ; 0045b9d4
    JBE 0x0045bace                      ; 0045b9d5
        ;   XREF to: 0045bace (CONDITIONAL_JUMP)  ; LAB_0045bace
    FLD1                                ; 0045b9db
    FCOMP double ptr [ESP + 0x68]       ; 0045b9dd
    FNSTSW AX                           ; 0045b9e1
    SAHF                                ; 0045b9e3
    JA 0x0045badb                       ; 0045b9e4
        ;   XREF to: 0045badb (CONDITIONAL_JUMP)  ; LAB_0045badb
    MOV dword ptr [ESP + 0x7c],0x3fc90fdb ; 0045b9ea
    FLD float ptr [ECX]                 ; 0045b9f2
        ;   Label: LAB_0045b9f2
    FLD float ptr [ECX + 0x18]          ; 0045b9f4
    FCHS                                ; 0045b9f7
    FSTP double ptr [ESP + 0x60]        ; 0045b9f9
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045b9fd
    FSTP double ptr [ESP + 0x30]        ; 0045ba01
    MOV dword ptr [ESP + 0x18],EAX      ; 0045ba05
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045ba09
    XOR EDI,EDI                         ; 0045ba0d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045ba0f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045ba13
    FLD double ptr [ESP + 0x60]         ; 0045ba17
    MOV dword ptr [ESP + 0x50],EAX      ; 0045ba1b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045ba1f
    MOV dword ptr [ESP + 0x84],EDI      ; 0045ba23
    MOV dword ptr [ESP + 0x54],EAX      ; 0045ba2a
    FCOMP double ptr [0x005bb176]       ; 0045ba2e | DAT_005bb176
    FNSTSW AX                           ; 0045ba34
    SAHF                                ; 0045ba36
    JNC 0x0045bcb5                      ; 0045ba37
        ;   XREF to: 0045bcb5 (CONDITIONAL_JUMP)  ; LAB_0045bcb5
    FLD double ptr [ESP + 0x60]         ; 0045ba3d
    FCOMP double ptr [0x005bb17e]       ; 0045ba41 | DAT_005bb17e
    FNSTSW AX                           ; 0045ba47
    SAHF                                ; 0045ba49
    JBE 0x0045bcb5                      ; 0045ba4a
        ;   XREF to: 0045bcb5 (CONDITIONAL_JUMP)  ; LAB_0045bcb5
    FLD double ptr [ESP + 0x60]         ; 0045ba50
    CALL FUN_005a4b46                   ; 0045ba54
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLDZ                                ; 0045ba59
    FXCH                                ; 0045ba5b
    FSTP float ptr [ESP + 0x74]         ; 0045ba5d
    FCOMP double ptr [ESP + 0x30]       ; 0045ba61
    FNSTSW AX                           ; 0045ba65
    SAHF                                ; 0045ba67
    JBE 0x0045ba78                      ; 0045ba68
        ;   XREF to: 0045ba78 (CONDITIONAL_JUMP)  ; LAB_0045ba78
    FLD float ptr [ESP + 0x74]          ; 0045ba6a
    FSUBR double ptr [0x005bb186]       ; 0045ba6e | DAT_005bb186
    FSTP float ptr [ESP + 0x74]         ; 0045ba74
    FLD float ptr [ESP + 0x74]          ; 0045ba78
        ;   Label: LAB_0045ba78
    FCOMP double ptr [0x005bb18e]       ; 0045ba7c | DAT_005bb18e
    FNSTSW AX                           ; 0045ba82
    SAHF                                ; 0045ba84
    JNC 0x0045ba95                      ; 0045ba85
        ;   XREF to: 0045ba95 (CONDITIONAL_JUMP)  ; LAB_0045ba95
    FLD float ptr [ESP + 0x74]          ; 0045ba87
    FADD float ptr [0x005bb196]         ; 0045ba8b | DAT_005bb196
    FSTP float ptr [ESP + 0x74]         ; 0045ba91
    FLD float ptr [ESP + 0x74]          ; 0045ba95
        ;   Label: LAB_0045ba95
    FCOMP double ptr [0x005bb186]       ; 0045ba99 | DAT_005bb186
    FNSTSW AX                           ; 0045ba9f
    SAHF                                ; 0045baa1
    JBE 0x0045bab2                      ; 0045baa2
        ;   XREF to: 0045bab2 (CONDITIONAL_JUMP)  ; LAB_0045bab2
    FLD float ptr [ESP + 0x74]          ; 0045baa4
    FADD float ptr [0x005bb19a]         ; 0045baa8 | DAT_005bb19a
    FSTP float ptr [ESP + 0x74]         ; 0045baae
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045bab2
        ;   Label: LAB_0045bab2
    MOV dword ptr [ESP + 0x80],EAX      ; 0045bab6
    LEA ESI,[ESP + 0x7c]                ; 0045babd
    MOV EDI,EDX                         ; 0045bac1
    MOVSD ES:EDI,ESI                    ; 0045bac3
    MOVSD ES:EDI,ESI                    ; 0045bac4
    MOVSD ES:EDI,ESI                    ; 0045bac5
    MOV EAX,EDX                         ; 0045bac6
    MOV ESP,EBP                         ; 0045bac8
    POP EBP                             ; 0045baca
    POP EDI                             ; 0045bacb
    POP EBX                             ; 0045bacc
    RET                                 ; 0045bacd
    MOV dword ptr [ESP + 0x7c],0xbfc90fdb ; 0045bace
        ;   Label: LAB_0045bace
    JMP 0x0045b9f2                      ; 0045bad6
        ;   XREF to: 0045b9f2 (UNCONDITIONAL_JUMP)  ; LAB_0045b9f2
    FLD double ptr [ESP + 0x68]         ; 0045badb
        ;   Label: LAB_0045badb
    FLD ST0                             ; 0045badf
    CALL FUN_005a4b46                   ; 0045bae1
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLD ST1                             ; 0045bae6
    FMULP ST2                           ; 0045bae8
    FLD1                                ; 0045baea
    FSUBRP ST2,ST0                      ; 0045baec
    FXCH                                ; 0045baee
    FSQRT                               ; 0045baf0
    FLDZ                                ; 0045baf2
    FXCH ST2                            ; 0045baf4
    FSTP float ptr [ESP + 0x7c]         ; 0045baf6
    FSTP double ptr [ESP + 0x58]        ; 0045bafa
    FCOMP double ptr [ESP + 0x58]       ; 0045bafe
    FNSTSW AX                           ; 0045bb02
    SAHF                                ; 0045bb04
    JNC 0x0045b9f2                      ; 0045bb05
        ;   XREF to: 0045b9f2 (CONDITIONAL_JUMP)  ; LAB_0045b9f2
    FLD float ptr [ECX + 0x20]          ; 0045bb0b
    FLD1                                ; 0045bb0e
    FDIV double ptr [ESP + 0x58]        ; 0045bb10
    FLD float ptr [ECX + 0x8]           ; 0045bb14
    FMUL ST1                            ; 0045bb17
    FXCH ST2                            ; 0045bb19
    FMULP                               ; 0045bb1b
    FXCH                                ; 0045bb1d
    FSTP double ptr [ESP + 0x8]         ; 0045bb1f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045bb23
    MOV dword ptr [ESP + 0x10],EAX      ; 0045bb27
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045bb2b
    FSTP double ptr [ESP + 0x40]        ; 0045bb2f
    MOV dword ptr [ESP + 0x14],EAX      ; 0045bb33
    MOV EAX,dword ptr [ESP + 0x40]      ; 0045bb37
    MOV dword ptr [ESP + 0x38],EAX      ; 0045bb3b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045bb3f
    FLD double ptr [ESP + 0x8]          ; 0045bb43
    MOV dword ptr [ESP + 0x3c],EAX      ; 0045bb47
    FCOMP double ptr [0x005bb176]       ; 0045bb4b | DAT_005bb176
    FNSTSW AX                           ; 0045bb51
    SAHF                                ; 0045bb53
    JNC 0x0045bd07                      ; 0045bb54
        ;   XREF to: 0045bd07 (CONDITIONAL_JUMP)  ; LAB_0045bd07
    FLD double ptr [ESP + 0x8]          ; 0045bb5a
    FCOMP double ptr [0x005bb17e]       ; 0045bb5e | DAT_005bb17e
    FNSTSW AX                           ; 0045bb64
    SAHF                                ; 0045bb66
    JBE 0x0045bd07                      ; 0045bb67
        ;   XREF to: 0045bd07 (CONDITIONAL_JUMP)  ; LAB_0045bd07
    FLD double ptr [ESP + 0x8]          ; 0045bb6d
    CALL FUN_005a4b46                   ; 0045bb71
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLDZ                                ; 0045bb76
    FXCH                                ; 0045bb78
    FSTP float ptr [ESP + 0x78]         ; 0045bb7a
    FCOMP double ptr [ESP + 0x40]       ; 0045bb7e
    FNSTSW AX                           ; 0045bb82
    SAHF                                ; 0045bb84
    JBE 0x0045bb95                      ; 0045bb85
        ;   XREF to: 0045bb95 (CONDITIONAL_JUMP)  ; LAB_0045bb95
    FLD float ptr [ESP + 0x78]          ; 0045bb87
    FSUBR double ptr [0x005bb186]       ; 0045bb8b | DAT_005bb186
    FSTP float ptr [ESP + 0x78]         ; 0045bb91
    FLD float ptr [ESP + 0x78]          ; 0045bb95
        ;   Label: LAB_0045bb95
    FCOMP double ptr [0x005bb18e]       ; 0045bb99 | DAT_005bb18e
    FNSTSW AX                           ; 0045bb9f
    SAHF                                ; 0045bba1
    JNC 0x0045bbb2                      ; 0045bba2
        ;   XREF to: 0045bbb2 (CONDITIONAL_JUMP)  ; LAB_0045bbb2
    FLD float ptr [ESP + 0x78]          ; 0045bba4
    FADD float ptr [0x005bb196]         ; 0045bba8 | DAT_005bb196
    FSTP float ptr [ESP + 0x78]         ; 0045bbae
    FLD float ptr [ESP + 0x78]          ; 0045bbb2
        ;   Label: LAB_0045bbb2
    FCOMP double ptr [0x005bb186]       ; 0045bbb6 | DAT_005bb186
    FNSTSW AX                           ; 0045bbbc
    SAHF                                ; 0045bbbe
    JBE 0x0045bbcf                      ; 0045bbbf
        ;   XREF to: 0045bbcf (CONDITIONAL_JUMP)  ; LAB_0045bbcf
    FLD float ptr [ESP + 0x78]          ; 0045bbc1
    FADD float ptr [0x005bb19a]         ; 0045bbc5 | DAT_005bb19a
    FSTP float ptr [ESP + 0x78]         ; 0045bbcb
    FLD float ptr [ECX + 0x10]          ; 0045bbcf
        ;   Label: LAB_0045bbcf
    FLD1                                ; 0045bbd2
    FDIV double ptr [ESP + 0x58]        ; 0045bbd4
    FXCH                                ; 0045bbd8
    FMUL ST1                            ; 0045bbda
    FLD float ptr [ECX + 0xc]           ; 0045bbdc
    MOV EAX,dword ptr [ESP + 0x78]      ; 0045bbdf
    FMULP ST2                           ; 0045bbe3
    MOV dword ptr [ESP + 0x80],EAX      ; 0045bbe5
    FXCH                                ; 0045bbec
    FSTP double ptr [ESP]               ; 0045bbee
    MOV EAX,dword ptr [ESP]             ; 0045bbf1
    MOV dword ptr [ESP + 0x20],EAX      ; 0045bbf4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045bbf8
    FSTP double ptr [ESP + 0x28]        ; 0045bbfc
    MOV dword ptr [ESP + 0x24],EAX      ; 0045bc00
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045bc04
    MOV dword ptr [ESP + 0x48],EAX      ; 0045bc08
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045bc0c
    FLD double ptr [ESP]                ; 0045bc10
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045bc13
    FCOMP double ptr [0x005bb176]       ; 0045bc17 | DAT_005bb176
    FNSTSW AX                           ; 0045bc1d
    SAHF                                ; 0045bc1f
    JNC 0x0045bd59                      ; 0045bc20
        ;   XREF to: 0045bd59 (CONDITIONAL_JUMP)  ; LAB_0045bd59
    FLD double ptr [ESP]                ; 0045bc26
    FCOMP double ptr [0x005bb17e]       ; 0045bc29 | DAT_005bb17e
    FNSTSW AX                           ; 0045bc2f
    SAHF                                ; 0045bc31
    JBE 0x0045bd59                      ; 0045bc32
        ;   XREF to: 0045bd59 (CONDITIONAL_JUMP)  ; LAB_0045bd59
    FLD double ptr [ESP]                ; 0045bc38
    CALL FUN_005a4b46                   ; 0045bc3b
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b46()
    FLDZ                                ; 0045bc40
    FXCH                                ; 0045bc42
    FSTP float ptr [ESP + 0x70]         ; 0045bc44
    FCOMP double ptr [ESP + 0x28]       ; 0045bc48
    FNSTSW AX                           ; 0045bc4c
    SAHF                                ; 0045bc4e
    JBE 0x0045bc5f                      ; 0045bc4f
        ;   XREF to: 0045bc5f (CONDITIONAL_JUMP)  ; LAB_0045bc5f
    FLD float ptr [ESP + 0x70]          ; 0045bc51
    FSUBR double ptr [0x005bb186]       ; 0045bc55 | DAT_005bb186
    FSTP float ptr [ESP + 0x70]         ; 0045bc5b
    FLD float ptr [ESP + 0x70]          ; 0045bc5f
        ;   Label: LAB_0045bc5f
    FCOMP double ptr [0x005bb18e]       ; 0045bc63 | DAT_005bb18e
    FNSTSW AX                           ; 0045bc69
    SAHF                                ; 0045bc6b
    JNC 0x0045bc7c                      ; 0045bc6c
        ;   XREF to: 0045bc7c (CONDITIONAL_JUMP)  ; LAB_0045bc7c
    FLD float ptr [ESP + 0x70]          ; 0045bc6e
    FADD float ptr [0x005bb196]         ; 0045bc72 | DAT_005bb196
    FSTP float ptr [ESP + 0x70]         ; 0045bc78
    FLD float ptr [ESP + 0x70]          ; 0045bc7c
        ;   Label: LAB_0045bc7c
    FCOMP double ptr [0x005bb186]       ; 0045bc80 | DAT_005bb186
    FNSTSW AX                           ; 0045bc86
    SAHF                                ; 0045bc88
    JBE 0x0045bc99                      ; 0045bc89
        ;   XREF to: 0045bc99 (CONDITIONAL_JUMP)  ; LAB_0045bc99
    FLD float ptr [ESP + 0x70]          ; 0045bc8b
    FADD float ptr [0x005bb19a]         ; 0045bc8f | DAT_005bb19a
    FSTP float ptr [ESP + 0x70]         ; 0045bc95
    MOV EAX,dword ptr [ESP + 0x70]      ; 0045bc99
        ;   Label: LAB_0045bc99
    MOV dword ptr [ESP + 0x84],EAX      ; 0045bc9d
    LEA ESI,[ESP + 0x7c]                ; 0045bca4
    MOV EDI,EDX                         ; 0045bca8
    MOVSD ES:EDI,ESI                    ; 0045bcaa
    MOVSD ES:EDI,ESI                    ; 0045bcab
    MOVSD ES:EDI,ESI                    ; 0045bcac
    MOV EAX,EDX                         ; 0045bcad
    MOV ESP,EBP                         ; 0045bcaf
    POP EBP                             ; 0045bcb1
    POP EDI                             ; 0045bcb2
    POP EBX                             ; 0045bcb3
    RET                                 ; 0045bcb4
    FLD double ptr [ESP + 0x50]         ; 0045bcb5
        ;   Label: LAB_0045bcb5
    FCOMP double ptr [0x005bb16e]       ; 0045bcb9 | DAT_005bb16e
    FNSTSW AX                           ; 0045bcbf
    SAHF                                ; 0045bcc1
    JA 0x0045bce5                       ; 0045bcc2
        ;   XREF to: 0045bce5 (CONDITIONAL_JUMP)  ; LAB_0045bce5
    MOV dword ptr [ESP + 0x74],0x40490fdb ; 0045bcc4
    FLDZ                                ; 0045bccc
        ;   Label: LAB_0045bccc
    FCOMP double ptr [ESP + 0x18]       ; 0045bcce
    FNSTSW AX                           ; 0045bcd2
    SAHF                                ; 0045bcd4
    JBE 0x0045ba78                      ; 0045bcd5
        ;   XREF to: 0045ba78 (CONDITIONAL_JUMP)  ; LAB_0045ba78
    XOR byte ptr [ESP + 0x77],0x80      ; 0045bcdb
    JMP 0x0045ba78                      ; 0045bce0
        ;   XREF to: 0045ba78 (UNCONDITIONAL_JUMP)  ; LAB_0045ba78
    FLD1                                ; 0045bce5
        ;   Label: LAB_0045bce5
    FCOMP double ptr [ESP + 0x50]       ; 0045bce7
    FNSTSW AX                           ; 0045bceb
    SAHF                                ; 0045bced
    JA 0x0045bcf8                       ; 0045bcee
        ;   XREF to: 0045bcf8 (CONDITIONAL_JUMP)  ; LAB_0045bcf8
    XOR EAX,EAX                         ; 0045bcf0
    MOV dword ptr [ESP + 0x74],EAX      ; 0045bcf2
    JMP 0x0045bccc                      ; 0045bcf6
        ;   XREF to: 0045bccc (UNCONDITIONAL_JUMP)  ; LAB_0045bccc
    FLD double ptr [ESP + 0x50]         ; 0045bcf8
        ;   Label: LAB_0045bcf8
    CALL FUN_005a4b74                   ; 0045bcfc
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FSTP float ptr [ESP + 0x74]         ; 0045bd01
    JMP 0x0045bccc                      ; 0045bd05
        ;   XREF to: 0045bccc (UNCONDITIONAL_JUMP)  ; LAB_0045bccc
    FLD double ptr [ESP + 0x38]         ; 0045bd07
        ;   Label: LAB_0045bd07
    FCOMP double ptr [0x005bb16e]       ; 0045bd0b | DAT_005bb16e
    FNSTSW AX                           ; 0045bd11
    SAHF                                ; 0045bd13
    JA 0x0045bd37                       ; 0045bd14
        ;   XREF to: 0045bd37 (CONDITIONAL_JUMP)  ; LAB_0045bd37
    MOV dword ptr [ESP + 0x78],0x40490fdb ; 0045bd16
    FLDZ                                ; 0045bd1e
        ;   Label: LAB_0045bd1e
    FCOMP double ptr [ESP + 0x10]       ; 0045bd20
    FNSTSW AX                           ; 0045bd24
    SAHF                                ; 0045bd26
    JBE 0x0045bb95                      ; 0045bd27
        ;   XREF to: 0045bb95 (CONDITIONAL_JUMP)  ; LAB_0045bb95
    XOR byte ptr [ESP + 0x7b],0x80      ; 0045bd2d
    JMP 0x0045bb95                      ; 0045bd32
        ;   XREF to: 0045bb95 (UNCONDITIONAL_JUMP)  ; LAB_0045bb95
    FLD1                                ; 0045bd37
        ;   Label: LAB_0045bd37
    FCOMP double ptr [ESP + 0x38]       ; 0045bd39
    FNSTSW AX                           ; 0045bd3d
    SAHF                                ; 0045bd3f
    JA 0x0045bd4a                       ; 0045bd40
        ;   XREF to: 0045bd4a (CONDITIONAL_JUMP)  ; LAB_0045bd4a
    XOR EBX,EBX                         ; 0045bd42
    MOV dword ptr [ESP + 0x78],EBX      ; 0045bd44
    JMP 0x0045bd1e                      ; 0045bd48
        ;   XREF to: 0045bd1e (UNCONDITIONAL_JUMP)  ; LAB_0045bd1e
    FLD double ptr [ESP + 0x38]         ; 0045bd4a
        ;   Label: LAB_0045bd4a
    CALL FUN_005a4b74                   ; 0045bd4e
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FSTP float ptr [ESP + 0x78]         ; 0045bd53
    JMP 0x0045bd1e                      ; 0045bd57
        ;   XREF to: 0045bd1e (UNCONDITIONAL_JUMP)  ; LAB_0045bd1e
    FLD double ptr [ESP + 0x48]         ; 0045bd59
        ;   Label: LAB_0045bd59
    FCOMP double ptr [0x005bb16e]       ; 0045bd5d | DAT_005bb16e
    FNSTSW AX                           ; 0045bd63
    SAHF                                ; 0045bd65
    JA 0x0045bd89                       ; 0045bd66
        ;   XREF to: 0045bd89 (CONDITIONAL_JUMP)  ; LAB_0045bd89
    MOV dword ptr [ESP + 0x70],0x40490fdb ; 0045bd68
    FLDZ                                ; 0045bd70
        ;   Label: LAB_0045bd70
    FCOMP double ptr [ESP + 0x20]       ; 0045bd72
    FNSTSW AX                           ; 0045bd76
    SAHF                                ; 0045bd78
    JBE 0x0045bc5f                      ; 0045bd79
        ;   XREF to: 0045bc5f (CONDITIONAL_JUMP)  ; LAB_0045bc5f
    XOR byte ptr [ESP + 0x73],0x80      ; 0045bd7f
    JMP 0x0045bc5f                      ; 0045bd84
        ;   XREF to: 0045bc5f (UNCONDITIONAL_JUMP)  ; LAB_0045bc5f
    FLD1                                ; 0045bd89
        ;   Label: LAB_0045bd89
    FCOMP double ptr [ESP + 0x48]       ; 0045bd8b
    FNSTSW AX                           ; 0045bd8f
    SAHF                                ; 0045bd91
    JA 0x0045bd9c                       ; 0045bd92
        ;   XREF to: 0045bd9c (CONDITIONAL_JUMP)  ; LAB_0045bd9c
    XOR EDI,EDI                         ; 0045bd94
    MOV dword ptr [ESP + 0x70],EDI      ; 0045bd96
    JMP 0x0045bd70                      ; 0045bd9a
        ;   XREF to: 0045bd70 (UNCONDITIONAL_JUMP)  ; LAB_0045bd70
    FLD double ptr [ESP + 0x48]         ; 0045bd9c
        ;   Label: LAB_0045bd9c
    CALL FUN_005a4b74                   ; 0045bda0
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FSTP float ptr [ESP + 0x70]         ; 0045bda5
    JMP 0x0045bd70                      ; 0045bda9
        ;   XREF to: 0045bd70 (UNCONDITIONAL_JUMP)  ; LAB_0045bd70

