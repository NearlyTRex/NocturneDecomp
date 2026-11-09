; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_gabriela_cpp_FUN_004b1060(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d713b
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 g_CDynamiteClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_charactr.cpp_FUN_004254b0
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1060
        ;   Label: core_gabriela.cpp_FUN_004b1060
    PUSH ESI                            ; 004b1061
    PUSH EDI                            ; 004b1062
    PUSH EBP                            ; 004b1063
    MOV EBP,ESP                         ; 004b1064
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b1066
    PUSH ESI                            ; 004b1069
    CALL core_charactr.cpp_FUN_004254b0 ; 004b106a
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 004b106f
    MOV EDI,EAX                         ; 004b1072
    TEST EAX,EAX                        ; 004b1074
    JNZ 0x004b109a                      ; 004b1076
        ;   XREF to: 004b109a (CONDITIONAL_JUMP)  ; LAB_004b109a
    TEST EDI,EDI                        ; 004b1078
        ;   Label: LAB_004b1078
    JZ 0x004b1093                       ; 004b107a
        ;   XREF to: 004b1093 (CONDITIONAL_JUMP)  ; LAB_004b1093
    LEA EBX,[ESI + 0x2437c]             ; 004b107c
    MOV EAX,dword ptr [EBX + 0x468]     ; 004b1082
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004b1088
    TEST EAX,EAX                        ; 004b108f
    JNZ 0x004b10c5                      ; 004b1091
        ;   XREF to: 004b10c5 (CONDITIONAL_JUMP)  ; LAB_004b10c5
    MOV EAX,EDI                         ; 004b1093
        ;   Label: LAB_004b1093
    POP EBP                             ; 004b1095
    POP EDI                             ; 004b1096
    POP ESI                             ; 004b1097
    POP EBX                             ; 004b1098
    RET                                 ; 004b1099
    PUSH ESI                            ; 004b109a
        ;   Label: LAB_004b109a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004b109b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b10a0
    PUSH 0x0                            ; 004b10a3
    LEA EAX,[ESI + 0x25680]             ; 004b10a5
    PUSH EAX                            ; 004b10ab
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 004b10ac
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 004b10b1
    MOV EDX,dword ptr [0x0060b280]      ; 004b10b4 | DAT_0060b280
    PUSH EDX                            ; 004b10ba | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004b10bb
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004b10c0
    JMP 0x004b1078                      ; 004b10c3
        ;   XREF to: 004b1078 (UNCONDITIONAL_JUMP)  ; LAB_004b1078
    PUSH EAX                            ; 004b10c5
        ;   Label: LAB_004b10c5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b10c6
    CALL dword ptr [EDX + 0x18]         ; 004b10cc
    FLD float ptr [ESI + 0x25648]       ; 004b10cf
    ADD ESP,0x4                         ; 004b10d5
    FCOMP double ptr [0x005d713b]       ; 004b10d8 | DAT_005d713b
    FNSTSW AX                           ; 004b10de
    SAHF                                ; 004b10e0
    JBE 0x004b1093                      ; 004b10e1
        ;   XREF to: 004b1093 (CONDITIONAL_JUMP)  ; LAB_004b1093
    MOV ECX,dword ptr [0x01c225d8]      ; 004b10e3 | g_CDynamiteClassInfo.name_hash
    MOV EAX,dword ptr [EBX + 0x468]     ; 004b10e9
    PUSH ECX                            ; 004b10ef
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004b10f0
    PUSH EAX                            ; 004b10f7
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b10f8
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b10fd
    TEST EAX,EAX                        ; 004b1100
    JZ 0x004b112f                       ; 004b1102
        ;   XREF to: 004b112f (CONDITIONAL_JUMP)  ; LAB_004b112f
    FLD float ptr [EAX + 0x6dc]         ; 004b1104
    FMUL ST0                            ; 004b110a
    FLD float ptr [EAX + 0x6d8]         ; 004b110c
    FMUL ST0                            ; 004b1112
    FADDP                               ; 004b1114
    FLD float ptr [EAX + 0x6e0]         ; 004b1116
    FMUL ST0                            ; 004b111c
    FADDP                               ; 004b111e
    FSQRT                               ; 004b1120
    FLDZ                                ; 004b1122
    FCOMPP                              ; 004b1124
    FNSTSW AX                           ; 004b1126
    SAHF                                ; 004b1128
    JNC 0x004b1093                      ; 004b1129
        ;   XREF to: 004b1093 (CONDITIONAL_JUMP)  ; LAB_004b1093
    MOV EAX,dword ptr [ESI + 0x247e4]   ; 004b112f
        ;   Label: LAB_004b112f
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x2498c] ; 004b1135
    PUSH EAX                            ; 004b113c
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 004b113d
    CALL dword ptr [EBX + 0xf8]         ; 004b1143
    ADD ESP,0x4                         ; 004b1149
    MOV EAX,EDI                         ; 004b114c
    POP EBP                             ; 004b114e
    POP EDI                             ; 004b114f
    POP ESI                             ; 004b1150
    POP EBX                             ; 004b1151
    RET                                 ; 004b1152

