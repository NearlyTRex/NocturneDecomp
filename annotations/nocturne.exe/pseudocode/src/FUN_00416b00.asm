; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416b00(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00579092
;   undefined4 DAT_0057909a
;   undefined4 DAT_005790a2
;   undefined4 DAT_005790aa
;
; Called Functions:
;   FUN_0040a240
;   FUN_0048d0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416b00
        ;   Label: FUN_00416b00
    PUSH ESI                            ; 00416b01
    PUSH EDI                            ; 00416b02
    PUSH EBP                            ; 00416b03
    MOV EBP,ESP                         ; 00416b04
    SUB ESP,0x28                        ; 00416b06
    AND ESP,0xfffffff8                  ; 00416b09
    MOV EAX,dword ptr [EBP + 0x14]      ; 00416b0c
    CMP dword ptr [EAX + 0x744],0x0     ; 00416b0f
    JZ 0x00416c0d                       ; 00416b16
        ;   XREF to: 00416c0d (CONDITIONAL_JUMP)  ; LAB_00416c0d
    FLD float ptr [EAX + 0xcb0]         ; 00416b1c
    FSUB float ptr [EBP + 0x18]         ; 00416b22
    FST float ptr [EAX + 0xcb0]         ; 00416b25
    FLDZ                                ; 00416b2b
    FCOMPP                              ; 00416b2d
    FNSTSW AX                           ; 00416b2f
    SAHF                                ; 00416b31
    JA 0x00416c14                       ; 00416b32
        ;   XREF to: 00416c14 (CONDITIONAL_JUMP)  ; LAB_00416c14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00416b38
    MOV ECX,dword ptr [EAX + 0x744]     ; 00416b3b
    XOR EDI,EDI                         ; 00416b41
    TEST ECX,ECX                        ; 00416b43
    JLE 0x00416c0d                      ; 00416b45
        ;   XREF to: 00416c0d (CONDITIONAL_JUMP)  ; LAB_00416c0d
    ADD EAX,0x748                       ; 00416b4b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00416b50
    MOV dword ptr [ESP + 0x24],EAX      ; 00416b53
    ADD ESI,0x774                       ; 00416b57
    IMUL EBX,EDI,0x2a8                  ; 00416b5d
        ;   Label: LAB_00416b5d
    ADD EBX,dword ptr [ESP + 0x24]      ; 00416b63
    PUSH EBX                            ; 00416b67
    LEA EAX,[ESP + 0x10]                ; 00416b68
    PUSH EAX                            ; 00416b6c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00416b6d
    PUSH EDX                            ; 00416b70
    CALL FUN_0040a240                   ; 00416b71
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    FLD float ptr [EAX]                 ; 00416b76
    MOV ECX,0x3f800000                  ; 00416b78
    ADD ESP,0xc                         ; 00416b7d
    FSTP float ptr [ESI]                ; 00416b80
    FLD float ptr [EAX + 0x4]           ; 00416b82
    MOV dword ptr [ESP + 0x8],ECX       ; 00416b85
    FSTP float ptr [ESI + 0x4]          ; 00416b89
    FLD float ptr [EAX + 0x8]           ; 00416b8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00416b8f
    FSTP float ptr [ESI + 0x8]          ; 00416b92
    FLD float ptr [EAX + 0xcb0]         ; 00416b95
    FST double ptr [ESP]                ; 00416b9b
    FCOMP double ptr [0x005790aa]       ; 00416b9e | DAT_005790aa
    FNSTSW AX                           ; 00416ba4
    SAHF                                ; 00416ba6
    JNC 0x00416bb6                      ; 00416ba7
        ;   XREF to: 00416bb6 (CONDITIONAL_JUMP)  ; LAB_00416bb6
    FLD double ptr [ESP]                ; 00416ba9
    FMUL double ptr [0x005790a2]        ; 00416bac | DAT_005790a2
    FSTP float ptr [ESP + 0x8]          ; 00416bb2
    FLD float ptr [ESP + 0x8]           ; 00416bb6
        ;   Label: LAB_00416bb6
    FLD ST0                             ; 00416bba
    FMUL double ptr [0x00579092]        ; 00416bbc | DAT_00579092
    FXCH                                ; 00416bc2
    FMUL double ptr [0x0057909a]        ; 00416bc4 | DAT_0057909a
    ADD EBX,0xc                         ; 00416bca
    FXCH                                ; 00416bcd
    FSTP float ptr [ESP + 0x20]         ; 00416bcf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00416bd3
    PUSH dword ptr [EBP + 0x18]         ; 00416bd7
    MOV dword ptr [EBX + 0x150],EAX     ; 00416bda
    PUSH EBX                            ; 00416be0
    FSTP float ptr [EBX + 0x154]        ; 00416be1
    MOV dword ptr [EBX + 0x158],EAX     ; 00416be7
    CALL FUN_0048d0c0                   ; 00416bed
        ;   XREF to: 0048d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048d0c0()
    ADD ESP,0x8                         ; 00416bf2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00416bf5
    INC EDI                             ; 00416bf8
    MOV EBX,dword ptr [EAX + 0x744]     ; 00416bf9
    ADD ESI,0x2a8                       ; 00416bff
    CMP EDI,EBX                         ; 00416c05
    JL 0x00416b5d                       ; 00416c07
        ;   XREF to: 00416b5d (CONDITIONAL_JUMP)  ; LAB_00416b5d
    MOV ESP,EBP                         ; 00416c0d
        ;   Label: LAB_00416c0d
    POP EBP                             ; 00416c0f
    POP EDI                             ; 00416c10
    POP ESI                             ; 00416c11
    POP EBX                             ; 00416c12
    RET                                 ; 00416c13
    MOV EAX,dword ptr [EBP + 0x14]      ; 00416c14
        ;   Label: LAB_00416c14
    MOV dword ptr [EAX + 0x744],0x0     ; 00416c17
    MOV dword ptr [EAX + 0xcb0],0x0     ; 00416c21
    MOV ESP,EBP                         ; 00416c2b
    POP EBP                             ; 00416c2d
    POP EDI                             ; 00416c2e
    POP ESI                             ; 00416c2f
    POP EBX                             ; 00416c30
    RET                                 ; 00416c31

