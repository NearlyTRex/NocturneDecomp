; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00588e00(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588e00
        ;   Label: core_simbox.cpp_CSimBox_setup_FUN_00588e00
    PUSH ESI                            ; 00588e01
    SUB ESP,0x3c                        ; 00588e02
    MOV EBX,dword ptr [ESP + 0x48]      ; 00588e05
    LEA EAX,[EBX + 0x158]               ; 00588e09
    PUSH EAX                            ; 00588e0f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00588e10
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00588e15
    PUSH EBX                            ; 00588e18
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00588e19
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00588e1e
    MOV EAX,ESP                         ; 00588e21
    PUSH EAX                            ; 00588e23
    MOV EDX,dword ptr [EBX + 0x154]     ; 00588e24
    PUSH EBX                            ; 00588e2a
    CALL dword ptr [EDX + 0x14]         ; 00588e2b
    MOV EDX,EAX                         ; 00588e2e
    MOV ESI,EAX                         ; 00588e30
    LEA EAX,[ESP + 0x20]                ; 00588e32
    ADD ESP,0x8                         ; 00588e36
    CMP EAX,EDX                         ; 00588e39
    JNZ 0x00588ef6                      ; 00588e3b
        ;   XREF to: 00588ef6 (CONDITIONAL_JUMP)  ; LAB_00588ef6
    LEA EAX,[ESP + 0x24]                ; 00588e41
        ;   Label: LAB_00588e41
    LEA EDX,[ESI + 0xc]                 ; 00588e45
    CMP EAX,EDX                         ; 00588e48
    JZ 0x00588e60                       ; 00588e4a
        ;   XREF to: 00588e60 (CONDITIONAL_JUMP)  ; LAB_00588e60
    MOV EAX,dword ptr [EDX]             ; 00588e4c
    MOV dword ptr [ESP + 0x24],EAX      ; 00588e4e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00588e52
    MOV dword ptr [ESP + 0x28],EAX      ; 00588e55
    MOV EAX,dword ptr [EDX + 0x8]       ; 00588e59
    MOV dword ptr [ESP + 0x2c],EAX      ; 00588e5c
    FLD float ptr [ESP + 0x24]          ; 00588e60
        ;   Label: LAB_00588e60
    FLD float ptr [ESP + 0x28]          ; 00588e64
    FLD float ptr [ESP + 0x2c]          ; 00588e68
    LEA EAX,[ESP + 0x30]                ; 00588e6c
    FXCH ST2                            ; 00588e70
    FSUB float ptr [ESP + 0x18]         ; 00588e72
    FXCH                                ; 00588e76
    FSUB float ptr [ESP + 0x1c]         ; 00588e78
    FXCH ST2                            ; 00588e7c
    FSUB float ptr [ESP + 0x20]         ; 00588e7e
    FXCH                                ; 00588e82
    FSTP float ptr [ESP + 0x30]         ; 00588e84
    FXCH                                ; 00588e88
    FSTP float ptr [ESP + 0x34]         ; 00588e8a
    FSTP float ptr [ESP + 0x38]         ; 00588e8e
    PUSH dword ptr [EBX + 0x2d8]        ; 00588e92
    PUSH EAX                            ; 00588e98
    LEA EAX,[EBX + 0x30]                ; 00588e99
    PUSH EAX                            ; 00588e9c
    LEA ESI,[EBX + 0x20]                ; 00588e9d
    PUSH ESI                            ; 00588ea0
    LEA EAX,[EBX + 0x358]               ; 00588ea1
    PUSH EAX                            ; 00588ea7
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 00588ea8
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    LEA EAX,[EBX + 0x5b4]               ; 00588ead
    ADD ESP,0x14                        ; 00588eb3
    CMP EAX,ESI                         ; 00588eb6
    JZ 0x00588eca                       ; 00588eb8
        ;   XREF to: 00588eca (CONDITIONAL_JUMP)  ; LAB_00588eca
    MOV EDX,dword ptr [ESI]             ; 00588eba
    MOV dword ptr [EAX],EDX             ; 00588ebc
    MOV EDX,dword ptr [ESI + 0x4]       ; 00588ebe
    MOV dword ptr [EAX + 0x4],EDX       ; 00588ec1
    MOV EDX,dword ptr [ESI + 0x8]       ; 00588ec4
    MOV dword ptr [EAX + 0x8],EDX       ; 00588ec7
    LEA EDX,[EBX + 0x5c0]               ; 00588eca
        ;   Label: LAB_00588eca
    LEA EAX,[EBX + 0x30]                ; 00588ed0
    CMP EDX,EAX                         ; 00588ed3
    JZ 0x00588ee7                       ; 00588ed5
        ;   XREF to: 00588ee7 (CONDITIONAL_JUMP)  ; LAB_00588ee7
    MOV ECX,dword ptr [EAX]             ; 00588ed7
    MOV dword ptr [EDX],ECX             ; 00588ed9
    MOV ECX,dword ptr [EAX + 0x4]       ; 00588edb
    MOV dword ptr [EDX + 0x4],ECX       ; 00588ede
    MOV ECX,dword ptr [EAX + 0x8]       ; 00588ee1
    MOV dword ptr [EDX + 0x8],ECX       ; 00588ee4
    CMP dword ptr [EBX + 0x2d4],0x1     ; 00588ee7
        ;   Label: LAB_00588ee7
    JZ 0x00588f0f                       ; 00588eee
        ;   XREF to: 00588f0f (CONDITIONAL_JUMP)  ; LAB_00588f0f
    ADD ESP,0x3c                        ; 00588ef0
    POP ESI                             ; 00588ef3
    POP EBX                             ; 00588ef4
    RET                                 ; 00588ef5
    MOV EAX,dword ptr [EDX]             ; 00588ef6
        ;   Label: LAB_00588ef6
    MOV dword ptr [ESP + 0x18],EAX      ; 00588ef8
    MOV EAX,dword ptr [EDX + 0x4]       ; 00588efc
    MOV dword ptr [ESP + 0x1c],EAX      ; 00588eff
    MOV EAX,dword ptr [EDX + 0x8]       ; 00588f03
    MOV dword ptr [ESP + 0x20],EAX      ; 00588f06
    JMP 0x00588e41                      ; 00588f0a
        ;   XREF to: 00588e41 (UNCONDITIONAL_JUMP)  ; LAB_00588e41
    MOV dword ptr [EBX + 0x5ac],0x0     ; 00588f0f
        ;   Label: LAB_00588f0f
    ADD ESP,0x3c                        ; 00588f19
    POP ESI                             ; 00588f1c
    POP EBX                             ; 00588f1d
    RET                                 ; 00588f1e

