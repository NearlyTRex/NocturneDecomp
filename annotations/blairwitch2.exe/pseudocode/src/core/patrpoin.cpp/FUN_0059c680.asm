; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_patrpoin_cpp_FUN_0059c680(int param_1,float param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;   shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130
;   unkafter_superopt.cpp_FUN_005a8180
;   unkafter_superopt.cpp_FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c680
        ;   Label: core_patrpoin.cpp_FUN_0059c680
    PUSH ESI                            ; 0059c681
    PUSH EDI                            ; 0059c682
    PUSH EBP                            ; 0059c683
    MOV EBP,ESP                         ; 0059c684
    SUB ESP,0x17c                       ; 0059c686
    SUB EBP,0x7e                        ; 0059c68c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0059c68f
    LEA EAX,[EBX + 0x154]               ; 0059c695
    PUSH dword ptr [EBP + 0x96]         ; 0059c69b
    PUSH EAX                            ; 0059c6a1
    MOV dword ptr [EBP + 0x6e],EAX      ; 0059c6a2
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 0059c6a5
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    FLD float ptr [EBX + 0x2a8]         ; 0059c6aa
    FSUB float ptr [EBP + 0x96]         ; 0059c6b0
    ADD ESP,0x8                         ; 0059c6b6
    FST float ptr [EBX + 0x2a8]         ; 0059c6b9
    FLDZ                                ; 0059c6bf
    FCOMPP                              ; 0059c6c1
    FNSTSW AX                           ; 0059c6c3
    SAHF                                ; 0059c6c5
    JNC 0x0059c6d0                      ; 0059c6c6
        ;   XREF to: 0059c6d0 (CONDITIONAL_JUMP)  ; LAB_0059c6d0
    LEA ESP,[EBP + 0x7e]                ; 0059c6c8
        ;   Label: LAB_0059c6c8
    POP EBP                             ; 0059c6cb
    POP EDI                             ; 0059c6cc
    POP ESI                             ; 0059c6cd
    POP EBX                             ; 0059c6ce
    RET                                 ; 0059c6cf
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0059c6d0
        ;   Label: LAB_0059c6d0
    PUSH ECX                            ; 0059c6d3
    CALL shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130 ; 0059c6d4
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130(CComplexPolygon * this_ptr)
    ADD ESP,0x4                         ; 0059c6d9
    TEST EAX,EAX                        ; 0059c6dc
    JZ 0x0059c6c8                       ; 0059c6de
        ;   XREF to: 0059c6c8 (CONDITIONAL_JUMP)  ; LAB_0059c6c8
    LEA EDI,[EBP + 0x2]                 ; 0059c6e0
    MOV ESI,0x265370c                   ; 0059c6e3
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0059c6e8
    MOVSD ES:EDI,ESI                    ; 0059c6eb
    MOVSD ES:EDI,ESI                    ; 0059c6ec
    MOVSD ES:EDI,ESI                    ; 0059c6ed
    MOV dword ptr [EBP + 0x72],EAX      ; 0059c6ee
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 0059c6f1
    XOR EBX,EBX                         ; 0059c6fb
    PUSH 0x40c90fdb                     ; 0059c6fd
        ;   Label: LAB_0059c6fd
    PUSH 0x0                            ; 0059c702
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c704
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c709
    LEA ESI,[EBP + -0x6e]               ; 0059c70c
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c70f
    PUSH 0x40c90fdb                     ; 0059c712
    FLD float ptr [EBP + 0x7a]          ; 0059c717
    PUSH 0x0                            ; 0059c71a
    FSTP float ptr [EBP + 0x62]         ; 0059c71c
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c71f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c724
    LEA EDI,[EBP + -0x2e]               ; 0059c727
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c72a
    PUSH 0x40c90fdb                     ; 0059c72d
    FLD float ptr [EBP + 0x7a]          ; 0059c732
    PUSH 0x0                            ; 0059c735
    FSTP float ptr [EBP + 0x66]         ; 0059c737
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c73a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c73f
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c742
    SUB ESP,0x4                         ; 0059c745
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0059c748
    MOV dword ptr [ESP],EAX             ; 0059c74b
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 0059c74e
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[EBP + -0x6e]               ; 0059c753
    MOVSD ES:EDI,ESI                    ; 0059c756
    MOVSD ES:EDI,ESI                    ; 0059c757
    MOVSD ES:EDI,ESI                    ; 0059c758
    MOVSD ES:EDI,ESI                    ; 0059c759
    ADD ESP,0x4                         ; 0059c75a
    LEA ESI,[EBP + -0x2e]               ; 0059c75d
    PUSH ESI                            ; 0059c760
    PUSH dword ptr [EBP + 0x66]         ; 0059c761
    LEA ESI,[EBP + 0xffffff72]          ; 0059c764
    LEA EDI,[EBP + -0x4e]               ; 0059c76a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 0059c76d
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[EBP + 0xffffff72]          ; 0059c772
    MOVSD ES:EDI,ESI                    ; 0059c778
    MOVSD ES:EDI,ESI                    ; 0059c779
    MOVSD ES:EDI,ESI                    ; 0059c77a
    MOVSD ES:EDI,ESI                    ; 0059c77b
    ADD ESP,0x4                         ; 0059c77c
    LEA ESI,[EBP + -0x4e]               ; 0059c77f
    PUSH ESI                            ; 0059c782
    PUSH dword ptr [EBP + 0x62]         ; 0059c783
    LEA ESI,[EBP + -0x7e]               ; 0059c786
    LEA EDI,[EBP + -0x5e]               ; 0059c789
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 0059c78c
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[EBP + -0x7e]               ; 0059c791
    MOVSD ES:EDI,ESI                    ; 0059c794
    MOVSD ES:EDI,ESI                    ; 0059c795
    MOVSD ES:EDI,ESI                    ; 0059c796
    MOVSD ES:EDI,ESI                    ; 0059c797
    ADD ESP,0x4                         ; 0059c798
    LEA ESI,[EBP + -0x5e]               ; 0059c79b
    PUSH ESI                            ; 0059c79e
    LEA ESI,[EBP + -0xe]                ; 0059c79f
    LEA EDI,[EBP + -0x3e]               ; 0059c7a2
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0059c7a5
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + -0xe]                ; 0059c7aa
    MOVSD ES:EDI,ESI                    ; 0059c7ad
    MOVSD ES:EDI,ESI                    ; 0059c7ae
    MOVSD ES:EDI,ESI                    ; 0059c7af
    MOVSD ES:EDI,ESI                    ; 0059c7b0
    ADD ESP,0x8                         ; 0059c7b1
    LEA ESI,[EBP + -0x3e]               ; 0059c7b4
    PUSH ESI                            ; 0059c7b7
    LEA ESI,[EBP + -0x1e]               ; 0059c7b8
    LEA EDI,[EBP + 0xffffff62]          ; 0059c7bb
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0059c7c1
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[EBP + -0x1e]               ; 0059c7c6
    MOVSD ES:EDI,ESI                    ; 0059c7c9
    MOVSD ES:EDI,ESI                    ; 0059c7ca
    MOVSD ES:EDI,ESI                    ; 0059c7cb
    MOVSD ES:EDI,ESI                    ; 0059c7cc
    ADD ESP,0x8                         ; 0059c7cd
    LEA ESI,[EBP + 0xffffff62]          ; 0059c7d0
    PUSH ESI                            ; 0059c7d6
    LEA ESI,[EBP + 0xffffff02]          ; 0059c7d7
    LEA EDI,[EBP + 0xffffff32]          ; 0059c7dd
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 0059c7e3
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    MOV ECX,0xc                         ; 0059c7e8
    LEA ESI,[EBP + 0xffffff02]          ; 0059c7ed
    MOVSD.REP ES:EDI,ESI                ; 0059c7f3
    ADD ESP,0x4                         ; 0059c7f5
    LEA ESI,[EBP + 0xffffff32]          ; 0059c7f8
    PUSH ESI                            ; 0059c7fe
    PUSH 0x40000000                     ; 0059c7ff
    PUSH 0x3f800000                     ; 0059c804
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c809
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    XOR ESI,ESI                         ; 0059c80e
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c810
    MOV dword ptr [EBP + 0x1a],ESI      ; 0059c813
    ADD ESP,0x8                         ; 0059c816
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0059c819
    MOV dword ptr [EBP + 0x6a],EAX      ; 0059c81c
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0059c81f
    MOV dword ptr [EBP + 0x22],ESI      ; 0059c822
    MOV dword ptr [EBP + 0x1e],EAX      ; 0059c825
    LEA ESI,[EBP + 0x1a]                ; 0059c828
    PUSH ESI                            ; 0059c82b
    LEA ESI,[EBP + 0x4a]                ; 0059c82c
    LEA EDI,[EBP + 0xe]                 ; 0059c82f
    CALL core_xform.cpp_FUN_00591530    ; 0059c832
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x4a]                ; 0059c837
    ADD ESP,0x8                         ; 0059c83a
    MOVSD ES:EDI,ESI                    ; 0059c83d
    MOVSD ES:EDI,ESI                    ; 0059c83e
    MOVSD ES:EDI,ESI                    ; 0059c83f
    PUSH 0x3f800000                     ; 0059c840
    FLD float ptr [EBP + 0xe]           ; 0059c845
    FLD float ptr [EBP + 0x12]          ; 0059c848
    FLD float ptr [EBP + 0x16]          ; 0059c84b
    LEA EDI,[EBP + 0x3e]                ; 0059c84e
    LEA ESI,[EBP + 0x26]                ; 0059c851
    FXCH ST2                            ; 0059c854
    FADD float ptr [EBP + 0x2]          ; 0059c856
    FXCH                                ; 0059c859
    FADD float ptr [EBP + 0x6]          ; 0059c85b
    FXCH ST2                            ; 0059c85e
    FADD float ptr [EBP + 0xa]          ; 0059c860
    FXCH                                ; 0059c863
    FSTP float ptr [EBP + 0x26]         ; 0059c865
    FXCH                                ; 0059c868
    FSTP float ptr [EBP + 0x2a]         ; 0059c86a
    FSTP float ptr [EBP + 0x2e]         ; 0059c86d
    MOVSD ES:EDI,ESI                    ; 0059c870
    MOVSD ES:EDI,ESI                    ; 0059c871
    MOVSD ES:EDI,ESI                    ; 0059c872
    PUSH 0x3f000000                     ; 0059c873
    FLD float ptr [EBP + 0x3e]          ; 0059c878
    FLD float ptr [EBP + 0x42]          ; 0059c87b
    FLD float ptr [EBP + 0x46]          ; 0059c87e
    LEA EDI,[EBP + 0x56]                ; 0059c881
    LEA ESI,[EBP + 0x32]                ; 0059c884
    FXCH ST2                            ; 0059c887
    FSUB float ptr [EBP + 0x2]          ; 0059c889
    FXCH                                ; 0059c88c
    FSUB float ptr [EBP + 0x6]          ; 0059c88e
    FXCH ST2                            ; 0059c891
    FSUB float ptr [EBP + 0xa]          ; 0059c893
    FXCH                                ; 0059c896
    FSTP float ptr [EBP + 0x32]         ; 0059c898
    FXCH                                ; 0059c89b
    FSTP float ptr [EBP + 0x36]         ; 0059c89d
    FSTP float ptr [EBP + 0x3a]         ; 0059c8a0
    MOVSD ES:EDI,ESI                    ; 0059c8a3
    MOVSD ES:EDI,ESI                    ; 0059c8a4
    MOVSD ES:EDI,ESI                    ; 0059c8a5
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c8a6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c8ab
    FLD float ptr [EBP + 0x56]          ; 0059c8ae
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0059c8b1
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c8b4
    FMUL float ptr [EBP + 0x76]         ; 0059c8b7
    FLD float ptr [EBP + 0x5a]          ; 0059c8ba
    FMUL float ptr [EBP + 0x76]         ; 0059c8bd
    FLD float ptr [EBP + 0x5e]          ; 0059c8c0
    ADD ESP,0x8                         ; 0059c8c3
    FMUL float ptr [EBP + 0x76]         ; 0059c8c6
    PUSH 0x0                            ; 0059c8c9
    PUSH 0x0                            ; 0059c8cb
    FXCH ST2                            ; 0059c8cd
    FSTP float ptr [EBP + 0x56]         ; 0059c8cf
    FSTP float ptr [EBP + 0x5a]         ; 0059c8d2
    FSTP float ptr [EBP + 0x5e]         ; 0059c8d5
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c8d8
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c8dd
    PUSH 0x3e4ccccd                     ; 0059c8e0
    PUSH 0x0                            ; 0059c8e5
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c8e7
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c8ec
    PUSH 0x3f19999a                     ; 0059c8ef
    PUSH 0x3e99999a                     ; 0059c8f4
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c8f9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c8fe
    PUSH 0x0                            ; 0059c901
    PUSH 0x0                            ; 0059c903
    LEA ESI,[EBP + 0x56]                ; 0059c905
    PUSH ESI                            ; 0059c908
    LEA ESI,[EBP + 0x3e]                ; 0059c909
    PUSH ESI                            ; 0059c90c
    PUSH 0x0                            ; 0059c90d
    PUSH 0x3e4ccccd                     ; 0059c90f
    PUSH 0x0                            ; 0059c914
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c916
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c91b
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c91e
    SUB ESP,0x4                         ; 0059c921
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0059c924
    MOV dword ptr [ESP],EAX             ; 0059c927
    PUSH 0x3f19999a                     ; 0059c92a
    PUSH 0x3e99999a                     ; 0059c92f
    CALL core_actor.cpp_FUN_0040cf60    ; 0059c934
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    ADD ESP,0x8                         ; 0059c939
    MOV dword ptr [EBP + 0x7a],EAX      ; 0059c93c
    SUB ESP,0x4                         ; 0059c93f
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0059c942
    MOV dword ptr [ESP],EAX             ; 0059c945
    PUSH 0x0                            ; 0059c948
    PUSH 0x3f333333                     ; 0059c94a
    PUSH 0x0                            ; 0059c94f
    PUSH 0x3f800000                     ; 0059c951
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059c956
    PUSH 0x3fc00000                     ; 0059c959
    PUSH EAX                            ; 0059c95e
    INC EBX                             ; 0059c95f
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 0059c960
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 0059c965
    CMP EBX,0x14                        ; 0059c968
    JGE 0x0059c6c8                      ; 0059c96b
        ;   XREF to: 0059c6c8 (CONDITIONAL_JUMP)  ; LAB_0059c6c8
    JMP 0x0059c6fd                      ; 0059c971
        ;   XREF to: 0059c6fd (UNCONDITIONAL_JUMP)  ; LAB_0059c6fd

