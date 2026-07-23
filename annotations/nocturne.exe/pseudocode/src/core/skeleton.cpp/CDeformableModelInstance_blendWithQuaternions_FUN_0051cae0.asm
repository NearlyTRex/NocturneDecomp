; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(int param_1,undefined4 *param_2,float *param_3,float param_4,int param_5,code *param_6)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0 at 0051cacd
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591b93
;   string s_Write_me!_00591ba8
;   double DOUBLE_00591bb3 = 0.00100000000000000
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;   core_xform.cpp_FUN_0055d0d0
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cae0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
    PUSH ESI                            ; 0051cae1
    PUSH EDI                            ; 0051cae2
    PUSH EBP                            ; 0051cae3
    SUB ESP,0xd8                        ; 0051cae4
    FLD float ptr [ESP + 0xf8]          ; 0051caea
    FCOMP double ptr [0x00591bb3]       ; 0051caf1 | DOUBLE_00591bb3
    FNSTSW AX                           ; 0051caf7
    SAHF                                ; 0051caf9
    JA 0x0051cb07                       ; 0051cafa
        ;   XREF to: 0051cb07 (CONDITIONAL_JUMP)  ; LAB_0051cb07
    ADD ESP,0xd8                        ; 0051cafc
        ;   Label: LAB_0051cafc
    POP EBP                             ; 0051cb02
    POP EDI                             ; 0051cb03
    POP ESI                             ; 0051cb04
    POP EBX                             ; 0051cb05
    RET                                 ; 0051cb06
    MOV EDX,dword ptr [ESP + 0xec]      ; 0051cb07
        ;   Label: LAB_0051cb07
    PUSH EDX                            ; 0051cb0e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051cb0f
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051cb14
    MOV EBX,dword ptr [ESP + 0xec]      ; 0051cb17
    MOV EBP,EAX                         ; 0051cb1e
    MOV ESI,dword ptr [ESP + 0xec]      ; 0051cb20
    MOV ECX,dword ptr [EBX + 0x2250]    ; 0051cb27
    ADD ESI,0x6b0                       ; 0051cb2d
    TEST ECX,ECX                        ; 0051cb33
    JNZ 0x0051cda7                      ; 0051cb35
        ;   XREF to: 0051cda7 (CONDITIONAL_JUMP)  ; LAB_0051cda7
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0051cb3b
    XOR EBX,EBX                         ; 0051cb41
    TEST EDI,EDI                        ; 0051cb43
    JLE 0x0051cc25                      ; 0051cb45
        ;   XREF to: 0051cc25 (CONDITIONAL_JUMP)  ; LAB_0051cc25
    MOV EAX,dword ptr [ESP + 0xec]      ; 0051cb4b
    MOV dword ptr [ESP + 0xc4],EAX      ; 0051cb52
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0051cb59
    MOV dword ptr [ESP + 0xbc],ESI      ; 0051cb60
    MOV dword ptr [ESP + 0xcc],EAX      ; 0051cb67
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0051cb6e
        ;   Label: LAB_0051cb6e
    PUSH EDI                            ; 0051cb75
    PUSH EBX                            ; 0051cb76
    PUSH EBP                            ; 0051cb77
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051cb78
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051cb7d
    TEST EAX,EAX                        ; 0051cb80
    JL 0x0051cbe3                       ; 0051cb82
        ;   XREF to: 0051cbe3 (CONDITIONAL_JUMP)  ; LAB_0051cbe3
    MOV EDX,dword ptr [ESP + 0xec]      ; 0051cb84
    PUSH EDX                            ; 0051cb8b
    PUSH EAX                            ; 0051cb8c
    PUSH dword ptr [ESP + 0x100]        ; 0051cb8d
    PUSH EDI                            ; 0051cb94
    PUSH EBX                            ; 0051cb95
    CALL dword ptr [ESP + 0x114]        ; 0051cb96
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051cb9d
    FLD float ptr [ESP + 0xe8]          ; 0051cba4
    ADD ESP,0x14                        ; 0051cbab
    SUB ESP,0x4                         ; 0051cbae
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0051cbb1
    FSTP float ptr [ESP]                ; 0051cbb8
    PUSH ESI                            ; 0051cbbb
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0051cbbc
    PUSH EDI                            ; 0051cbc3
    LEA ESI,[ESP + 0xc]                 ; 0051cbc4
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0051cbc8
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 0051cbcd
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0051cbd0
    MOV ESI,ESP                         ; 0051cbd7
    LEA EDI,[EDI + 0x6b0]               ; 0051cbd9
    MOVSD ES:EDI,ESI                    ; 0051cbdf
    MOVSD ES:EDI,ESI                    ; 0051cbe0
    MOVSD ES:EDI,ESI                    ; 0051cbe1
    MOVSD ES:EDI,ESI                    ; 0051cbe2
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0051cbe3
        ;   Label: LAB_0051cbe3
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0051cbea
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0051cbf1
    INC EBX                             ; 0051cbf8
    MOV ESI,dword ptr [EBP + 0x28558]   ; 0051cbf9
    ADD EAX,0x10                        ; 0051cbff
    ADD EDX,0x10                        ; 0051cc02
    ADD ECX,0x10                        ; 0051cc05
    MOV dword ptr [ESP + 0xc4],EAX      ; 0051cc08
    MOV dword ptr [ESP + 0xbc],EDX      ; 0051cc0f
    MOV dword ptr [ESP + 0xcc],ECX      ; 0051cc16
    CMP EBX,ESI                         ; 0051cc1d
    JL 0x0051cb6e                       ; 0051cc1f
        ;   XREF to: 0051cb6e (CONDITIONAL_JUMP)  ; LAB_0051cb6e
    CMP dword ptr [ESP + 0xfc],0x0      ; 0051cc25
        ;   Label: LAB_0051cc25
    JGE 0x0051cafc                      ; 0051cc2d
        ;   XREF to: 0051cafc (CONDITIONAL_JUMP)  ; LAB_0051cafc
    MOV EBX,dword ptr [ESP + 0xec]      ; 0051cc33
    MOV EAX,dword ptr [EBX + 0x508]     ; 0051cc3a
    ADD EBX,0x508                       ; 0051cc40
    MOV dword ptr [ESP + 0x8c],EAX      ; 0051cc46
    LEA EAX,[EBX + 0x4]                 ; 0051cc4d
    MOV EAX,dword ptr [EAX]             ; 0051cc50
    MOV dword ptr [ESP + 0x90],EAX      ; 0051cc52
    LEA EAX,[EBX + 0x8]                 ; 0051cc59
    MOV EAX,dword ptr [EAX]             ; 0051cc5c
    MOV dword ptr [ESP + 0x94],EAX      ; 0051cc5e
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0051cc65
    FLD float ptr [ESP + 0x8c]          ; 0051cc6c
    FMUL float ptr [EAX]                ; 0051cc73
    FLD float ptr [ESP + 0x90]          ; 0051cc75
    FXCH                                ; 0051cc7c
    FSTP float ptr [ESP + 0x8c]         ; 0051cc7e
    FMUL float ptr [EAX + 0x4]          ; 0051cc85
    FLD float ptr [ESP + 0xf8]          ; 0051cc88
    FLD float ptr [ESP + 0x8c]          ; 0051cc8f
    FMUL ST1                            ; 0051cc96
    FLD float ptr [ESP + 0x94]          ; 0051cc98
    FXCH ST3                            ; 0051cc9f
    FSTP float ptr [ESP + 0x90]         ; 0051cca1
    FXCH ST2                            ; 0051cca8
    FMUL float ptr [EAX + 0x8]          ; 0051ccaa
    FLD float ptr [ESP + 0x90]          ; 0051ccad
    FMUL ST2                            ; 0051ccb4
    FLD ST2                             ; 0051ccb6
    FLD1                                ; 0051ccb8
    FSUBRP                              ; 0051ccba
    FXCH ST2                            ; 0051ccbc
    FST float ptr [ESP + 0x94]          ; 0051ccbe
    FMULP ST3                           ; 0051ccc5
    FXCH                                ; 0051ccc7
    FSTP float ptr [ESP + 0xb0]         ; 0051ccc9
    MOV EBX,dword ptr [ESP + 0xec]      ; 0051ccd0
    FXCH ST2                            ; 0051ccd7
    FSTP float ptr [ESP + 0x80]         ; 0051ccd9
    FXCH                                ; 0051cce0
    FSTP float ptr [ESP + 0x84]         ; 0051cce2
    FSTP float ptr [ESP + 0x88]         ; 0051cce9
    FLD float ptr [EBX + 0x6a4]         ; 0051ccf0
    FMUL float ptr [ESP + 0xb0]         ; 0051ccf6
    FSTP float ptr [ESP + 0x98]         ; 0051ccfd
    FLD float ptr [EBX + 0x6a8]         ; 0051cd04
    FMUL float ptr [ESP + 0xb0]         ; 0051cd0a
    FSTP float ptr [ESP + 0x9c]         ; 0051cd11
    FLD float ptr [EBX + 0x6ac]         ; 0051cd18
    FMUL float ptr [ESP + 0xb0]         ; 0051cd1e
    ADD EBX,0x6a4                       ; 0051cd25
    LEA EAX,[ESP + 0xa4]                ; 0051cd2b
    FLD float ptr [ESP + 0x98]          ; 0051cd32
    FADD float ptr [ESP + 0x80]         ; 0051cd39
    FLD float ptr [ESP + 0x9c]          ; 0051cd40
    FXCH                                ; 0051cd47
    FSTP float ptr [ESP + 0xa4]         ; 0051cd49
    FADD float ptr [ESP + 0x84]         ; 0051cd50
    FXCH                                ; 0051cd57
    FST float ptr [ESP + 0xa0]          ; 0051cd59
    FADD float ptr [ESP + 0x88]         ; 0051cd60
    FXCH                                ; 0051cd67
    FSTP float ptr [ESP + 0xa8]         ; 0051cd69
    FSTP float ptr [ESP + 0xac]         ; 0051cd70
    CMP EBX,EAX                         ; 0051cd77
    JZ 0x0051cafc                       ; 0051cd79
        ;   XREF to: 0051cafc (CONDITIONAL_JUMP)  ; LAB_0051cafc
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051cd7f
    MOV dword ptr [EBX],EAX             ; 0051cd86
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0051cd88
    MOV dword ptr [EBX + 0x4],EAX       ; 0051cd8f
    MOV EAX,dword ptr [ESP + 0xac]      ; 0051cd92
    MOV dword ptr [EBX + 0x8],EAX       ; 0051cd99
    ADD ESP,0xd8                        ; 0051cd9c
    POP EBP                             ; 0051cda2
    POP EDI                             ; 0051cda3
    POP ESI                             ; 0051cda4
    POP EBX                             ; 0051cda5
    RET                                 ; 0051cda6
    CMP ECX,0x1                         ; 0051cda7
        ;   Label: LAB_0051cda7
    JNZ 0x0051cf36                      ; 0051cdaa
        ;   XREF to: 0051cf36 (CONDITIONAL_JUMP)  ; LAB_0051cf36
    XOR EDX,EDX                         ; 0051cdb0
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051cdb2
    MOV dword ptr [ESP + 0xd0],EDX      ; 0051cdb8
    TEST ECX,ECX                        ; 0051cdbf
    JLE 0x0051cc25                      ; 0051cdc1
        ;   XREF to: 0051cc25 (CONDITIONAL_JUMP)  ; LAB_0051cc25
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0051cdc7
    MOV dword ptr [ESP + 0xc8],EAX      ; 0051cdce
    MOV dword ptr [ESP + 0xb8],ESI      ; 0051cdd5
    MOV EAX,dword ptr [ESP + 0xec]      ; 0051cddc
    MOV dword ptr [ESP + 0xb4],ESI      ; 0051cde3
    MOV dword ptr [ESP + 0xc0],EAX      ; 0051cdea
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0051cdf1
        ;   Label: LAB_0051cdf1
    PUSH EAX                            ; 0051cdf8
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0051cdf9
    PUSH EDX                            ; 0051ce00
    PUSH EBP                            ; 0051ce01
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051ce02
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051ce07
    TEST EAX,EAX                        ; 0051ce0a
    JL 0x0051ce62                       ; 0051ce0c
        ;   XREF to: 0051ce62 (CONDITIONAL_JUMP)  ; LAB_0051ce62
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0051ce0e
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0051ce15
    TEST EAX,EAX                        ; 0051ce1b
    JGE 0x0051ceba                      ; 0051ce1d
        ;   XREF to: 0051ceba (CONDITIONAL_JUMP)  ; LAB_0051ceba
    LEA EDI,[ESP + 0x10]                ; 0051ce23
    MOV ESI,EBX                         ; 0051ce27
    MOVSD ES:EDI,ESI                    ; 0051ce29
        ;   Label: LAB_0051ce29
    MOVSD ES:EDI,ESI                    ; 0051ce2a
    MOVSD ES:EDI,ESI                    ; 0051ce2b
    MOVSD ES:EDI,ESI                    ; 0051ce2c
    LEA EAX,[ESP + 0x10]                ; 0051ce2d
    PUSH dword ptr [ESP + 0xf8]         ; 0051ce31
    PUSH EAX                            ; 0051ce38
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0051ce39
    PUSH EDI                            ; 0051ce40
    LEA ESI,[ESP + 0x6c]                ; 0051ce41
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 0051ce45
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 0051ce4a
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0051ce4d
    LEA ESI,[ESP + 0x60]                ; 0051ce54
    LEA EDI,[EDI + 0x6b0]               ; 0051ce58
    MOVSD ES:EDI,ESI                    ; 0051ce5e
    MOVSD ES:EDI,ESI                    ; 0051ce5f
    MOVSD ES:EDI,ESI                    ; 0051ce60
    MOVSD ES:EDI,ESI                    ; 0051ce61
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0051ce62
        ;   Label: LAB_0051ce62
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0051ce69
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0051ce70
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0051ce77
    ADD EBX,0x10                        ; 0051ce7e
    MOV EDI,dword ptr [EBP + 0x28558]   ; 0051ce81
    ADD EAX,0x24                        ; 0051ce87
    ADD EDX,0x10                        ; 0051ce8a
    ADD ECX,0x10                        ; 0051ce8d
    INC ESI                             ; 0051ce90
    MOV dword ptr [ESP + 0xc8],EAX      ; 0051ce91
    MOV dword ptr [ESP + 0xc0],EDX      ; 0051ce98
    MOV dword ptr [ESP + 0xb8],ECX      ; 0051ce9f
    MOV dword ptr [ESP + 0xd0],ESI      ; 0051cea6
    CMP ESI,EDI                         ; 0051cead
    JGE 0x0051cc25                      ; 0051ceaf
        ;   XREF to: 0051cc25 (CONDITIONAL_JUMP)  ; LAB_0051cc25
    JMP 0x0051cdf1                      ; 0051ceb5
        ;   XREF to: 0051cdf1 (UNCONDITIONAL_JUMP)  ; LAB_0051cdf1
    SHL EAX,0x4                         ; 0051ceba
        ;   Label: LAB_0051ceba
    MOV dword ptr [ESP + 0xd4],EAX      ; 0051cebd
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0051cec4
    ADD EAX,dword ptr [ESP + 0xd4]      ; 0051cecb
    PUSH EAX                            ; 0051ced2
    LEA ESI,[ESP + 0x24]                ; 0051ced3
    LEA EDI,[ESP + 0x44]                ; 0051ced7
    CALL core_xform.cpp_FUN_0055d0d0    ; 0051cedb
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d0d0()
    ADD ESP,0x4                         ; 0051cee0
    LEA EAX,[ESP + 0x40]                ; 0051cee3
    LEA ESI,[ESP + 0x20]                ; 0051cee7
    PUSH EAX                            ; 0051ceeb
    MOVSD ES:EDI,ESI                    ; 0051ceec
    MOVSD ES:EDI,ESI                    ; 0051ceed
    MOVSD ES:EDI,ESI                    ; 0051ceee
    MOVSD ES:EDI,ESI                    ; 0051ceef
    PUSH EBX                            ; 0051cef0
    LEA ESI,[ESP + 0x78]                ; 0051cef1
    LEA EDI,[ESP + 0x38]                ; 0051cef5
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051cef9
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x78]                ; 0051cefe
    ADD ESP,0x8                         ; 0051cf02
    MOVSD ES:EDI,ESI                    ; 0051cf05
    MOVSD ES:EDI,ESI                    ; 0051cf06
    MOVSD ES:EDI,ESI                    ; 0051cf07
    MOVSD ES:EDI,ESI                    ; 0051cf08
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051cf09
    ADD EAX,dword ptr [ESP + 0xd4]      ; 0051cf10
    PUSH EAX                            ; 0051cf17
    LEA EAX,[ESP + 0x34]                ; 0051cf18
    PUSH EAX                            ; 0051cf1c
    LEA ESI,[ESP + 0x58]                ; 0051cf1d
    LEA EDI,[ESP + 0x18]                ; 0051cf21
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051cf25
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x58]                ; 0051cf2a
    ADD ESP,0x8                         ; 0051cf2e
    JMP 0x0051ce29                      ; 0051cf31
        ;   XREF to: 0051ce29 (UNCONDITIONAL_JUMP)  ; LAB_0051ce29
    MOV EBP,0x591b93                    ; 0051cf36 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0051cf36
    MOV EAX,0xad5                       ; 0051cf3b
    PUSH 0x591ba8                       ; 0051cf40 | = "Write me!"
    MOV dword ptr [0x01cc4800],EBP      ; 0051cf45 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0051cf4b | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051cf50
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0051cf55
    JMP 0x0051cc25                      ; 0051cf58
        ;   XREF to: 0051cc25 (UNCONDITIONAL_JUMP)  ; LAB_0051cc25

