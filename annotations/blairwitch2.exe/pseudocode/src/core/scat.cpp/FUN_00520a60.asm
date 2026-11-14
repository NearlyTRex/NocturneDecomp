; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_scat_cpp_FUN_00520a60(CDemonActor *param_1,CDemonActor *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x15c]:1  local_15c
;
; XREF[1]:
;   core_scat.cpp_FUN_005203c0 at 005206bf
;
; Referenced Globals:
;   undefined4 DAT_005e2be3
;   undefined4 DAT_005e2beb
;   undefined4 DAT_005e2bf3
;   undefined4 DAT_005e2bfb
;   undefined4 DAT_005e2c03
;   undefined4 DAT_005e2c07
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00535ee0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520a60
        ;   Label: core_scat.cpp_FUN_00520a60
    PUSH ESI                            ; 00520a61
    PUSH EDI                            ; 00520a62
    PUSH EBP                            ; 00520a63
    MOV EBP,ESP                         ; 00520a64
    SUB ESP,0x154                       ; 00520a66
    AND ESP,0xfffffff8                  ; 00520a6c
    MOV EDX,dword ptr [0x01c264e0]      ; 00520a6f | g_CEnemyClassInfo.name_hash
    PUSH EDX                            ; 00520a75
    MOV ECX,dword ptr [EBP + 0x18]      ; 00520a76
    PUSH ECX                            ; 00520a79
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00520a7a
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00520a7f
    PUSH 0x5f22b0                       ; 00520a82 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00520a87
    MOV EBX,EAX                         ; 00520a89
    LEA EAX,[ESP + 0x14]                ; 00520a8b
    PUSH EAX                            ; 00520a8f
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00520a90
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00520a95
    LEA EAX,[ESP + 0xc]                 ; 00520a98
    PUSH EAX                            ; 00520a9c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00520a9d
    MOV ESI,dword ptr [EBP + 0x18]      ; 00520aa0
    PUSH EDI                            ; 00520aa3
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 00520aa4
    CALL dword ptr [ESI + 0x5c]         ; 00520aaa
    ADD ESP,0x8                         ; 00520aad
    TEST EAX,EAX                        ; 00520ab0
    JZ 0x00520acc                       ; 00520ab2
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    TEST EBX,EBX                        ; 00520ab4
    JZ 0x00520ae5                       ; 00520ab6
        ;   XREF to: 00520ae5 (CONDITIONAL_JUMP)  ; LAB_00520ae5
    PUSH EBX                            ; 00520ab8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00520ab9
    CALL dword ptr [EAX + 0x114]        ; 00520abf
    ADD ESP,0x4                         ; 00520ac5
    TEST EAX,EAX                        ; 00520ac8
    JLE 0x00520ae5                      ; 00520aca
        ;   XREF to: 00520ae5 (CONDITIONAL_JUMP)  ; LAB_00520ae5
    MOV dword ptr [ESP + 0x14c],0xbf800000 ; 00520acc
        ;   Label: LAB_00520acc
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00520ad7
    MOV ESP,EBP                         ; 00520ade
    POP EBP                             ; 00520ae0
    POP EDI                             ; 00520ae1
    POP ESI                             ; 00520ae2
    POP EBX                             ; 00520ae3
    RET                                 ; 00520ae4
    MOV EAX,dword ptr [EBP + 0x18]      ; 00520ae5
        ;   Label: LAB_00520ae5
    ADD EAX,0x20                        ; 00520ae8
    PUSH EAX                            ; 00520aeb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520aec
    PUSH EAX                            ; 00520aef
    LEA ESI,[ESP + 0x140]               ; 00520af0
    LEA EDI,[ESP + 0xc8]                ; 00520af7
    CALL core_actor.cpp_FUN_00408de0    ; 00520afe
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x140]               ; 00520b03
    ADD ESP,0x8                         ; 00520b0a
    MOVSD ES:EDI,ESI                    ; 00520b0d
    MOVSD ES:EDI,ESI                    ; 00520b0e
    MOVSD ES:EDI,ESI                    ; 00520b0f
    FLD float ptr [ESP + 0xc8]          ; 00520b10
    FLDZ                                ; 00520b17
    FCOMPP                              ; 00520b19
    FNSTSW AX                           ; 00520b1b
    SAHF                                ; 00520b1d
    JNC 0x00520acc                      ; 00520b1e
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    FLD float ptr [ESP + 0xc4]          ; 00520b20
    FMUL ST0                            ; 00520b27
    FLD float ptr [ESP + 0xc0]          ; 00520b29
    FMUL ST0                            ; 00520b30
    FADDP                               ; 00520b32
    FLD float ptr [ESP + 0xc8]          ; 00520b34
    FMUL ST0                            ; 00520b3b
    FADDP                               ; 00520b3d
    FSQRT                               ; 00520b3f
    FSTP float ptr [ESP + 0x8]          ; 00520b41
    MOV EAX,dword ptr [ESP + 0x8]       ; 00520b45
    MOV dword ptr [ESP + 0x148],EAX     ; 00520b49
    LEA EAX,[ESP + 0xc0]                ; 00520b50
    PUSH EAX                            ; 00520b57
    LEA ESI,[ESP + 0x100]               ; 00520b58
    LEA EDI,[ESP + 0x10c]               ; 00520b5f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00520b66
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 00520b6b
    LEA ESI,[ESP + 0xfc]                ; 00520b6e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00520b75
    MOVSD ES:EDI,ESI                    ; 00520b78
    MOVSD ES:EDI,ESI                    ; 00520b79
    MOVSD ES:EDI,ESI                    ; 00520b7a
    TEST EDX,EDX                        ; 00520b7b
    JZ 0x00520bba                       ; 00520b7d
        ;   XREF to: 00520bba (CONDITIONAL_JUMP)  ; LAB_00520bba
    FLD float ptr [ESP + 0x8]           ; 00520b7f
    FCOMP double ptr [0x005e2bfb]       ; 00520b83 | DAT_005e2bfb
    FNSTSW AX                           ; 00520b89
    SAHF                                ; 00520b8b
    JA 0x00520acc                       ; 00520b8c
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    FLD float ptr [ESP + 0x10c]         ; 00520b92
    FCOMP float ptr [0x005e2c03]        ; 00520b99 | DAT_005e2c03
    FNSTSW AX                           ; 00520b9f
    SAHF                                ; 00520ba1
    JC 0x00520acc                       ; 00520ba2
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    CMP dword ptr [ESP + 0x10c],0x3fc90fdb ; 00520ba8
    JLE 0x00520bf8                      ; 00520bb3
        ;   XREF to: 00520bf8 (CONDITIONAL_JUMP)  ; LAB_00520bf8
    JMP 0x00520acc                      ; 00520bb5
        ;   XREF to: 00520acc (UNCONDITIONAL_JUMP)  ; LAB_00520acc
    FLD float ptr [ESP + 0x8]           ; 00520bba
        ;   Label: LAB_00520bba
    FCOMP double ptr [0x005e2be3]       ; 00520bbe | DAT_005e2be3
    FNSTSW AX                           ; 00520bc4
    SAHF                                ; 00520bc6
    JA 0x00520acc                       ; 00520bc7
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    FLD float ptr [ESP + 0x10c]         ; 00520bcd
    FST double ptr [ESP]                ; 00520bd4
    FCOMP double ptr [0x005e2beb]       ; 00520bd7 | DAT_005e2beb
    FNSTSW AX                           ; 00520bdd
    SAHF                                ; 00520bdf
    JC 0x00520acc                       ; 00520be0
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    FLD double ptr [ESP]                ; 00520be6
    FCOMP double ptr [0x005e2bf3]       ; 00520be9 | DAT_005e2bf3
    FNSTSW AX                           ; 00520bef
    SAHF                                ; 00520bf1
    JA 0x00520acc                       ; 00520bf2
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    MOV EDX,dword ptr [EBP + 0x14]      ; 00520bf8
        ;   Label: LAB_00520bf8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00520bfb
    PUSH EDX                            ; 00520bfe
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00520bff
    LEA ESI,[ESP + 0xa0]                ; 00520c05
    LEA EDI,[ESP + 0x88]                ; 00520c0c
    CALL dword ptr [EAX + 0x24]         ; 00520c13
    MOV ECX,0x6                         ; 00520c16
    LEA ESI,[ESP + 0xa0]                ; 00520c1b
    ADD ESP,0x4                         ; 00520c22
    MOVSD.REP ES:EDI,ESI                ; 00520c25
    LEA EBX,[ESP + 0x84]                ; 00520c27
    FLD float ptr [ESP + 0x84]          ; 00520c2e
    FLD float ptr [ESP + 0x88]          ; 00520c35
    FLD float ptr [ESP + 0x8c]          ; 00520c3c
    LEA EDI,[ESP + 0xd8]                ; 00520c43
    LEA ESI,[ESP + 0xe4]                ; 00520c4a
    FXCH ST2                            ; 00520c51
    FADD float ptr [EBX + 0xc]          ; 00520c53
    FXCH                                ; 00520c56
    FADD float ptr [EBX + 0x10]         ; 00520c58
    FXCH ST2                            ; 00520c5b
    FADD float ptr [EBX + 0x14]         ; 00520c5d
    FXCH                                ; 00520c60
    FSTP float ptr [ESP + 0xe4]         ; 00520c62
    FXCH                                ; 00520c69
    FSTP float ptr [ESP + 0xe8]         ; 00520c6b
    FSTP float ptr [ESP + 0xec]         ; 00520c72
    MOVSD ES:EDI,ESI                    ; 00520c79
    MOVSD ES:EDI,ESI                    ; 00520c7a
    MOVSD ES:EDI,ESI                    ; 00520c7b
    FLD float ptr [0x005e2c07]          ; 00520c7c | DAT_005e2c07
    FLD float ptr [ESP + 0xd8]          ; 00520c82
    FMUL ST1                            ; 00520c89
    FLD float ptr [ESP + 0xdc]          ; 00520c8b
    FMUL ST2                            ; 00520c92
    LEA EAX,[ESP + 0xc]                 ; 00520c94
    FLD float ptr [ESP + 0xe0]          ; 00520c98
    FMULP ST3                           ; 00520c9f
    PUSH EAX                            ; 00520ca1
    MOV EBX,dword ptr [EBP + 0x14]      ; 00520ca2
    LEA EDI,[ESP + 0x118]               ; 00520ca5
    LEA ESI,[ESP + 0x130]               ; 00520cac
    FXCH                                ; 00520cb3
    FSTP float ptr [ESP + 0x130]        ; 00520cb5
    FSTP float ptr [ESP + 0x134]        ; 00520cbc
    FSTP float ptr [ESP + 0x138]        ; 00520cc3
    MOVSD ES:EDI,ESI                    ; 00520cca
    MOVSD ES:EDI,ESI                    ; 00520ccb
    MOVSD ES:EDI,ESI                    ; 00520ccc
    MOV ECX,dword ptr [EBP + 0x18]      ; 00520ccd
    FLD float ptr [EBX + 0x20]          ; 00520cd0
    FLD float ptr [EBX + 0x24]          ; 00520cd3
    FLD float ptr [EBX + 0x28]          ; 00520cd6
    LEA EDI,[ESP + 0xb8]                ; 00520cd9
    LEA ESI,[ESP + 0xd0]                ; 00520ce0
    FXCH ST2                            ; 00520ce7
    FADD float ptr [ESP + 0x118]        ; 00520ce9
    FXCH                                ; 00520cf0
    FADD float ptr [ESP + 0x11c]        ; 00520cf2
    FXCH ST2                            ; 00520cf9
    FADD float ptr [ESP + 0x120]        ; 00520cfb
    FXCH                                ; 00520d02
    FSTP float ptr [ESP + 0xd0]         ; 00520d04
    FXCH                                ; 00520d0b
    FSTP float ptr [ESP + 0xd4]         ; 00520d0d
    FSTP float ptr [ESP + 0xd8]         ; 00520d14
    MOVSD ES:EDI,ESI                    ; 00520d1b
    MOVSD ES:EDI,ESI                    ; 00520d1c
    MOVSD ES:EDI,ESI                    ; 00520d1d
    PUSH ECX                            ; 00520d1e
    LEA ESI,[ESP + 0x128]               ; 00520d1f
    CALL core_actor.cpp_FUN_00408d70    ; 00520d26
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00520d2b
    LEA EDI,[ESP + 0xf0]                ; 00520d2e
    PUSH 0x1                            ; 00520d35
    MOV EBX,dword ptr [0x0061b5a8]      ; 00520d37 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x124]               ; 00520d3d
    PUSH EBX                            ; 00520d44 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00520d45
    MOVSD ES:EDI,ESI                    ; 00520d46
    MOVSD ES:EDI,ESI                    ; 00520d47
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 00520d48
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00520d4d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00520d50
    PUSH ESI                            ; 00520d53
    MOV EDI,dword ptr [0x0061b5a8]      ; 00520d54 | g_CDemonSetPtr
    PUSH EDI                            ; 00520d5a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00520d5b
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00520d60
    LEA EAX,[ESP + 0xf0]                ; 00520d63
    PUSH EAX                            ; 00520d6a
    LEA EAX,[ESP + 0xb8]                ; 00520d6b
    PUSH EAX                            ; 00520d72
    MOV EAX,[0x0061b5a8]                ; 00520d73 | g_CDemonSetPtr
    PUSH EAX                            ; 00520d78 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 00520d79
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x15c],EAX     ; 00520d7e
    FLD float ptr [ESP + 0x15c]         ; 00520d85
    ADD ESP,0xc                         ; 00520d8c
    MOV EDX,dword ptr [0x0061b5a8]      ; 00520d8f | g_CDemonSetPtr
    PUSH EDX                            ; 00520d95 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x148]        ; 00520d96
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00520d9d
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00520da2
    FLD float ptr [ESP + 0x144]         ; 00520da5
    FLD1                                ; 00520dac
    FCOMPP                              ; 00520dae
    FNSTSW AX                           ; 00520db0
    SAHF                                ; 00520db2
    JC 0x00520acc                       ; 00520db3
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    MOV EAX,[0x0061b5a8]                ; 00520db9 | g_CDemonSetPtr
    MOV ECX,dword ptr [EBP + 0x18]      ; 00520dbe
    CMP ECX,dword ptr [EAX + 0x14d144]  ; 00520dc1 | g_CDemonSetInstance.collision_actor
    JNZ 0x00520acc                      ; 00520dc7
        ;   XREF to: 00520acc (CONDITIONAL_JUMP)  ; LAB_00520acc
    MOV EAX,dword ptr [ESP + 0x148]     ; 00520dcd
    MOV dword ptr [ESP + 0x14c],EAX     ; 00520dd4
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00520ddb
    MOV ESP,EBP                         ; 00520de2
    POP EBP                             ; 00520de4
    POP EDI                             ; 00520de5
    POP ESI                             ; 00520de6
    POP EBX                             ; 00520de7
    RET                                 ; 00520de8

