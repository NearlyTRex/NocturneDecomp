; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dtrace_cpp_FUN_004738d0(CDemonRaytrace *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)
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
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0 at 0041fe81
;   core_setcolid.cpp_FUN_00534ea0 at 00534ee7
;
; Referenced Globals:
;   undefined4 DAT_005d1b5b
;   undefined4 DAT_005d1b5f
;   undefined4 DAT_01510da8
;   undefined4 DAT_01510dac
;   undefined4 DAT_01510db0
;   undefined4 DAT_01510db4
;   undefined4 DAT_01510db8
;   undefined4 DAT_01510dbc
;   undefined4 DAT_01510dc0
;   undefined4 DAT_01510dc4
;   undefined4 DAT_01510dc8
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_dcube.cpp_FUN_00446b60
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004738d0
        ;   Label: core_dtrace.cpp_FUN_004738d0
    PUSH ESI                            ; 004738d1
    PUSH EDI                            ; 004738d2
    PUSH EBP                            ; 004738d3
    MOV EBP,ESP                         ; 004738d4
    SUB ESP,0x58                        ; 004738d6
    AND ESP,0xfffffff8                  ; 004738d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004738dc
    MOV EAX,dword ptr [EBP + 0x18]      ; 004738df
    LEA EDI,[ESP + 0x4]                 ; 004738e2
    MOV ESI,EAX                         ; 004738e6
    MOVSD ES:EDI,ESI                    ; 004738e8
    MOVSD ES:EDI,ESI                    ; 004738e9
    MOVSD ES:EDI,ESI                    ; 004738ea
    FLD float ptr [ESP + 0x8]           ; 004738eb
    FLD float ptr [ESP + 0x4]           ; 004738ef
    LEA EDI,[ESP + 0x10]                ; 004738f3
    MOV ESI,EAX                         ; 004738f7
    FXCH                                ; 004738f9
    FADD float ptr [0x005d1b5b]         ; 004738fb | DAT_005d1b5b
    MOVSD ES:EDI,ESI                    ; 00473901
    MOVSD ES:EDI,ESI                    ; 00473902
    MOVSD ES:EDI,ESI                    ; 00473903
    FSTP float ptr [ESP + 0x8]          ; 00473904
    FSUB float ptr [EBX + 0x10]         ; 00473908
    FDIV float ptr [EBX + 0x28]         ; 0047390b
    FLD float ptr [ESP + 0x8]           ; 0047390e
    FSUB float ptr [EBX + 0x14]         ; 00473912
    FLD1                                ; 00473915
    FDIV float ptr [EBX + 0x2c]         ; 00473917
    FLD float ptr [ESP + 0xc]           ; 0047391a
    FSUB float ptr [EBX + 0x18]         ; 0047391e
    FDIV float ptr [EBX + 0x30]         ; 00473921
    FLD float ptr [ESP + 0x14]          ; 00473924
    FADD float ptr [0x005d1b5f]         ; 00473928 | DAT_005d1b5f
    FST float ptr [ESP + 0x14]          ; 0047392e
    FSUB float ptr [EBX + 0x14]         ; 00473932
    FXCH ST3                            ; 00473935
    FMUL ST2                            ; 00473937
    FXCH ST3                            ; 00473939
    FMULP ST2                           ; 0047393b
    FLD float ptr [ESP + 0x10]          ; 0047393d
    FLD float ptr [ESP + 0x18]          ; 00473941
    LEA EDI,[ESP + 0x1c]                ; 00473945
    LEA ESI,[ESP + 0x28]                ; 00473949
    FXCH                                ; 0047394d
    FSUB float ptr [ESP + 0x4]          ; 0047394f
    FXCH                                ; 00473953
    FSUB float ptr [ESP + 0xc]          ; 00473955
    FXCH                                ; 00473959
    FSTP float ptr [ESP + 0x28]         ; 0047395b
    FLD float ptr [ESP + 0x14]          ; 0047395f
    FSUB float ptr [ESP + 0x8]          ; 00473963
    FXCH                                ; 00473967
    FSTP float ptr [ESP + 0x30]         ; 00473969
    FSTP float ptr [ESP + 0x2c]         ; 0047396d
    FXCH ST3                            ; 00473971
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473973
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00473978
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047397a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 0047397f
    FISTP dword ptr [ESP + 0x44]        ; 00473981
    FXCH ST2                            ; 00473985
    FISTP dword ptr [ESP + 0x48]        ; 00473987
    CALL crt_math.c_round_FUN_005b7ff0  ; 0047398b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473990
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473992
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473997
    FISTP dword ptr [ESP + 0x50]        ; 00473999
    FISTP dword ptr [ESP + 0x4c]        ; 0047399d
    MOV EAX,dword ptr [ESP + 0x50]      ; 004739a1
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004739a5
    MOVSD ES:EDI,ESI                    ; 004739a9
    MOVSD ES:EDI,ESI                    ; 004739aa
    MOVSD ES:EDI,ESI                    ; 004739ab
    CMP EAX,EDX                         ; 004739ac
    JL 0x00473a54                       ; 004739ae
        ;   XREF to: 00473a54 (CONDITIONAL_JUMP)  ; LAB_00473a54
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004739b4
    MOV EDX,dword ptr [ESP + 0x48]      ; 004739b7
        ;   Label: LAB_004739b7
    PUSH EDX                            ; 004739bb
    MOV ECX,dword ptr [ESP + 0x54]      ; 004739bc
    PUSH ECX                            ; 004739c0
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004739c1
    PUSH ESI                            ; 004739c5
    PUSH EBX                            ; 004739c6
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 004739c7
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 004739cc
    TEST EAX,EAX                        ; 004739cf
    JZ 0x00473a3f                       ; 004739d1
        ;   XREF to: 00473a3f (CONDITIONAL_JUMP)  ; LAB_00473a3f
    PUSH EDI                            ; 004739d3
    LEA EDX,[ESP + 0x38]                ; 004739d4
    PUSH EDX                            ; 004739d8
    LEA EDX,[ESP + 0x24]                ; 004739d9
    PUSH EDX                            ; 004739dd
    LEA EDX,[ESP + 0x10]                ; 004739de
    PUSH EDX                            ; 004739e2
    PUSH EAX                            ; 004739e3
    CALL core_dcube.cpp_FUN_00446b60    ; 004739e4
        ;   XREF to: 00446b60 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00446b60()
    MOV dword ptr [ESP + 0x68],EAX      ; 004739e9
    FLD float ptr [ESP + 0x68]          ; 004739ed
    ADD ESP,0x14                        ; 004739f1
    FST float ptr [ESP]                 ; 004739f4
    FLD1                                ; 004739f7
    FCOMPP                              ; 004739f9
    FNSTSW AX                           ; 004739fb
    SAHF                                ; 004739fd
    JC 0x00473a3f                       ; 004739fe
        ;   XREF to: 00473a3f (CONDITIONAL_JUMP)  ; LAB_00473a3f
    CMP dword ptr [EBP + 0x20],0x0      ; 00473a00
    JZ 0x00473a25                       ; 00473a04
        ;   XREF to: 00473a25 (CONDITIONAL_JUMP)  ; LAB_00473a25
    MOV EDX,dword ptr [EBP + 0x20]      ; 00473a06
    LEA EAX,[ESP + 0x34]                ; 00473a09
    CMP EAX,EDX                         ; 00473a0d
    JZ 0x00473a25                       ; 00473a0f
        ;   XREF to: 00473a25 (CONDITIONAL_JUMP)  ; LAB_00473a25
    MOV EAX,dword ptr [ESP + 0x34]      ; 00473a11
    MOV dword ptr [EDX],EAX             ; 00473a15
    MOV EAX,dword ptr [ESP + 0x38]      ; 00473a17
    MOV dword ptr [EDX + 0x4],EAX       ; 00473a1b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00473a1e
    MOV dword ptr [EDX + 0x8],EAX       ; 00473a22
    FLD float ptr [ESP]                 ; 00473a25
        ;   Label: LAB_00473a25
    FMUL float ptr [ESP + 0x20]         ; 00473a28
    FADD float ptr [ESP + 0x8]          ; 00473a2c
    FSTP float ptr [ESP + 0x40]         ; 00473a30
    MOV EAX,dword ptr [ESP + 0x40]      ; 00473a34
    MOV ESP,EBP                         ; 00473a38
    POP EBP                             ; 00473a3a
    POP EDI                             ; 00473a3b
    POP ESI                             ; 00473a3c
    POP EBX                             ; 00473a3d
    RET                                 ; 00473a3e
    MOV ECX,dword ptr [ESP + 0x50]      ; 00473a3f
        ;   Label: LAB_00473a3f
    DEC ECX                             ; 00473a43
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00473a44
    MOV dword ptr [ESP + 0x50],ECX      ; 00473a48
    CMP ECX,ESI                         ; 00473a4c
    JGE 0x004739b7                      ; 00473a4e
        ;   XREF to: 004739b7 (CONDITIONAL_JUMP)  ; LAB_004739b7
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00473a54
        ;   Label: LAB_00473a54
    TEST EDI,EDI                        ; 00473a57
    JZ 0x00473a61                       ; 00473a59
        ;   XREF to: 00473a61 (CONDITIONAL_JUMP)  ; LAB_00473a61
    MOV dword ptr [EDI],0x1             ; 00473a5b
    MOV EAX,dword ptr [EBP + 0x20]      ; 00473a61
        ;   Label: LAB_00473a61
    TEST EAX,EAX                        ; 00473a64
    JZ 0x00473a7c                       ; 00473a66
        ;   XREF to: 00473a7c (CONDITIONAL_JUMP)  ; LAB_00473a7c
    MOV dword ptr [EAX + 0x4],0x3f800000 ; 00473a68
    MOV dword ptr [EAX + 0x8],0x0       ; 00473a6f
    MOV dword ptr [EAX],0x0             ; 00473a76
    MOV EAX,0x1510dc0                   ; 00473a7c
        ;   Label: LAB_00473a7c
    CMP EAX,0x265370c                   ; 00473a81
    JZ 0x00473aaa                       ; 00473a86
        ;   XREF to: 00473aaa (CONDITIONAL_JUMP)  ; LAB_00473aaa
    FLD float ptr [0x0265370c]          ; 00473a88 | DAT_0265370c
    FLD float ptr [0x02653714]          ; 00473a8e | DAT_02653714
    MOV EAX,[0x02653710]                ; 00473a94 | DAT_02653710
    MOV [0x01510dc4],EAX                ; 00473a99 | DAT_01510dc4
    FSTP float ptr [0x01510dc8]         ; 00473a9e | DAT_01510dc8
    FSTP float ptr [0x01510dc0]         ; 00473aa4 | DAT_01510dc0
    MOV EAX,0x1510db4                   ; 00473aaa
        ;   Label: LAB_00473aaa
    CMP EAX,0x1510dc0                   ; 00473aaf
    JZ 0x00473ad8                       ; 00473ab4
        ;   XREF to: 00473ad8 (CONDITIONAL_JUMP)  ; LAB_00473ad8
    FLD float ptr [0x01510dc0]          ; 00473ab6 | DAT_01510dc0
    FLD float ptr [0x01510dc8]          ; 00473abc | DAT_01510dc8
    MOV EAX,[0x01510dc4]                ; 00473ac2 | DAT_01510dc4
    MOV [0x01510db8],EAX                ; 00473ac7 | DAT_01510db8
    FSTP float ptr [0x01510dbc]         ; 00473acc | DAT_01510dbc
    FSTP float ptr [0x01510db4]         ; 00473ad2 | DAT_01510db4
    MOV EAX,0x1510da8                   ; 00473ad8
        ;   Label: LAB_00473ad8
    CMP EAX,0x1510db4                   ; 00473add
    JZ 0x00473b06                       ; 00473ae2
        ;   XREF to: 00473b06 (CONDITIONAL_JUMP)  ; LAB_00473b06
    FLD float ptr [0x01510db4]          ; 00473ae4 | DAT_01510db4
    FLD float ptr [0x01510dbc]          ; 00473aea | DAT_01510dbc
    MOV EAX,[0x01510db8]                ; 00473af0 | DAT_01510db8
    MOV [0x01510dac],EAX                ; 00473af5 | DAT_01510dac
    FSTP float ptr [0x01510db0]         ; 00473afa | DAT_01510db0
    FSTP float ptr [0x01510da8]         ; 00473b00 | DAT_01510da8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00473b06
        ;   Label: LAB_00473b06
    MOV dword ptr [ESP + 0x40],EAX      ; 00473b0a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00473b0e
    MOV ESP,EBP                         ; 00473b12
    POP EBP                             ; 00473b14
    POP EDI                             ; 00473b15
    POP ESI                             ; 00473b16
    POP EBX                             ; 00473b17
    RET                                 ; 00473b18

