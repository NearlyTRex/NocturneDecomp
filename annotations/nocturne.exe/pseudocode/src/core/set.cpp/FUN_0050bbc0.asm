; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050bbc0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_0059063a
;   undefined4 CVector3f_01c70708.z
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bbc0
        ;   Label: core_set.cpp_FUN_0050bbc0
    PUSH ESI                            ; 0050bbc1
    PUSH EDI                            ; 0050bbc2
    PUSH EBP                            ; 0050bbc3
    SUB ESP,0x40                        ; 0050bbc4
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050bbc7
    MOV EDX,dword ptr [ESP + 0x58]      ; 0050bbcb
    MOV EBX,dword ptr [EDX + 0x24]      ; 0050bbcf
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050bbd2
    MOV ESI,dword ptr [EDX + 0x18]      ; 0050bbd9
    SUB EAX,EBX                         ; 0050bbdc
    LEA EBX,[ESI*0x4 + 0x0]             ; 0050bbde
    SUB EBX,ESI                         ; 0050bbe5
    SHL EAX,0x2                         ; 0050bbe7
    SHL EBX,0x2                         ; 0050bbea
    ADD EAX,ECX                         ; 0050bbed
    LEA ESI,[EBX + ECX*0x1]             ; 0050bbef
    MOV EBX,dword ptr [EAX]             ; 0050bbf2
    MOV EBP,dword ptr [ESI]             ; 0050bbf4
    SUB EBX,EBP                         ; 0050bbf6
    MOV dword ptr [ESP + 0x30],EBX      ; 0050bbf8
    MOV EBP,dword ptr [ESI + 0x4]       ; 0050bbfc
    MOV EBX,dword ptr [EAX + 0x4]       ; 0050bbff
    SUB EBX,EBP                         ; 0050bc02
    MOV dword ptr [ESP + 0x34],EBX      ; 0050bc04
    MOV EBP,dword ptr [ESI + 0x8]       ; 0050bc08
    MOV EBX,dword ptr [EAX + 0x8]       ; 0050bc0b
    SUB EBX,EBP                         ; 0050bc0e
    MOV EDI,dword ptr [EDX + 0x30]      ; 0050bc10
    MOV dword ptr [ESP + 0x38],EBX      ; 0050bc13
    LEA EBX,[EDI*0x4 + 0x0]             ; 0050bc17
    SUB EBX,EDI                         ; 0050bc1e
    SHL EBX,0x2                         ; 0050bc20
    ADD ECX,EBX                         ; 0050bc23
    MOV ESI,dword ptr [EAX]             ; 0050bc25
    MOV EBX,dword ptr [ECX]             ; 0050bc27
    SUB EBX,ESI                         ; 0050bc29
    MOV dword ptr [ESP + 0x3c],EBX      ; 0050bc2b
    FILD dword ptr [ESP + 0x38]         ; 0050bc2f
    FILD dword ptr [ESP + 0x3c]         ; 0050bc33
    FST float ptr [ESP + 0x14]          ; 0050bc37
    FMUL ST1                            ; 0050bc3b
    MOV EBP,dword ptr [EAX + 0x8]       ; 0050bc3d
    MOV EBX,dword ptr [ECX + 0x4]       ; 0050bc40
    MOV ECX,dword ptr [ECX + 0x8]       ; 0050bc43
    MOV EDI,dword ptr [EAX + 0x4]       ; 0050bc46
    MOV EAX,ECX                         ; 0050bc49
    FILD dword ptr [ESP + 0x34]         ; 0050bc4b
    SUB EAX,EBP                         ; 0050bc4f
    FLD ST0                             ; 0050bc51
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050bc53
    SUB EBX,EDI                         ; 0050bc57
    FILD dword ptr [ESP + 0x3c]         ; 0050bc59
    FSTP float ptr [ESP + 0x28]         ; 0050bc5d
    FMUL float ptr [ESP + 0x28]         ; 0050bc61
    MOV dword ptr [ESP + 0x3c],EBX      ; 0050bc65
    FILD dword ptr [ESP + 0x3c]         ; 0050bc69
    FILD dword ptr [ESP + 0x30]         ; 0050bc6d
    FST float ptr [ESP + 0x8]           ; 0050bc71
    FMUL ST1                            ; 0050bc75
    FXCH                                ; 0050bc77
    FMULP ST5                           ; 0050bc79
    FLD float ptr [ESP + 0x8]           ; 0050bc7b
    FMUL float ptr [ESP + 0x28]         ; 0050bc7f
    FXCH ST5                            ; 0050bc83
    FSUBP ST2,ST0                       ; 0050bc85
    FLD ST1                             ; 0050bc87
    FMUL ST2                            ; 0050bc89
    FXCH ST5                            ; 0050bc8b
    FSUBP ST4,ST0                       ; 0050bc8d
    FLD ST3                             ; 0050bc8f
    FMUL ST4                            ; 0050bc91
    FLD float ptr [ESP + 0x14]          ; 0050bc93
    FMULP ST4                           ; 0050bc97
    FADDP ST5,ST0                       ; 0050bc99
    FSUBRP ST2,ST0                      ; 0050bc9b
    FLD ST1                             ; 0050bc9d
    FMUL ST2                            ; 0050bc9f
    FADDP ST4,ST0                       ; 0050bca1
    FXCH ST3                            ; 0050bca3
    FSTP float ptr [ESP + 0x20]         ; 0050bca5
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050bca9
    MOV ECX,dword ptr [0x01c70710]      ; 0050bcad | CVector3f_01c70708.z
    SAR EAX,0x1                         ; 0050bcb3
    SUB ECX,EAX                         ; 0050bcb5
    MOV dword ptr [ESP + 0x24],ECX      ; 0050bcb7
    FLD float ptr [ESP + 0x24]          ; 0050bcbb
    FMUL double ptr [0x0059063a]        ; 0050bcbf | DAT_0059063a
    FXCH ST3                            ; 0050bcc5
    FMUL ST3                            ; 0050bcc7
    FXCH ST2                            ; 0050bcc9
    FMUL ST3                            ; 0050bccb
    FXCH                                ; 0050bccd
    FMULP ST3                           ; 0050bccf
    FXCH                                ; 0050bcd1
    FSTP float ptr [EDX + 0x8]          ; 0050bcd3
    FSTP float ptr [EDX + 0xc]          ; 0050bcd6
    FSTP float ptr [EDX + 0x10]         ; 0050bcd9
    ADD ESP,0x40                        ; 0050bcdc
    POP EBP                             ; 0050bcdf
    POP EDI                             ; 0050bce0
    POP ESI                             ; 0050bce1
    POP EBX                             ; 0050bce2
    RET                                 ; 0050bce3

