; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0043fc80(int param_1,int *param_2,int *param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00446810 at 00446ab5
;   FUN_004475a0 at 00447638
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fc80
        ;   Label: FUN_0043fc80
    PUSH ESI                            ; 0043fc81
    PUSH EDI                            ; 0043fc82
    PUSH EBP                            ; 0043fc83
    SUB ESP,0x1c                        ; 0043fc84
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043fc87
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043fc8b
    MOV ECX,dword ptr [ESP + 0x38]      ; 0043fc8f
    CMP dword ptr [ESP + 0x3c],0x0      ; 0043fc93
    JZ 0x0043fe24                       ; 0043fc98
        ;   XREF to: 0043fe24 (CONDITIONAL_JUMP)  ; LAB_0043fe24
    MOV EBX,dword ptr [ESI]             ; 0043fc9e
    MOV EAX,dword ptr [ECX]             ; 0043fca0
    SUB EAX,EBX                         ; 0043fca2
    MOV EDI,dword ptr [ESI + 0x4]       ; 0043fca4
    MOV dword ptr [ESP + 0x14],EAX      ; 0043fca7
    MOV EAX,dword ptr [ECX + 0x4]       ; 0043fcab
    SUB EAX,EDI                         ; 0043fcae
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043fcb0
    MOV dword ptr [ESP + 0xc],EAX       ; 0043fcb3
    MOV EAX,dword ptr [ECX + 0x8]       ; 0043fcb7
    SUB EAX,EDX                         ; 0043fcba
    MOV dword ptr [ESP + 0x10],EAX      ; 0043fcbc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0043fcc0
    MOV EDX,EAX                         ; 0043fcc4
    SAR EDX,0x1f                        ; 0043fcc6
    SHL EDX,0x8                         ; 0043fcc9
    SBB EAX,EDX                         ; 0043fccc
    SAR EAX,0x8                         ; 0043fcce
    MOV dword ptr [ESP + 0x3c],EAX      ; 0043fcd1
    TEST EAX,EAX                        ; 0043fcd5
    JZ 0x0043fe1c                       ; 0043fcd7
        ;   XREF to: 0043fe1c (CONDITIONAL_JUMP)  ; LAB_0043fe1c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043fcdd
    MOV EDX,EAX                         ; 0043fce1
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0043fce3
    SAR EDX,0x1f                        ; 0043fce7
    IDIV EBX                            ; 0043fcea
    MOV dword ptr [ESP + 0x14],EAX      ; 0043fcec
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043fcf0
    MOV EDX,EAX                         ; 0043fcf4
    SAR EDX,0x1f                        ; 0043fcf6
    IDIV EBX                            ; 0043fcf9
    MOV dword ptr [ESP + 0xc],EAX       ; 0043fcfb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fcff
    MOV EDX,EAX                         ; 0043fd03
    SAR EDX,0x1f                        ; 0043fd05
    IDIV EBX                            ; 0043fd08
    MOV EDI,ESP                         ; 0043fd0a
    MOVSD ES:EDI,ESI                    ; 0043fd0c
    MOVSD ES:EDI,ESI                    ; 0043fd0d
    MOVSD ES:EDI,ESI                    ; 0043fd0e
    MOV ECX,EBX                         ; 0043fd0f
    MOV ESI,dword ptr [ESP]             ; 0043fd11
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043fd14
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043fd18
    MOV dword ptr [ESP + 0x10],EAX      ; 0043fd1c
    XOR EBX,EBX                         ; 0043fd20
    MOV EAX,dword ptr [EBP + 0x1000]    ; 0043fd22
    MOV dword ptr [ESP + 0x18],EBX      ; 0043fd28
    ADD ESI,EAX                         ; 0043fd2c
    MOV EAX,dword ptr [EBP + 0x1004]    ; 0043fd2e
    MOV dword ptr [ESP],ESI             ; 0043fd34
    ADD EDI,EAX                         ; 0043fd37
    MOV EAX,dword ptr [EBP + 0x1008]    ; 0043fd39
    XOR ESI,ESI                         ; 0043fd3f
    ADD EDX,EAX                         ; 0043fd41
    MOV dword ptr [ESP + 0x4],EDI       ; 0043fd43
    MOV dword ptr [ESP + 0x8],EDX       ; 0043fd47
    TEST ECX,ECX                        ; 0043fd4b
    JLE 0x0043fe18                      ; 0043fd4d
        ;   XREF to: 0043fe18 (CONDITIONAL_JUMP)  ; LAB_0043fe18
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043fd53
        ;   Label: LAB_0043fd53
    MOV EDX,EAX                         ; 0043fd57
    SAR EDX,0x1f                        ; 0043fd59
    SHL EDX,0x8                         ; 0043fd5c
    SBB EAX,EDX                         ; 0043fd5f
    SAR EAX,0x8                         ; 0043fd61
    MOV ECX,EAX                         ; 0043fd64
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043fd66
    MOV EDX,EAX                         ; 0043fd6a
    SAR EDX,0x1f                        ; 0043fd6c
    SHL EDX,0x8                         ; 0043fd6f
    SBB EAX,EDX                         ; 0043fd72
    SAR EAX,0x8                         ; 0043fd74
    AND ECX,0xf                         ; 0043fd77
    SHL ECX,0x8                         ; 0043fd7a
    AND EAX,0xf                         ; 0043fd7d
    ADD ECX,EBP                         ; 0043fd80
    SHL EAX,0x4                         ; 0043fd82
    ADD ECX,EAX                         ; 0043fd85
    MOV EAX,dword ptr [ESP]             ; 0043fd87
    MOV EDX,EAX                         ; 0043fd8a
    SAR EDX,0x1f                        ; 0043fd8c
    SHL EDX,0x8                         ; 0043fd8f
    SBB EAX,EDX                         ; 0043fd92
    SAR EAX,0x8                         ; 0043fd94
    AND EAX,0xf                         ; 0043fd97
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0043fd9a
    MOV EDX,ECX                         ; 0043fd9d
    MOV EAX,dword ptr [EBP + 0x101c]    ; 0043fd9f
    AND EDX,0xff                        ; 0043fda5
    IMUL EDX                            ; 0043fdab
    SHRD EAX,EDX,0x10                   ; 0043fdad
    MOV EBX,dword ptr [EBP + 0x1018]    ; 0043fdb1
    MOV ECX,EAX                         ; 0043fdb7
    TEST EBX,EBX                        ; 0043fdb9
    JZ 0x0043fdd1                       ; 0043fdbb
        ;   XREF to: 0043fdd1 (CONDITIONAL_JUMP)  ; LAB_0043fdd1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043fdbd
    CMP EAX,EBX                         ; 0043fdc1
    JLE 0x0043fe28                      ; 0043fdc3
        ;   XREF to: 0043fe28 (CONDITIONAL_JUMP)  ; LAB_0043fe28
    XOR EAX,EAX                         ; 0043fdc5
    MOV EDX,ECX                         ; 0043fdc7
        ;   Label: LAB_0043fdc7
    IMUL EDX                            ; 0043fdc9
    SHRD EAX,EDX,0x10                   ; 0043fdcb
    MOV ECX,EAX                         ; 0043fdcf
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043fdd1
        ;   Label: LAB_0043fdd1
    ADD EBX,ECX                         ; 0043fdd5
    MOV dword ptr [ESP + 0x18],EBX      ; 0043fdd7
    CMP EBX,0x4000                      ; 0043fddb
    JA 0x0043fe46                       ; 0043fde1
        ;   XREF to: 0043fe46 (CONDITIONAL_JUMP)  ; LAB_0043fe46
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043fde3
    MOV EBX,dword ptr [ESP]             ; 0043fde7
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043fdea
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043fdee
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0043fdf2
    ADD EBX,EAX                         ; 0043fdf6
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043fdf8
    INC ESI                             ; 0043fdfc
    ADD EDI,EAX                         ; 0043fdfd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043fdff
    MOV dword ptr [ESP],EBX             ; 0043fe03
    ADD EDX,EAX                         ; 0043fe06
    MOV dword ptr [ESP + 0x4],EDI       ; 0043fe08
    MOV dword ptr [ESP + 0x8],EDX       ; 0043fe0c
    CMP ESI,ECX                         ; 0043fe10
    JL 0x0043fd53                       ; 0043fe12
        ;   XREF to: 0043fd53 (CONDITIONAL_JUMP)  ; LAB_0043fd53
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043fe18
        ;   Label: LAB_0043fe18
    ADD ESP,0x1c                        ; 0043fe1c
        ;   Label: LAB_0043fe1c
    POP EBP                             ; 0043fe1f
    POP EDI                             ; 0043fe20
    POP ESI                             ; 0043fe21
    POP EBX                             ; 0043fe22
    RET                                 ; 0043fe23
    XOR EAX,EAX                         ; 0043fe24
        ;   Label: LAB_0043fe24
    JMP 0x0043fe1c                      ; 0043fe26
        ;   XREF to: 0043fe1c (UNCONDITIONAL_JUMP)  ; LAB_0043fe1c
    TEST EAX,EAX                        ; 0043fe28
        ;   Label: LAB_0043fe28
    JGE 0x0043fe33                      ; 0043fe2a
        ;   XREF to: 0043fe33 (CONDITIONAL_JUMP)  ; LAB_0043fe33
    MOV EAX,0x10000                     ; 0043fe2c
    JMP 0x0043fdc7                      ; 0043fe31
        ;   XREF to: 0043fdc7 (UNCONDITIONAL_JUMP)  ; LAB_0043fdc7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043fe33
        ;   Label: LAB_0043fe33
    MOV EAX,EBX                         ; 0043fe37
    SUB EAX,EDX                         ; 0043fe39
    MOV EDX,0x10000                     ; 0043fe3b
    IMUL EDX                            ; 0043fe40
    IDIV EBX                            ; 0043fe42
    JMP 0x0043fdc7                      ; 0043fe44
        ;   XREF to: 0043fdc7 (UNCONDITIONAL_JUMP)  ; LAB_0043fdc7
    MOV EAX,0x4000                      ; 0043fe46
        ;   Label: LAB_0043fe46
    ADD ESP,0x1c                        ; 0043fe4b
    POP EBP                             ; 0043fe4e
    POP EDI                             ; 0043fe4f
    POP ESI                             ; 0043fe50
    POP EBX                             ; 0043fe51
    RET                                 ; 0043fe52

