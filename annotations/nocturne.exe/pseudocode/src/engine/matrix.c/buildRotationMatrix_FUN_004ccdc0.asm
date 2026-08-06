; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_buildRotationMatrix_FUN_004ccdc0(int pitch,int yaw,int roll)
;
; Parameters:
; int              Stack[0x4]:4   pitch
; int              Stack[0x8]:4   yaw
; int              Stack[0xc]:4   roll
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_matrix.c_setCameraRotation_FUN_004ce730 at 004ce750
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_005b7648
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   ... and 4 more
;
; Called Functions:
;   engine_matrix.c_interpolatedCos_FUN_004ccaa0
;   engine_matrix.c_interpolatedSin_FUN_004cca60
;   engine_matrix.c_invertTransformMatrix_FUN_004ccae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccdc0
        ;   Label: engine_matrix.c_buildRotationMatrix_FUN_004ccdc0
    PUSH ESI                            ; 004ccdc1
    PUSH EBP                            ; 004ccdc2
    SUB ESP,0x8                         ; 004ccdc3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ccdc6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ccdca
    PUSH EDI                            ; 004ccdce
    PUSH EBX                            ; 004ccdcf
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004ccdd0
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 004ccdd5
    PUSH EBX                            ; 004ccdd8
    MOV EBP,EAX                         ; 004ccdd9
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004ccddb
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV dword ptr [ESP + 0xc],EAX       ; 004ccde0
    ADD ESP,0x4                         ; 004ccde4
    PUSH ESI                            ; 004ccde7
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004ccde8
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 004ccded
    PUSH ESI                            ; 004ccdf0
    MOV EBX,EAX                         ; 004ccdf1
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004ccdf3
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    ADD ESP,0x4                         ; 004ccdf8
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ccdfb
    PUSH EDX                            ; 004ccdff
    MOV ESI,EAX                         ; 004cce00
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004cce02
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 004cce07
    MOV ECX,dword ptr [ESP + 0x24]      ; 004cce0a
    PUSH ECX                            ; 004cce0e
    MOV EDI,EAX                         ; 004cce0f
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004cce11
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV ECX,EAX                         ; 004cce16
    ADD ESP,0x4                         ; 004cce18
    MOV EAX,ESI                         ; 004cce1b
    MOV EDX,ECX                         ; 004cce1d
    IMUL EDX                            ; 004cce1f
    SHRD EAX,EDX,0x10                   ; 004cce21
    MOV dword ptr [ESP + 0x4],EAX       ; 004cce25
    MOV EDX,EBP                         ; 004cce29
    MOV EAX,EBX                         ; 004cce2b
    IMUL EDX                            ; 004cce2d
    SHRD EAX,EDX,0x10                   ; 004cce2f
    MOV EDX,EDI                         ; 004cce33
    IMUL EDX                            ; 004cce35
    SHRD EAX,EDX,0x10                   ; 004cce37
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cce3b
    ADD EDX,EAX                         ; 004cce3f
    MOV dword ptr [0x01c039e8],EDX      ; 004cce41 | DAT_01c039e8
    MOV EDX,ECX                         ; 004cce47
    MOV EAX,EBX                         ; 004cce49
    NEG EDX                             ; 004cce4b
    IMUL EDX                            ; 004cce4d
    SHRD EAX,EDX,0x10                   ; 004cce4f
    MOV dword ptr [ESP + 0x4],EAX       ; 004cce53
    MOV EDX,EBP                         ; 004cce57
    MOV EAX,ESI                         ; 004cce59
    IMUL EDX                            ; 004cce5b
    SHRD EAX,EDX,0x10                   ; 004cce5d
    MOV EDX,EDI                         ; 004cce61
    IMUL EDX                            ; 004cce63
    SHRD EAX,EDX,0x10                   ; 004cce65
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cce69
    ADD EDX,EAX                         ; 004cce6d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cce6f
    MOV dword ptr [0x01c039ec],EDX      ; 004cce73 | DAT_01c039ec
    MOV EDX,EDI                         ; 004cce79
    IMUL EDX                            ; 004cce7b
    SHRD EAX,EDX,0x10                   ; 004cce7d
    MOV [0x01c039f0],EAX                ; 004cce81 | DAT_01c039f0
    MOV EDX,EBX                         ; 004cce86
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cce88
    IMUL EDX                            ; 004cce8c
    SHRD EAX,EDX,0x10                   ; 004cce8e
    MOV [0x01c039f4],EAX                ; 004cce92 | DAT_01c039f4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cce97
    MOV EDX,ESI                         ; 004cce9b
    IMUL EDX                            ; 004cce9d
    SHRD EAX,EDX,0x10                   ; 004cce9f
    MOV [0x01c039f8],EAX                ; 004ccea3 | DAT_01c039f8
    MOV dword ptr [0x01c039fc],EBP      ; 004ccea8 | DAT_01c039fc
    MOV EAX,EBP                         ; 004cceae
    MOV EDX,EDI                         ; 004cceb0
    NEG EAX                             ; 004cceb2
    NEG EDX                             ; 004cceb4
    MOV [0x01c039fc],EAX                ; 004cceb6 | DAT_01c039fc
    MOV EAX,ESI                         ; 004ccebb
    IMUL EDX                            ; 004ccebd
    SHRD EAX,EDX,0x10                   ; 004ccebf
    MOV dword ptr [ESP + 0x4],EAX       ; 004ccec3
    MOV EDX,EBP                         ; 004ccec7
    MOV EAX,EBX                         ; 004ccec9
    IMUL EDX                            ; 004ccecb
    SHRD EAX,EDX,0x10                   ; 004ccecd
    MOV EDX,ECX                         ; 004cced1
    IMUL EDX                            ; 004cced3
    SHRD EAX,EDX,0x10                   ; 004cced5
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cced9
    ADD EDX,EAX                         ; 004ccedd
    MOV dword ptr [0x01c03a00],EDX      ; 004ccedf | DAT_01c03a00
    MOV EAX,EDI                         ; 004ccee5
    MOV EDX,EBX                         ; 004ccee7
    IMUL EDX                            ; 004ccee9
    SHRD EAX,EDX,0x10                   ; 004cceeb
    MOV EBX,EAX                         ; 004cceef
    MOV EDX,EBP                         ; 004ccef1
    MOV EAX,ESI                         ; 004ccef3
    IMUL EDX                            ; 004ccef5
    SHRD EAX,EDX,0x10                   ; 004ccef7
    MOV EDX,ECX                         ; 004ccefb
    IMUL EDX                            ; 004ccefd
    SHRD EAX,EDX,0x10                   ; 004cceff
    MOV EDX,ECX                         ; 004ccf03
    ADD EBX,EAX                         ; 004ccf05
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ccf07
    MOV dword ptr [0x01c03a04],EBX      ; 004ccf0b | DAT_01c03a04
    IMUL EDX                            ; 004ccf11
    SHRD EAX,EDX,0x10                   ; 004ccf13
    MOV [0x01c03a08],EAX                ; 004ccf17 | DAT_01c03a08
    MOV EAX,[0x005b7620]                ; 004ccf1c | g_WindowHeight
    CMP EAX,0xc8                        ; 004ccf21
    JC 0x004cd0c6                       ; 004ccf26
        ;   XREF to: 004cd0c6 (CONDITIONAL_JUMP)  ; LAB_004cd0c6
    JA 0x004cd0bf                       ; 004ccf2c
        ;   XREF to: 004cd0bf (CONDITIONAL_JUMP)  ; LAB_004cd0bf
    MOV dword ptr [0x01cc5170],0x15555  ; 004ccf32 | DAT_01cc5170
    MOV EAX,0x10000                     ; 004ccf3c
        ;   Label: LAB_004ccf3c
    MOV EBX,dword ptr [0x01c00c48]      ; 004ccf41 | DAT_01c00c48
    MOV EDX,dword ptr [0x01c00c4c]      ; 004ccf47 | DAT_01c00c4c
    IMUL EDX                            ; 004ccf4d
    IDIV EBX                            ; 004ccf4f
    MOV ECX,EAX                         ; 004ccf51
    MOV EDX,dword ptr [0x005b761c]      ; 004ccf53 | g_WindowWidth
    NEG ECX                             ; 004ccf59
    IMUL EDX,ECX                        ; 004ccf5b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ccf5e
    SUB EAX,EDX                         ; 004ccf65
    MOV ECX,dword ptr [0x005b7620]      ; 004ccf67 | g_WindowHeight
    MOV EDX,EAX                         ; 004ccf6d
    SHL ECX,0x2                         ; 004ccf6f
    SAR EDX,0x1f                        ; 004ccf72
    IDIV ECX                            ; 004ccf75
    MOV EDX,dword ptr [0x01c039e8]      ; 004ccf77 | DAT_01c039e8
    MOV ECX,EAX                         ; 004ccf7d
    IMUL EDX                            ; 004ccf7f
    SHRD EAX,EDX,0x10                   ; 004ccf81
    MOV EDX,dword ptr [0x01c039f4]      ; 004ccf85 | DAT_01c039f4
    MOV [0x01c039e8],EAX                ; 004ccf8b | DAT_01c039e8
    MOV EAX,ECX                         ; 004ccf90
    IMUL EDX                            ; 004ccf92
    SHRD EAX,EDX,0x10                   ; 004ccf94
    MOV EDX,dword ptr [0x01c03a00]      ; 004ccf98 | DAT_01c03a00
    MOV [0x01c039f4],EAX                ; 004ccf9e | DAT_01c039f4
    MOV EAX,ECX                         ; 004ccfa3
    IMUL EDX                            ; 004ccfa5
    SHRD EAX,EDX,0x10                   ; 004ccfa7
    MOV ESI,dword ptr [0x01c00c58]      ; 004ccfab | DAT_01c00c58
    MOV [0x01c03a00],EAX                ; 004ccfb1 | DAT_01c03a00
    MOV EAX,[0x01c00c60]                ; 004ccfb6 | DAT_01c00c60
    SUB EAX,ESI                         ; 004ccfbb
    LEA EDX,[EAX*0x4 + 0x0]             ; 004ccfbd
    ADD EDX,EAX                         ; 004ccfc4
    SHL EDX,0x7                         ; 004ccfc6
    MOV EDI,dword ptr [0x005b761c]      ; 004ccfc9 | g_WindowWidth
    MOV EAX,EDX                         ; 004ccfcf
    SAR EDX,0x1f                        ; 004ccfd1
    IDIV EDI                            ; 004ccfd4
    MOV ECX,dword ptr [0x01c00c64]      ; 004ccfd6 | DAT_01c00c64
    SUB ECX,dword ptr [0x01c00c5c]      ; 004ccfdc | DAT_01c00c5c
    SHL ECX,0x5                         ; 004ccfe2
    MOV EDX,ECX                         ; 004ccfe5
    LEA EBX,[EAX*0x4 + 0x0]             ; 004ccfe7
    SHL EDX,0x4                         ; 004ccfee
    SUB EBX,EAX                         ; 004ccff1
    SUB EDX,ECX                         ; 004ccff3
    MOV ECX,dword ptr [0x005b7620]      ; 004ccff5 | g_WindowHeight
    MOV EAX,EDX                         ; 004ccffb
    SAR EDX,0x1f                        ; 004ccffd
    IDIV ECX                            ; 004cd000
    SHL EBX,0x10                        ; 004cd002
    MOV ECX,EAX                         ; 004cd005
    MOV EDX,EBX                         ; 004cd007
    MOV EAX,EBX                         ; 004cd009
    SAR EDX,0x1f                        ; 004cd00b
    IDIV ECX                            ; 004cd00e
    MOV EDX,EAX                         ; 004cd010
    SAR EDX,0x1f                        ; 004cd012
    SHL EDX,0x2                         ; 004cd015
    SBB EAX,EDX                         ; 004cd018
    SAR EAX,0x2                         ; 004cd01a
    MOV EBX,dword ptr [0x005b7648]      ; 004cd01d | DAT_005b7648
    MOV ECX,EAX                         ; 004cd023
    MOV EAX,[0x01c039e8]                ; 004cd025 | DAT_01c039e8
    MOV EDX,ECX                         ; 004cd02a
    IMUL EDX                            ; 004cd02c
    IDIV EBX                            ; 004cd02e
    MOV EBX,dword ptr [0x005b7648]      ; 004cd030 | DAT_005b7648
    MOV [0x01c039e8],EAX                ; 004cd036 | DAT_01c039e8
    MOV EDX,ECX                         ; 004cd03b
    MOV EAX,[0x01c039ec]                ; 004cd03d | DAT_01c039ec
    IMUL EDX                            ; 004cd042
    IDIV EBX                            ; 004cd044
    MOV EBX,dword ptr [0x005b7648]      ; 004cd046 | DAT_005b7648
    MOV [0x01c039ec],EAX                ; 004cd04c | DAT_01c039ec
    MOV EDX,ECX                         ; 004cd051
    MOV EAX,[0x01c039f4]                ; 004cd053 | DAT_01c039f4
    IMUL EDX                            ; 004cd058
    IDIV EBX                            ; 004cd05a
    MOV EBX,dword ptr [0x005b7648]      ; 004cd05c | DAT_005b7648
    MOV [0x01c039f4],EAX                ; 004cd062 | DAT_01c039f4
    MOV EDX,ECX                         ; 004cd067
    MOV EAX,[0x01c039f8]                ; 004cd069 | DAT_01c039f8
    IMUL EDX                            ; 004cd06e
    IDIV EBX                            ; 004cd070
    MOV [0x01c039f8],EAX                ; 004cd072 | DAT_01c039f8
    POP EDI                             ; 004cd077
    MOV EBX,dword ptr [0x005b7648]      ; 004cd078 | DAT_005b7648
    MOV EAX,[0x01c03a00]                ; 004cd07e | DAT_01c03a00
    MOV EDX,ECX                         ; 004cd083
    IMUL EDX                            ; 004cd085
    IDIV EBX                            ; 004cd087
    MOV EBX,dword ptr [0x005b7648]      ; 004cd089 | DAT_005b7648
    MOV [0x01c03a00],EAX                ; 004cd08f | DAT_01c03a00
    MOV EDX,ECX                         ; 004cd094
    MOV EAX,[0x01c03a04]                ; 004cd096 | DAT_01c03a04
    IMUL EDX                            ; 004cd09b
    IDIV EBX                            ; 004cd09d
    MOV [0x01c03a04],EAX                ; 004cd09f | DAT_01c03a04
    CALL engine_matrix.c_invertTransformMatrix_FUN_004ccae0 ; 004cd0a4
        ;   XREF to: 004ccae0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004ccae0()
    ADD ESP,0x8                         ; 004cd0a9
    POP EBP                             ; 004cd0ac
    POP ESI                             ; 004cd0ad
    POP EBX                             ; 004cd0ae
    RET                                 ; 004cd0af
    MOV dword ptr [0x01cc5170],0xaaaa   ; 004cd0b0 | DAT_01cc5170
        ;   Label: LAB_004cd0b0
    JMP 0x004ccf3c                      ; 004cd0ba
        ;   XREF to: 004ccf3c (UNCONDITIONAL_JUMP)  ; LAB_004ccf3c
    CMP EAX,0x190                       ; 004cd0bf
        ;   Label: LAB_004cd0bf
    JZ 0x004cd0b0                       ; 004cd0c4
        ;   XREF to: 004cd0b0 (CONDITIONAL_JUMP)  ; LAB_004cd0b0
    MOV dword ptr [0x01cc5170],0x10000  ; 004cd0c6 | DAT_01cc5170
        ;   Label: LAB_004cd0c6
    JMP 0x004ccf3c                      ; 004cd0d0
        ;   XREF to: 004ccf3c (UNCONDITIONAL_JUMP)  ; LAB_004ccf3c

