; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_0050de10(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005cbad5
;   undefined4 DAT_005cbadd
;   undefined4 DAT_005cbae5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050de10
        ;   Label: core_pendulum.cpp_CPendulum_setup_FUN_0050de10
    PUSH ESI                            ; 0050de11
    PUSH EDI                            ; 0050de12
    SUB ESP,0x78                        ; 0050de13
    MOV EBX,dword ptr [ESP + 0x88]      ; 0050de16
    LEA EAX,[EBX + 0x158]               ; 0050de1d
    PUSH EAX                            ; 0050de23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0050de24
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0050de29
    PUSH EBX                            ; 0050de2c
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 0050de2d
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050de32
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050de35
    PUSH EBX                            ; 0050de3b
    LEA ESI,[ESP + 0x4]                 ; 0050de3c
    LEA EDI,[ESP + 0x1c]                ; 0050de40
    CALL dword ptr [EAX + 0x1c]         ; 0050de44
    MOV ECX,0x6                         ; 0050de47
    LEA ESI,[ESP + 0x4]                 ; 0050de4c
    ADD ESP,0x4                         ; 0050de50
    MOVSD.REP ES:EDI,ESI                ; 0050de53
    LEA EDX,[ESP + 0x30]                ; 0050de55
    LEA ESI,[ESP + 0x18]                ; 0050de59
    CMP EDX,ESI                         ; 0050de5d
    JNZ 0x0050df29                      ; 0050de5f
        ;   XREF to: 0050df29 (CONDITIONAL_JUMP)  ; LAB_0050df29
    LEA EAX,[ESP + 0x3c]                ; 0050de65
        ;   Label: LAB_0050de65
    LEA EDX,[ESI + 0xc]                 ; 0050de69
    CMP EAX,EDX                         ; 0050de6c
    JZ 0x0050de84                       ; 0050de6e
        ;   XREF to: 0050de84 (CONDITIONAL_JUMP)  ; LAB_0050de84
    MOV EAX,dword ptr [EDX]             ; 0050de70
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050de72
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050de76
    MOV dword ptr [ESP + 0x40],EAX      ; 0050de79
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050de7d
    MOV dword ptr [ESP + 0x44],EAX      ; 0050de80
    FLD float ptr [ESP + 0x40]          ; 0050de84
        ;   Label: LAB_0050de84
    FSUB float ptr [ESP + 0x34]         ; 0050de88
    FMUL double ptr [0x005cbad5]        ; 0050de8c | DAT_005cbad5
    FSQRT                               ; 0050de92
    FMUL double ptr [0x005cbadd]        ; 0050de94 | DAT_005cbadd
    LEA EDI,[ESP + 0x60]                ; 0050de9a
    LEA ESI,[ESP + 0x48]                ; 0050de9e
    FSTP float ptr [EBX + 0x3a4]        ; 0050dea2
    FLD float ptr [ESP + 0x30]          ; 0050dea8
    FLD float ptr [ESP + 0x34]          ; 0050deac
    FLD float ptr [ESP + 0x38]          ; 0050deb0
    FXCH ST2                            ; 0050deb4
    FADD float ptr [ESP + 0x3c]         ; 0050deb6
    FXCH                                ; 0050deba
    FADD float ptr [ESP + 0x40]         ; 0050debc
    FXCH ST2                            ; 0050dec0
    FADD float ptr [ESP + 0x44]         ; 0050dec2
    FXCH                                ; 0050dec6
    FSTP float ptr [ESP + 0x48]         ; 0050dec8
    FXCH                                ; 0050decc
    FSTP float ptr [ESP + 0x4c]         ; 0050dece
    FSTP float ptr [ESP + 0x50]         ; 0050ded2
    MOVSD ES:EDI,ESI                    ; 0050ded6
    MOVSD ES:EDI,ESI                    ; 0050ded7
    MOVSD ES:EDI,ESI                    ; 0050ded8
    FLD float ptr [0x005cbae5]          ; 0050ded9 | DAT_005cbae5
    FLD float ptr [ESP + 0x60]          ; 0050dedf
    FMUL ST1                            ; 0050dee3
    FLD float ptr [ESP + 0x64]          ; 0050dee5
    FMUL ST2                            ; 0050dee9
    FLD float ptr [ESP + 0x68]          ; 0050deeb
    FMULP ST3                           ; 0050deef
    LEA EDX,[EBX + 0x410]               ; 0050def1
    LEA EAX,[ESP + 0x54]                ; 0050def7
    LEA EDI,[ESP + 0x54]                ; 0050defb
    LEA ESI,[ESP + 0x6c]                ; 0050deff
    FXCH                                ; 0050df03
    FSTP float ptr [ESP + 0x6c]         ; 0050df05
    FSTP float ptr [ESP + 0x70]         ; 0050df09
    FSTP float ptr [ESP + 0x74]         ; 0050df0d
    MOVSD ES:EDI,ESI                    ; 0050df11
    MOVSD ES:EDI,ESI                    ; 0050df12
    MOVSD ES:EDI,ESI                    ; 0050df13
    CMP EDX,EAX                         ; 0050df14
    JNZ 0x0050df46                      ; 0050df16
        ;   XREF to: 0050df46 (CONDITIONAL_JUMP)  ; LAB_0050df46
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050df18
    MOV dword ptr [EBX + 0x414],EAX     ; 0050df1c
    ADD ESP,0x78                        ; 0050df22
    POP EDI                             ; 0050df25
    POP ESI                             ; 0050df26
    POP EBX                             ; 0050df27
    RET                                 ; 0050df28
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050df29
        ;   Label: LAB_0050df29
    MOV dword ptr [ESP + 0x30],EAX      ; 0050df2d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050df31
    MOV dword ptr [ESP + 0x34],EAX      ; 0050df35
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050df39
    MOV dword ptr [ESP + 0x38],EAX      ; 0050df3d
    JMP 0x0050de65                      ; 0050df41
        ;   XREF to: 0050de65 (UNCONDITIONAL_JUMP)  ; LAB_0050de65
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050df46
        ;   Label: LAB_0050df46
    MOV dword ptr [EDX],EAX             ; 0050df4a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050df4c
    MOV dword ptr [EDX + 0x4],EAX       ; 0050df50
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0050df53
    MOV dword ptr [EDX + 0x8],EAX       ; 0050df57
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050df5a
    MOV dword ptr [EBX + 0x414],EAX     ; 0050df5e
    ADD ESP,0x78                        ; 0050df64
    POP EDI                             ; 0050df67
    POP ESI                             ; 0050df68
    POP EBX                             ; 0050df69
    RET                                 ; 0050df6a

