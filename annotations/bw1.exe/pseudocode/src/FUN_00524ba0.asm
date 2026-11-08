; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00524ba0(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00524270 at 005243a2
;
; Referenced Globals:
;   void* switchdataD_00524b84 = 00524c68
;   undefined4 DAT_005eaf5b
;   undefined4 DAT_005eaf63
;   undefined4 DAT_005eaf6b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524ba0
        ;   Label: FUN_00524ba0
    PUSH ESI                            ; 00524ba1
    PUSH EDI                            ; 00524ba2
    PUSH EBP                            ; 00524ba3
    MOV EBP,ESP                         ; 00524ba4
    SUB ESP,0x18                        ; 00524ba6
    AND ESP,0xfffffff8                  ; 00524ba9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00524bac
    MOV EAX,dword ptr [EBP + 0x18]      ; 00524baf
    MOV EAX,dword ptr [EAX]             ; 00524bb2
    MOV EBX,dword ptr [EBP + 0x14]      ; 00524bb4
    LEA EDX,[EAX*0x8 + 0x0]             ; 00524bb7
    MOV EBX,dword ptr [EBX]             ; 00524bbe
    ADD EDX,EAX                         ; 00524bc0
    ADD EBX,0x1c28                      ; 00524bc2
    SHL EDX,0x5                         ; 00524bc8
    ADD EBX,EDX                         ; 00524bcb
    FLD float ptr [EBP + 0x20]          ; 00524bcd
    FMUL float ptr [EBX + 0x20]         ; 00524bd0
    XOR EDI,EDI                         ; 00524bd3
    XOR ECX,ECX                         ; 00524bd5
    FADD float ptr [ESI]                ; 00524bd7
    MOV EDX,dword ptr [EBX + 0x78]      ; 00524bd9
    FSTP float ptr [ESP + 0xc]          ; 00524bdc
    TEST EDX,EDX                        ; 00524be0
    JLE 0x00524c07                      ; 00524be2
        ;   XREF to: 00524c07 (CONDITIONAL_JUMP)  ; LAB_00524c07
    MOV EDX,EBX                         ; 00524be4
    FLD float ptr [ESI]                 ; 00524be6
        ;   Label: LAB_00524be6
    FILD dword ptr [EDX + 0x7c]         ; 00524be8
    FSTP float ptr [ESP + 0x8]          ; 00524beb
    FCOMP float ptr [ESP + 0x8]         ; 00524bef
    FNSTSW AX                           ; 00524bf3
    SAHF                                ; 00524bf5
    JBE 0x00524c7f                      ; 00524bf6
        ;   XREF to: 00524c7f (CONDITIONAL_JUMP)  ; LAB_00524c7f
    INC ECX                             ; 00524bfc
        ;   Label: LAB_00524bfc
    MOV EAX,dword ptr [EBX + 0x78]      ; 00524bfd
    ADD EDX,0x8                         ; 00524c00
    CMP ECX,EAX                         ; 00524c03
    JL 0x00524be6                       ; 00524c05
        ;   XREF to: 00524be6 (CONDITIONAL_JUMP)  ; LAB_00524be6
    FILD dword ptr [EBX + 0x64]         ; 00524c07
        ;   Label: LAB_00524c07
    FADD double ptr [0x005eaf5b]        ; 00524c0a | DAT_005eaf5b
    FLD float ptr [ESP + 0xc]           ; 00524c10
    FCOMPP                              ; 00524c14
    FNSTSW AX                           ; 00524c16
    SAHF                                ; 00524c18
    JC 0x00524d1b                       ; 00524c19
        ;   XREF to: 00524d1b (CONDITIONAL_JUMP)  ; LAB_00524d1b
    MOV EDX,dword ptr [EBX + 0x60]      ; 00524c1f
    ADD EDX,dword ptr [EBX + 0x6c]      ; 00524c22
    PUSH dword ptr [EBP + 0x24]         ; 00524c25
    MOV dword ptr [ESP + 0x18],EDX      ; 00524c28
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524c2c
    FILD dword ptr [ESP + 0x18]         ; 00524c2f
    SUB ESP,0x4                         ; 00524c33
    MOV EAX,dword ptr [EAX + 0x50]      ; 00524c36
    FSTP float ptr [ESP]                ; 00524c39
    FILD dword ptr [EBX + 0x68]         ; 00524c3c
    FDIVR float ptr [ESI]               ; 00524c3f
    SUB ESP,0x4                         ; 00524c41
    FILD dword ptr [EBX + 0x60]         ; 00524c44
    FADDP                               ; 00524c47
    MOV EDX,dword ptr [EBP + 0x14]      ; 00524c49
    FSTP float ptr [ESP]                ; 00524c4c
    PUSH EDX                            ; 00524c4f
    CALL dword ptr [EAX + 0x8]          ; 00524c50
    MOV EAX,dword ptr [EBX + 0x30]      ; 00524c53
    SUB EAX,0x3                         ; 00524c56
    ADD ESP,0x10                        ; 00524c59
    CMP EAX,0x3                         ; 00524c5c
    JA 0x00524cb4                       ; 00524c5f
        ;   XREF to: 00524cb4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x524b84]  ; 00524c61 | caseD_6 | switchdataD_00524b84
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x64]      ; 00524c68
        ;   Label: caseD_3
    DEC EAX                             ; 00524c6b
    MOV dword ptr [ESP + 0x14],EAX      ; 00524c6c
    FILD dword ptr [ESP + 0x14]         ; 00524c70
    FSTP float ptr [ESI]                ; 00524c74
    MOV EAX,EDI                         ; 00524c76
    MOV ESP,EBP                         ; 00524c78
    POP EBP                             ; 00524c7a
    POP EDI                             ; 00524c7b
    POP ESI                             ; 00524c7c
    POP EBX                             ; 00524c7d
    RET                                 ; 00524c7e
    FLD float ptr [ESP + 0xc]           ; 00524c7f
        ;   Label: LAB_00524c7f
    FADD double ptr [0x005eaf6b]        ; 00524c83 | DAT_005eaf6b
    FLD float ptr [ESP + 0x8]           ; 00524c89
    FSTP double ptr [ESP]               ; 00524c8d
    FCOMP double ptr [ESP]              ; 00524c90
    FNSTSW AX                           ; 00524c93
    SAHF                                ; 00524c95
    JC 0x00524bfc                       ; 00524c96
        ;   XREF to: 00524bfc (CONDITIONAL_JUMP)  ; LAB_00524bfc
    FLD double ptr [ESP]                ; 00524c9c
    FADD double ptr [0x005eaf6b]        ; 00524c9f | DAT_005eaf6b
    MOV EDI,dword ptr [EDX + 0x80]      ; 00524ca5
    FSTP float ptr [ESP + 0xc]          ; 00524cab
    JMP 0x00524bfc                      ; 00524caf
        ;   XREF to: 00524bfc (UNCONDITIONAL_JUMP)  ; LAB_00524bfc
    MOV EAX,dword ptr [EBX + 0x38]      ; 00524cb4
        ;   Label: default
    MOV dword ptr [ESP + 0x10],EAX      ; 00524cb7
    FLD float ptr [ESP + 0x10]          ; 00524cbb
    FCOMP float ptr [0x005eaf63]        ; 00524cbf | DAT_005eaf63
    FNSTSW AX                           ; 00524cc5
    SAHF                                ; 00524cc7
    JZ 0x00524ce1                       ; 00524cc8
        ;   XREF to: 00524ce1 (CONDITIONAL_JUMP)  ; LAB_00524ce1
    MOV EDX,dword ptr [EBP + 0x18]      ; 00524cca
        ;   Label: LAB_00524cca
    MOV EAX,dword ptr [EBX + 0x34]      ; 00524ccd
    MOV dword ptr [EDX],EAX             ; 00524cd0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00524cd2
    MOV dword ptr [ESI],EAX             ; 00524cd6
    MOV EAX,EDI                         ; 00524cd8
    MOV ESP,EBP                         ; 00524cda
    POP EBP                             ; 00524cdc
    POP EDI                             ; 00524cdd
    POP ESI                             ; 00524cde
    POP EBX                             ; 00524cdf
    RET                                 ; 00524ce0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00524ce1
        ;   Label: LAB_00524ce1
    MOV EAX,dword ptr [EBX + 0x64]      ; 00524ce4
    MOV ECX,dword ptr [EBX + 0x34]      ; 00524ce7
    DEC EAX                             ; 00524cea
    PUSH ECX                            ; 00524ceb
    MOV dword ptr [ESP + 0x18],EAX      ; 00524cec
    MOV EDX,dword ptr [EDX + 0x50]      ; 00524cf0
    FILD dword ptr [ESP + 0x18]         ; 00524cf3
    SUB ESP,0x4                         ; 00524cf7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00524cfa
    FSTP float ptr [ESP]                ; 00524cfd
    MOV ECX,dword ptr [EAX]             ; 00524d00
    PUSH ECX                            ; 00524d02
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524d03
    PUSH EAX                            ; 00524d06
    CALL dword ptr [EDX + 0x4]          ; 00524d07
    ADD ESP,0x10                        ; 00524d0a
    MOV dword ptr [ESP + 0x14],EAX      ; 00524d0d
    FILD dword ptr [ESP + 0x14]         ; 00524d11
    FSTP float ptr [ESP + 0x10]         ; 00524d15
    JMP 0x00524cca                      ; 00524d19
        ;   XREF to: 00524cca (UNCONDITIONAL_JUMP)  ; LAB_00524cca
    FLD float ptr [ESP + 0xc]           ; 00524d1b
        ;   Label: LAB_00524d1b
    FILD dword ptr [EBX + 0x68]         ; 00524d1f
    FLD1                                ; 00524d22
    FDIVRP                              ; 00524d24
    FXCH                                ; 00524d26
    FMUL ST1                            ; 00524d28
    PUSH dword ptr [EBP + 0x24]         ; 00524d2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524d2d
    FILD dword ptr [EBX + 0x60]         ; 00524d30
    FXCH                                ; 00524d33
    FADD ST0,ST1                        ; 00524d35
    SUB ESP,0x4                         ; 00524d37
    MOV EAX,dword ptr [EAX + 0x50]      ; 00524d3a
    FSTP float ptr [ESP]                ; 00524d3d
    FLD float ptr [ESI]                 ; 00524d40
    FMULP ST2                           ; 00524d42
    FADDP                               ; 00524d44
    SUB ESP,0x4                         ; 00524d46
    MOV EDX,dword ptr [EBP + 0x14]      ; 00524d49
    FSTP float ptr [ESP]                ; 00524d4c
    PUSH EDX                            ; 00524d4f
    CALL dword ptr [EAX + 0x8]          ; 00524d50
    ADD ESP,0x10                        ; 00524d53
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524d56
    MOV dword ptr [ESI],EAX             ; 00524d5a
    MOV EAX,EDI                         ; 00524d5c
    MOV ESP,EBP                         ; 00524d5e
    POP EBP                             ; 00524d60
    POP EDI                             ; 00524d61
    POP ESI                             ; 00524d62
    POP EBX                             ; 00524d63
    RET                                 ; 00524d64

