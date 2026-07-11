; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00421f00(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004227b0 at 0042282b
;
; Referenced Globals:
;   undefined4 DAT_0059aea8
;
; Called Functions:
;   FUN_00423d60
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421f00
        ;   Label: FUN_00421f00
    PUSH ESI                            ; 00421f01
    SUB ESP,0x14                        ; 00421f02
    MOV ESI,dword ptr [ESP + 0x20]      ; 00421f05
    FLD float ptr [ESP + 0x24]          ; 00421f09
    FSUB float ptr [ESI + 0x19854]      ; 00421f0d
    FLD1                                ; 00421f13
    FDIV float ptr [0x0059aea8]         ; 00421f15 | DAT_0059aea8
    FLD float ptr [ESP + 0x28]          ; 00421f1b
    FSUB float ptr [ESI + 0x19858]      ; 00421f1f
    FXCH ST2                            ; 00421f25
    FMUL ST1                            ; 00421f27
    FXCH ST2                            ; 00421f29
    FMULP                               ; 00421f2b
    FXCH                                ; 00421f2d
    FSTP float ptr [ESP + 0x24]         ; 00421f2f
    FST float ptr [ESP + 0x28]          ; 00421f33
    FLD float ptr [ESP + 0x24]          ; 00421f37
    CALL FUN_00563a30                   ; 00421f3b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00421f40
    CALL FUN_00563a30                   ; 00421f42
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00421f47
    FISTP dword ptr [ESP + 0xc]         ; 00421f49
    MOV EDX,dword ptr [ESP + 0xc]       ; 00421f4d
    FISTP dword ptr [ESP + 0x8]         ; 00421f51
    TEST EDX,EDX                        ; 00421f55
    JL 0x00421fbb                       ; 00421f57
        ;   XREF to: 00421fbb (CONDITIONAL_JUMP)  ; LAB_00421fbb
    CMP EDX,0xb                         ; 00421f59
    JGE 0x00421fc3                      ; 00421f5c
        ;   XREF to: 00421fc3 (CONDITIONAL_JUMP)  ; LAB_00421fc3
    LEA EBX,[EDX + 0x1]                 ; 00421f5e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00421f61
        ;   Label: LAB_00421f61
    LEA EAX,[EDX*0x4 + 0x0]             ; 00421f65
    SUB EAX,EDX                         ; 00421f6c
    MOV EDX,EAX                         ; 00421f6e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00421f70
    SUB EAX,EBX                         ; 00421f77
    SHL EDX,0x4                         ; 00421f79
    SHL EAX,0x4                         ; 00421f7c
    LEA EBX,[ESI + EDX*0x1]             ; 00421f7f
    ADD ESI,EAX                         ; 00421f82
    MOV EAX,dword ptr [ESP + 0x8]       ; 00421f84
    TEST EAX,EAX                        ; 00421f88
    JL 0x00421fce                       ; 00421f8a
        ;   XREF to: 00421fce (CONDITIONAL_JUMP)  ; LAB_00421fce
    CMP EAX,0xb                         ; 00421f8c
    JL 0x00421fdc                       ; 00421f8f
        ;   XREF to: 00421fdc (CONDITIONAL_JUMP)  ; LAB_00421fdc
    PUSH dword ptr [ESI + 0x1274c]      ; 00421f91
    PUSH dword ptr [EBX + 0x1274c]      ; 00421f97
    CALL FUN_00423d60                   ; 00421f9d
        ;   XREF to: 00423d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423d60()
        ;   Label: LAB_00421f9d
    MOV dword ptr [ESP + 0x18],EAX      ; 00421fa2
    FLD float ptr [ESP + 0x18]          ; 00421fa6
    ADD ESP,0x8                         ; 00421faa
    FSTP float ptr [ESP + 0x4]          ; 00421fad
    MOV EAX,dword ptr [ESP + 0x4]       ; 00421fb1
    ADD ESP,0x14                        ; 00421fb5
    POP ESI                             ; 00421fb8
    POP EBX                             ; 00421fb9
    RET                                 ; 00421fba
    XOR EBX,EBX                         ; 00421fbb
        ;   Label: LAB_00421fbb
    MOV dword ptr [ESP + 0xc],EBX       ; 00421fbd
    JMP 0x00421f61                      ; 00421fc1
        ;   XREF to: 00421f61 (UNCONDITIONAL_JUMP)  ; LAB_00421f61
    MOV EBX,0xb                         ; 00421fc3
        ;   Label: LAB_00421fc3
    MOV dword ptr [ESP + 0xc],EBX       ; 00421fc8
    JMP 0x00421f61                      ; 00421fcc
        ;   XREF to: 00421f61 (UNCONDITIONAL_JUMP)  ; LAB_00421f61
    PUSH dword ptr [ESI + 0x12720]      ; 00421fce
        ;   Label: LAB_00421fce
    PUSH dword ptr [EBX + 0x12720]      ; 00421fd4
    JMP 0x00421f9d                      ; 00421fda
        ;   XREF to: 00421f9d (UNCONDITIONAL_JUMP)  ; LAB_00421f9d
    PUSH EDI                            ; 00421fdc
        ;   Label: LAB_00421fdc
    MOV EDI,EAX                         ; 00421fdd
    SHL EAX,0x2                         ; 00421fdf
    LEA EDX,[ESI + EAX*0x1]             ; 00421fe2
    PUSH dword ptr [EDX + 0x12720]      ; 00421fe5
    PUSH dword ptr [EBX + EAX*0x1 + 0x12720] ; 00421feb
    CALL FUN_00423d60                   ; 00421ff2
        ;   XREF to: 00423d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423d60()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00421ff7
    FLD float ptr [ESP + 0x1c]          ; 00421ffb
    ADD ESP,0x8                         ; 00421fff
    PUSH dword ptr [ESI + EDI*0x4 + 0x12724] ; 00422002
    PUSH dword ptr [EBX + EDI*0x4 + 0x12724] ; 00422009
    FSTP float ptr [ESP + 0xc]          ; 00422010
    CALL FUN_00423d60                   ; 00422014
        ;   XREF to: 00423d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423d60()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00422019
    FLD float ptr [ESP + 0x1c]          ; 0042201d
    ADD ESP,0x8                         ; 00422021
    SUB ESP,0x4                         ; 00422024
    FSTP float ptr [ESP]                ; 00422027
    PUSH dword ptr [ESP + 0x8]          ; 0042202a
    CALL FUN_00423d60                   ; 0042202e
        ;   XREF to: 00423d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423d60()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00422033
    FLD float ptr [ESP + 0x1c]          ; 00422037
    ADD ESP,0x8                         ; 0042203b
    FSTP float ptr [ESP + 0x8]          ; 0042203e
    POP EDI                             ; 00422042
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422043
    ADD ESP,0x14                        ; 00422047
    POP ESI                             ; 0042204a
    POP EBX                             ; 0042204b
    RET                                 ; 0042204c

