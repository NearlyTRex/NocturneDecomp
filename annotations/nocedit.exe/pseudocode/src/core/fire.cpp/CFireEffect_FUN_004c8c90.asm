; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_FUN_004c8c90(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
;
; XREF[2]:
;   core_set.cpp_CDemonSet_FUN_0056b810 at 0056bbc8
;   core_trigger.cpp_CTrigger_process_FUN_005dfac0 at 005dfe7d
;
; Referenced Globals:
;   double DOUBLE_0062a0a3 = 0.5
;   float FLOAT_0062a0ab = 40
;   CExplosion[10] g_ExplosionPool
;   undefined4 DAT_02d677b8
;   undefined4 DAT_02d677bc
;   undefined4 DAT_02d677c0
;   undefined4 DAT_02d677c4
;   undefined4 DAT_02d677c8
;   undefined4 DAT_02d677d0
;   undefined4 DAT_02d677d4
;   undefined4 DAT_02d677d8
;   undefined4 DAT_02d677dc
;   undefined4 DAT_02d677e0
;   undefined4 DAT_02d677e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8c90
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8c90
    PUSH ESI                            ; 004c8c91
    PUSH EDI                            ; 004c8c92
    PUSH EBP                            ; 004c8c93
    MOV EBP,ESP                         ; 004c8c94
    SUB ESP,0x3c                        ; 004c8c96
    AND ESP,0xfffffff8                  ; 004c8c99
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004c8c9c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004c8c9f
    MOV dword ptr [ESP + 0x4],EAX       ; 004c8ca2
    MOV EDX,0x2d677b4                   ; 004c8ca6 | g_ExplosionPool
    XOR ECX,ECX                         ; 004c8cab
    FLD float ptr [EDX + 0xc]           ; 004c8cad | DAT_02d677c0 | DAT_02d677dc
        ;   Label: LAB_004c8cad
    MOV ESI,EDX                         ; 004c8cb0
    FCOMP double ptr [0x0062a0a3]       ; 004c8cb2 | DOUBLE_0062a0a3
    FNSTSW AX                           ; 004c8cb8
    SAHF                                ; 004c8cba
    JA 0x004c8ccf                       ; 004c8cbb
        ;   XREF to: 004c8ccf (CONDITIONAL_JUMP)  ; LAB_004c8ccf
    INC ECX                             ; 004c8cbd
        ;   Label: LAB_004c8cbd
    ADD EDX,0x1c                        ; 004c8cbe
    CMP ECX,0xa                         ; 004c8cc1
    JL 0x004c8cad                       ; 004c8cc4
        ;   XREF to: 004c8cad (CONDITIONAL_JUMP)  ; LAB_004c8cad
    XOR EAX,EAX                         ; 004c8cc6
    MOV ESP,EBP                         ; 004c8cc8
    POP EBP                             ; 004c8cca
    POP EDI                             ; 004c8ccb
    POP ESI                             ; 004c8ccc
    POP EBX                             ; 004c8ccd
    RET                                 ; 004c8cce
    FLD float ptr [EBX]                 ; 004c8ccf
        ;   Label: LAB_004c8ccf
    FSUB float ptr [EDX]                ; 004c8cd1 | g_ExplosionPool | DAT_02d677d0
    FSTP float ptr [ESP + 0x2c]         ; 004c8cd3
    FLD float ptr [EBX + 0x4]           ; 004c8cd7
    FSUB float ptr [EDX + 0x4]          ; 004c8cda | DAT_02d677b8 | DAT_02d677d4
    LEA EDI,[ESP + 0x2c]                ; 004c8cdd
    FSTP float ptr [ESP + 0x30]         ; 004c8ce1
    FLD float ptr [EBX + 0x8]           ; 004c8ce5
    FSUB float ptr [EDX + 0x8]          ; 004c8ce8 | DAT_02d677bc | DAT_02d677d8
    LEA EAX,[ESP + 0x8]                 ; 004c8ceb
    FSTP float ptr [ESP + 0x34]         ; 004c8cef
    CMP EAX,EDI                         ; 004c8cf3
    JZ 0x004c8d0f                       ; 004c8cf5
        ;   XREF to: 004c8d0f (CONDITIONAL_JUMP)  ; LAB_004c8d0f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c8cf7
    MOV dword ptr [ESP + 0x8],EAX       ; 004c8cfb
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c8cff
    MOV dword ptr [ESP + 0xc],EAX       ; 004c8d03
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c8d07
    MOV dword ptr [ESP + 0x10],EAX      ; 004c8d0b
    FLD float ptr [ESP + 0xc]           ; 004c8d0f
        ;   Label: LAB_004c8d0f
    FMUL ST0                            ; 004c8d13
    FLD float ptr [ESP + 0x8]           ; 004c8d15
    FMUL ST0                            ; 004c8d19
    FADDP                               ; 004c8d1b
    FLD float ptr [ESP + 0x10]          ; 004c8d1d
    FMUL ST0                            ; 004c8d21
    FADDP                               ; 004c8d23
    FSQRT                               ; 004c8d25
    FLD float ptr [ESI + 0x10]          ; 004c8d27 | DAT_02d677c4 | DAT_02d677e0
    FMUL double ptr [0x0062a0a3]        ; 004c8d2a | DOUBLE_0062a0a3
    FADD float ptr [ESP + 0x4]          ; 004c8d30
    FXCH                                ; 004c8d34
    FST float ptr [ESP]                 ; 004c8d36
    FCOMPP                              ; 004c8d39
    FNSTSW AX                           ; 004c8d3b
    SAHF                                ; 004c8d3d
    JNC 0x004c8cbd                      ; 004c8d3e
        ;   XREF to: 004c8cbd (CONDITIONAL_JUMP)  ; LAB_004c8cbd
    MOV EDX,dword ptr [EBP + 0x20]      ; 004c8d44
    TEST EDX,EDX                        ; 004c8d47
    JZ 0x004c8db2                       ; 004c8d49
        ;   XREF to: 004c8db2 (CONDITIONAL_JUMP)  ; LAB_004c8db2
    FLD1                                ; 004c8d4b
    FLD float ptr [ESP + 0x8]           ; 004c8d4d
    FXCH                                ; 004c8d51
    FDIV float ptr [ESP]                ; 004c8d53
    FXCH                                ; 004c8d56
    FMUL ST1                            ; 004c8d58
    FLD float ptr [ESP + 0xc]           ; 004c8d5a
    FMUL ST2                            ; 004c8d5e
    FLD float ptr [ESP + 0x10]          ; 004c8d60
    FMULP ST3                           ; 004c8d64
    FXCH                                ; 004c8d66
    FST float ptr [ESP + 0x20]          ; 004c8d68
    FLD float ptr [0x0062a0ab]          ; 004c8d6c | FLOAT_0062a0ab
    FXCH                                ; 004c8d72
    FMUL ST1                            ; 004c8d74
    FXCH ST2                            ; 004c8d76
    FST float ptr [ESP + 0x24]          ; 004c8d78
    FMUL ST1                            ; 004c8d7c
    FXCH ST3                            ; 004c8d7e
    FST float ptr [ESP + 0x28]          ; 004c8d80
    FMULP                               ; 004c8d84
    LEA EAX,[ESP + 0x14]                ; 004c8d86
    FXCH                                ; 004c8d8a
    FSTP float ptr [ESP + 0x14]         ; 004c8d8c
    FXCH                                ; 004c8d90
    FSTP float ptr [ESP + 0x18]         ; 004c8d92
    FSTP float ptr [ESP + 0x1c]         ; 004c8d96
    CMP EAX,EDX                         ; 004c8d9a
    JZ 0x004c8db2                       ; 004c8d9c
        ;   XREF to: 004c8db2 (CONDITIONAL_JUMP)  ; LAB_004c8db2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c8d9e
    MOV dword ptr [EDX],EAX             ; 004c8da2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c8da4
    MOV dword ptr [EDX + 0x4],EAX       ; 004c8da8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c8dab
    MOV dword ptr [EDX + 0x8],EAX       ; 004c8daf
    MOV EBX,dword ptr [EBP + 0x24]      ; 004c8db2
        ;   Label: LAB_004c8db2
    TEST EBX,EBX                        ; 004c8db5
    JZ 0x004c8dbe                       ; 004c8db7
        ;   XREF to: 004c8dbe (CONDITIONAL_JUMP)  ; LAB_004c8dbe
    MOV EAX,dword ptr [ESI + 0x14]      ; 004c8db9 | DAT_02d677c8 | DAT_02d677e4
    MOV dword ptr [EBX],EAX             ; 004c8dbc
    MOV EAX,0x1                         ; 004c8dbe
        ;   Label: LAB_004c8dbe
    MOV ESP,EBP                         ; 004c8dc3
    POP EBP                             ; 004c8dc5
    POP EDI                             ; 004c8dc6
    POP ESI                             ; 004c8dc7
    POP EBX                             ; 004c8dc8
    RET                                 ; 004c8dc9

