; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055fd30(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   FUN_004b7f90 at 004b8b0b
;   FUN_004ba540 at 004ba69f
;   FUN_004bf4b0 at 004bf998
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02032538
;   undefined4 DAT_0203253c
;   undefined4 DAT_02032540
;   undefined4 DAT_02032580
;   undefined4 DAT_02cf568c
;   undefined4 DAT_02cf5690
;   undefined4 DAT_02cf5694
;   undefined4 DAT_02cf5698
;   undefined4 DAT_02cf569c
;   undefined4 DAT_02cf56a0
;   undefined4 DAT_02cf56a4
;   undefined4 DAT_02cf56a8
;   ... and 11 more
;
; Called Functions:
;   FUN_004953d0
;   FUN_00555e90
;   FUN_00555fd0
;   FUN_00556050
;   FUN_00556c90
;   FUN_00556d20
;   FUN_00556db0
;   FUN_00556e30
;   FUN_00557100
;   FUN_00558050
;   FUN_005586c0
;   FUN_00558860
;   FUN_0055e8b0
;   FUN_005609b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055fd30
        ;   Label: FUN_0055fd30
    SUB ESP,0x1c                        ; 0055fd31
    PUSH 0x0                            ; 0055fd34
    MOV ESI,0x501502f9                  ; 0055fd36
    PUSH 0x0                            ; 0055fd3b
    XOR EDX,EDX                         ; 0055fd3d
    PUSH 0x0                            ; 0055fd3f
    MOV dword ptr [0x02cf5698],EDX      ; 0055fd41 | DAT_02cf5698
    MOV dword ptr [0x02cf569c],EDX      ; 0055fd47 | DAT_02cf569c
    MOV dword ptr [0x02cf56a0],EDX      ; 0055fd4d | DAT_02cf56a0
    MOV dword ptr [0x02cf568c],ESI      ; 0055fd53 | DAT_02cf568c
    MOV dword ptr [0x02cf5690],ESI      ; 0055fd59 | DAT_02cf5690
    MOV dword ptr [0x02cf5694],ESI      ; 0055fd5f | DAT_02cf5694
    CALL FUN_00557100                   ; 0055fd65
        ;   XREF to: 00557100 (UNCONDITIONAL_CALL)  ; undefined FUN_00557100()
    ADD ESP,0xc                         ; 0055fd6a
    CALL FUN_0055e8b0                   ; 0055fd6d
        ;   XREF to: 0055e8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055e8b0()
    PUSH dword ptr [0x02cf56ac]         ; 0055fd72 | DAT_02cf56ac
    PUSH dword ptr [0x02cf56a8]         ; 0055fd78 | DAT_02cf56a8
    XOR EAX,EAX                         ; 0055fd7e
    PUSH dword ptr [0x02cf56a4]         ; 0055fd80 | DAT_02cf56a4
    MOV [0x02cf569c],EAX                ; 0055fd86 | DAT_02cf569c
    CALL FUN_00558860                   ; 0055fd8b
        ;   XREF to: 00558860 (UNCONDITIONAL_CALL)  ; undefined FUN_00558860()
    ADD ESP,0xc                         ; 0055fd90
    CALL FUN_00558050                   ; 0055fd93
        ;   XREF to: 00558050 (UNCONDITIONAL_CALL)  ; undefined FUN_00558050()
    CALL FUN_005586c0                   ; 0055fd98
        ;   XREF to: 005586c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586c0()
    TEST EAX,EAX                        ; 0055fd9d
    JNZ 0x0055fda6                      ; 0055fd9f
        ;   XREF to: 0055fda6 (CONDITIONAL_JUMP)  ; LAB_0055fda6
    ADD ESP,0x1c                        ; 0055fda1
    POP ESI                             ; 0055fda4
    RET                                 ; 0055fda5
    PUSH EDI                            ; 0055fda6
        ;   Label: LAB_0055fda6
    PUSH EBX                            ; 0055fda7
    MOV EDX,0x3f800000                  ; 0055fda8
    XOR EBX,EBX                         ; 0055fdad
    MOV dword ptr [0x02cf5ec8],EDX      ; 0055fdaf | DAT_02cf5ec8
    PUSH EBX                            ; 0055fdb5
    MOV dword ptr [0x02cf5ecc],EDX      ; 0055fdb6 | DAT_02cf5ecc
    MOV dword ptr [0x02cf5ed0],EBX      ; 0055fdbc | DAT_02cf5ed0
    CALL FUN_00556e30                   ; 0055fdc2
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00556e30()
    ADD ESP,0x4                         ; 0055fdc7
    TEST EAX,EAX                        ; 0055fdca
    JZ 0x0055fecf                       ; 0055fdcc
        ;   XREF to: 0055fecf (CONDITIONAL_JUMP)  ; LAB_0055fecf
    PUSH 0x1                            ; 0055fdd2
    PUSH 0x3                            ; 0055fdd4
    CALL FUN_00556db0                   ; 0055fdd6
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556db0()
    ADD ESP,0x8                         ; 0055fddb
    PUSH EBX                            ; 0055fdde
    CALL FUN_00556d20                   ; 0055fddf
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00556d20()
    MOV dword ptr [ESP + 0x24],EAX      ; 0055fde4
    FLD float ptr [ESP + 0x24]          ; 0055fde8
    ADD ESP,0x4                         ; 0055fdec
    FMUL float ptr [0x02cf5ec8]         ; 0055fdef | DAT_02cf5ec8
    SUB ESP,0x4                         ; 0055fdf5
    FSTP float ptr [ESP]                ; 0055fdf8
    PUSH 0x3                            ; 0055fdfb
    CALL FUN_00556c90                   ; 0055fdfd
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00556c90()
    ADD ESP,0x8                         ; 0055fe02
        ;   Label: LAB_0055fe02
    CALL FUN_00555fd0                   ; 0055fe05
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    PUSH 0x3                            ; 0055fe0a
    CALL FUN_00555e90                   ; 0055fe0c
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00555e90()
    ADD ESP,0x4                         ; 0055fe11
    PUSH 0x2cf5e98                      ; 0055fe14 | DAT_02cf5e98
    MOV ESI,dword ptr [0x00603b28]      ; 0055fe19 | DAT_00603b28
    PUSH ESI                            ; 0055fe1f | DAT_01ed78c8
    MOV EDI,dword ptr [ESP + 0x34]      ; 0055fe20
    PUSH EDI                            ; 0055fe24
    CALL FUN_005609b0                   ; 0055fe25
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609b0()
    ADD ESP,0xc                         ; 0055fe2a
    MOV [0x02cf5ec0],EAX                ; 0055fe2d | DAT_02cf5ec0
    CALL FUN_00556050                   ; 0055fe32
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; undefined FUN_00556050()
    MOV EAX,[0x00603b28]                ; 0055fe37 | DAT_00603b28
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 0055fe3c | DAT_02032580
    JZ 0x0055feae                       ; 0055fe43
        ;   XREF to: 0055feae (CONDITIONAL_JUMP)  ; LAB_0055feae
    FLD float ptr [EAX + 0x15ac70]      ; 0055fe45 | DAT_02032538
    FLD float ptr [EAX + 0x15ac74]      ; 0055fe4b | DAT_0203253c
    FLD float ptr [EAX + 0x15ac78]      ; 0055fe51 | DAT_02032540
    LEA EDI,[ESP + 0x8]                 ; 0055fe57
    LEA ESI,[ESP + 0x14]                ; 0055fe5b
    FXCH ST2                            ; 0055fe5f
    FCHS                                ; 0055fe61
    FXCH                                ; 0055fe63
    FCHS                                ; 0055fe65
    FXCH ST2                            ; 0055fe67
    FCHS                                ; 0055fe69
    LEA EAX,[ESP + 0x8]                 ; 0055fe6b
    FXCH                                ; 0055fe6f
    FSTP float ptr [ESP + 0x14]         ; 0055fe71
    FXCH                                ; 0055fe75
    FSTP float ptr [ESP + 0x18]         ; 0055fe77
    FSTP float ptr [ESP + 0x1c]         ; 0055fe7b
    MOVSD ES:EDI,ESI                    ; 0055fe7f
    MOVSD ES:EDI,ESI                    ; 0055fe80
    MOVSD ES:EDI,ESI                    ; 0055fe81
    CMP EAX,0x2cf5f74                   ; 0055fe82
    JZ 0x0055fea4                       ; 0055fe87
        ;   XREF to: 0055fea4 (CONDITIONAL_JUMP)  ; LAB_0055fea4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055fe89
    MOV [0x02cf5f74],EAX                ; 0055fe8d | DAT_02cf5f74
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055fe92
    MOV [0x02cf5f78],EAX                ; 0055fe96 | DAT_02cf5f78
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055fe9b
    MOV [0x02cf5f7c],EAX                ; 0055fe9f | DAT_02cf5f7c
    MOV dword ptr [0x02cf5f84],0xffffffff ; 0055fea4 | DAT_02cf5f84
        ;   Label: LAB_0055fea4
    MOV EDX,dword ptr [0x005fba60]      ; 0055feae | DAT_005fba60
        ;   Label: LAB_0055feae
    PUSH EDX                            ; 0055feb4
    CALL FUN_004953d0                   ; 0055feb5
        ;   XREF to: 004953d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004953d0()
    MOV ECX,0x1                         ; 0055feba
    ADD ESP,0x4                         ; 0055febf
    MOV dword ptr [0x02cf5ec4],ECX      ; 0055fec2 | DAT_02cf5ec4
    POP EBX                             ; 0055fec8
    POP EDI                             ; 0055fec9
    ADD ESP,0x1c                        ; 0055feca
    POP ESI                             ; 0055fecd
    RET                                 ; 0055fece
    PUSH EBX                            ; 0055fecf
        ;   Label: LAB_0055fecf
    PUSH 0x3                            ; 0055fed0
    CALL FUN_00556db0                   ; 0055fed2
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556db0()
    JMP 0x0055fe02                      ; 0055fed7
        ;   XREF to: 0055fe02 (UNCONDITIONAL_JUMP)  ; LAB_0055fe02

