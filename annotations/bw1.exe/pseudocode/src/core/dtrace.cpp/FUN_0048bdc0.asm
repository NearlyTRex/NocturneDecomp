; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dtrace_cpp_FUN_0048bdc0(CDemonRaytrace *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)
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
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00 at 00425eb1
;   core_setcolid.cpp_FUN_005562c0 at 00556307
;
; Referenced Globals:
;   undefined4 DAT_005db954
;   undefined4 DAT_005db958
;   undefined4 DAT_0152c2a8
;   undefined4 DAT_0152c2ac
;   undefined4 DAT_0152c2b0
;   undefined4 DAT_0152c2b4
;   undefined4 DAT_0152c2b8
;   undefined4 DAT_0152c2bc
;   undefined4 DAT_0152c2c0
;   undefined4 DAT_0152c2c4
;   undefined4 DAT_0152c2c8
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   core_dcube.cpp_FUN_00458210
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048bdc0
        ;   Label: core_dtrace.cpp_FUN_0048bdc0
    PUSH ESI                            ; 0048bdc1
    PUSH EDI                            ; 0048bdc2
    PUSH EBP                            ; 0048bdc3
    MOV EBP,ESP                         ; 0048bdc4
    SUB ESP,0x58                        ; 0048bdc6
    AND ESP,0xfffffff8                  ; 0048bdc9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048bdcc
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048bdcf
    LEA EDI,[ESP + 0x4]                 ; 0048bdd2
    MOV ESI,EAX                         ; 0048bdd6
    MOVSD ES:EDI,ESI                    ; 0048bdd8
    MOVSD ES:EDI,ESI                    ; 0048bdd9
    MOVSD ES:EDI,ESI                    ; 0048bdda
    FLD float ptr [ESP + 0x8]           ; 0048bddb
    FLD float ptr [ESP + 0x4]           ; 0048bddf
    LEA EDI,[ESP + 0x10]                ; 0048bde3
    MOV ESI,EAX                         ; 0048bde7
    FXCH                                ; 0048bde9
    FADD float ptr [0x005db954]         ; 0048bdeb | DAT_005db954
    MOVSD ES:EDI,ESI                    ; 0048bdf1
    MOVSD ES:EDI,ESI                    ; 0048bdf2
    MOVSD ES:EDI,ESI                    ; 0048bdf3
    FSTP float ptr [ESP + 0x8]          ; 0048bdf4
    FSUB float ptr [EBX + 0x10]         ; 0048bdf8
    FDIV float ptr [EBX + 0x28]         ; 0048bdfb
    FLD float ptr [ESP + 0x8]           ; 0048bdfe
    FSUB float ptr [EBX + 0x14]         ; 0048be02
    FLD1                                ; 0048be05
    FDIV float ptr [EBX + 0x2c]         ; 0048be07
    FLD float ptr [ESP + 0xc]           ; 0048be0a
    FSUB float ptr [EBX + 0x18]         ; 0048be0e
    FDIV float ptr [EBX + 0x30]         ; 0048be11
    FLD float ptr [ESP + 0x14]          ; 0048be14
    FADD float ptr [0x005db958]         ; 0048be18 | DAT_005db958
    FST float ptr [ESP + 0x14]          ; 0048be1e
    FSUB float ptr [EBX + 0x14]         ; 0048be22
    FXCH ST3                            ; 0048be25
    FMUL ST2                            ; 0048be27
    FXCH ST3                            ; 0048be29
    FMULP ST2                           ; 0048be2b
    FLD float ptr [ESP + 0x10]          ; 0048be2d
    FLD float ptr [ESP + 0x18]          ; 0048be31
    LEA EDI,[ESP + 0x1c]                ; 0048be35
    LEA ESI,[ESP + 0x28]                ; 0048be39
    FXCH                                ; 0048be3d
    FSUB float ptr [ESP + 0x4]          ; 0048be3f
    FXCH                                ; 0048be43
    FSUB float ptr [ESP + 0xc]          ; 0048be45
    FXCH                                ; 0048be49
    FSTP float ptr [ESP + 0x28]         ; 0048be4b
    FLD float ptr [ESP + 0x14]          ; 0048be4f
    FSUB float ptr [ESP + 0x8]          ; 0048be53
    FXCH                                ; 0048be57
    FSTP float ptr [ESP + 0x30]         ; 0048be59
    FSTP float ptr [ESP + 0x2c]         ; 0048be5d
    FXCH ST3                            ; 0048be61
    CALL crt_math.c_round_FUN_005c03a0  ; 0048be63
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0048be68
    CALL crt_math.c_round_FUN_005c03a0  ; 0048be6a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0048be6f
    FISTP dword ptr [ESP + 0x44]        ; 0048be71
    FXCH ST2                            ; 0048be75
    FISTP dword ptr [ESP + 0x48]        ; 0048be77
    CALL crt_math.c_round_FUN_005c03a0  ; 0048be7b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048be80
    CALL crt_math.c_round_FUN_005c03a0  ; 0048be82
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048be87
    FISTP dword ptr [ESP + 0x50]        ; 0048be89
    FISTP dword ptr [ESP + 0x4c]        ; 0048be8d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048be91
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0048be95
    MOVSD ES:EDI,ESI                    ; 0048be99
    MOVSD ES:EDI,ESI                    ; 0048be9a
    MOVSD ES:EDI,ESI                    ; 0048be9b
    CMP EAX,EDX                         ; 0048be9c
    JL 0x0048bf44                       ; 0048be9e
        ;   XREF to: 0048bf44 (CONDITIONAL_JUMP)  ; LAB_0048bf44
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0048bea4
    MOV EDX,dword ptr [ESP + 0x48]      ; 0048bea7
        ;   Label: LAB_0048bea7
    PUSH EDX                            ; 0048beab
    MOV ECX,dword ptr [ESP + 0x54]      ; 0048beac
    PUSH ECX                            ; 0048beb0
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0048beb1
    PUSH ESI                            ; 0048beb5
    PUSH EBX                            ; 0048beb6
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048beb7
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048bebc
    TEST EAX,EAX                        ; 0048bebf
    JZ 0x0048bf2f                       ; 0048bec1
        ;   XREF to: 0048bf2f (CONDITIONAL_JUMP)  ; LAB_0048bf2f
    PUSH EDI                            ; 0048bec3
    LEA EDX,[ESP + 0x38]                ; 0048bec4
    PUSH EDX                            ; 0048bec8
    LEA EDX,[ESP + 0x24]                ; 0048bec9
    PUSH EDX                            ; 0048becd
    LEA EDX,[ESP + 0x10]                ; 0048bece
    PUSH EDX                            ; 0048bed2
    PUSH EAX                            ; 0048bed3
    CALL core_dcube.cpp_FUN_00458210    ; 0048bed4
        ;   XREF to: 00458210 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_FUN_00458210()
    MOV dword ptr [ESP + 0x68],EAX      ; 0048bed9
    FLD float ptr [ESP + 0x68]          ; 0048bedd
    ADD ESP,0x14                        ; 0048bee1
    FST float ptr [ESP]                 ; 0048bee4
    FLD1                                ; 0048bee7
    FCOMPP                              ; 0048bee9
    FNSTSW AX                           ; 0048beeb
    SAHF                                ; 0048beed
    JC 0x0048bf2f                       ; 0048beee
        ;   XREF to: 0048bf2f (CONDITIONAL_JUMP)  ; LAB_0048bf2f
    CMP dword ptr [EBP + 0x20],0x0      ; 0048bef0
    JZ 0x0048bf15                       ; 0048bef4
        ;   XREF to: 0048bf15 (CONDITIONAL_JUMP)  ; LAB_0048bf15
    MOV EDX,dword ptr [EBP + 0x20]      ; 0048bef6
    LEA EAX,[ESP + 0x34]                ; 0048bef9
    CMP EAX,EDX                         ; 0048befd
    JZ 0x0048bf15                       ; 0048beff
        ;   XREF to: 0048bf15 (CONDITIONAL_JUMP)  ; LAB_0048bf15
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048bf01
    MOV dword ptr [EDX],EAX             ; 0048bf05
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048bf07
    MOV dword ptr [EDX + 0x4],EAX       ; 0048bf0b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048bf0e
    MOV dword ptr [EDX + 0x8],EAX       ; 0048bf12
    FLD float ptr [ESP]                 ; 0048bf15
        ;   Label: LAB_0048bf15
    FMUL float ptr [ESP + 0x20]         ; 0048bf18
    FADD float ptr [ESP + 0x8]          ; 0048bf1c
    FSTP float ptr [ESP + 0x40]         ; 0048bf20
    MOV EAX,dword ptr [ESP + 0x40]      ; 0048bf24
    MOV ESP,EBP                         ; 0048bf28
    POP EBP                             ; 0048bf2a
    POP EDI                             ; 0048bf2b
    POP ESI                             ; 0048bf2c
    POP EBX                             ; 0048bf2d
    RET                                 ; 0048bf2e
    MOV ECX,dword ptr [ESP + 0x50]      ; 0048bf2f
        ;   Label: LAB_0048bf2f
    DEC ECX                             ; 0048bf33
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0048bf34
    MOV dword ptr [ESP + 0x50],ECX      ; 0048bf38
    CMP ECX,ESI                         ; 0048bf3c
    JGE 0x0048bea7                      ; 0048bf3e
        ;   XREF to: 0048bea7 (CONDITIONAL_JUMP)  ; LAB_0048bea7
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0048bf44
        ;   Label: LAB_0048bf44
    TEST EDI,EDI                        ; 0048bf47
    JZ 0x0048bf51                       ; 0048bf49
        ;   XREF to: 0048bf51 (CONDITIONAL_JUMP)  ; LAB_0048bf51
    MOV dword ptr [EDI],0x1             ; 0048bf4b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048bf51
        ;   Label: LAB_0048bf51
    TEST EAX,EAX                        ; 0048bf54
    JZ 0x0048bf6c                       ; 0048bf56
        ;   XREF to: 0048bf6c (CONDITIONAL_JUMP)  ; LAB_0048bf6c
    MOV dword ptr [EAX + 0x4],0x3f800000 ; 0048bf58
    MOV dword ptr [EAX + 0x8],0x0       ; 0048bf5f
    MOV dword ptr [EAX],0x0             ; 0048bf66
    MOV EAX,0x152c2c0                   ; 0048bf6c
        ;   Label: LAB_0048bf6c
    CMP EAX,0x2c8af28                   ; 0048bf71
    JZ 0x0048bf9a                       ; 0048bf76
        ;   XREF to: 0048bf9a (CONDITIONAL_JUMP)  ; LAB_0048bf9a
    FLD float ptr [0x02c8af28]          ; 0048bf78 | DAT_02c8af28
    FLD float ptr [0x02c8af30]          ; 0048bf7e | DAT_02c8af30
    MOV EAX,[0x02c8af2c]                ; 0048bf84 | DAT_02c8af2c
    MOV [0x0152c2c4],EAX                ; 0048bf89 | DAT_0152c2c4
    FSTP float ptr [0x0152c2c8]         ; 0048bf8e | DAT_0152c2c8
    FSTP float ptr [0x0152c2c0]         ; 0048bf94 | DAT_0152c2c0
    MOV EAX,0x152c2b4                   ; 0048bf9a
        ;   Label: LAB_0048bf9a
    CMP EAX,0x152c2c0                   ; 0048bf9f
    JZ 0x0048bfc8                       ; 0048bfa4
        ;   XREF to: 0048bfc8 (CONDITIONAL_JUMP)  ; LAB_0048bfc8
    FLD float ptr [0x0152c2c0]          ; 0048bfa6 | DAT_0152c2c0
    FLD float ptr [0x0152c2c8]          ; 0048bfac | DAT_0152c2c8
    MOV EAX,[0x0152c2c4]                ; 0048bfb2 | DAT_0152c2c4
    MOV [0x0152c2b8],EAX                ; 0048bfb7 | DAT_0152c2b8
    FSTP float ptr [0x0152c2bc]         ; 0048bfbc | DAT_0152c2bc
    FSTP float ptr [0x0152c2b4]         ; 0048bfc2 | DAT_0152c2b4
    MOV EAX,0x152c2a8                   ; 0048bfc8
        ;   Label: LAB_0048bfc8
    CMP EAX,0x152c2b4                   ; 0048bfcd
    JZ 0x0048bff6                       ; 0048bfd2
        ;   XREF to: 0048bff6 (CONDITIONAL_JUMP)  ; LAB_0048bff6
    FLD float ptr [0x0152c2b4]          ; 0048bfd4 | DAT_0152c2b4
    FLD float ptr [0x0152c2bc]          ; 0048bfda | DAT_0152c2bc
    MOV EAX,[0x0152c2b8]                ; 0048bfe0 | DAT_0152c2b8
    MOV [0x0152c2ac],EAX                ; 0048bfe5 | DAT_0152c2ac
    FSTP float ptr [0x0152c2b0]         ; 0048bfea | DAT_0152c2b0
    FSTP float ptr [0x0152c2a8]         ; 0048bff0 | DAT_0152c2a8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048bff6
        ;   Label: LAB_0048bff6
    MOV dword ptr [ESP + 0x40],EAX      ; 0048bffa
    MOV EAX,dword ptr [ESP + 0x40]      ; 0048bffe
    MOV ESP,EBP                         ; 0048c002
    POP EBP                             ; 0048c004
    POP EDI                             ; 0048c005
    POP ESI                             ; 0048c006
    POP EBX                             ; 0048c007
    RET                                 ; 0048c008

