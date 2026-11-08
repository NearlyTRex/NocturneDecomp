; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00446b60(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,uint *param_5)
;
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00472c60 at 00473281
;   FUN_00473390 at 0047382f
;   FUN_004738d0 at 004739e4
;
; Referenced Globals:
;   undefined4 DAT_01510da8
;   undefined4 DAT_01510dac
;   undefined4 DAT_01510db0
;   undefined4 DAT_01510db4
;   undefined4 DAT_01510db8
;   undefined4 DAT_01510dbc
;   undefined4 DAT_01510dc0
;   undefined4 DAT_01510dc4
;   undefined4 DAT_01510dc8
;
; Called Functions:
;   FUN_00444a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446b60
        ;   Label: FUN_00446b60
    PUSH ESI                            ; 00446b61
    PUSH EDI                            ; 00446b62
    PUSH EBP                            ; 00446b63
    MOV EBP,ESP                         ; 00446b64
    SUB ESP,0x30                        ; 00446b66
    AND ESP,0xfffffff8                  ; 00446b69
    MOV EBX,dword ptr [EBP + 0x14]      ; 00446b6c
    MOV ECX,0xffffffff                  ; 00446b6f
    MOV EDX,0x3f800347                  ; 00446b74
    MOV EDI,dword ptr [EBX + 0x28]      ; 00446b79
    XOR ESI,ESI                         ; 00446b7c
    MOV dword ptr [ESP + 0x24],ECX      ; 00446b7e
    MOV dword ptr [ESP + 0x28],EDX      ; 00446b82
    TEST EDI,EDI                        ; 00446b86
    JLE 0x00446beb                      ; 00446b88
        ;   XREF to: 00446beb (CONDITIONAL_JUMP)  ; LAB_00446beb
    XOR EDI,EDI                         ; 00446b8a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00446b8c
        ;   Label: LAB_00446b8c
    PUSH EAX                            ; 00446b8f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00446b90
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00446b93
    PUSH EDX                            ; 00446b96
    ADD EAX,EDI                         ; 00446b97
    PUSH EAX                            ; 00446b99
    CALL FUN_00444a40                   ; 00446b9a
        ;   XREF to: 00444a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00444a40()
    MOV dword ptr [ESP + 0x38],EAX      ; 00446b9f
    FLD float ptr [ESP + 0x38]          ; 00446ba3
    ADD ESP,0xc                         ; 00446ba7
    FLDZ                                ; 00446baa
    FXCH                                ; 00446bac
    FST float ptr [ESP + 0x8]           ; 00446bae
    FSTP double ptr [ESP]               ; 00446bb2
    FCOMP double ptr [ESP]              ; 00446bb5
    FNSTSW AX                           ; 00446bb8
    SAHF                                ; 00446bba
    JA 0x00446be0                       ; 00446bbb
        ;   XREF to: 00446be0 (CONDITIONAL_JUMP)  ; LAB_00446be0
    FLD float ptr [ESP + 0x8]           ; 00446bbd
    FCOMP float ptr [ESP + 0x28]        ; 00446bc1
    FNSTSW AX                           ; 00446bc5
    SAHF                                ; 00446bc7
    JNC 0x00446be0                      ; 00446bc8
        ;   XREF to: 00446be0 (CONDITIONAL_JUMP)  ; LAB_00446be0
    FLD1                                ; 00446bca
    FCOMP double ptr [ESP]              ; 00446bcc
    FNSTSW AX                           ; 00446bcf
    SAHF                                ; 00446bd1
    JC 0x00446be0                       ; 00446bd2
        ;   XREF to: 00446be0 (CONDITIONAL_JUMP)  ; LAB_00446be0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00446bd4
    MOV dword ptr [ESP + 0x24],ESI      ; 00446bd8
    MOV dword ptr [ESP + 0x28],EAX      ; 00446bdc
    INC ESI                             ; 00446be0
        ;   Label: LAB_00446be0
    MOV EAX,dword ptr [EBX + 0x28]      ; 00446be1
    ADD EDI,0x20                        ; 00446be4
    CMP ESI,EAX                         ; 00446be7
    JL 0x00446b8c                       ; 00446be9
        ;   XREF to: 00446b8c (CONDITIONAL_JUMP)  ; LAB_00446b8c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00446beb
        ;   Label: LAB_00446beb
    TEST EDX,EDX                        ; 00446bef
    JL 0x00446cc8                       ; 00446bf1
        ;   XREF to: 00446cc8 (CONDITIONAL_JUMP)  ; LAB_00446cc8
    LEA EDI,[ESP + 0xc]                 ; 00446bf7
    MOV EAX,EDX                         ; 00446bfb
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00446bfd
    SHL EAX,0x5                         ; 00446c00
    MOV ECX,dword ptr [EBP + 0x20]      ; 00446c03
    FLD float ptr [ESI + EAX*0x1 + 0xc] ; 00446c06
    FLD float ptr [ESI + EAX*0x1 + 0x10] ; 00446c0a
    FLD float ptr [ESI + EAX*0x1 + 0x14] ; 00446c0e
    FXCH ST2                            ; 00446c12
    FCHS                                ; 00446c14
    FXCH                                ; 00446c16
    FCHS                                ; 00446c18
    FXCH ST2                            ; 00446c1a
    FCHS                                ; 00446c1c
    LEA ESI,[ESP + 0x18]                ; 00446c1e
    LEA EAX,[ESP + 0xc]                 ; 00446c22
    FXCH                                ; 00446c26
    FSTP float ptr [ESP + 0x18]         ; 00446c28
    FXCH                                ; 00446c2c
    FSTP float ptr [ESP + 0x1c]         ; 00446c2e
    FSTP float ptr [ESP + 0x20]         ; 00446c32
    MOVSD ES:EDI,ESI                    ; 00446c36
    MOVSD ES:EDI,ESI                    ; 00446c37
    MOVSD ES:EDI,ESI                    ; 00446c38
    CMP EAX,ECX                         ; 00446c39
    JNZ 0x00446cd3                      ; 00446c3b
        ;   XREF to: 00446cd3 (CONDITIONAL_JUMP)  ; LAB_00446cd3
    MOV ESI,dword ptr [ESP + 0x24]      ; 00446c41
        ;   Label: LAB_00446c41
    MOV EAX,dword ptr [EBX + 0x30]      ; 00446c45
    ADD EAX,ESI                         ; 00446c48
    MOV AL,byte ptr [EAX]               ; 00446c4a
    MOV ESI,dword ptr [EBP + 0x24]      ; 00446c4c
    AND EAX,0xff                        ; 00446c4f
    MOV dword ptr [ESI],EAX             ; 00446c54
    MOV EAX,dword ptr [ESP + 0x24]      ; 00446c56
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00446c5a
    SHL EAX,0x5                         ; 00446c5d
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 00446c60
    CMP EAX,0x1510da8                   ; 00446c63
    JZ 0x00446c84                       ; 00446c68
        ;   XREF to: 00446c84 (CONDITIONAL_JUMP)  ; LAB_00446c84
    FLD float ptr [EAX]                 ; 00446c6a
    FLD float ptr [EAX + 0x8]           ; 00446c6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446c6f
    MOV dword ptr [0x01510dac],EDX      ; 00446c72 | DAT_01510dac
    FSTP float ptr [0x01510db0]         ; 00446c78 | DAT_01510db0
    FSTP float ptr [0x01510da8]         ; 00446c7e | DAT_01510da8
    MOV EAX,dword ptr [ESP + 0x24]      ; 00446c84
        ;   Label: LAB_00446c84
    MOV ESI,dword ptr [EBX + 0x2c]      ; 00446c88
    SHL EAX,0x5                         ; 00446c8b
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00446c8e
    CMP EAX,0x1510db4                   ; 00446c92
    JZ 0x00446cb3                       ; 00446c97
        ;   XREF to: 00446cb3 (CONDITIONAL_JUMP)  ; LAB_00446cb3
    FLD float ptr [EAX]                 ; 00446c99
    FLD float ptr [EAX + 0x8]           ; 00446c9b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446c9e
    MOV dword ptr [0x01510db8],EDX      ; 00446ca1 | DAT_01510db8
    FSTP float ptr [0x01510dbc]         ; 00446ca7 | DAT_01510dbc
    FSTP float ptr [0x01510db4]         ; 00446cad | DAT_01510db4
    MOV EAX,dword ptr [ESP + 0x24]      ; 00446cb3
        ;   Label: LAB_00446cb3
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00446cb7
    SHL EAX,0x5                         ; 00446cba
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00446cbd
    CMP EAX,0x1510dc0                   ; 00446cc1
    JNZ 0x00446cec                      ; 00446cc6
        ;   XREF to: 00446cec (CONDITIONAL_JUMP)  ; LAB_00446cec
    MOV EAX,dword ptr [ESP + 0x28]      ; 00446cc8
        ;   Label: LAB_00446cc8
    MOV ESP,EBP                         ; 00446ccc
    POP EBP                             ; 00446cce
    POP EDI                             ; 00446ccf
    POP ESI                             ; 00446cd0
    POP EBX                             ; 00446cd1
    RET                                 ; 00446cd2
    MOV EAX,dword ptr [ESP + 0xc]       ; 00446cd3
        ;   Label: LAB_00446cd3
    MOV dword ptr [ECX],EAX             ; 00446cd7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00446cd9
    MOV dword ptr [ECX + 0x4],EAX       ; 00446cdd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00446ce0
    MOV dword ptr [ECX + 0x8],EAX       ; 00446ce4
    JMP 0x00446c41                      ; 00446ce7
        ;   XREF to: 00446c41 (UNCONDITIONAL_JUMP)  ; LAB_00446c41
    FLD float ptr [EAX]                 ; 00446cec
        ;   Label: LAB_00446cec
    FLD float ptr [EAX + 0x8]           ; 00446cee
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446cf1
    MOV dword ptr [0x01510dc4],EDX      ; 00446cf4 | DAT_01510dc4
    FSTP float ptr [0x01510dc8]         ; 00446cfa | DAT_01510dc8
    FSTP float ptr [0x01510dc0]         ; 00446d00 | DAT_01510dc0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00446d06
    MOV ESP,EBP                         ; 00446d0a
    POP EBP                             ; 00446d0c
    POP EDI                             ; 00446d0d
    POP ESI                             ; 00446d0e
    POP EBX                             ; 00446d0f
    RET                                 ; 00446d10

