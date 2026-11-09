; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004a2b70(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   velocity
; float            Stack[0x10]:4   beam_width
; float            Stack[0x14]:4   reticle_intensity
; CVector3f *      Stack[0x18]:4   reflection_normal
; float            Stack[0x1c]:4   total_time
; int              Stack[0x20]:4   red
; int              Stack[0x24]:4   green
; int              Stack[0x28]:4   blue
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_prye.cpp_FUN_005220d0 at 00522242
;
; Referenced Globals:
;   undefined4 DAT_005c09cc
;   undefined4 DAT_005c09d0
;   undefined4 DAT_005c09d8
;   undefined4 DAT_005c09e0
;   undefined4 DAT_005df8fc
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2b70
        ;   Label: core_fire.cpp_FUN_004a2b70
    PUSH ESI                            ; 004a2b71
    PUSH EDI                            ; 004a2b72
    PUSH EBP                            ; 004a2b73
    MOV EBP,ESP                         ; 004a2b74
    SUB ESP,0xa8                        ; 004a2b76
    AND ESP,0xfffffff8                  ; 004a2b7c
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004a2b7f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004a2b82
    MOV dword ptr [ESP + 0x4],EAX       ; 004a2b85
    FLD float ptr [ESP + 0x4]           ; 004a2b89
    FMUL float ptr [0x005c09cc]         ; 004a2b8d | DAT_005c09cc
    FST float ptr [ESP]                 ; 004a2b93
    FCOMP double ptr [0x005c09d0]       ; 004a2b96 | DAT_005c09d0
    FNSTSW AX                           ; 004a2b9c
    SAHF                                ; 004a2b9e
    JC 0x004a2d75                       ; 004a2b9f
        ;   XREF to: 004a2d75 (CONDITIONAL_JUMP)  ; LAB_004a2d75
    LEA EDI,[ESP + 0x78]                ; 004a2ba5
        ;   Label: LAB_004a2ba5
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a2ba9
    MOVSD ES:EDI,ESI                    ; 004a2bac
    MOVSD ES:EDI,ESI                    ; 004a2bad
    MOVSD ES:EDI,ESI                    ; 004a2bae
    LEA EDI,[ESP + 0x54]                ; 004a2baf
    MOV ESI,EDX                         ; 004a2bb3
    MOVSD ES:EDI,ESI                    ; 004a2bb5
    MOVSD ES:EDI,ESI                    ; 004a2bb6
    MOVSD ES:EDI,ESI                    ; 004a2bb7
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2bb8
        ;   Label: LAB_004a2bb8
    FLD float ptr [ESP + 0x4]           ; 004a2bbc
    MOV dword ptr [ESP + 0x8],EAX       ; 004a2bc0
    FCOMP float ptr [ESP]               ; 004a2bc4
    FNSTSW AX                           ; 004a2bc7
    SAHF                                ; 004a2bc9
    JBE 0x004a2bd3                      ; 004a2bca
        ;   XREF to: 004a2bd3 (CONDITIONAL_JUMP)  ; LAB_004a2bd3
    MOV EAX,dword ptr [ESP]             ; 004a2bcc
    MOV dword ptr [ESP + 0x8],EAX       ; 004a2bcf
    FLD float ptr [ESP + 0x54]          ; 004a2bd3
        ;   Label: LAB_004a2bd3
    FMUL float ptr [ESP + 0x8]          ; 004a2bd7
    FLD float ptr [ESP + 0x58]          ; 004a2bdb
    FMUL float ptr [ESP + 0x8]          ; 004a2bdf
    FLD float ptr [ESP + 0x8]           ; 004a2be3
    FLD ST0                             ; 004a2be7
    FMUL double ptr [0x005c09d8]        ; 004a2be9 | DAT_005c09d8
    FLD float ptr [ESP + 0x5c]          ; 004a2bef
    FMUL float ptr [ESP + 0x8]          ; 004a2bf3
    FXCH                                ; 004a2bf7
    FMULP ST2                           ; 004a2bf9
    FLDZ                                ; 004a2bfb
    FXCH ST2                            ; 004a2bfd
    FSTP float ptr [ESP + 0xa4]         ; 004a2bff
    FXCH                                ; 004a2c06
    FMUL float ptr [ESP + 0xa4]         ; 004a2c08
    FLD float ptr [ESP + 0xa4]          ; 004a2c0f
    FMUL float ptr [0x005c09e0]         ; 004a2c16 | DAT_005c09e0
    FLD float ptr [ESP + 0x78]          ; 004a2c1c
    FLD float ptr [ESP + 0x7c]          ; 004a2c20
    FXCH ST3                            ; 004a2c24
    FSTP float ptr [ESP + 0x90]         ; 004a2c26
    FLD float ptr [ESP + 0x80]          ; 004a2c2d
    LEA EDI,[ESP + 0x6c]                ; 004a2c34
    LEA ESI,[ESP + 0x90]                ; 004a2c38
    FXCH ST6                            ; 004a2c3f
    FSTP float ptr [ESP + 0x3c]         ; 004a2c41
    MOV EAX,dword ptr [ESP + 0x90]      ; 004a2c45
    FLD float ptr [ESP + 0x4]           ; 004a2c4c
    FSUB float ptr [ESP + 0x8]          ; 004a2c50
    FXCH ST5                            ; 004a2c54
    FSTP float ptr [ESP + 0x40]         ; 004a2c56
    MOV dword ptr [ESP + 0x98],EAX      ; 004a2c5a
    FXCH                                ; 004a2c61
    FSTP float ptr [ESP + 0x94]         ; 004a2c63
    MOVSD ES:EDI,ESI                    ; 004a2c6a
    MOVSD ES:EDI,ESI                    ; 004a2c6b
    MOVSD ES:EDI,ESI                    ; 004a2c6c
    FXCH ST2                            ; 004a2c6d
    FSTP float ptr [ESP + 0x44]         ; 004a2c6f
    LEA EDI,[ESP + 0x60]                ; 004a2c73
    LEA ESI,[ESP + 0x3c]                ; 004a2c77
    FXCH ST2                            ; 004a2c7b
    FSTP float ptr [ESP + 0x4]          ; 004a2c7d
    MOVSD ES:EDI,ESI                    ; 004a2c81
    MOVSD ES:EDI,ESI                    ; 004a2c82
    MOVSD ES:EDI,ESI                    ; 004a2c83
    FLD float ptr [ESP + 0x4]           ; 004a2c84
    LEA EDI,[ESP + 0x48]                ; 004a2c88
    LEA ESI,[ESP + 0x30]                ; 004a2c8c
    FXCH                                ; 004a2c90
    FADD float ptr [ESP + 0x60]         ; 004a2c92
    FXCH ST2                            ; 004a2c96
    FADD float ptr [ESP + 0x64]         ; 004a2c98
    FXCH ST3                            ; 004a2c9c
    FADD float ptr [ESP + 0x68]         ; 004a2c9e
    FXCH ST2                            ; 004a2ca2
    FSTP float ptr [ESP + 0x30]         ; 004a2ca4
    FXCH ST2                            ; 004a2ca8
    FSTP float ptr [ESP + 0x34]         ; 004a2caa
    FSTP float ptr [ESP + 0x38]         ; 004a2cae
    MOVSD ES:EDI,ESI                    ; 004a2cb2
    MOVSD ES:EDI,ESI                    ; 004a2cb3
    MOVSD ES:EDI,ESI                    ; 004a2cb4
    FLDZ                                ; 004a2cb5
    FLD float ptr [ESP + 0x48]          ; 004a2cb7
    FLD float ptr [ESP + 0x4c]          ; 004a2cbb
    FLD float ptr [ESP + 0x50]          ; 004a2cbf
    LEA EDI,[ESP + 0xc]                 ; 004a2cc3
    LEA ESI,[ESP + 0x24]                ; 004a2cc7
    FXCH ST2                            ; 004a2ccb
    FADD float ptr [ESP + 0x6c]         ; 004a2ccd
    FXCH                                ; 004a2cd1
    FADD float ptr [ESP + 0x70]         ; 004a2cd3
    FXCH ST2                            ; 004a2cd7
    FADD float ptr [ESP + 0x74]         ; 004a2cd9
    FXCH                                ; 004a2cdd
    FSTP float ptr [ESP + 0x24]         ; 004a2cdf
    FXCH                                ; 004a2ce3
    FSTP float ptr [ESP + 0x28]         ; 004a2ce5
    FSTP float ptr [ESP + 0x2c]         ; 004a2ce9
    MOVSD ES:EDI,ESI                    ; 004a2ced
    MOVSD ES:EDI,ESI                    ; 004a2cee
    MOVSD ES:EDI,ESI                    ; 004a2cef
    FCOMPP                              ; 004a2cf0
    FNSTSW AX                           ; 004a2cf2
    SAHF                                ; 004a2cf4
    JNC 0x004a2da1                      ; 004a2cf5
        ;   XREF to: 004a2da1 (CONDITIONAL_JUMP)  ; LAB_004a2da1
    LEA EDX,[ESP + 0x78]                ; 004a2cfb
    LEA EAX,[ESP + 0xc]                 ; 004a2cff
    CMP EDX,EAX                         ; 004a2d03
    JNZ 0x004a2d81                      ; 004a2d05
        ;   XREF to: 004a2d81 (CONDITIONAL_JUMP)  ; LAB_004a2d81
    FLDZ                                ; 004a2d07
        ;   Label: LAB_004a2d07
    FLD float ptr [ESP + 0x8]           ; 004a2d09
    FXCH                                ; 004a2d0d
    FMUL ST1                            ; 004a2d0f
    FXCH                                ; 004a2d11
    FMUL float ptr [0x005c09e0]         ; 004a2d13 | DAT_005c09e0
    FLD float ptr [ESP + 0x54]          ; 004a2d19
    FLD float ptr [ESP + 0x58]          ; 004a2d1d
    LEA EDI,[ESP + 0x84]                ; 004a2d21
    FXCH ST3                            ; 004a2d28
    FSTP float ptr [ESP + 0x18]         ; 004a2d2a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a2d2e
    LEA ESI,[ESP + 0x18]                ; 004a2d32
    MOV dword ptr [ESP + 0x20],EAX      ; 004a2d36
    FXCH                                ; 004a2d3a
    FSTP float ptr [ESP + 0x1c]         ; 004a2d3c
    MOVSD ES:EDI,ESI                    ; 004a2d40
    MOVSD ES:EDI,ESI                    ; 004a2d41
    MOVSD ES:EDI,ESI                    ; 004a2d42
    FLD float ptr [ESP + 0x5c]          ; 004a2d43
    FXCH                                ; 004a2d47
    FADD float ptr [ESP + 0x84]         ; 004a2d49
    FXCH ST2                            ; 004a2d50
    FADD float ptr [ESP + 0x88]         ; 004a2d52
    FXCH                                ; 004a2d59
    FADD float ptr [ESP + 0x8c]         ; 004a2d5b
    FXCH ST2                            ; 004a2d62
    FSTP float ptr [ESP + 0x54]         ; 004a2d64
    FSTP float ptr [ESP + 0x58]         ; 004a2d68
    FSTP float ptr [ESP + 0x5c]         ; 004a2d6c
    JMP 0x004a2bb8                      ; 004a2d70
        ;   XREF to: 004a2bb8 (UNCONDITIONAL_JUMP)  ; LAB_004a2bb8
    MOV dword ptr [ESP],0x3d4ccccd      ; 004a2d75
        ;   Label: LAB_004a2d75
    JMP 0x004a2ba5                      ; 004a2d7c
        ;   XREF to: 004a2ba5 (UNCONDITIONAL_JUMP)  ; LAB_004a2ba5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a2d81
        ;   Label: LAB_004a2d81
    MOV dword ptr [ESP + 0x78],EAX      ; 004a2d85
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a2d89
    MOV dword ptr [ESP + 0x7c],EAX      ; 004a2d8d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a2d91
    MOV dword ptr [ESP + 0x80],EAX      ; 004a2d95
    JMP 0x004a2d07                      ; 004a2d9c
        ;   XREF to: 004a2d07 (UNCONDITIONAL_JUMP)  ; LAB_004a2d07
    MOV EBX,dword ptr [EBP + 0x38]      ; 004a2da1
        ;   Label: LAB_004a2da1
    PUSH dword ptr [0x005df8fc]         ; 004a2da4 | DAT_005df8fc
    PUSH EBX                            ; 004a2daa
    MOV ESI,dword ptr [EBP + 0x34]      ; 004a2dab
    PUSH ESI                            ; 004a2dae
    MOV EDI,dword ptr [EBP + 0x30]      ; 004a2daf
    PUSH EDI                            ; 004a2db2
    MOV EAX,dword ptr [EBP + 0x28]      ; 004a2db3
    PUSH EAX                            ; 004a2db6
    PUSH dword ptr [EBP + 0x24]         ; 004a2db7
    LEA EAX,[ESP + 0x24]                ; 004a2dba
    PUSH 0x0                            ; 004a2dbe
    PUSH EAX                            ; 004a2dc0
    LEA EAX,[ESP + 0x98]                ; 004a2dc1
    PUSH EAX                            ; 004a2dc8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a2dc9
    PUSH EDX                            ; 004a2dcc
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0 ; 004a2dcd
        ;   XREF to: 004a2aa0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x28                        ; 004a2dd2
    MOV ESP,EBP                         ; 004a2dd5
    POP EBP                             ; 004a2dd7
    POP EDI                             ; 004a2dd8
    POP ESI                             ; 004a2dd9
    POP EBX                             ; 004a2dda
    RET                                 ; 004a2ddb

