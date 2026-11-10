; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_scat_cpp_FUN_00542b90(CDemonActor *param_1,CDemonActor *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x15c]:1  local_15c
;
; XREF[1]:
;   core_scat.cpp_FUN_005424f0 at 005427ef
;
; Referenced Globals:
;   undefined4 DAT_005edeef
;   undefined4 DAT_005edef7
;   undefined4 DAT_005edeff
;   undefined4 DAT_005edf07
;   undefined4 DAT_005edf0f
;   undefined4 DAT_005edf13
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557300
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542b90
        ;   Label: core_scat.cpp_FUN_00542b90
    PUSH ESI                            ; 00542b91
    PUSH EDI                            ; 00542b92
    PUSH EBP                            ; 00542b93
    MOV EBP,ESP                         ; 00542b94
    SUB ESP,0x154                       ; 00542b96
    AND ESP,0xfffffff8                  ; 00542b9c
    MOV EDX,dword ptr [0x01c3f6a0]      ; 00542b9f | g_CEnemyClassInfo.name_hash
    PUSH EDX                            ; 00542ba5
    MOV ECX,dword ptr [EBP + 0x18]      ; 00542ba6
    PUSH ECX                            ; 00542ba9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00542baa
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00542baf
    PUSH 0x5fb430                       ; 00542bb2 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00542bb7
    MOV EBX,EAX                         ; 00542bb9
    LEA EAX,[ESP + 0x14]                ; 00542bbb
    PUSH EAX                            ; 00542bbf
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00542bc0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00542bc5
    LEA EAX,[ESP + 0xc]                 ; 00542bc8
    PUSH EAX                            ; 00542bcc
    MOV EDI,dword ptr [EBP + 0x18]      ; 00542bcd
    MOV ESI,dword ptr [EBP + 0x18]      ; 00542bd0
    PUSH EDI                            ; 00542bd3
    MOV ESI,dword ptr [ESI + 0x154]     ; 00542bd4
    CALL dword ptr [ESI + 0x54]         ; 00542bda
    ADD ESP,0x8                         ; 00542bdd
    TEST EAX,EAX                        ; 00542be0
    JZ 0x00542bfc                       ; 00542be2
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    TEST EBX,EBX                        ; 00542be4
    JZ 0x00542c15                       ; 00542be6
        ;   XREF to: 00542c15 (CONDITIONAL_JUMP)  ; LAB_00542c15
    PUSH EBX                            ; 00542be8
    MOV EAX,dword ptr [EBX + 0x154]     ; 00542be9
    CALL dword ptr [EAX + 0x10c]        ; 00542bef
    ADD ESP,0x4                         ; 00542bf5
    TEST EAX,EAX                        ; 00542bf8
    JLE 0x00542c15                      ; 00542bfa
        ;   XREF to: 00542c15 (CONDITIONAL_JUMP)  ; LAB_00542c15
    MOV dword ptr [ESP + 0x14c],0xbf800000 ; 00542bfc
        ;   Label: LAB_00542bfc
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00542c07
    MOV ESP,EBP                         ; 00542c0e
    POP EBP                             ; 00542c10
    POP EDI                             ; 00542c11
    POP ESI                             ; 00542c12
    POP EBX                             ; 00542c13
    RET                                 ; 00542c14
    MOV EAX,dword ptr [EBP + 0x18]      ; 00542c15
        ;   Label: LAB_00542c15
    ADD EAX,0x20                        ; 00542c18
    PUSH EAX                            ; 00542c1b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542c1c
    PUSH EAX                            ; 00542c1f
    LEA ESI,[ESP + 0x140]               ; 00542c20
    LEA EDI,[ESP + 0xc8]                ; 00542c27
    CALL core_actor.cpp_FUN_00408bb0    ; 00542c2e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x140]               ; 00542c33
    ADD ESP,0x8                         ; 00542c3a
    MOVSD ES:EDI,ESI                    ; 00542c3d
    MOVSD ES:EDI,ESI                    ; 00542c3e
    MOVSD ES:EDI,ESI                    ; 00542c3f
    FLD float ptr [ESP + 0xc8]          ; 00542c40
    FLDZ                                ; 00542c47
    FCOMPP                              ; 00542c49
    FNSTSW AX                           ; 00542c4b
    SAHF                                ; 00542c4d
    JNC 0x00542bfc                      ; 00542c4e
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    FLD float ptr [ESP + 0xc4]          ; 00542c50
    FMUL ST0                            ; 00542c57
    FLD float ptr [ESP + 0xc0]          ; 00542c59
    FMUL ST0                            ; 00542c60
    FADDP                               ; 00542c62
    FLD float ptr [ESP + 0xc8]          ; 00542c64
    FMUL ST0                            ; 00542c6b
    FADDP                               ; 00542c6d
    FSQRT                               ; 00542c6f
    FSTP float ptr [ESP + 0x8]          ; 00542c71
    MOV EAX,dword ptr [ESP + 0x8]       ; 00542c75
    MOV dword ptr [ESP + 0x148],EAX     ; 00542c79
    LEA EAX,[ESP + 0xc0]                ; 00542c80
    PUSH EAX                            ; 00542c87
    LEA ESI,[ESP + 0x100]               ; 00542c88
    LEA EDI,[ESP + 0x10c]               ; 00542c8f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00542c96
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 00542c9b
    LEA ESI,[ESP + 0xfc]                ; 00542c9e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00542ca5
    MOVSD ES:EDI,ESI                    ; 00542ca8
    MOVSD ES:EDI,ESI                    ; 00542ca9
    MOVSD ES:EDI,ESI                    ; 00542caa
    TEST EDX,EDX                        ; 00542cab
    JZ 0x00542cea                       ; 00542cad
        ;   XREF to: 00542cea (CONDITIONAL_JUMP)  ; LAB_00542cea
    FLD float ptr [ESP + 0x8]           ; 00542caf
    FCOMP double ptr [0x005edf07]       ; 00542cb3 | DAT_005edf07
    FNSTSW AX                           ; 00542cb9
    SAHF                                ; 00542cbb
    JA 0x00542bfc                       ; 00542cbc
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    FLD float ptr [ESP + 0x10c]         ; 00542cc2
    FCOMP float ptr [0x005edf0f]        ; 00542cc9 | DAT_005edf0f
    FNSTSW AX                           ; 00542ccf
    SAHF                                ; 00542cd1
    JC 0x00542bfc                       ; 00542cd2
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    CMP dword ptr [ESP + 0x10c],0x3fc90fdb ; 00542cd8
    JLE 0x00542d28                      ; 00542ce3
        ;   XREF to: 00542d28 (CONDITIONAL_JUMP)  ; LAB_00542d28
    JMP 0x00542bfc                      ; 00542ce5
        ;   XREF to: 00542bfc (UNCONDITIONAL_JUMP)  ; LAB_00542bfc
    FLD float ptr [ESP + 0x8]           ; 00542cea
        ;   Label: LAB_00542cea
    FCOMP double ptr [0x005edeef]       ; 00542cee | DAT_005edeef
    FNSTSW AX                           ; 00542cf4
    SAHF                                ; 00542cf6
    JA 0x00542bfc                       ; 00542cf7
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    FLD float ptr [ESP + 0x10c]         ; 00542cfd
    FST double ptr [ESP]                ; 00542d04
    FCOMP double ptr [0x005edef7]       ; 00542d07 | DAT_005edef7
    FNSTSW AX                           ; 00542d0d
    SAHF                                ; 00542d0f
    JC 0x00542bfc                       ; 00542d10
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    FLD double ptr [ESP]                ; 00542d16
    FCOMP double ptr [0x005edeff]       ; 00542d19 | DAT_005edeff
    FNSTSW AX                           ; 00542d1f
    SAHF                                ; 00542d21
    JA 0x00542bfc                       ; 00542d22
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00542d28
        ;   Label: LAB_00542d28
    MOV EAX,dword ptr [EBP + 0x14]      ; 00542d2b
    PUSH EDX                            ; 00542d2e
    MOV EAX,dword ptr [EAX + 0x154]     ; 00542d2f
    LEA ESI,[ESP + 0xa0]                ; 00542d35
    LEA EDI,[ESP + 0x88]                ; 00542d3c
    CALL dword ptr [EAX + 0x1c]         ; 00542d43
    MOV ECX,0x6                         ; 00542d46
    LEA ESI,[ESP + 0xa0]                ; 00542d4b
    ADD ESP,0x4                         ; 00542d52
    MOVSD.REP ES:EDI,ESI                ; 00542d55
    LEA EBX,[ESP + 0x84]                ; 00542d57
    FLD float ptr [ESP + 0x84]          ; 00542d5e
    FLD float ptr [ESP + 0x88]          ; 00542d65
    FLD float ptr [ESP + 0x8c]          ; 00542d6c
    LEA EDI,[ESP + 0xd8]                ; 00542d73
    LEA ESI,[ESP + 0xe4]                ; 00542d7a
    FXCH ST2                            ; 00542d81
    FADD float ptr [EBX + 0xc]          ; 00542d83
    FXCH                                ; 00542d86
    FADD float ptr [EBX + 0x10]         ; 00542d88
    FXCH ST2                            ; 00542d8b
    FADD float ptr [EBX + 0x14]         ; 00542d8d
    FXCH                                ; 00542d90
    FSTP float ptr [ESP + 0xe4]         ; 00542d92
    FXCH                                ; 00542d99
    FSTP float ptr [ESP + 0xe8]         ; 00542d9b
    FSTP float ptr [ESP + 0xec]         ; 00542da2
    MOVSD ES:EDI,ESI                    ; 00542da9
    MOVSD ES:EDI,ESI                    ; 00542daa
    MOVSD ES:EDI,ESI                    ; 00542dab
    FLD float ptr [0x005edf13]          ; 00542dac | DAT_005edf13
    FLD float ptr [ESP + 0xd8]          ; 00542db2
    FMUL ST1                            ; 00542db9
    FLD float ptr [ESP + 0xdc]          ; 00542dbb
    FMUL ST2                            ; 00542dc2
    LEA EAX,[ESP + 0xc]                 ; 00542dc4
    FLD float ptr [ESP + 0xe0]          ; 00542dc8
    FMULP ST3                           ; 00542dcf
    PUSH EAX                            ; 00542dd1
    MOV EBX,dword ptr [EBP + 0x14]      ; 00542dd2
    LEA EDI,[ESP + 0x118]               ; 00542dd5
    LEA ESI,[ESP + 0x130]               ; 00542ddc
    FXCH                                ; 00542de3
    FSTP float ptr [ESP + 0x130]        ; 00542de5
    FSTP float ptr [ESP + 0x134]        ; 00542dec
    FSTP float ptr [ESP + 0x138]        ; 00542df3
    MOVSD ES:EDI,ESI                    ; 00542dfa
    MOVSD ES:EDI,ESI                    ; 00542dfb
    MOVSD ES:EDI,ESI                    ; 00542dfc
    MOV ECX,dword ptr [EBP + 0x18]      ; 00542dfd
    FLD float ptr [EBX + 0x20]          ; 00542e00
    FLD float ptr [EBX + 0x24]          ; 00542e03
    FLD float ptr [EBX + 0x28]          ; 00542e06
    LEA EDI,[ESP + 0xb8]                ; 00542e09
    LEA ESI,[ESP + 0xd0]                ; 00542e10
    FXCH ST2                            ; 00542e17
    FADD float ptr [ESP + 0x118]        ; 00542e19
    FXCH                                ; 00542e20
    FADD float ptr [ESP + 0x11c]        ; 00542e22
    FXCH ST2                            ; 00542e29
    FADD float ptr [ESP + 0x120]        ; 00542e2b
    FXCH                                ; 00542e32
    FSTP float ptr [ESP + 0xd0]         ; 00542e34
    FXCH                                ; 00542e3b
    FSTP float ptr [ESP + 0xd4]         ; 00542e3d
    FSTP float ptr [ESP + 0xd8]         ; 00542e44
    MOVSD ES:EDI,ESI                    ; 00542e4b
    MOVSD ES:EDI,ESI                    ; 00542e4c
    MOVSD ES:EDI,ESI                    ; 00542e4d
    PUSH ECX                            ; 00542e4e
    LEA ESI,[ESP + 0x128]               ; 00542e4f
    CALL core_actor.cpp_FUN_00408b40    ; 00542e56
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00542e5b
    LEA EDI,[ESP + 0xf0]                ; 00542e5e
    PUSH 0x1                            ; 00542e65
    MOV EBX,dword ptr [0x00622c18]      ; 00542e67 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x124]               ; 00542e6d
    PUSH EBX                            ; 00542e74 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00542e75
    MOVSD ES:EDI,ESI                    ; 00542e76
    MOVSD ES:EDI,ESI                    ; 00542e77
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 00542e78
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00542e7d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00542e80
    PUSH ESI                            ; 00542e83
    MOV EDI,dword ptr [0x00622c18]      ; 00542e84 | g_CDemonSetPtr
    PUSH EDI                            ; 00542e8a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00542e8b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00542e90
    LEA EAX,[ESP + 0xf0]                ; 00542e93
    PUSH EAX                            ; 00542e9a
    LEA EAX,[ESP + 0xb8]                ; 00542e9b
    PUSH EAX                            ; 00542ea2
    MOV EAX,[0x00622c18]                ; 00542ea3 | g_CDemonSetPtr
    PUSH EAX                            ; 00542ea8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00542ea9
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x15c],EAX     ; 00542eae
    FLD float ptr [ESP + 0x15c]         ; 00542eb5
    ADD ESP,0xc                         ; 00542ebc
    MOV EDX,dword ptr [0x00622c18]      ; 00542ebf | g_CDemonSetPtr
    PUSH EDX                            ; 00542ec5 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x148]        ; 00542ec6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00542ecd
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00542ed2
    FLD float ptr [ESP + 0x144]         ; 00542ed5
    FLD1                                ; 00542edc
    FCOMPP                              ; 00542ede
    FNSTSW AX                           ; 00542ee0
    SAHF                                ; 00542ee2
    JC 0x00542bfc                       ; 00542ee3
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    MOV EAX,[0x00622c18]                ; 00542ee9 | g_CDemonSetPtr
    MOV ECX,dword ptr [EBP + 0x18]      ; 00542eee
    CMP ECX,dword ptr [EAX + 0x14d144]  ; 00542ef1 | g_CDemonSetInstance.collision_actor
    JNZ 0x00542bfc                      ; 00542ef7
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    MOV EAX,dword ptr [ESP + 0x148]     ; 00542efd
    MOV dword ptr [ESP + 0x14c],EAX     ; 00542f04
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00542f0b
    MOV ESP,EBP                         ; 00542f12
    POP EBP                             ; 00542f14
    POP EDI                             ; 00542f15
    POP ESI                             ; 00542f16
    POP EBX                             ; 00542f17
    RET                                 ; 00542f18

