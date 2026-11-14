; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0(CFireEffect *this_ptr,CVector3f *position,float radius,CVector3f *out_force_dir,float *out_gore_multiplier)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
; CVector3f *      Stack[0x10]:4   out_force_dir
; float *          Stack[0x14]:4   out_gore_multiplier
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_processActors_FUN_0054fc20 at 0054ff41
;
; Referenced Globals:
;   undefined4 DAT_005df654
;   undefined4 DAT_005df65c
;   undefined4 DAT_01cb007c
;   undefined4 DAT_01cb008c
;   undefined4 DAT_01cb0090
;   undefined4 DAT_01cb0094
;   undefined4 DAT_01cb0098
;   undefined4 DAT_01cb009c
;   undefined4 DAT_01cb00a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6ce0
        ;   Label: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_004b6ce0
    PUSH ESI                            ; 004b6ce1
    PUSH EDI                            ; 004b6ce2
    PUSH EBP                            ; 004b6ce3
    MOV EBP,ESP                         ; 004b6ce4
    SUB ESP,0x64                        ; 004b6ce6
    AND ESP,0xfffffff8                  ; 004b6ce9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b6cec
    MOV EBX,dword ptr [EBP + 0x18]      ; 004b6cef
    MOV dword ptr [ESP],EAX             ; 004b6cf2
    MOV EDX,0x1cb0070                   ; 004b6cf5
    XOR ECX,ECX                         ; 004b6cfa
    FLD float ptr [EDX + 0xc]           ; 004b6cfc | DAT_01cb007c | DAT_01cb0098
        ;   Label: LAB_004b6cfc
    MOV dword ptr [ESP + 0x60],EDX      ; 004b6cff
    FCOMP double ptr [0x005df654]       ; 004b6d03 | DAT_005df654
    FNSTSW AX                           ; 004b6d09
    SAHF                                ; 004b6d0b
    JA 0x004b6d20                       ; 004b6d0c
        ;   XREF to: 004b6d20 (CONDITIONAL_JUMP)  ; LAB_004b6d20
    INC ECX                             ; 004b6d0e
        ;   Label: LAB_004b6d0e
    ADD EDX,0x1c                        ; 004b6d0f
    CMP ECX,0xa                         ; 004b6d12
    JL 0x004b6cfc                       ; 004b6d15
        ;   XREF to: 004b6cfc (CONDITIONAL_JUMP)  ; LAB_004b6cfc
    XOR EAX,EAX                         ; 004b6d17
    MOV ESP,EBP                         ; 004b6d19
    POP EBP                             ; 004b6d1b
    POP EDI                             ; 004b6d1c
    POP ESI                             ; 004b6d1d
    POP EBX                             ; 004b6d1e
    RET                                 ; 004b6d1f
    FLD float ptr [EBX]                 ; 004b6d20
        ;   Label: LAB_004b6d20
    FLD float ptr [EBX + 0x4]           ; 004b6d22
    FLD float ptr [EBX + 0x8]           ; 004b6d25
    LEA EDI,[ESP + 0x20]                ; 004b6d28
    LEA ESI,[ESP + 0x14]                ; 004b6d2c
    FXCH ST2                            ; 004b6d30
    FSUB float ptr [EDX]                ; 004b6d32 | DAT_01cb008c
    FXCH                                ; 004b6d34
    FSUB float ptr [EDX + 0x4]          ; 004b6d36 | DAT_01cb0090
    FXCH ST2                            ; 004b6d39
    FSUB float ptr [EDX + 0x8]          ; 004b6d3b | DAT_01cb0094
    FXCH ST2                            ; 004b6d3e
    FSTP float ptr [ESP + 0x18]         ; 004b6d40
    FXCH                                ; 004b6d44
    FSTP float ptr [ESP + 0x1c]         ; 004b6d46
    FSTP float ptr [ESP + 0x14]         ; 004b6d4a
    MOVSD ES:EDI,ESI                    ; 004b6d4e
    MOVSD ES:EDI,ESI                    ; 004b6d4f
    MOVSD ES:EDI,ESI                    ; 004b6d50
    LEA EAX,[ESP + 0x44]                ; 004b6d51
    LEA ESI,[ESP + 0x20]                ; 004b6d55
    CMP EAX,ESI                         ; 004b6d59
    JZ 0x004b6d75                       ; 004b6d5b
        ;   XREF to: 004b6d75 (CONDITIONAL_JUMP)  ; LAB_004b6d75
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b6d5d
    MOV dword ptr [ESP + 0x44],EAX      ; 004b6d61
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b6d65
    MOV dword ptr [ESP + 0x48],EAX      ; 004b6d69
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b6d6d
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b6d71
    FLD float ptr [ESP + 0x48]          ; 004b6d75
        ;   Label: LAB_004b6d75
    FMUL ST0                            ; 004b6d79
    FLD float ptr [ESP + 0x44]          ; 004b6d7b
    FMUL ST0                            ; 004b6d7f
    FADDP                               ; 004b6d81
    FLD float ptr [ESP + 0x4c]          ; 004b6d83
    FMUL ST0                            ; 004b6d87
    FADDP                               ; 004b6d89
    FSQRT                               ; 004b6d8b
    MOV EAX,dword ptr [ESP + 0x60]      ; 004b6d8d
    FLD float ptr [EAX + 0x10]          ; 004b6d91 | DAT_01cb009c
    FMUL double ptr [0x005df654]        ; 004b6d94 | DAT_005df654
    FADD float ptr [ESP]                ; 004b6d9a
    FXCH                                ; 004b6d9d
    FST float ptr [ESP + 0x4]           ; 004b6d9f
    FCOMPP                              ; 004b6da3
    FNSTSW AX                           ; 004b6da5
    SAHF                                ; 004b6da7
    JNC 0x004b6d0e                      ; 004b6da8
        ;   XREF to: 004b6d0e (CONDITIONAL_JUMP)  ; LAB_004b6d0e
    MOV EDX,dword ptr [EBP + 0x20]      ; 004b6dae
    TEST EDX,EDX                        ; 004b6db1
    JZ 0x004b6e3b                       ; 004b6db3
        ;   XREF to: 004b6e3b (CONDITIONAL_JUMP)  ; LAB_004b6e3b
    FLD1                                ; 004b6db9
    FLD float ptr [ESP + 0x44]          ; 004b6dbb
    FXCH                                ; 004b6dbf
    FDIV float ptr [ESP + 0x4]          ; 004b6dc1
    FXCH                                ; 004b6dc5
    FMUL ST1                            ; 004b6dc7
    FLD float ptr [ESP + 0x48]          ; 004b6dc9
    FMUL ST2                            ; 004b6dcd
    FLD float ptr [ESP + 0x4c]          ; 004b6dcf
    FMULP ST3                           ; 004b6dd3
    LEA EDI,[ESP + 0x38]                ; 004b6dd5
    LEA ESI,[ESP + 0x2c]                ; 004b6dd9
    FXCH                                ; 004b6ddd
    FSTP float ptr [ESP + 0x2c]         ; 004b6ddf
    FSTP float ptr [ESP + 0x30]         ; 004b6de3
    FSTP float ptr [ESP + 0x34]         ; 004b6de7
    MOVSD ES:EDI,ESI                    ; 004b6deb
    MOVSD ES:EDI,ESI                    ; 004b6dec
    MOVSD ES:EDI,ESI                    ; 004b6ded
    FLD float ptr [0x005df65c]          ; 004b6dee | DAT_005df65c
    FLD float ptr [ESP + 0x38]          ; 004b6df4
    FMUL ST1                            ; 004b6df8
    FLD float ptr [ESP + 0x3c]          ; 004b6dfa
    FMUL ST2                            ; 004b6dfe
    FLD float ptr [ESP + 0x40]          ; 004b6e00
    FMULP ST3                           ; 004b6e04
    LEA EAX,[ESP + 0x50]                ; 004b6e06
    LEA EDI,[ESP + 0x50]                ; 004b6e0a
    LEA ESI,[ESP + 0x8]                 ; 004b6e0e
    FXCH                                ; 004b6e12
    FSTP float ptr [ESP + 0x8]          ; 004b6e14
    FSTP float ptr [ESP + 0xc]          ; 004b6e18
    FSTP float ptr [ESP + 0x10]         ; 004b6e1c
    MOVSD ES:EDI,ESI                    ; 004b6e20
    MOVSD ES:EDI,ESI                    ; 004b6e21
    MOVSD ES:EDI,ESI                    ; 004b6e22
    CMP EAX,EDX                         ; 004b6e23
    JZ 0x004b6e3b                       ; 004b6e25
        ;   XREF to: 004b6e3b (CONDITIONAL_JUMP)  ; LAB_004b6e3b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004b6e27
    MOV dword ptr [EDX],EAX             ; 004b6e2b
    MOV EAX,dword ptr [ESP + 0x54]      ; 004b6e2d
    MOV dword ptr [EDX + 0x4],EAX       ; 004b6e31
    MOV EAX,dword ptr [ESP + 0x58]      ; 004b6e34
    MOV dword ptr [EDX + 0x8],EAX       ; 004b6e38
    MOV EBX,dword ptr [EBP + 0x24]      ; 004b6e3b
        ;   Label: LAB_004b6e3b
    TEST EBX,EBX                        ; 004b6e3e
    JZ 0x004b6e4b                       ; 004b6e40
        ;   XREF to: 004b6e4b (CONDITIONAL_JUMP)  ; LAB_004b6e4b
    MOV EAX,dword ptr [ESP + 0x60]      ; 004b6e42
    MOV EDX,dword ptr [EAX + 0x14]      ; 004b6e46 | DAT_01cb00a0
    MOV dword ptr [EBX],EDX             ; 004b6e49
    MOV EAX,0x1                         ; 004b6e4b
        ;   Label: LAB_004b6e4b
    MOV ESP,EBP                         ; 004b6e50
    POP EBP                             ; 004b6e52
    POP EDI                             ; 004b6e53
    POP ESI                             ; 004b6e54
    POP EBX                             ; 004b6e55
    RET                                 ; 004b6e56

