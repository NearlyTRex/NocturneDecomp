; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_004c9580 at 004c9b5c
;   FUN_004c9cf0 at 004c9d7d
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 004cb980
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980
    MOV EDX,dword ptr [ESP + 0x30]      ; 004cb983
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb987
    SUB EAX,EDX                         ; 004cb98e
    MOV EDX,EAX                         ; 004cb990
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cb992
    SHL EDX,0x5                         ; 004cb996
    ADD EAX,0x1338                      ; 004cb999
    ADD EAX,EDX                         ; 004cb99e
    LEA ECX,[EAX + 0xc]                 ; 004cb9a0
    LEA EDX,[EAX + 0x18]                ; 004cb9a3
    FLD float ptr [ECX]                 ; 004cb9a6
    FMUL float ptr [EDX]                ; 004cb9a8
    FSTP float ptr [ESP + 0x18]         ; 004cb9aa
    FLD float ptr [ECX + 0x4]           ; 004cb9ae
    FMUL float ptr [EDX]                ; 004cb9b1
    FSTP float ptr [ESP + 0x1c]         ; 004cb9b3
    FLD float ptr [ECX + 0x8]           ; 004cb9b7
    FMUL float ptr [EDX]                ; 004cb9ba
    FSTP float ptr [ESP + 0x20]         ; 004cb9bc
    FLD float ptr [EAX + 0x18]          ; 004cb9c0
    FLD1                                ; 004cb9c3
    FSUBRP                              ; 004cb9c5
    FLD float ptr [EAX]                 ; 004cb9c7
    FXCH                                ; 004cb9c9
    FSTP float ptr [ESP + 0x24]         ; 004cb9cb
    FMUL float ptr [ESP + 0x24]         ; 004cb9cf
    FSTP float ptr [ESP]                ; 004cb9d3
    FLD float ptr [EAX + 0x4]           ; 004cb9d6
    FMUL float ptr [ESP + 0x24]         ; 004cb9d9
    FSTP float ptr [ESP + 0x4]          ; 004cb9dd
    FLD float ptr [EAX + 0x8]           ; 004cb9e1
    FMUL float ptr [ESP + 0x24]         ; 004cb9e4
    LEA EDX,[EAX + 0x1c]                ; 004cb9e8
    FLD float ptr [ESP]                 ; 004cb9eb
    FADD float ptr [ESP + 0x18]         ; 004cb9ee
    FLD float ptr [ESP + 0x4]           ; 004cb9f2
    FXCH                                ; 004cb9f6
    FSTP float ptr [ESP + 0xc]          ; 004cb9f8
    LEA EAX,[ESP + 0xc]                 ; 004cb9fc
    FADD float ptr [ESP + 0x1c]         ; 004cba00
    FXCH                                ; 004cba04
    FST float ptr [ESP + 0x8]           ; 004cba06
    FADD float ptr [ESP + 0x20]         ; 004cba0a
    FXCH                                ; 004cba0e
    FSTP float ptr [ESP + 0x10]         ; 004cba10
    FSTP float ptr [ESP + 0x14]         ; 004cba14
    CMP EDX,EAX                         ; 004cba18
    JNZ 0x004cba20                      ; 004cba1a
        ;   XREF to: 004cba20 (CONDITIONAL_JUMP)  ; LAB_004cba20
    ADD ESP,0x28                        ; 004cba1c
    RET                                 ; 004cba1f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cba20
        ;   Label: LAB_004cba20
    MOV dword ptr [EDX],EAX             ; 004cba24
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cba26
    MOV dword ptr [EDX + 0x4],EAX       ; 004cba2a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cba2d
    MOV dword ptr [EDX + 0x8],EAX       ; 004cba31
    ADD ESP,0x28                        ; 004cba34
    RET                                 ; 004cba37

