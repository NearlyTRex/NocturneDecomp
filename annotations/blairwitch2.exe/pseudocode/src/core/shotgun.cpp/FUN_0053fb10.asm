; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_FUN_0053fb10(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6831
;   undefined4 DAT_005e6835
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053fb10
        ;   Label: core_shotgun.cpp_FUN_0053fb10
    PUSH ESI                            ; 0053fb11
    PUSH EDI                            ; 0053fb12
    PUSH EBP                            ; 0053fb13
    MOV EBP,ESP                         ; 0053fb14
    SUB ESP,0xb0                        ; 0053fb16
    AND ESP,0xfffffff8                  ; 0053fb1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053fb1f
    MOV EDX,dword ptr [0x0060b280]      ; 0053fb22 | DAT_0060b280
    PUSH EDX                            ; 0053fb28 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0053fb29
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053fb2e
    TEST EAX,EAX                        ; 0053fb31
    JZ 0x0053fb3c                       ; 0053fb33
        ;   XREF to: 0053fb3c (CONDITIONAL_JUMP)  ; LAB_0053fb3c
    MOV ESP,EBP                         ; 0053fb35
    POP EBP                             ; 0053fb37
    POP EDI                             ; 0053fb38
    POP ESI                             ; 0053fb39
    POP EBX                             ; 0053fb3a
    RET                                 ; 0053fb3b
    PUSH EBX                            ; 0053fb3c
        ;   Label: LAB_0053fb3c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0053fb3d
    LEA ESI,[ESP + 0x88]                ; 0053fb43
    LEA EDI,[ESP + 0x28]                ; 0053fb4a
    CALL dword ptr [EAX + 0xe8]         ; 0053fb4e
    ADD ESP,0x4                         ; 0053fb54
    LEA EAX,[ESP + 0x24]                ; 0053fb57
    LEA ESI,[ESP + 0x84]                ; 0053fb5b
    PUSH EAX                            ; 0053fb62
    MOVSD ES:EDI,ESI                    ; 0053fb63
    MOVSD ES:EDI,ESI                    ; 0053fb64
    MOVSD ES:EDI,ESI                    ; 0053fb65
    PUSH EBX                            ; 0053fb66
    LEA ESI,[ESP + 0x14]                ; 0053fb67
    LEA EDI,[ESP + 0x8]                 ; 0053fb6b
    CALL core_actor.cpp_FUN_00408d70    ; 0053fb6f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 0053fb74
    ADD ESP,0x8                         ; 0053fb78
    MOVSD ES:EDI,ESI                    ; 0053fb7b
    MOVSD ES:EDI,ESI                    ; 0053fb7c
    MOVSD ES:EDI,ESI                    ; 0053fb7d
    MOV EAX,dword ptr [EBX + 0x444]     ; 0053fb7e
    MOV dword ptr [ESP + 0x38],EAX      ; 0053fb84
    LEA EAX,[ESP + 0x30]                ; 0053fb88
    XOR ECX,ECX                         ; 0053fb8c
    PUSH EAX                            ; 0053fb8e
    LEA ESI,[ESP + 0xa0]                ; 0053fb8f
    LEA EDI,[ESP + 0x58]                ; 0053fb96
    PUSH EBX                            ; 0053fb9a
    MOV dword ptr [ESP + 0x38],ECX      ; 0053fb9b
    MOV dword ptr [ESP + 0x3c],ECX      ; 0053fb9f
    CALL core_actor.cpp_FUN_00408cf0    ; 0053fba3
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 0053fba8
    LEA ESI,[ESP + 0x9c]                ; 0053fbab
    FLD float ptr [ESP]                 ; 0053fbb2
    FLD float ptr [ESP + 0x4]           ; 0053fbb5
    MOVSD ES:EDI,ESI                    ; 0053fbb9
    MOVSD ES:EDI,ESI                    ; 0053fbba
    MOVSD ES:EDI,ESI                    ; 0053fbbb
    FLD float ptr [ESP + 0x8]           ; 0053fbbc
    FLD float ptr [ESP + 0x54]          ; 0053fbc0
    FLD float ptr [ESP + 0x58]          ; 0053fbc4
    FLD float ptr [ESP + 0x5c]          ; 0053fbc8
    LEA EDI,[ESP + 0x60]                ; 0053fbcc
    LEA ESI,[ESP + 0x90]                ; 0053fbd0
    FXCH ST2                            ; 0053fbd7
    FCHS                                ; 0053fbd9
    FXCH                                ; 0053fbdb
    FCHS                                ; 0053fbdd
    FXCH ST2                            ; 0053fbdf
    FCHS                                ; 0053fbe1
    FXCH ST5                            ; 0053fbe3
    FADD float ptr [ESP + 0x54]         ; 0053fbe5
    FXCH ST4                            ; 0053fbe9
    FADD float ptr [ESP + 0x58]         ; 0053fbeb
    FXCH ST3                            ; 0053fbef
    FADD float ptr [ESP + 0x5c]         ; 0053fbf1
    FXCH                                ; 0053fbf5
    FSTP float ptr [ESP + 0x78]         ; 0053fbf7
    FXCH ST3                            ; 0053fbfb
    FSTP float ptr [ESP + 0x90]         ; 0053fbfd
    FXCH                                ; 0053fc04
    FSTP float ptr [ESP + 0x94]         ; 0053fc06
    FXCH                                ; 0053fc0d
    FSTP float ptr [ESP + 0x98]         ; 0053fc0f
    MOVSD ES:EDI,ESI                    ; 0053fc16
    MOVSD ES:EDI,ESI                    ; 0053fc17
    MOVSD ES:EDI,ESI                    ; 0053fc18
    FSTP float ptr [ESP + 0x7c]         ; 0053fc19
    LEA EDI,[ESP + 0x3c]                ; 0053fc1d
    LEA ESI,[ESP + 0x78]                ; 0053fc21
    FSTP float ptr [ESP + 0x80]         ; 0053fc25
    MOVSD ES:EDI,ESI                    ; 0053fc2c
    MOVSD ES:EDI,ESI                    ; 0053fc2d
    MOVSD ES:EDI,ESI                    ; 0053fc2e
    LEA EAX,[ESP + 0x48]                ; 0053fc2f
    LEA ESI,[ESP + 0x3c]                ; 0053fc33
    CMP EAX,ESI                         ; 0053fc37
    JZ 0x0053fc53                       ; 0053fc39
        ;   XREF to: 0053fc53 (CONDITIONAL_JUMP)  ; LAB_0053fc53
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053fc3b
    MOV dword ptr [ESP + 0x48],EAX      ; 0053fc3f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0053fc43
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053fc47
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053fc4b
    MOV dword ptr [ESP + 0x50],EAX      ; 0053fc4f
    FLD float ptr [ESP + 0x4c]          ; 0053fc53
        ;   Label: LAB_0053fc53
    FMUL ST0                            ; 0053fc57
    FLD float ptr [ESP + 0x48]          ; 0053fc59
    FMUL ST0                            ; 0053fc5d
    FADDP                               ; 0053fc5f
    FLD float ptr [ESP + 0x50]          ; 0053fc61
    FMUL ST0                            ; 0053fc65
    FADDP                               ; 0053fc67
    FSQRT                               ; 0053fc69
    FLDZ                                ; 0053fc6b
    FXCH                                ; 0053fc6d
    FSTP float ptr [ESP + 0xa8]         ; 0053fc6f
    FCOMP float ptr [ESP + 0xa8]        ; 0053fc76
    FNSTSW AX                           ; 0053fc7d
    SAHF                                ; 0053fc7f
    JNC 0x0053fd59                      ; 0053fc80
        ;   XREF to: 0053fd59 (CONDITIONAL_JUMP)  ; LAB_0053fd59
    FLD1                                ; 0053fc86
    FLD float ptr [ESP + 0x48]          ; 0053fc88
    FXCH                                ; 0053fc8c
    FDIV float ptr [ESP + 0xa8]         ; 0053fc8e
    FXCH                                ; 0053fc95
    FMUL ST1                            ; 0053fc97
    FLD float ptr [ESP + 0x4c]          ; 0053fc99
    FMUL ST2                            ; 0053fc9d
    FLD float ptr [ESP + 0x50]          ; 0053fc9f
    FMULP ST3                           ; 0053fca3
    FXCH                                ; 0053fca5
    FSTP float ptr [ESP + 0x48]         ; 0053fca7
    FSTP float ptr [ESP + 0x4c]         ; 0053fcab
    FSTP float ptr [ESP + 0x50]         ; 0053fcaf
    FLD float ptr [EBX + 0x6d4]         ; 0053fcb3
        ;   Label: LAB_0053fcb3
    FMUL float ptr [0x005e6831]         ; 0053fcb9 | DAT_005e6831
    FMUL float ptr [0x005e6835]         ; 0053fcbf | DAT_005e6835
    SUB ESP,0x4                         ; 0053fcc5
    FSTP float ptr [ESP]                ; 0053fcc8
    PUSH 0x0                            ; 0053fccb
    PUSH 0xff                           ; 0053fccd
    PUSH 0x0                            ; 0053fcd2
    LEA EAX,[ESP + 0x70]                ; 0053fcd4
    PUSH 0x3f800000                     ; 0053fcd8
    PUSH EAX                            ; 0053fcdd
    LEA EAX,[ESP + 0x18]                ; 0053fcde
    PUSH EAX                            ; 0053fce2
    MOV ECX,dword ptr [0x00614d30]      ; 0053fce3 | DAT_00614d30
    PUSH ECX                            ; 0053fce9
    LEA EDI,[ESP + 0x38]                ; 0053fcea
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0 ; 0053fcee
        ;   XREF to: 0049d7e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 0053fcf3
    MOV dword ptr [EBX + 0x6d8],0x1     ; 0053fcf6
    LEA ESI,[ESP + 0x6c]                ; 0053fd00
    FLD float ptr [ESP + 0x60]          ; 0053fd04
    FLD float ptr [ESP + 0x64]          ; 0053fd08
    FLD float ptr [ESP + 0x68]          ; 0053fd0c
    FXCH ST2                            ; 0053fd10
    FSUB float ptr [ESP]                ; 0053fd12
    FXCH                                ; 0053fd15
    FSUB float ptr [ESP + 0x4]          ; 0053fd17
    FXCH ST2                            ; 0053fd1b
    FSUB float ptr [ESP + 0x8]          ; 0053fd1d
    FXCH                                ; 0053fd21
    FSTP float ptr [ESP + 0x6c]         ; 0053fd23
    FXCH                                ; 0053fd27
    FSTP float ptr [ESP + 0x70]         ; 0053fd29
    FSTP float ptr [ESP + 0x74]         ; 0053fd2d
    MOVSD ES:EDI,ESI                    ; 0053fd31
    MOVSD ES:EDI,ESI                    ; 0053fd32
    MOVSD ES:EDI,ESI                    ; 0053fd33
    FLD float ptr [ESP + 0x1c]          ; 0053fd34
    FMUL ST0                            ; 0053fd38
    FLD float ptr [ESP + 0x18]          ; 0053fd3a
    FMUL ST0                            ; 0053fd3e
    FADDP                               ; 0053fd40
    FLD float ptr [ESP + 0x20]          ; 0053fd42
    FMUL ST0                            ; 0053fd46
    FADDP                               ; 0053fd48
    FSQRT                               ; 0053fd4a
    FSTP float ptr [EBX + 0x6dc]        ; 0053fd4c
    MOV ESP,EBP                         ; 0053fd52
    POP EBP                             ; 0053fd54
    POP EDI                             ; 0053fd55
    POP ESI                             ; 0053fd56
    POP EBX                             ; 0053fd57
    RET                                 ; 0053fd58
    XOR EDI,EDI                         ; 0053fd59
        ;   Label: LAB_0053fd59
    MOV dword ptr [ESP + 0x4c],EDI      ; 0053fd5b
    MOV dword ptr [ESP + 0x48],EDI      ; 0053fd5f
    MOV dword ptr [ESP + 0x50],EDI      ; 0053fd63
    JMP 0x0053fcb3                      ; 0053fd67
        ;   XREF to: 0053fcb3 (UNCONDITIONAL_JUMP)  ; LAB_0053fcb3

