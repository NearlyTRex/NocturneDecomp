; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fldnotes_cpp_FUN_004a3d00(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a3a60 at 004a3aa4
;   core_fldnotes.cpp_FUN_004a3e40 at 004a3f40
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01d182f4
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3d00
        ;   Label: core_fldnotes.cpp_FUN_004a3d00
    PUSH ESI                            ; 004a3d01
    PUSH EDI                            ; 004a3d02
    PUSH EBP                            ; 004a3d03
    SUB ESP,0x14                        ; 004a3d04
    MOV EBP,dword ptr [ESP + 0x28]      ; 004a3d07
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004a3d0b
    MOV EDX,dword ptr [EDI + 0xc]       ; 004a3d0f
    TEST EDX,EDX                        ; 004a3d12
    JL 0x004a3d61                       ; 004a3d14
        ;   XREF to: 004a3d61 (CONDITIONAL_JUMP)  ; LAB_004a3d61
    MOV EAX,[0x00618170]                ; 004a3d16 | DAT_00618170
    CMP EDX,dword ptr [EAX + 0x4]       ; 004a3d1b | DAT_01d182f4
    JGE 0x004a3d61                      ; 004a3d1e
        ;   XREF to: 004a3d61 (CONDITIONAL_JUMP)  ; LAB_004a3d61
    MOV EBX,dword ptr [EBP + 0x9c]      ; 004a3d20
    XOR ESI,ESI                         ; 004a3d26
    TEST EBX,EBX                        ; 004a3d28
    JLE 0x004a3d61                      ; 004a3d2a
        ;   XREF to: 004a3d61 (CONDITIONAL_JUMP)  ; LAB_004a3d61
    LEA EBX,[EBP + 0xa0]                ; 004a3d2c
    MOV EDX,dword ptr [EDI + 0xc]       ; 004a3d32
        ;   Label: LAB_004a3d32
    MOV EAX,[0x00618170]                ; 004a3d35 | DAT_00618170
    SHL EDX,0x8                         ; 004a3d3a
    ADD EAX,0x8                         ; 004a3d3d
    PUSH EBX                            ; 004a3d40
    ADD EAX,EDX                         ; 004a3d41
    PUSH EAX                            ; 004a3d43
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004a3d44
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a3d49
    TEST EAX,EAX                        ; 004a3d4c
    JZ 0x004a3d6e                       ; 004a3d4e
        ;   XREF to: 004a3d6e (CONDITIONAL_JUMP)  ; LAB_004a3d6e
    INC ESI                             ; 004a3d50
    MOV EAX,dword ptr [EBP + 0x9c]      ; 004a3d51
    ADD EBX,0x88                        ; 004a3d57
    CMP ESI,EAX                         ; 004a3d5d
    JL 0x004a3d32                       ; 004a3d5f
        ;   XREF to: 004a3d32 (CONDITIONAL_JUMP)  ; LAB_004a3d32
    MOV EAX,0xffffffff                  ; 004a3d61
        ;   Label: LAB_004a3d61
    ADD ESP,0x14                        ; 004a3d66
    POP EBP                             ; 004a3d69
    POP EDI                             ; 004a3d6a
    POP ESI                             ; 004a3d6b
    POP EBX                             ; 004a3d6c
    RET                                 ; 004a3d6d
    FLD float ptr [EBX + 0x7c]          ; 004a3d6e
        ;   Label: LAB_004a3d6e
    FLD float ptr [EDI]                 ; 004a3d71
    FSUB float ptr [EBX + 0x74]         ; 004a3d73
    FXCH                                ; 004a3d76
    FSUB float ptr [EBX + 0x74]         ; 004a3d78
    FXCH                                ; 004a3d7b
    FDIV ST0,ST1                        ; 004a3d7d
    FLD float ptr [EBX + 0x80]          ; 004a3d7f
    FLD float ptr [EDI + 0x8]           ; 004a3d85
    FSUB float ptr [EBX + 0x78]         ; 004a3d88
    FXCH                                ; 004a3d8b
    FSUB float ptr [EBX + 0x78]         ; 004a3d8d
    FXCH                                ; 004a3d90
    FDIV ST0,ST1                        ; 004a3d92
    FXCH ST3                            ; 004a3d94
    FMULP                               ; 004a3d96
    FLDZ                                ; 004a3d98
    FXCH ST2                            ; 004a3d9a
    FSTP float ptr [ESP + 0xc]          ; 004a3d9c
    FXCH ST2                            ; 004a3da0
    FSTP float ptr [ESP + 0x8]          ; 004a3da2
    FCOMPP                              ; 004a3da6
    FNSTSW AX                           ; 004a3da8
    SAHF                                ; 004a3daa
    JNC 0x004a3dff                      ; 004a3dab
        ;   XREF to: 004a3dff (CONDITIONAL_JUMP)  ; LAB_004a3dff
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004a3dad
    MOV EDI,dword ptr [EBX + 0x64]      ; 004a3db0
    SUB EAX,EDI                         ; 004a3db3
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3db5
    FILD dword ptr [ESP + 0x10]         ; 004a3db9
    FMUL float ptr [ESP + 0x8]          ; 004a3dbd
    FILD dword ptr [EBX + 0x64]         ; 004a3dc1
    FADDP                               ; 004a3dc4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a3dc6
    CALL crt_math.c_round_FUN_005b7ff0  ; 004a3dca
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EAX]               ; 004a3dcf
    MOV EAX,dword ptr [EBX + 0x70]      ; 004a3dd1
    MOV EBP,dword ptr [EBX + 0x68]      ; 004a3dd4
    SUB EAX,EBP                         ; 004a3dd7
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3dd9
    FILD dword ptr [ESP + 0x10]         ; 004a3ddd
    FMUL float ptr [ESP + 0xc]          ; 004a3de1
    FILD dword ptr [EBX + 0x68]         ; 004a3de5
        ;   Label: LAB_004a3de5
    FADDP                               ; 004a3de8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a3dea
    CALL crt_math.c_round_FUN_005b7ff0  ; 004a3dee
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EAX]               ; 004a3df3
    MOV EAX,ESI                         ; 004a3df5
    ADD ESP,0x14                        ; 004a3df7
    POP EBP                             ; 004a3dfa
    POP EDI                             ; 004a3dfb
    POP ESI                             ; 004a3dfc
    POP EBX                             ; 004a3dfd
    RET                                 ; 004a3dfe
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004a3dff
        ;   Label: LAB_004a3dff
    MOV EDX,dword ptr [EBX + 0x64]      ; 004a3e02
    SUB EAX,EDX                         ; 004a3e05
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3e07
    FILD dword ptr [ESP + 0x10]         ; 004a3e0b
    FMUL float ptr [ESP + 0xc]          ; 004a3e0f
    FILD dword ptr [EBX + 0x64]         ; 004a3e13
    FADDP                               ; 004a3e16
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a3e18
    CALL crt_math.c_round_FUN_005b7ff0  ; 004a3e1c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EAX]               ; 004a3e21
    MOV EAX,dword ptr [EBX + 0x70]      ; 004a3e23
    MOV ECX,dword ptr [EBX + 0x68]      ; 004a3e26
    SUB EAX,ECX                         ; 004a3e29
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3e2b
    FILD dword ptr [ESP + 0x10]         ; 004a3e2f
    FMUL float ptr [ESP + 0x8]          ; 004a3e33
    JMP 0x004a3de5                      ; 004a3e37
        ;   XREF to: 004a3de5 (UNCONDITIONAL_JUMP)  ; LAB_004a3de5

