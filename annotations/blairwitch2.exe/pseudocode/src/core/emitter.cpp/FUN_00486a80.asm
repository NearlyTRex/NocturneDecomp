; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_FUN_00486a80(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined8       Stack[-0x44]:8  local_44
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005835a0 at 005835f3
;
; Referenced Globals:
;   undefined4 DAT_005d2bae
;   undefined4 DAT_005d2bb6
;   undefined4 DAT_005d2bbe
;   undefined4 DAT_005d2bc6
;   undefined4 DAT_005d2bce
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_fire.cpp_FUN_0049d500
;   core_hero.cpp_FUN_004ce050
;   crt_math.c_atan2_FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486a80
        ;   Label: core_emitter.cpp_FUN_00486a80
    PUSH ESI                            ; 00486a81
    PUSH EDI                            ; 00486a82
    PUSH EBP                            ; 00486a83
    MOV EBP,ESP                         ; 00486a84
    SUB ESP,0x7c                        ; 00486a86
    AND ESP,0xfffffff8                  ; 00486a89
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486a8c
    ADD EBX,0x20                        ; 00486a8f
    PUSH EBX                            ; 00486a92
    LEA EDI,[ESP + 0x2c]                ; 00486a93
    LEA ESI,[ESP + 0x14]                ; 00486a97
    CALL core_hero.cpp_FUN_004ce050     ; 00486a9b
        ;   XREF to: 004ce050 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce050()
    FLD float ptr [EAX + 0x24]          ; 00486aa0
    FLD float ptr [EAX + 0x28]          ; 00486aa3
    FLD float ptr [EAX + 0x20]          ; 00486aa6
    ADD ESP,0x4                         ; 00486aa9
    LEA EAX,[ESP + 0x28]                ; 00486aac
    FSUB float ptr [EBX]                ; 00486ab0
    FXCH ST2                            ; 00486ab2
    FSUB float ptr [EBX + 0x4]          ; 00486ab4
    FXCH                                ; 00486ab7
    FSUB float ptr [EBX + 0x8]          ; 00486ab9
    FXCH ST2                            ; 00486abc
    FSTP float ptr [ESP + 0x10]         ; 00486abe
    FSTP float ptr [ESP + 0x14]         ; 00486ac2
    FSTP float ptr [ESP + 0x18]         ; 00486ac6
    LEA EBX,[ESP + 0x34]                ; 00486aca
    MOVSD ES:EDI,ESI                    ; 00486ace
    MOVSD ES:EDI,ESI                    ; 00486acf
    MOVSD ES:EDI,ESI                    ; 00486ad0
    CMP EBX,EAX                         ; 00486ad1
    JZ 0x00486aed                       ; 00486ad3
        ;   XREF to: 00486aed (CONDITIONAL_JUMP)  ; LAB_00486aed
    MOV EAX,dword ptr [ESP + 0x28]      ; 00486ad5
    MOV dword ptr [ESP + 0x34],EAX      ; 00486ad9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00486add
    MOV dword ptr [ESP + 0x38],EAX      ; 00486ae1
    MOV EAX,dword ptr [ESP + 0x30]      ; 00486ae5
    MOV dword ptr [ESP + 0x3c],EAX      ; 00486ae9
    FLD float ptr [ESP + 0x38]          ; 00486aed
        ;   Label: LAB_00486aed
    PUSH 0x41000000                     ; 00486af1
    FADD float ptr [0x005d2bae]         ; 00486af6 | DAT_005d2bae
    PUSH 0xc1000000                     ; 00486afc
    FSTP float ptr [ESP + 0x40]         ; 00486b01
    CALL core_actor.cpp_FUN_0040cf60    ; 00486b05
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x80],EAX      ; 00486b0a
    FLD float ptr [ESP + 0x80]          ; 00486b11
    ADD ESP,0x8                         ; 00486b18
    PUSH 0x41000000                     ; 00486b1b
    FADD float ptr [ESP + 0x38]         ; 00486b20
    PUSH 0xc1000000                     ; 00486b24
    FSTP float ptr [ESP + 0x3c]         ; 00486b29
    CALL core_actor.cpp_FUN_0040cf60    ; 00486b2d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    FLD double ptr [0x005d2bb6]         ; 00486b32 | DAT_005d2bb6
    FLD ST0                             ; 00486b38
    MOV dword ptr [ESP + 0x80],EAX      ; 00486b3a
    FSIN                                ; 00486b41
    FLD double ptr [0x005d2bc6]         ; 00486b43 | DAT_005d2bc6
    FPTAN                               ; 00486b49
    FSTP ST0                            ; 00486b4b
    FLD float ptr [ESP + 0x80]          ; 00486b4d
    ADD ESP,0x8                         ; 00486b54
    FADD float ptr [ESP + 0x3c]         ; 00486b57
    FST float ptr [ESP + 0x3c]          ; 00486b5b
    FLD float ptr [ESP + 0x34]          ; 00486b5f
    CALL crt_math.c_atan2_FUN_005b9989  ; 00486b63
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [ESP + 0x3c]          ; 00486b68
    FMUL ST0                            ; 00486b6c
    FLD float ptr [ESP + 0x34]          ; 00486b6e
    FMUL ST0                            ; 00486b72
    FADDP                               ; 00486b74
    FSQRT                               ; 00486b76
    FXCH ST4                            ; 00486b78
    FCOS                                ; 00486b7a
    FLD ST1                             ; 00486b7c
    FSIN                                ; 00486b7e
    FXCH ST2                            ; 00486b80
    FCOS                                ; 00486b82
    FXCH ST5                            ; 00486b84
    FSTP double ptr [ESP + 0x4c]        ; 00486b86
    FXCH ST2                            ; 00486b8a
    FMUL double ptr [ESP + 0x4c]        ; 00486b8c
    FSUB float ptr [ESP + 0x38]         ; 00486b90
    FLD ST2                             ; 00486b94
    FMUL float ptr [0x005d2bce]         ; 00486b96 | DAT_005d2bce
    FLD double ptr [ESP + 0x4c]         ; 00486b9c
    FMUL double ptr [0x005d2bbe]        ; 00486ba0 | DAT_005d2bbe
    FXCH                                ; 00486ba6
    FMUL ST4                            ; 00486ba8
    FXCH                                ; 00486baa
    FMUL double ptr [ESP + 0x4c]        ; 00486bac
    FXCH                                ; 00486bb0
    FMULP ST2                           ; 00486bb2
    FXCH ST2                            ; 00486bb4
    FMUL ST3                            ; 00486bb6
    FXCH ST5                            ; 00486bb8
    FMULP ST3                           ; 00486bba
    FXCH                                ; 00486bbc
    FSTP float ptr [ESP + 0x70]         ; 00486bbe
    FXCH ST2                            ; 00486bc2
    FCHS                                ; 00486bc4
    FSTP float ptr [ESP + 0x44]         ; 00486bc6
    FXCH                                ; 00486bca
    FST float ptr [ESP]                 ; 00486bcc
    FLDZ                                ; 00486bcf
    FXCH ST3                            ; 00486bd1
    FSTP float ptr [ESP + 0x40]         ; 00486bd3
    FXCH                                ; 00486bd7
    FSTP float ptr [ESP + 0x48]         ; 00486bd9
    FXCH                                ; 00486bdd
    FCOMPP                              ; 00486bdf
    FNSTSW AX                           ; 00486be1
    SAHF                                ; 00486be3
    JNC 0x00486c6d                      ; 00486be4
        ;   XREF to: 00486c6d (CONDITIONAL_JUMP)  ; LAB_00486c6d
    FLD float ptr [ESP + 0x70]          ; 00486bea
    FDIV float ptr [ESP]                ; 00486bee
    FSQRT                               ; 00486bf1
    FLD float ptr [ESP + 0x40]          ; 00486bf3
    FXCH                                ; 00486bf7
    FSTP float ptr [ESP + 0x74]         ; 00486bf9
    FMUL float ptr [ESP + 0x74]         ; 00486bfd
    FLD float ptr [ESP + 0x44]          ; 00486c01
    FMUL float ptr [ESP + 0x74]         ; 00486c05
    FLD float ptr [ESP + 0x48]          ; 00486c09
    FMUL float ptr [ESP + 0x74]         ; 00486c0d
    LEA EDI,[ESP + 0x4]                 ; 00486c11
    LEA ESI,[ESP + 0x1c]                ; 00486c15
    LEA EBX,[ESP + 0x4]                 ; 00486c19
    LEA EAX,[ESP + 0x40]                ; 00486c1d
    FXCH ST2                            ; 00486c21
    FSTP float ptr [ESP + 0x1c]         ; 00486c23
    FSTP float ptr [ESP + 0x20]         ; 00486c27
    FSTP float ptr [ESP + 0x24]         ; 00486c2b
    MOVSD ES:EDI,ESI                    ; 00486c2f
    MOVSD ES:EDI,ESI                    ; 00486c30
    MOVSD ES:EDI,ESI                    ; 00486c31
    CMP EAX,EBX                         ; 00486c32
    JZ 0x00486c4e                       ; 00486c34
        ;   XREF to: 00486c4e (CONDITIONAL_JUMP)  ; LAB_00486c4e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00486c36
    MOV dword ptr [ESP + 0x40],EAX      ; 00486c3a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00486c3e
    MOV dword ptr [ESP + 0x44],EAX      ; 00486c42
    MOV EAX,dword ptr [ESP + 0xc]       ; 00486c46
    MOV dword ptr [ESP + 0x48],EAX      ; 00486c4a
    PUSH 0x0                            ; 00486c4e
        ;   Label: LAB_00486c4e
    PUSH 0x0                            ; 00486c50
    LEA EAX,[ESP + 0x48]                ; 00486c52
    PUSH EAX                            ; 00486c56
    MOV EAX,dword ptr [EBP + 0x14]      ; 00486c57
    ADD EAX,0x20                        ; 00486c5a
    PUSH EAX                            ; 00486c5d
    MOV EDX,dword ptr [0x00614d30]      ; 00486c5e | DAT_00614d30
    PUSH EDX                            ; 00486c64
    CALL core_fire.cpp_FUN_0049d500     ; 00486c65
        ;   XREF to: 0049d500 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d500(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 00486c6a
    MOV ESP,EBP                         ; 00486c6d
        ;   Label: LAB_00486c6d
    POP EBP                             ; 00486c6f
    POP EDI                             ; 00486c70
    POP ESI                             ; 00486c71
    POP EBX                             ; 00486c72
    RET                                 ; 00486c73

