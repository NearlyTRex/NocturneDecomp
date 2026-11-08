; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00474940(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[2]:
;   FUN_00421c90 at 00422041
;   FUN_0053bc80 at 0053bcc7
;
; Referenced Globals:
;   undefined4 DAT_005bca11
;   undefined4 DAT_005bca15
;   undefined4 DAT_01548b58
;   undefined4 DAT_01548b5c
;   undefined4 DAT_01548b60
;   undefined4 DAT_01548b64
;   undefined4 DAT_01548b68
;   undefined4 DAT_01548b6c
;   undefined4 DAT_01548b70
;   undefined4 DAT_01548b74
;   undefined4 DAT_01548b78
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   FUN_00454360
;   FUN_00473b60
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474940
        ;   Label: FUN_00474940
    PUSH ESI                            ; 00474941
    PUSH EDI                            ; 00474942
    PUSH EBP                            ; 00474943
    MOV EBP,ESP                         ; 00474944
    SUB ESP,0x58                        ; 00474946
    AND ESP,0xfffffff8                  ; 00474949
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047494c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047494f
    LEA EDI,[ESP + 0x4]                 ; 00474952
    MOV ESI,EAX                         ; 00474956
    MOVSD ES:EDI,ESI                    ; 00474958
    MOVSD ES:EDI,ESI                    ; 00474959
    MOVSD ES:EDI,ESI                    ; 0047495a
    FLD float ptr [ESP + 0x8]           ; 0047495b
    FLD float ptr [ESP + 0x4]           ; 0047495f
    LEA EDI,[ESP + 0x10]                ; 00474963
    MOV ESI,EAX                         ; 00474967
    FXCH                                ; 00474969
    FADD float ptr [0x005bca11]         ; 0047496b | DAT_005bca11
    MOVSD ES:EDI,ESI                    ; 00474971
    MOVSD ES:EDI,ESI                    ; 00474972
    MOVSD ES:EDI,ESI                    ; 00474973
    FSTP float ptr [ESP + 0x8]          ; 00474974
    FSUB float ptr [EBX + 0x10]         ; 00474978
    FDIV float ptr [EBX + 0x28]         ; 0047497b
    FLD float ptr [ESP + 0x8]           ; 0047497e
    FSUB float ptr [EBX + 0x14]         ; 00474982
    FLD1                                ; 00474985
    FDIV float ptr [EBX + 0x2c]         ; 00474987
    FLD float ptr [ESP + 0xc]           ; 0047498a
    FSUB float ptr [EBX + 0x18]         ; 0047498e
    FDIV float ptr [EBX + 0x30]         ; 00474991
    FLD float ptr [ESP + 0x14]          ; 00474994
    FADD float ptr [0x005bca15]         ; 00474998 | DAT_005bca15
    FST float ptr [ESP + 0x14]          ; 0047499e
    FSUB float ptr [EBX + 0x14]         ; 004749a2
    FXCH ST3                            ; 004749a5
    FMUL ST2                            ; 004749a7
    FXCH ST3                            ; 004749a9
    FMULP ST2                           ; 004749ab
    FLD float ptr [ESP + 0x10]          ; 004749ad
    FLD float ptr [ESP + 0x18]          ; 004749b1
    LEA EDI,[ESP + 0x1c]                ; 004749b5
    LEA ESI,[ESP + 0x28]                ; 004749b9
    FXCH                                ; 004749bd
    FSUB float ptr [ESP + 0x4]          ; 004749bf
    FXCH                                ; 004749c3
    FSUB float ptr [ESP + 0xc]          ; 004749c5
    FXCH                                ; 004749c9
    FSTP float ptr [ESP + 0x28]         ; 004749cb
    FLD float ptr [ESP + 0x14]          ; 004749cf
    FSUB float ptr [ESP + 0x8]          ; 004749d3
    FXCH                                ; 004749d7
    FSTP float ptr [ESP + 0x30]         ; 004749d9
    FSTP float ptr [ESP + 0x2c]         ; 004749dd
    FXCH ST3                            ; 004749e1
    CALL FUN_005a3120                   ; 004749e3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 004749e8
    CALL FUN_005a3120                   ; 004749ea
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 004749ef
    FISTP dword ptr [ESP + 0x44]        ; 004749f1
    FXCH ST2                            ; 004749f5
    FISTP dword ptr [ESP + 0x48]        ; 004749f7
    CALL FUN_005a3120                   ; 004749fb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474a00
    CALL FUN_005a3120                   ; 00474a02
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474a07
    FISTP dword ptr [ESP + 0x50]        ; 00474a09
    FISTP dword ptr [ESP + 0x4c]        ; 00474a0d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00474a11
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00474a15
    MOVSD ES:EDI,ESI                    ; 00474a19
    MOVSD ES:EDI,ESI                    ; 00474a1a
    MOVSD ES:EDI,ESI                    ; 00474a1b
    CMP EAX,EDX                         ; 00474a1c
    JL 0x00474ac4                       ; 00474a1e
        ;   XREF to: 00474ac4 (CONDITIONAL_JUMP)  ; LAB_00474ac4
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00474a24
    MOV EDX,dword ptr [ESP + 0x48]      ; 00474a27
        ;   Label: LAB_00474a27
    PUSH EDX                            ; 00474a2b
    MOV ECX,dword ptr [ESP + 0x54]      ; 00474a2c
    PUSH ECX                            ; 00474a30
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00474a31
    PUSH ESI                            ; 00474a35
    PUSH EBX                            ; 00474a36
    CALL FUN_00473b60                   ; 00474a37
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 00474a3c
    TEST EAX,EAX                        ; 00474a3f
    JZ 0x00474aaf                       ; 00474a41
        ;   XREF to: 00474aaf (CONDITIONAL_JUMP)  ; LAB_00474aaf
    PUSH EDI                            ; 00474a43
    LEA EDX,[ESP + 0x38]                ; 00474a44
    PUSH EDX                            ; 00474a48
    LEA EDX,[ESP + 0x24]                ; 00474a49
    PUSH EDX                            ; 00474a4d
    LEA EDX,[ESP + 0x10]                ; 00474a4e
    PUSH EDX                            ; 00474a52
    PUSH EAX                            ; 00474a53
    CALL FUN_00454360                   ; 00474a54
        ;   XREF to: 00454360 (UNCONDITIONAL_CALL)  ; undefined FUN_00454360()
    MOV dword ptr [ESP + 0x68],EAX      ; 00474a59
    FLD float ptr [ESP + 0x68]          ; 00474a5d
    ADD ESP,0x14                        ; 00474a61
    FST float ptr [ESP]                 ; 00474a64
    FLD1                                ; 00474a67
    FCOMPP                              ; 00474a69
    FNSTSW AX                           ; 00474a6b
    SAHF                                ; 00474a6d
    JC 0x00474aaf                       ; 00474a6e
        ;   XREF to: 00474aaf (CONDITIONAL_JUMP)  ; LAB_00474aaf
    CMP dword ptr [EBP + 0x20],0x0      ; 00474a70
    JZ 0x00474a95                       ; 00474a74
        ;   XREF to: 00474a95 (CONDITIONAL_JUMP)  ; LAB_00474a95
    MOV EDX,dword ptr [EBP + 0x20]      ; 00474a76
    LEA EAX,[ESP + 0x34]                ; 00474a79
    CMP EAX,EDX                         ; 00474a7d
    JZ 0x00474a95                       ; 00474a7f
        ;   XREF to: 00474a95 (CONDITIONAL_JUMP)  ; LAB_00474a95
    MOV EAX,dword ptr [ESP + 0x34]      ; 00474a81
    MOV dword ptr [EDX],EAX             ; 00474a85
    MOV EAX,dword ptr [ESP + 0x38]      ; 00474a87
    MOV dword ptr [EDX + 0x4],EAX       ; 00474a8b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00474a8e
    MOV dword ptr [EDX + 0x8],EAX       ; 00474a92
    FLD float ptr [ESP]                 ; 00474a95
        ;   Label: LAB_00474a95
    FMUL float ptr [ESP + 0x20]         ; 00474a98
    FADD float ptr [ESP + 0x8]          ; 00474a9c
    FSTP float ptr [ESP + 0x40]         ; 00474aa0
    MOV EAX,dword ptr [ESP + 0x40]      ; 00474aa4
    MOV ESP,EBP                         ; 00474aa8
    POP EBP                             ; 00474aaa
    POP EDI                             ; 00474aab
    POP ESI                             ; 00474aac
    POP EBX                             ; 00474aad
    RET                                 ; 00474aae
    MOV ECX,dword ptr [ESP + 0x50]      ; 00474aaf
        ;   Label: LAB_00474aaf
    DEC ECX                             ; 00474ab3
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00474ab4
    MOV dword ptr [ESP + 0x50],ECX      ; 00474ab8
    CMP ECX,ESI                         ; 00474abc
    JGE 0x00474a27                      ; 00474abe
        ;   XREF to: 00474a27 (CONDITIONAL_JUMP)  ; LAB_00474a27
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00474ac4
        ;   Label: LAB_00474ac4
    TEST EDI,EDI                        ; 00474ac7
    JZ 0x00474ad1                       ; 00474ac9
        ;   XREF to: 00474ad1 (CONDITIONAL_JUMP)  ; LAB_00474ad1
    MOV dword ptr [EDI],0x1             ; 00474acb
    MOV EAX,dword ptr [EBP + 0x20]      ; 00474ad1
        ;   Label: LAB_00474ad1
    TEST EAX,EAX                        ; 00474ad4
    JZ 0x00474aec                       ; 00474ad6
        ;   XREF to: 00474aec (CONDITIONAL_JUMP)  ; LAB_00474aec
    MOV dword ptr [EAX + 0x4],0x3f800000 ; 00474ad8
    MOV dword ptr [EAX + 0x8],0x0       ; 00474adf
    MOV dword ptr [EAX],0x0             ; 00474ae6
    MOV EAX,0x1548b70                   ; 00474aec
        ;   Label: LAB_00474aec
    CMP EAX,0x2cfd900                   ; 00474af1
    JZ 0x00474b1a                       ; 00474af6
        ;   XREF to: 00474b1a (CONDITIONAL_JUMP)  ; LAB_00474b1a
    FLD float ptr [0x02cfd900]          ; 00474af8 | DAT_02cfd900
    FLD float ptr [0x02cfd908]          ; 00474afe | DAT_02cfd908
    MOV EAX,[0x02cfd904]                ; 00474b04 | DAT_02cfd904
    MOV [0x01548b74],EAX                ; 00474b09 | DAT_01548b74
    FSTP float ptr [0x01548b78]         ; 00474b0e | DAT_01548b78
    FSTP float ptr [0x01548b70]         ; 00474b14 | DAT_01548b70
    MOV EAX,0x1548b64                   ; 00474b1a
        ;   Label: LAB_00474b1a
    CMP EAX,0x1548b70                   ; 00474b1f
    JZ 0x00474b48                       ; 00474b24
        ;   XREF to: 00474b48 (CONDITIONAL_JUMP)  ; LAB_00474b48
    FLD float ptr [0x01548b70]          ; 00474b26 | DAT_01548b70
    FLD float ptr [0x01548b78]          ; 00474b2c | DAT_01548b78
    MOV EAX,[0x01548b74]                ; 00474b32 | DAT_01548b74
    MOV [0x01548b68],EAX                ; 00474b37 | DAT_01548b68
    FSTP float ptr [0x01548b6c]         ; 00474b3c | DAT_01548b6c
    FSTP float ptr [0x01548b64]         ; 00474b42 | DAT_01548b64
    MOV EAX,0x1548b58                   ; 00474b48
        ;   Label: LAB_00474b48
    CMP EAX,0x1548b64                   ; 00474b4d
    JZ 0x00474b76                       ; 00474b52
        ;   XREF to: 00474b76 (CONDITIONAL_JUMP)  ; LAB_00474b76
    FLD float ptr [0x01548b64]          ; 00474b54 | DAT_01548b64
    FLD float ptr [0x01548b6c]          ; 00474b5a | DAT_01548b6c
    MOV EAX,[0x01548b68]                ; 00474b60 | DAT_01548b68
    MOV [0x01548b5c],EAX                ; 00474b65 | DAT_01548b5c
    FSTP float ptr [0x01548b60]         ; 00474b6a | DAT_01548b60
    FSTP float ptr [0x01548b58]         ; 00474b70 | DAT_01548b58
    MOV EAX,dword ptr [ESP + 0x14]      ; 00474b76
        ;   Label: LAB_00474b76
    MOV dword ptr [ESP + 0x40],EAX      ; 00474b7a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00474b7e
    MOV ESP,EBP                         ; 00474b82
    POP EBP                             ; 00474b84
    POP EDI                             ; 00474b85
    POP ESI                             ; 00474b86
    POP EBX                             ; 00474b87
    RET                                 ; 00474b88

