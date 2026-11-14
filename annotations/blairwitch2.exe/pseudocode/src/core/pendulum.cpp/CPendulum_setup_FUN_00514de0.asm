; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_00514de0(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e1a12
;   undefined4 DAT_005e1a1a
;   undefined4 DAT_005e1a22
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514de0
        ;   Label: core_pendulum.cpp_CPendulum_setup_FUN_00514de0
    PUSH ESI                            ; 00514de1
    PUSH EDI                            ; 00514de2
    SUB ESP,0x78                        ; 00514de3
    MOV EBX,dword ptr [ESP + 0x88]      ; 00514de6
    LEA EAX,[EBX + 0x2b4]               ; 00514ded
    PUSH EAX                            ; 00514df3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00514df4
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00514df9
    PUSH EBX                            ; 00514dfc
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00514dfd
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00514e02
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00514e05
    PUSH EBX                            ; 00514e0b
    LEA ESI,[ESP + 0x4]                 ; 00514e0c
    LEA EDI,[ESP + 0x1c]                ; 00514e10
    CALL dword ptr [EAX + 0x24]         ; 00514e14
    MOV ECX,0x6                         ; 00514e17
    LEA ESI,[ESP + 0x4]                 ; 00514e1c
    ADD ESP,0x4                         ; 00514e20
    MOVSD.REP ES:EDI,ESI                ; 00514e23
    LEA EDX,[ESP + 0x30]                ; 00514e25
    LEA ESI,[ESP + 0x18]                ; 00514e29
    CMP EDX,ESI                         ; 00514e2d
    JNZ 0x00514ef9                      ; 00514e2f
        ;   XREF to: 00514ef9 (CONDITIONAL_JUMP)  ; LAB_00514ef9
    LEA EAX,[ESP + 0x3c]                ; 00514e35
        ;   Label: LAB_00514e35
    LEA EDX,[ESI + 0xc]                 ; 00514e39
    CMP EAX,EDX                         ; 00514e3c
    JZ 0x00514e54                       ; 00514e3e
        ;   XREF to: 00514e54 (CONDITIONAL_JUMP)  ; LAB_00514e54
    MOV EAX,dword ptr [EDX]             ; 00514e40
    MOV dword ptr [ESP + 0x3c],EAX      ; 00514e42
    MOV EAX,dword ptr [EDX + 0x4]       ; 00514e46
    MOV dword ptr [ESP + 0x40],EAX      ; 00514e49
    MOV EAX,dword ptr [EDX + 0x8]       ; 00514e4d
    MOV dword ptr [ESP + 0x44],EAX      ; 00514e50
    FLD float ptr [ESP + 0x40]          ; 00514e54
        ;   Label: LAB_00514e54
    FSUB float ptr [ESP + 0x34]         ; 00514e58
    FMUL double ptr [0x005e1a12]        ; 00514e5c | DAT_005e1a12
    FSQRT                               ; 00514e62
    FMUL double ptr [0x005e1a1a]        ; 00514e64 | DAT_005e1a1a
    LEA EDI,[ESP + 0x60]                ; 00514e6a
    LEA ESI,[ESP + 0x48]                ; 00514e6e
    FSTP float ptr [EBX + 0x500]        ; 00514e72
    FLD float ptr [ESP + 0x30]          ; 00514e78
    FLD float ptr [ESP + 0x34]          ; 00514e7c
    FLD float ptr [ESP + 0x38]          ; 00514e80
    FXCH ST2                            ; 00514e84
    FADD float ptr [ESP + 0x3c]         ; 00514e86
    FXCH                                ; 00514e8a
    FADD float ptr [ESP + 0x40]         ; 00514e8c
    FXCH ST2                            ; 00514e90
    FADD float ptr [ESP + 0x44]         ; 00514e92
    FXCH                                ; 00514e96
    FSTP float ptr [ESP + 0x48]         ; 00514e98
    FXCH                                ; 00514e9c
    FSTP float ptr [ESP + 0x4c]         ; 00514e9e
    FSTP float ptr [ESP + 0x50]         ; 00514ea2
    MOVSD ES:EDI,ESI                    ; 00514ea6
    MOVSD ES:EDI,ESI                    ; 00514ea7
    MOVSD ES:EDI,ESI                    ; 00514ea8
    FLD float ptr [0x005e1a22]          ; 00514ea9 | DAT_005e1a22
    FLD float ptr [ESP + 0x60]          ; 00514eaf
    FMUL ST1                            ; 00514eb3
    FLD float ptr [ESP + 0x64]          ; 00514eb5
    FMUL ST2                            ; 00514eb9
    FLD float ptr [ESP + 0x68]          ; 00514ebb
    FMULP ST3                           ; 00514ebf
    LEA EDX,[EBX + 0x56c]               ; 00514ec1
    LEA EAX,[ESP + 0x54]                ; 00514ec7
    LEA EDI,[ESP + 0x54]                ; 00514ecb
    LEA ESI,[ESP + 0x6c]                ; 00514ecf
    FXCH                                ; 00514ed3
    FSTP float ptr [ESP + 0x6c]         ; 00514ed5
    FSTP float ptr [ESP + 0x70]         ; 00514ed9
    FSTP float ptr [ESP + 0x74]         ; 00514edd
    MOVSD ES:EDI,ESI                    ; 00514ee1
    MOVSD ES:EDI,ESI                    ; 00514ee2
    MOVSD ES:EDI,ESI                    ; 00514ee3
    CMP EDX,EAX                         ; 00514ee4
    JNZ 0x00514f16                      ; 00514ee6
        ;   XREF to: 00514f16 (CONDITIONAL_JUMP)  ; LAB_00514f16
    MOV EAX,dword ptr [ESP + 0x34]      ; 00514ee8
    MOV dword ptr [EBX + 0x570],EAX     ; 00514eec
    ADD ESP,0x78                        ; 00514ef2
    POP EDI                             ; 00514ef5
    POP ESI                             ; 00514ef6
    POP EBX                             ; 00514ef7
    RET                                 ; 00514ef8
    MOV EAX,dword ptr [ESP + 0x18]      ; 00514ef9
        ;   Label: LAB_00514ef9
    MOV dword ptr [ESP + 0x30],EAX      ; 00514efd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00514f01
    MOV dword ptr [ESP + 0x34],EAX      ; 00514f05
    MOV EAX,dword ptr [ESP + 0x20]      ; 00514f09
    MOV dword ptr [ESP + 0x38],EAX      ; 00514f0d
    JMP 0x00514e35                      ; 00514f11
        ;   XREF to: 00514e35 (UNCONDITIONAL_JUMP)  ; LAB_00514e35
    MOV EAX,dword ptr [ESP + 0x54]      ; 00514f16
        ;   Label: LAB_00514f16
    MOV dword ptr [EDX],EAX             ; 00514f1a
    MOV EAX,dword ptr [ESP + 0x58]      ; 00514f1c
    MOV dword ptr [EDX + 0x4],EAX       ; 00514f20
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00514f23
    MOV dword ptr [EDX + 0x8],EAX       ; 00514f27
    MOV EAX,dword ptr [ESP + 0x34]      ; 00514f2a
    MOV dword ptr [EBX + 0x570],EAX     ; 00514f2e
    ADD ESP,0x78                        ; 00514f34
    POP EDI                             ; 00514f37
    POP ESI                             ; 00514f38
    POP EBX                             ; 00514f39
    RET                                 ; 00514f3a

