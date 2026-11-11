; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_partibox_cpp_CParticleBox_process_FUN_005ac960(CParticleBox *this_ptr,float delta_time)
;
; Parameters:
; CParticleBox *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f0ea3
;   undefined4 DAT_005f0eab
;   undefined4 DAT_005f0eaf
;   undefined4 DAT_005f0eb3
;   undefined4 DAT_005f0ebb
;   undefined4 DAT_005f0ec3
;   undefined4 DAT_005f0ecb
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090
;   unkaddr_005a7eb0.cpp_FUN_005a7ed0
;   unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300
;   unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130
;   unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac960
        ;   Label: core_partibox.cpp_CParticleBox_process_FUN_005ac960
    PUSH ESI                            ; 005ac961
    PUSH EDI                            ; 005ac962
    PUSH EBP                            ; 005ac963
    MOV EBP,ESP                         ; 005ac964
    SUB ESP,0x178                       ; 005ac966
    AND ESP,0xfffffff8                  ; 005ac96c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ac96f
    PUSH dword ptr [EBP + 0x18]         ; 005ac972
    PUSH EBX                            ; 005ac975
    CALL core_boxactor.cpp_CBoxActor_process_FUN_0041c090 ; 005ac976
        ;   XREF to: 0041c090 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_0041c090(CBoxActor * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005ac97b
    LEA EDI,[EBX + 0x154]               ; 005ac97e
    PUSH dword ptr [EBP + 0x18]         ; 005ac984
    PUSH EDI                            ; 005ac987
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 005ac988
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    ADD ESP,0x8                         ; 005ac98d
    LEA EAX,[EBX + 0x198]               ; 005ac990
    PUSH dword ptr [EBP + 0x18]         ; 005ac996
    PUSH EAX                            ; 005ac999
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 005ac99a
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    ADD ESP,0x8                         ; 005ac99f
    LEA EAX,[EBX + 0x1dc]               ; 005ac9a2
    PUSH dword ptr [EBP + 0x18]         ; 005ac9a8
    PUSH EAX                            ; 005ac9ab
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 005ac9ac
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    ADD ESP,0x8                         ; 005ac9b1
    LEA EAX,[EBX + 0x220]               ; 005ac9b4
    PUSH dword ptr [EBP + 0x18]         ; 005ac9ba
    PUSH EAX                            ; 005ac9bd
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180 ; 005ac9be
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem * this_ptr, float param_2)
    ADD ESP,0x8                         ; 005ac9c3
    FLD float ptr [EBX + 0x2a8]         ; 005ac9c6
    FSUB float ptr [EBP + 0x18]         ; 005ac9cc
    FST float ptr [EBX + 0x2a8]         ; 005ac9cf
    FLDZ                                ; 005ac9d5
    FCOMPP                              ; 005ac9d7
    FNSTSW AX                           ; 005ac9d9
    SAHF                                ; 005ac9db
    JNC 0x005aca01                      ; 005ac9dc
        ;   XREF to: 005aca01 (CONDITIONAL_JUMP)  ; LAB_005aca01
    FLD float ptr [EBX + 0x7d4]         ; 005ac9de
        ;   Label: LAB_005ac9de
    FSUB float ptr [EBP + 0x18]         ; 005ac9e4
    FST float ptr [EBX + 0x7d4]         ; 005ac9e7
    FLDZ                                ; 005ac9ed
    FCOMPP                              ; 005ac9ef
    FNSTSW AX                           ; 005ac9f1
    SAHF                                ; 005ac9f3
    JNC 0x005acf36                      ; 005ac9f4
        ;   XREF to: 005acf36 (CONDITIONAL_JUMP)  ; LAB_005acf36
    MOV ESP,EBP                         ; 005ac9fa
        ;   Label: LAB_005ac9fa
    POP EBP                             ; 005ac9fc
    POP EDI                             ; 005ac9fd
    POP ESI                             ; 005ac9fe
    POP EBX                             ; 005ac9ff
    RET                                 ; 005aca00
    PUSH EDI                            ; 005aca01
        ;   Label: LAB_005aca01
    MOV dword ptr [EBX + 0x2a8],0x3d4ccccd ; 005aca02
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130 ; 005aca0c
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005aca11
    TEST EAX,EAX                        ; 005aca14
    JZ 0x005acb4a                       ; 005aca16
        ;   XREF to: 005acb4a (CONDITIONAL_JUMP)  ; LAB_005acb4a
    XOR ESI,ESI                         ; 005aca1c
    PUSH 0x40c90fdb                     ; 005aca1e
        ;   Label: LAB_005aca1e
    PUSH 0x0                            ; 005aca23
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005aca25
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005aca2a
    FLD float ptr [ESP + 0x17c]         ; 005aca31
    ADD ESP,0x8                         ; 005aca38
    FSTP float ptr [ESP]                ; 005aca3b
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005aca3e
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
    TEST EAX,EAX                        ; 005aca43
    JZ 0x005acb40                       ; 005aca45
        ;   XREF to: 005acb40 (CONDITIONAL_JUMP)  ; LAB_005acb40
    FLD float ptr [ESP]                 ; 005aca4b
    FLD ST0                             ; 005aca4e
    FCOS                                ; 005aca50
    FXCH                                ; 005aca52
    FSIN                                ; 005aca54
    FXCH                                ; 005aca56
    FLD double ptr [0x005f0ea3]         ; 005aca58 | DAT_005f0ea3
    FXCH                                ; 005aca5e
    FMUL ST1                            ; 005aca60
    FXCH ST2                            ; 005aca62
    FMULP                               ; 005aca64
    PUSH 0x3f800000                     ; 005aca66
    XOR EDX,EDX                         ; 005aca6b
    PUSH 0x0                            ; 005aca6d
    MOV dword ptr [ESP + 0xac],EDX      ; 005aca6f
    FXCH                                ; 005aca76
    FSTP float ptr [ESP + 0x14c]        ; 005aca78
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005aca7f
    FSTP float ptr [ESP + 0xa8]         ; 005aca86
    MOV dword ptr [ESP + 0xb0],EAX      ; 005aca8d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005aca94
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005aca99
    FLD float ptr [ESP + 0x17c]         ; 005acaa0
    ADD ESP,0x8                         ; 005acaa7
    FCOMP double ptr [0x005f0ec3]       ; 005acaaa | DAT_005f0ec3
    FNSTSW AX                           ; 005acab0
    SAHF                                ; 005acab2
    JBE 0x005acd2a                      ; 005acab3
        ;   XREF to: 005acd2a (CONDITIONAL_JUMP)  ; LAB_005acd2a
    MOV EAX,0x3f000000                  ; 005acab9
    LEA EDX,[ESP + 0x1c]                ; 005acabe
    XOR ECX,ECX                         ; 005acac2
    MOV dword ptr [ESP + 0x5c],EAX      ; 005acac4
    MOV dword ptr [ESP + 0x60],ECX      ; 005acac8
    LEA EAX,[ESP + 0x58]                ; 005acacc
    MOV dword ptr [ESP + 0x58],ECX      ; 005acad0
    CMP EDX,EAX                         ; 005acad4
    JZ 0x005acae9                       ; 005acad6
        ;   XREF to: 005acae9 (CONDITIONAL_JUMP)  ; LAB_005acae9
    MOV EAX,0x3f000000                  ; 005acad8
    MOV dword ptr [ESP + 0x24],ECX      ; 005acadd
    MOV dword ptr [ESP + 0x1c],ECX      ; 005acae1
    MOV dword ptr [ESP + 0x20],EAX      ; 005acae5
    XOR ECX,ECX                         ; 005acae9
        ;   Label: LAB_005acae9
    MOV EAX,0x3fc00000                  ; 005acaeb
    PUSH ECX                            ; 005acaf0
    MOV dword ptr [ESP + 0x78],EAX      ; 005acaf1
    LEA EAX,[ESP + 0x74]                ; 005acaf5
    PUSH EAX                            ; 005acaf9
    LEA EAX,[ESP + 0x24]                ; 005acafa
    PUSH EAX                            ; 005acafe
    LEA EAX,[ESP + 0xac]                ; 005acaff
    PUSH EAX                            ; 005acb06
    PUSH 0x3eeb851f                     ; 005acb07
    PUSH 0x3f800000                     ; 005acb0c
    PUSH 0x3f07ae14                     ; 005acb11
    PUSH 0x0                            ; 005acb16
    PUSH 0x3f000000                     ; 005acb18
    PUSH 0x0                            ; 005acb1d
    PUSH 0x3f800000                     ; 005acb1f
    PUSH 0x3f800000                     ; 005acb24
    PUSH EDI                            ; 005acb29
    MOV dword ptr [ESP + 0xa4],ECX      ; 005acb2a
    MOV dword ptr [ESP + 0xac],ECX      ; 005acb31
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005acb38
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005acb3d
    INC ESI                             ; 005acb40
        ;   Label: LAB_005acb40
    CMP ESI,0x14                        ; 005acb41
    JL 0x005aca1e                       ; 005acb44
        ;   XREF to: 005aca1e (CONDITIONAL_JUMP)  ; LAB_005aca1e
    LEA ESI,[EBX + 0x198]               ; 005acb4a
        ;   Label: LAB_005acb4a
    PUSH ESI                            ; 005acb50
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130 ; 005acb51
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005acb56
    TEST EAX,EAX                        ; 005acb59
    JZ 0x005accdc                       ; 005acb5b
        ;   XREF to: 005accdc (CONDITIONAL_JUMP)  ; LAB_005accdc
    XOR ECX,ECX                         ; 005acb61
    MOV dword ptr [ESP + 0x158],ESI     ; 005acb63
    MOV dword ptr [ESP + 0x170],ECX     ; 005acb6a
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005acb71
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005acb71
    TEST EAX,EAX                        ; 005acb76
    JZ 0x005accc4                       ; 005acb78
        ;   XREF to: 005accc4 (CONDITIONAL_JUMP)  ; LAB_005accc4
    PUSH 0x3f800000                     ; 005acb7e
    PUSH 0xbf800000                     ; 005acb83
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acb88
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005acb8d
    FLD float ptr [ESP + 0x17c]         ; 005acb94
    FMUL float ptr [0x005f0eab]         ; 005acb9b | DAT_005f0eab
    ADD ESP,0x8                         ; 005acba1
    FSTP float ptr [ESP + 0x144]        ; 005acba4
    MOV EAX,dword ptr [ESP + 0x144]     ; 005acbab
    MOV dword ptr [ESP + 0xfc],EAX      ; 005acbb2
    LEA EAX,[ESP + 0xf4]                ; 005acbb9
    XOR ESI,ESI                         ; 005acbc0
    PUSH EAX                            ; 005acbc2
    MOV dword ptr [ESP + 0xf8],ESI      ; 005acbc3
    PUSH EBX                            ; 005acbca
    MOV dword ptr [ESP + 0x100],ESI     ; 005acbcb
    LEA ESI,[ESP + 0xd8]                ; 005acbd2
    CALL core_actor.cpp_FUN_00408cf0    ; 005acbd9
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 005acbde
    LEA EDI,[ESP + 0x10]                ; 005acbe1
    PUSH 0x3f800000                     ; 005acbe5
    LEA ESI,[ESP + 0xd4]                ; 005acbea
    PUSH 0x0                            ; 005acbf1
    MOVSD ES:EDI,ESI                    ; 005acbf3
    MOVSD ES:EDI,ESI                    ; 005acbf4
    MOVSD ES:EDI,ESI                    ; 005acbf5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acbf6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005acbfb
    FLD float ptr [ESP + 0x17c]         ; 005acc02
    ADD ESP,0x8                         ; 005acc09
    FCOMP double ptr [0x005f0ec3]       ; 005acc0c | DAT_005f0ec3
    FNSTSW AX                           ; 005acc12
    SAHF                                ; 005acc14
    JBE 0x005acd59                      ; 005acc15
        ;   XREF to: 005acd59 (CONDITIONAL_JUMP)  ; LAB_005acd59
    MOV EDX,0x3f800000                  ; 005acc1b
    XOR EAX,EAX                         ; 005acc20
    LEA ESI,[ESP + 0xb8]                ; 005acc22
    MOV dword ptr [ESP + 0xc0],EAX      ; 005acc29
    MOV dword ptr [ESP + 0xb8],EAX      ; 005acc30
    LEA EAX,[ESP + 0xac]                ; 005acc37
    MOV dword ptr [ESP + 0xbc],EDX      ; 005acc3e
    CMP EAX,ESI                         ; 005acc45
    JZ 0x005acc60                       ; 005acc47
        ;   XREF to: 005acc60 (CONDITIONAL_JUMP)  ; LAB_005acc60
    XOR ESI,ESI                         ; 005acc49
    MOV dword ptr [ESP + 0xb0],EDX      ; 005acc4b
    MOV dword ptr [ESP + 0xb4],ESI      ; 005acc52
    MOV dword ptr [ESP + 0xac],ESI      ; 005acc59
    XOR EDX,EDX                         ; 005acc60
        ;   Label: LAB_005acc60
    PUSH EDX                            ; 005acc62
    LEA EAX,[ESP + 0x8c]                ; 005acc63
    PUSH EAX                            ; 005acc6a
    LEA EAX,[ESP + 0xb4]                ; 005acc6b
    PUSH EAX                            ; 005acc72
    LEA EAX,[ESP + 0x1c]                ; 005acc73
    PUSH EAX                            ; 005acc77
    PUSH 0x3eeb851f                     ; 005acc78
    PUSH 0x3f800000                     ; 005acc7d
    PUSH 0x3f07ae14                     ; 005acc82
    PUSH 0x0                            ; 005acc87
    PUSH 0x3f000000                     ; 005acc89
    PUSH 0x0                            ; 005acc8e
    MOV ECX,0x3fc00000                  ; 005acc90
    PUSH 0x3f800000                     ; 005acc95
    MOV EDI,dword ptr [ESP + 0x184]     ; 005acc9a
    PUSH 0x40400000                     ; 005acca1
    MOV dword ptr [ESP + 0xb8],EDX      ; 005acca6
    PUSH EDI                            ; 005accad
    MOV dword ptr [ESP + 0xc0],ECX      ; 005accae
    MOV dword ptr [ESP + 0xc4],EDX      ; 005accb5
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005accbc
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005accc1
    MOV EAX,dword ptr [ESP + 0x170]     ; 005accc4
        ;   Label: LAB_005accc4
    INC EAX                             ; 005acccb
    MOV dword ptr [ESP + 0x170],EAX     ; 005acccc
    CMP EAX,0x7                         ; 005accd3
    JL 0x005acb71                       ; 005accd6
        ;   XREF to: 005acb71 (CONDITIONAL_JUMP)  ; LAB_005acb71
    LEA ESI,[EBX + 0x1dc]               ; 005accdc
        ;   Label: LAB_005accdc
    PUSH ESI                            ; 005acce2
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130 ; 005acce3
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005acce8
    TEST EAX,EAX                        ; 005acceb
    JZ 0x005ac9de                       ; 005acced
        ;   XREF to: 005ac9de (CONDITIONAL_JUMP)  ; LAB_005ac9de
    XOR ECX,ECX                         ; 005accf3
    MOV dword ptr [ESP + 0x15c],ESI     ; 005accf5
    MOV dword ptr [ESP + 0x168],ECX     ; 005accfc
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005acd03
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005acd03
    TEST EAX,EAX                        ; 005acd08
    JNZ 0x005acd94                      ; 005acd0a
        ;   XREF to: 005acd94 (CONDITIONAL_JUMP)  ; LAB_005acd94
    MOV ECX,dword ptr [ESP + 0x168]     ; 005acd10
        ;   Label: LAB_005acd10
    INC ECX                             ; 005acd17
    MOV dword ptr [ESP + 0x168],ECX     ; 005acd18
    CMP ECX,0x11                        ; 005acd1f
    JGE 0x005ac9de                      ; 005acd22
        ;   XREF to: 005ac9de (CONDITIONAL_JUMP)  ; LAB_005ac9de
    JMP 0x005acd03                      ; 005acd28
        ;   XREF to: 005acd03 (UNCONDITIONAL_JUMP)  ; LAB_005acd03
    LEA EAX,[ESP + 0x1c]                ; 005acd2a
        ;   Label: LAB_005acd2a
    CMP EAX,0x265370c                   ; 005acd2e
    JZ 0x005acae9                       ; 005acd33
        ;   XREF to: 005acae9 (CONDITIONAL_JUMP)  ; LAB_005acae9
    MOV EAX,[0x0265370c]                ; 005acd39 | DAT_0265370c
    MOV dword ptr [ESP + 0x1c],EAX      ; 005acd3e
    MOV EAX,[0x02653710]                ; 005acd42 | DAT_02653710
    MOV dword ptr [ESP + 0x20],EAX      ; 005acd47
    MOV EAX,[0x02653714]                ; 005acd4b | DAT_02653714
    MOV dword ptr [ESP + 0x24],EAX      ; 005acd50
    JMP 0x005acae9                      ; 005acd54
        ;   XREF to: 005acae9 (UNCONDITIONAL_JUMP)  ; LAB_005acae9
    LEA EAX,[ESP + 0xac]                ; 005acd59
        ;   Label: LAB_005acd59
    CMP EAX,0x265370c                   ; 005acd60
    JZ 0x005acc60                       ; 005acd65
        ;   XREF to: 005acc60 (CONDITIONAL_JUMP)  ; LAB_005acc60
    MOV EAX,[0x0265370c]                ; 005acd6b | DAT_0265370c
    MOV dword ptr [ESP + 0xac],EAX      ; 005acd70
    MOV EAX,[0x02653710]                ; 005acd77 | DAT_02653710
    MOV dword ptr [ESP + 0xb0],EAX      ; 005acd7c
    MOV EAX,[0x02653714]                ; 005acd83 | DAT_02653714
    MOV dword ptr [ESP + 0xb4],EAX      ; 005acd88
    JMP 0x005acc60                      ; 005acd8f
        ;   XREF to: 005acc60 (UNCONDITIONAL_JUMP)  ; LAB_005acc60
    PUSH 0x3f800000                     ; 005acd94
        ;   Label: LAB_005acd94
    PUSH 0xbf800000                     ; 005acd99
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acd9e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005acda3
    FLD float ptr [ESP + 0x17c]         ; 005acdaa
    ADD ESP,0x8                         ; 005acdb1
    FST float ptr [ESP + 0x12c]         ; 005acdb4
    FMUL float ptr [0x005f0eaf]         ; 005acdbb | DAT_005f0eaf
    PUSH 0x3e4ccccd                     ; 005acdc1
    PUSH 0x0                            ; 005acdc6
    FSTP float ptr [ESP + 0x14c]        ; 005acdc8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acdcf
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 005acdd4
    ADD ESP,0x8                         ; 005acddb
    PUSH 0x3e4ccccd                     ; 005acdde
    PUSH 0x0                            ; 005acde3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acde5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005acdea
    FLD float ptr [ESP + 0x17c]         ; 005acdf1
    ADD ESP,0x8                         ; 005acdf8
    MOV EAX,dword ptr [ESP + 0x160]     ; 005acdfb
    FSTP float ptr [ESP + 0x138]        ; 005ace02
    MOV dword ptr [ESP + 0x130],EAX     ; 005ace09
    MOV EAX,dword ptr [ESP + 0x138]     ; 005ace10
    MOV dword ptr [ESP + 0xdc],EAX      ; 005ace17
    MOV EAX,dword ptr [ESP + 0x130]     ; 005ace1e
    MOV dword ptr [ESP + 0xe0],EAX      ; 005ace25
    MOV EAX,dword ptr [ESP + 0x144]     ; 005ace2c
    MOV dword ptr [ESP + 0xe4],EAX      ; 005ace33
    LEA EAX,[ESP + 0xdc]                ; 005ace3a
    PUSH EAX                            ; 005ace41
    PUSH EBX                            ; 005ace42
    LEA ESI,[ESP + 0xcc]                ; 005ace43
    CALL core_actor.cpp_FUN_00408cf0    ; 005ace4a
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 005ace4f
    FLD float ptr [ESP + 0x12c]         ; 005ace52
    FMUL double ptr [0x005f0eb3]        ; 005ace59 | DAT_005f0eb3
    LEA EDI,[ESP + 0x4c]                ; 005ace5f
    PUSH 0xbf000000                     ; 005ace63
    LEA ESI,[ESP + 0xc8]                ; 005ace68
    PUSH 0x3e99999a                     ; 005ace6f
    MOVSD ES:EDI,ESI                    ; 005ace74
    MOVSD ES:EDI,ESI                    ; 005ace75
    MOVSD ES:EDI,ESI                    ; 005ace76
    FSTP float ptr [ESP + 0x14c]        ; 005ace77
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ace7e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005ace83
    FLD float ptr [ESP + 0x17c]         ; 005ace8a
    ADD ESP,0x8                         ; 005ace91
    XOR ESI,ESI                         ; 005ace94
    PUSH 0xc0900000                     ; 005ace96
    FSTP float ptr [ESP + 0x80]         ; 005ace9b
    MOV EAX,dword ptr [ESP + 0x148]     ; 005acea2
    PUSH 0xc0800000                     ; 005acea9
    MOV dword ptr [ESP + 0x88],ESI      ; 005aceae
    MOV dword ptr [ESP + 0x8c],EAX      ; 005aceb5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acebc
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005acec1
    FLD float ptr [ESP + 0x17c]         ; 005acec8
    ADD ESP,0x8                         ; 005acecf
    FSTP float ptr [ESP + 0x134]        ; 005aced2
    MOV EAX,dword ptr [ESP + 0x134]     ; 005aced9
    PUSH ESI                            ; 005acee0
    MOV dword ptr [ESP + 0xc],EAX       ; 005acee1
    LEA EAX,[ESP + 0x8]                 ; 005acee5
    PUSH EAX                            ; 005acee9
    LEA EAX,[ESP + 0x84]                ; 005aceea
    PUSH EAX                            ; 005acef1
    LEA EAX,[ESP + 0x58]                ; 005acef2
    PUSH EAX                            ; 005acef6
    PUSH 0x3f0ccccd                     ; 005acef7
    PUSH 0x3f000000                     ; 005acefc
    PUSH 0x3f000000                     ; 005acf01
    PUSH 0x0                            ; 005acf06
    PUSH 0x3e99999a                     ; 005acf08
    PUSH 0x0                            ; 005acf0d
    PUSH 0x3f800000                     ; 005acf0f
    MOV EDX,dword ptr [ESP + 0x188]     ; 005acf14
    PUSH 0x40200000                     ; 005acf1b
    PUSH EDX                            ; 005acf20
    MOV dword ptr [ESP + 0x38],ESI      ; 005acf21
    MOV dword ptr [ESP + 0x40],ESI      ; 005acf25
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005acf29
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005acf2e
    JMP 0x005acd10                      ; 005acf31
        ;   XREF to: 005acd10 (UNCONDITIONAL_JUMP)  ; LAB_005acd10
    LEA EAX,[EBX + 0x220]               ; 005acf36
        ;   Label: LAB_005acf36
    PUSH EAX                            ; 005acf3c
    MOV dword ptr [ESP + 0x158],EAX     ; 005acf3d
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130 ; 005acf44
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int unkafter_superopt.cpp_CSimpleParticleSystem_isActive_FUN_005a8130(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005acf49
    TEST EAX,EAX                        ; 005acf4c
    JZ 0x005ac9fa                       ; 005acf4e
        ;   XREF to: 005ac9fa (CONDITIONAL_JUMP)  ; LAB_005ac9fa
    PUSH 0x3f800000                     ; 005acf54
    PUSH 0xbf800000                     ; 005acf59
    MOV dword ptr [EBX + 0x7d4],0x3d4ccccd ; 005acf5e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acf68
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005acf6d
    PUSH 0x40900000                     ; 005acf70
    PUSH 0xc0900000                     ; 005acf75
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acf7a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 005acf7f
    ADD ESP,0x8                         ; 005acf86
    PUSH 0xc1200000                     ; 005acf89
    PUSH 0x0                            ; 005acf8e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005acf90
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005acf95
    FLD float ptr [ESP + 0x17c]         ; 005acf9c
    ADD ESP,0x8                         ; 005acfa3
    MOV EAX,dword ptr [ESP + 0x160]     ; 005acfa6
    MOV dword ptr [ESP + 0x140],EAX     ; 005acfad
    XOR EAX,EAX                         ; 005acfb4
    FSTP float ptr [ESP + 0x13c]        ; 005acfb6
    MOV dword ptr [ESP + 0x100],EAX     ; 005acfbd
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005acfc4
    MOV dword ptr [ESP + 0x104],EAX     ; 005acfcb
    MOV EAX,dword ptr [ESP + 0x140]     ; 005acfd2
    MOV dword ptr [ESP + 0x108],EAX     ; 005acfd9
    LEA EAX,[ESP + 0x100]               ; 005acfe0
    PUSH EAX                            ; 005acfe7
    PUSH EBX                            ; 005acfe8
    LEA ESI,[ESP + 0x6c]                ; 005acfe9
    CALL core_actor.cpp_FUN_00408cf0    ; 005acfed
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 005acff2
    XOR EDX,EDX                         ; 005acff5
    PUSH EDX                            ; 005acff7
    PUSH EDX                            ; 005acff8
    LEA EAX,[ESP + 0x3c]                ; 005acff9
    PUSH EAX                            ; 005acffd
    LEA EAX,[ESP + 0xf4]                ; 005acffe
    PUSH EAX                            ; 005ad005
    PUSH 0x3f28f5c3                     ; 005ad006
    PUSH 0x3f19999a                     ; 005ad00b
    PUSH 0x3f19999a                     ; 005ad010
    LEA EDI,[ESP + 0x104]               ; 005ad015
    PUSH 0x0                            ; 005ad01c
    LEA ESI,[ESP + 0x84]                ; 005ad01e
    PUSH 0x3f000000                     ; 005ad025
    MOV ECX,0xbdcccccd                  ; 005ad02a
    PUSH 0x0                            ; 005ad02f
    MOVSD ES:EDI,ESI                    ; 005ad031
    MOVSD ES:EDI,ESI                    ; 005ad032
    MOVSD ES:EDI,ESI                    ; 005ad033
    PUSH 0x3f000000                     ; 005ad034
    MOV EDI,dword ptr [ESP + 0x180]     ; 005ad039
    PUSH 0x3f800000                     ; 005ad040
    MOV dword ptr [ESP + 0x64],EDX      ; 005ad045
    PUSH EDI                            ; 005ad049
    MOV dword ptr [ESP + 0x6c],ECX      ; 005ad04a
    MOV dword ptr [ESP + 0x70],EDX      ; 005ad04e
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005ad052
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005ad057
    XOR EAX,EAX                         ; 005ad05a
    MOV dword ptr [ESP + 0x16c],EAX     ; 005ad05c
    MOV dword ptr [ESP + 0x164],EDI     ; 005ad063
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005ad06a
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005ad06a
    TEST EAX,EAX                        ; 005ad06f
    JNZ 0x005ad08d                      ; 005ad071
        ;   XREF to: 005ad08d (CONDITIONAL_JUMP)  ; LAB_005ad08d
    MOV ECX,dword ptr [ESP + 0x16c]     ; 005ad073
        ;   Label: LAB_005ad073
    INC ECX                             ; 005ad07a
    MOV dword ptr [ESP + 0x16c],ECX     ; 005ad07b
    CMP ECX,0xa                         ; 005ad082
    JGE 0x005ac9fa                      ; 005ad085
        ;   XREF to: 005ac9fa (CONDITIONAL_JUMP)  ; LAB_005ac9fa
    JMP 0x005ad06a                      ; 005ad08b
        ;   XREF to: 005ad06a (UNCONDITIONAL_JUMP)  ; LAB_005ad06a
    PUSH 0x40800000                     ; 005ad08d
        ;   Label: LAB_005ad08d
    PUSH 0xc0800000                     ; 005ad092
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad097
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14c],EAX     ; 005ad09c
    ADD ESP,0x8                         ; 005ad0a3
    PUSH 0xc0c66666                     ; 005ad0a6
    PUSH 0xc0b9999a                     ; 005ad0ab
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad0b0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x168],EAX     ; 005ad0b5
    ADD ESP,0x8                         ; 005ad0bc
    PUSH 0x3f4ccccd                     ; 005ad0bf
    PUSH 0x3f19999a                     ; 005ad0c4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad0c9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005ad0ce
    FLD float ptr [ESP + 0x17c]         ; 005ad0d5
    ADD ESP,0x8                         ; 005ad0dc
    MOV EAX,dword ptr [ESP + 0x160]     ; 005ad0df
    MOV dword ptr [ESP + 0x14c],EAX     ; 005ad0e6
    MOV EAX,dword ptr [ESP + 0x144]     ; 005ad0ed
    FSTP float ptr [ESP + 0x148]        ; 005ad0f4
    MOV dword ptr [ESP + 0x150],EAX     ; 005ad0fb
    MOV EAX,dword ptr [ESP + 0x148]     ; 005ad102
    MOV dword ptr [ESP + 0x94],EAX      ; 005ad109
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005ad110
    MOV dword ptr [ESP + 0x98],EAX      ; 005ad117
    MOV EAX,dword ptr [ESP + 0x150]     ; 005ad11e
    MOV dword ptr [ESP + 0x9c],EAX      ; 005ad125
    LEA EAX,[ESP + 0x94]                ; 005ad12c
    PUSH EAX                            ; 005ad133
    PUSH EBX                            ; 005ad134
    LEA ESI,[ESP + 0x114]               ; 005ad135
    LEA EDI,[ESP + 0x30]                ; 005ad13c
    CALL core_actor.cpp_FUN_00408cf0    ; 005ad140
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x114]               ; 005ad145
    ADD ESP,0x8                         ; 005ad14c
    MOVSD ES:EDI,ESI                    ; 005ad14f
    MOVSD ES:EDI,ESI                    ; 005ad150
    MOVSD ES:EDI,ESI                    ; 005ad151
    LEA EAX,[ESP + 0x28]                ; 005ad152
    LEA ESI,[ESP + 0xe8]                ; 005ad156
    CMP ESI,EAX                         ; 005ad15d
    JZ 0x005ad182                       ; 005ad15f
        ;   XREF to: 005ad182 (CONDITIONAL_JUMP)  ; LAB_005ad182
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ad161
    MOV dword ptr [ESP + 0xe8],EAX      ; 005ad165
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005ad16c
    MOV dword ptr [ESP + 0xec],EAX      ; 005ad170
    MOV EAX,dword ptr [ESP + 0x30]      ; 005ad177
    MOV dword ptr [ESP + 0xf0],EAX      ; 005ad17b
    MOV ECX,0x40000000                  ; 005ad182
        ;   Label: LAB_005ad182
    LEA EAX,[ESP + 0x40]                ; 005ad187
    LEA ESI,[ESP + 0x34]                ; 005ad18b
    XOR EDX,EDX                         ; 005ad18f
    MOV dword ptr [ESP + 0x44],ECX      ; 005ad191
    MOV dword ptr [ESP + 0x48],EDX      ; 005ad195
    MOV dword ptr [ESP + 0x40],EDX      ; 005ad199
    CMP ESI,EAX                         ; 005ad19d
    JZ 0x005ad1ad                       ; 005ad19f
        ;   XREF to: 005ad1ad (CONDITIONAL_JUMP)  ; LAB_005ad1ad
    MOV dword ptr [ESP + 0x38],ECX      ; 005ad1a1
    MOV dword ptr [ESP + 0x3c],EDX      ; 005ad1a5
    MOV dword ptr [ESP + 0x34],EDX      ; 005ad1a9
    PUSH 0x2                            ; 005ad1ad
        ;   Label: LAB_005ad1ad
    LEA EAX,[ESP + 0x11c]               ; 005ad1af
    PUSH EAX                            ; 005ad1b6
    LEA EAX,[ESP + 0x3c]                ; 005ad1b7
    PUSH EAX                            ; 005ad1bb
    LEA EAX,[ESP + 0xf4]                ; 005ad1bc
    PUSH EAX                            ; 005ad1c3
    PUSH 0x3f28f5c3                     ; 005ad1c4
    PUSH 0x3f19999a                     ; 005ad1c9
    MOV ESI,0xc0a00000                  ; 005ad1ce
    PUSH 0x3f19999a                     ; 005ad1d3
    XOR ECX,ECX                         ; 005ad1d8
    PUSH 0x0                            ; 005ad1da
    MOV dword ptr [ESP + 0x138],ECX     ; 005ad1dc
    PUSH 0x40800000                     ; 005ad1e3
    MOV dword ptr [ESP + 0x140],ESI     ; 005ad1e8
    PUSH 0x40000000                     ; 005ad1ef
    MOV dword ptr [ESP + 0x148],ECX     ; 005ad1f4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad1fb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x19c],EAX     ; 005ad200
    FLD float ptr [ESP + 0x19c]         ; 005ad207
    ADD ESP,0x8                         ; 005ad20e
    SUB ESP,0x4                         ; 005ad211
    FSTP float ptr [ESP]                ; 005ad214
    PUSH 0x0                            ; 005ad217
    PUSH 0x3f000000                     ; 005ad219
    PUSH 0x3f800000                     ; 005ad21e
    PUSH 0x3f000000                     ; 005ad223
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad228
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005ad22d
    FLD float ptr [ESP + 0x1a8]         ; 005ad234
    ADD ESP,0x8                         ; 005ad23b
    SUB ESP,0x4                         ; 005ad23e
    MOV EAX,dword ptr [ESP + 0x194]     ; 005ad241
    FSTP float ptr [ESP]                ; 005ad248
    PUSH EAX                            ; 005ad24b
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005ad24c
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005ad251
    FLD float ptr [0x005f0ebb]          ; 005ad254 | DAT_005f0ebb
    FLD float ptr [ESP + 0x34]          ; 005ad25a
    FMUL ST1                            ; 005ad25e
    FLD float ptr [ESP + 0x38]          ; 005ad260
    FMUL ST2                            ; 005ad264
    FLD float ptr [ESP + 0x3c]          ; 005ad266
    FMULP ST3                           ; 005ad26a
    PUSH 0x3f800000                     ; 005ad26c
    PUSH 0x0                            ; 005ad271
    FXCH                                ; 005ad273
    FSTP float ptr [ESP + 0x3c]         ; 005ad275
    FSTP float ptr [ESP + 0x40]         ; 005ad279
    FSTP float ptr [ESP + 0x44]         ; 005ad27d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ad281
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x17c],EAX     ; 005ad286
    FLD float ptr [ESP + 0x17c]         ; 005ad28d
    ADD ESP,0x8                         ; 005ad294
    FCOMP double ptr [0x005f0ecb]       ; 005ad297 | DAT_005f0ecb
    FNSTSW AX                           ; 005ad29d
    SAHF                                ; 005ad29f
    JBE 0x005ad073                      ; 005ad2a0
        ;   XREF to: 005ad073 (CONDITIONAL_JUMP)  ; LAB_005ad073
    PUSH 0x0                            ; 005ad2a6
    LEA EAX,[ESP + 0x11c]               ; 005ad2a8
    PUSH EAX                            ; 005ad2af
    LEA EAX,[ESP + 0x3c]                ; 005ad2b0
    PUSH EAX                            ; 005ad2b4
    LEA EAX,[ESP + 0xf4]                ; 005ad2b5
    PUSH EAX                            ; 005ad2bc
    PUSH 0x3f28f5c3                     ; 005ad2bd
    PUSH 0x3f19999a                     ; 005ad2c2
    PUSH 0x3f19999a                     ; 005ad2c7
    PUSH 0x0                            ; 005ad2cc
    PUSH 0x3e4ccccd                     ; 005ad2ce
    PUSH 0x0                            ; 005ad2d3
    PUSH 0x3f000000                     ; 005ad2d5
    MOV EDX,dword ptr [ESP + 0x190]     ; 005ad2da
    PUSH 0x3f000000                     ; 005ad2e1
    PUSH EDX                            ; 005ad2e6
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300 ; 005ad2e7
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x34                        ; 005ad2ec
    JMP 0x005ad073                      ; 005ad2ef
        ;   XREF to: 005ad073 (UNCONDITIONAL_JUMP)  ; LAB_005ad073

