; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00656e16 = 0.03125
;   double DOUBLE_00656e1e = 0.0833333333333333
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7b90
        ;   Label: core_vehicle.cpp_CVehicle_setup_FUN_005e7b90
    PUSH ESI                            ; 005e7b91
    PUSH EDI                            ; 005e7b92
    PUSH EBP                            ; 005e7b93
    SUB ESP,0x24                        ; 005e7b94
    MOV EBX,dword ptr [ESP + 0x38]      ; 005e7b97
    PUSH EBX                            ; 005e7b9b
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005e7b9c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e7ba1
    LEA EAX,[EBX + 0x158]               ; 005e7ba4
    PUSH EAX                            ; 005e7baa
    XOR EDI,EDI                         ; 005e7bab
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005e7bad
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EBX + 0x938]     ; 005e7bb2
    ADD ESP,0x4                         ; 005e7bb8
    TEST EDX,EDX                        ; 005e7bbb
    JLE 0x005e7be0                      ; 005e7bbd
        ;   XREF to: 005e7be0 (CONDITIONAL_JUMP)  ; LAB_005e7be0
    LEA ESI,[EBX + 0x950]               ; 005e7bbf
    PUSH ESI                            ; 005e7bc5
        ;   Label: LAB_005e7bc5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005e7bc6
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    INC EDI                             ; 005e7bcb
    ADD ESP,0x4                         ; 005e7bcc
    MOV ECX,dword ptr [EBX + 0x938]     ; 005e7bcf
    ADD ESI,0x1b4                       ; 005e7bd5
    CMP EDI,ECX                         ; 005e7bdb
    JL 0x005e7bc5                       ; 005e7bdd
        ;   XREF to: 005e7bc5 (CONDITIONAL_JUMP)  ; LAB_005e7bc5
    NOP                                 ; 005e7bdf
    LEA EAX,[EBX + 0x158]               ; 005e7be0
        ;   Label: LAB_005e7be0
    PUSH EAX                            ; 005e7be6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e7be7
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5690]    ; 005e7bec
    ADD ESP,0x4                         ; 005e7bf2
    MOV EAX,dword ptr [EDX]             ; 005e7bf5
    MOV dword ptr [ESP],EAX             ; 005e7bf7
    LEA EAX,[EDX + 0x4]                 ; 005e7bfa
    MOV EAX,dword ptr [EAX]             ; 005e7bfd
    MOV dword ptr [ESP + 0x4],EAX       ; 005e7bff
    LEA EAX,[EDX + 0x8]                 ; 005e7c03
    MOV EAX,dword ptr [EAX]             ; 005e7c06
    MOV dword ptr [ESP + 0x8],EAX       ; 005e7c08
    MOV EAX,dword ptr [EDX + 0xc]       ; 005e7c0c
    ADD EDX,0xc                         ; 005e7c0f
    MOV dword ptr [ESP + 0xc],EAX       ; 005e7c12
    LEA EAX,[EDX + 0x4]                 ; 005e7c16
    MOV EAX,dword ptr [EAX]             ; 005e7c19
    FLD float ptr [ESP + 0xc]           ; 005e7c1b
    MOV dword ptr [ESP + 0x10],EAX      ; 005e7c1f
    FSUB float ptr [ESP]                ; 005e7c23
    FLD float ptr [ESP + 0x10]          ; 005e7c26
    LEA EAX,[EDX + 0x8]                 ; 005e7c2a
    FSUB float ptr [ESP + 0x4]          ; 005e7c2d
    LEA EDX,[EBX + 0x92c]               ; 005e7c31
    MOV EAX,dword ptr [EAX]             ; 005e7c37
    FXCH                                ; 005e7c39
    FSTP float ptr [ESP + 0x18]         ; 005e7c3b
    MOV dword ptr [ESP + 0x14],EAX      ; 005e7c3f
    FSTP float ptr [ESP + 0x1c]         ; 005e7c43
    FLD float ptr [ESP + 0x14]          ; 005e7c47
    FSUB float ptr [ESP + 0x8]          ; 005e7c4b
    LEA EAX,[ESP + 0x18]                ; 005e7c4f
    FSTP float ptr [ESP + 0x20]         ; 005e7c53
    CMP EDX,EAX                         ; 005e7c57
    JZ 0x005e7c6f                       ; 005e7c59
        ;   XREF to: 005e7c6f (CONDITIONAL_JUMP)  ; LAB_005e7c6f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e7c5b
    MOV dword ptr [EDX],EAX             ; 005e7c5f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005e7c61
    MOV dword ptr [EDX + 0x4],EAX       ; 005e7c65
    MOV EAX,dword ptr [ESP + 0x20]      ; 005e7c68
    MOV dword ptr [EDX + 0x8],EAX       ; 005e7c6c
    FLD float ptr [EBX + 0x918]         ; 005e7c6f
        ;   Label: LAB_005e7c6f
    FMUL double ptr [0x00656e16]        ; 005e7c75 | DOUBLE_00656e16
    FLD float ptr [EBX + 0x930]         ; 005e7c7b
    FMUL ST0                            ; 005e7c81
    FLD float ptr [EBX + 0x92c]         ; 005e7c83
    FMUL ST0                            ; 005e7c89
    FLD float ptr [EBX + 0x92c]         ; 005e7c8b
    FMUL ST0                            ; 005e7c91
    FLD float ptr [EBX + 0x934]         ; 005e7c93
    FMUL ST0                            ; 005e7c99
    FLD float ptr [EBX + 0x934]         ; 005e7c9b
    FMUL ST0                            ; 005e7ca1
    FLD float ptr [EBX + 0x930]         ; 005e7ca3
    FMUL ST0                            ; 005e7ca9
    FXCH ST2                            ; 005e7cab
    FADDP ST5,ST0                       ; 005e7cad
    FXCH ST5                            ; 005e7caf
    FST float ptr [EBX + 0x91c]         ; 005e7cb1
    FLD double ptr [0x00656e1e]         ; 005e7cb7 | DOUBLE_00656e1e
    FXCH                                ; 005e7cbd
    FMUL ST1                            ; 005e7cbf
    FXCH ST6                            ; 005e7cc1
    FADDP ST4,ST0                       ; 005e7cc3
    FXCH                                ; 005e7cc5
    FADDP ST2,ST0                       ; 005e7cc7
    FLD float ptr [EBX + 0x91c]         ; 005e7cc9
    FMUL ST1                            ; 005e7ccf
    FLD float ptr [EBX + 0x91c]         ; 005e7cd1
    FMULP ST2                           ; 005e7cd7
    FXCH ST5                            ; 005e7cd9
    FMULP ST4                           ; 005e7cdb
    FXCH ST4                            ; 005e7cdd
    FMULP ST2                           ; 005e7cdf
    FMULP ST3                           ; 005e7ce1
    LEA EAX,[EBX + 0x8e8]               ; 005e7ce3
    FXCH                                ; 005e7ce9
    FSTP float ptr [EBX + 0x920]        ; 005e7ceb
    FSTP float ptr [EBX + 0x924]        ; 005e7cf1
    FSTP float ptr [EBX + 0x928]        ; 005e7cf7
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7cfd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d04
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d07
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d0a
    MOV dword ptr [EAX],EDX             ; 005e7d0d
    LEA EAX,[EBX + 0x90c]               ; 005e7d0f
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7d15
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d1c
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d1f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d22
    MOV dword ptr [EAX],EDX             ; 005e7d25
    LEA EAX,[EBX + 0x8d0]               ; 005e7d27
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7d2d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d34
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d37
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d3a
    MOV dword ptr [EAX],EDX             ; 005e7d3d
    LEA EAX,[EBX + 0x8f4]               ; 005e7d3f
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7d45
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d4c
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d4f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d52
    MOV dword ptr [EAX],EDX             ; 005e7d55
    LEA EAX,[EBX + 0x8dc]               ; 005e7d57
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7d5d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d64
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d67
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d6a
    MOV dword ptr [EAX],EDX             ; 005e7d6d
    LEA EAX,[EBX + 0x900]               ; 005e7d6f
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7d75
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d7c
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d7f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d82
    MOV dword ptr [EAX],EDX             ; 005e7d85
    LEA EAX,[EBX + 0x8c4]               ; 005e7d87
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7d8d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e7d94
    MOV dword ptr [EAX + 0x4],EDX       ; 005e7d97
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e7d9a
    MOV dword ptr [EAX],EDX             ; 005e7d9d
    MOV EDI,dword ptr [EBX + 0x938]     ; 005e7d9f
    XOR ESI,ESI                         ; 005e7da5
    TEST EDI,EDI                        ; 005e7da7
    JLE 0x005e7e11                      ; 005e7da9
        ;   XREF to: 005e7e11 (CONDITIONAL_JUMP)  ; LAB_005e7e11
    LEA EDI,[EBX + 0x93c]               ; 005e7dab
    LEA EDX,[EDI + 0x19c]               ; 005e7db1
    LEA EAX,[EDI + 0x190]               ; 005e7db7
    IMUL ECX,ESI,0x1b4                  ; 005e7dbd
        ;   Label: LAB_005e7dbd
    ADD ECX,EDI                         ; 005e7dc3
    CMP EDX,ECX                         ; 005e7dc5
    JZ 0x005e7dd9                       ; 005e7dc7
        ;   XREF to: 005e7dd9 (CONDITIONAL_JUMP)  ; LAB_005e7dd9
    MOV EBP,dword ptr [ECX]             ; 005e7dc9
    MOV dword ptr [EDX],EBP             ; 005e7dcb
    MOV EBP,dword ptr [ECX + 0x4]       ; 005e7dcd
    MOV dword ptr [EDX + 0x4],EBP       ; 005e7dd0
    MOV EBP,dword ptr [ECX + 0x8]       ; 005e7dd3
    MOV dword ptr [EDX + 0x8],EBP       ; 005e7dd6
    MOV dword ptr [EAX + 0x8],0x0       ; 005e7dd9
        ;   Label: LAB_005e7dd9
    ADD EDX,0x1b4                       ; 005e7de0
    MOV dword ptr [EAX + 0x20],0x0      ; 005e7de6
    INC ESI                             ; 005e7ded
    FLD float ptr [EAX + 0x20]          ; 005e7dee
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e7df1
    MOV dword ptr [EAX + 0x4],ECX       ; 005e7df4
    FST float ptr [EAX + 0x1c]          ; 005e7df7
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e7dfa
    MOV dword ptr [EAX],ECX             ; 005e7dfd
    FSTP float ptr [EAX + 0x18]         ; 005e7dff
    MOV EBP,dword ptr [EBX + 0x938]     ; 005e7e02
    ADD EAX,0x1b4                       ; 005e7e08
    CMP ESI,EBP                         ; 005e7e0d
    JL 0x005e7dbd                       ; 005e7e0f
        ;   XREF to: 005e7dbd (CONDITIONAL_JUMP)  ; LAB_005e7dbd
    MOV dword ptr [EBX + 0x100c],0x0    ; 005e7e11
        ;   Label: LAB_005e7e11
    LEA EAX,[EBX + 0x1034]              ; 005e7e1b
    MOV dword ptr [EBX + 0x1010],0x3f800000 ; 005e7e21
    PUSH EAX                            ; 005e7e2b
    LEA EAX,[EBX + 0x1020]              ; 005e7e2c
    MOV dword ptr [EBX + 0x1014],0x0    ; 005e7e32
    PUSH EAX                            ; 005e7e3c
    MOV dword ptr [EBX + 0x1018],0x0    ; 005e7e3d
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 005e7e47
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x106c],0x1    ; 005e7e4c
    MOV dword ptr [EBX + 0x1054],0x0    ; 005e7e56
    MOV dword ptr [EBX + 0x1058],0x0    ; 005e7e60
    ADD ESP,0x8                         ; 005e7e6a
    MOV dword ptr [EBX + 0x105c],0x0    ; 005e7e6d
    ADD ESP,0x24                        ; 005e7e77
    POP EBP                             ; 005e7e7a
    POP EDI                             ; 005e7e7b
    POP ESI                             ; 005e7e7c
    POP EBX                             ; 005e7e7d
    RET                                 ; 005e7e7e

