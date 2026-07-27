; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050bcf0(int param_1,ushort *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00590642
;   undefined4 CVector3f_01c70708.z
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bcf0
        ;   Label: core_set.cpp_FUN_0050bcf0
    PUSH ESI                            ; 0050bcf1
    PUSH EDI                            ; 0050bcf2
    PUSH EBP                            ; 0050bcf3
    SUB ESP,0x40                        ; 0050bcf4
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050bcf7
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050bcfb
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0050bcff
    XOR ESI,ESI                         ; 0050bd03
    XOR ECX,ECX                         ; 0050bd05
    XOR EDI,EDI                         ; 0050bd07
    MOV SI,word ptr [EAX]               ; 0050bd09
    MOV CX,word ptr [EAX + 0x2]         ; 0050bd0c
    MOV DI,word ptr [EAX + 0x4]         ; 0050bd10
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050bd14
    SUB EAX,ECX                         ; 0050bd1b
    LEA ECX,[ESI*0x4 + 0x0]             ; 0050bd1d
    SUB ECX,ESI                         ; 0050bd24
    SHL EAX,0x2                         ; 0050bd26
    SHL ECX,0x2                         ; 0050bd29
    ADD EAX,EDX                         ; 0050bd2c
    LEA ESI,[ECX + EDX*0x1]             ; 0050bd2e
    MOV ECX,dword ptr [EAX]             ; 0050bd31
    MOV EBP,dword ptr [ESI]             ; 0050bd33
    SUB ECX,EBP                         ; 0050bd35
    MOV dword ptr [ESP + 0x30],ECX      ; 0050bd37
    MOV EBP,dword ptr [ESI + 0x4]       ; 0050bd3b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0050bd3e
    SUB ECX,EBP                         ; 0050bd41
    MOV dword ptr [ESP + 0x34],ECX      ; 0050bd43
    MOV EBP,dword ptr [ESI + 0x8]       ; 0050bd47
    MOV ECX,dword ptr [EAX + 0x8]       ; 0050bd4a
    SUB ECX,EBP                         ; 0050bd4d
    MOV dword ptr [ESP + 0x38],ECX      ; 0050bd4f
    LEA ECX,[EDI*0x4 + 0x0]             ; 0050bd53
    SUB ECX,EDI                         ; 0050bd5a
    SHL ECX,0x2                         ; 0050bd5c
    ADD EDX,ECX                         ; 0050bd5f
    MOV ESI,dword ptr [EAX]             ; 0050bd61
    MOV ECX,dword ptr [EDX]             ; 0050bd63
    SUB ECX,ESI                         ; 0050bd65
    MOV dword ptr [ESP + 0x3c],ECX      ; 0050bd67
    FILD dword ptr [ESP + 0x38]         ; 0050bd6b
    FILD dword ptr [ESP + 0x3c]         ; 0050bd6f
    FST float ptr [ESP + 0x18]          ; 0050bd73
    FMUL ST1                            ; 0050bd77
    MOV EBP,dword ptr [EAX + 0x8]       ; 0050bd79
    MOV ECX,dword ptr [EDX + 0x4]       ; 0050bd7c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0050bd7f
    MOV EDI,dword ptr [EAX + 0x4]       ; 0050bd82
    MOV EAX,EDX                         ; 0050bd85
    FILD dword ptr [ESP + 0x34]         ; 0050bd87
    SUB EAX,EBP                         ; 0050bd8b
    FLD ST0                             ; 0050bd8d
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050bd8f
    SUB ECX,EDI                         ; 0050bd93
    FILD dword ptr [ESP + 0x3c]         ; 0050bd95
    FSTP float ptr [ESP + 0x2c]         ; 0050bd99
    FMUL float ptr [ESP + 0x2c]         ; 0050bd9d
    MOV dword ptr [ESP + 0x3c],ECX      ; 0050bda1
    FILD dword ptr [ESP + 0x3c]         ; 0050bda5
    FILD dword ptr [ESP + 0x30]         ; 0050bda9
    FST float ptr [ESP + 0xc]           ; 0050bdad
    FMUL ST1                            ; 0050bdb1
    FXCH                                ; 0050bdb3
    FMULP ST5                           ; 0050bdb5
    FLD float ptr [ESP + 0xc]           ; 0050bdb7
    FMUL float ptr [ESP + 0x2c]         ; 0050bdbb
    FXCH ST5                            ; 0050bdbf
    FSUBP ST2,ST0                       ; 0050bdc1
    FLD ST1                             ; 0050bdc3
    FMUL ST2                            ; 0050bdc5
    FXCH ST5                            ; 0050bdc7
    FSUBP ST4,ST0                       ; 0050bdc9
    FLD ST3                             ; 0050bdcb
    FMUL ST4                            ; 0050bdcd
    FLD float ptr [ESP + 0x18]          ; 0050bdcf
    FMULP ST4                           ; 0050bdd3
    FADDP ST5,ST0                       ; 0050bdd5
    FSUBRP ST2,ST0                      ; 0050bdd7
    FLD ST1                             ; 0050bdd9
    FMUL ST2                            ; 0050bddb
    FADDP ST4,ST0                       ; 0050bddd
    FXCH ST3                            ; 0050bddf
    FSTP float ptr [ESP + 0x20]         ; 0050bde1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050bde5
    MOV EDX,dword ptr [0x01c70710]      ; 0050bde9 | CVector3f_01c70708.z
    SAR EAX,0x1                         ; 0050bdef
    SUB EDX,EAX                         ; 0050bdf1
    MOV dword ptr [ESP + 0x24],EDX      ; 0050bdf3
    FLD float ptr [ESP + 0x24]          ; 0050bdf7
    FMUL double ptr [0x00590642]        ; 0050bdfb | DAT_00590642
    FXCH ST3                            ; 0050be01
    FMUL ST3                            ; 0050be03
    FXCH ST2                            ; 0050be05
    FMUL ST3                            ; 0050be07
    FXCH                                ; 0050be09
    FMULP ST3                           ; 0050be0b
    FXCH                                ; 0050be0d
    FSTP float ptr [EBX]                ; 0050be0f
    FSTP float ptr [EBX + 0x4]          ; 0050be11
    FSTP float ptr [EBX + 0x8]          ; 0050be14
    ADD ESP,0x40                        ; 0050be17
    POP EBP                             ; 0050be1a
    POP EDI                             ; 0050be1b
    POP ESI                             ; 0050be1c
    POP EBX                             ; 0050be1d
    RET                                 ; 0050be1e

