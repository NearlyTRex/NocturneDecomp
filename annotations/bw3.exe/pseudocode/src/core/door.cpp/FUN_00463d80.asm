; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_00463d80(CDemonActor *param_1)
;
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
;
; XREF[3]:
;   core_door.cpp_FUN_00463d30 at 00463d58
;   core_door.cpp_FUN_004642f0 at 004643c8
;   core_door.cpp_FUN_00465330 at 0046534f
;
; Referenced Globals:
;   void* switchdataD_00463d6c = 00463dc8
;   TerminatedCString s_core_door_cpp_005bbd41
;   TerminatedCString s_CDoor_reposition_Unknown_005bbd52
;   undefined4 DAT_005bbd73
;   undefined4 DAT_005bbd7b
;   undefined4 DAT_005bbd83
;   undefined4 DAT_005bbd8b
;   undefined4 DAT_005fba60
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_dirmat.cpp_FUN_0045b800
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463d80
        ;   Label: core_door.cpp_FUN_00463d80
    PUSH ESI                            ; 00463d81
    PUSH EDI                            ; 00463d82
    PUSH EBP                            ; 00463d83
    MOV EBP,ESP                         ; 00463d84
    SUB ESP,0x150                       ; 00463d86
    AND ESP,0xfffffff8                  ; 00463d8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00463d8f
    PUSH EBX                            ; 00463d92
    MOV EAX,dword ptr [EBX + 0x154]     ; 00463d93
    LEA ESI,[ESP + 0x2c]                ; 00463d99
    LEA EDI,[ESP + 0x14]                ; 00463d9d
    CALL dword ptr [EAX + 0x1c]         ; 00463da1
    MOV ECX,0x6                         ; 00463da4
    LEA ESI,[ESP + 0x2c]                ; 00463da9
    ADD ESP,0x4                         ; 00463dad
    MOVSD.REP ES:EDI,ESI                ; 00463db0
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 00463db2
    CMP EAX,0x3                         ; 00463db8
    JA 0x004641e4                       ; 00463dbb
        ;   XREF to: 004641e4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x463d6c]  ; 00463dc1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x20]                ; 00463dc8
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x30],0x0      ; 00463dcb
    LEA EDX,[EBX + 0x994]               ; 00463dd2
    MOV dword ptr [EBX + 0x38],0x0      ; 00463dd8
    MOV ECX,dword ptr [EDX]             ; 00463ddf
    MOV dword ptr [EAX],ECX             ; 00463de1
    MOV ECX,dword ptr [EDX + 0x4]       ; 00463de3
    MOV dword ptr [EAX + 0x4],ECX       ; 00463de6
    MOV ECX,dword ptr [EDX + 0x8]       ; 00463de9
    MOV dword ptr [EAX + 0x8],ECX       ; 00463dec
    CMP dword ptr [EBX + 0x2e4],0x0     ; 00463def
    JNZ 0x00463ef8                      ; 00463df6
        ;   XREF to: 00463ef8 (CONDITIONAL_JUMP)  ; LAB_00463ef8
    FLD float ptr [EBX + 0x9ac]         ; 00463dfc
    FMUL double ptr [0x005bbd73]        ; 00463e02 | DAT_005bbd73
    FADD float ptr [EBX + 0x9a4]        ; 00463e08
    FSTP float ptr [EBX + 0x34]         ; 00463e0e
        ;   Label: LAB_00463e0e
    PUSH EBX                            ; 00463e11
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00463e12
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00463e17
    FLD float ptr [ESP + 0x1c]          ; 00463e1a
    FST double ptr [ESP + 0x8]          ; 00463e1e
    FABS                                ; 00463e22
    FLD float ptr [ESP + 0x10]          ; 00463e24
    FST double ptr [ESP]                ; 00463e28
    FABS                                ; 00463e2b
    FCOMPP                              ; 00463e2d
    FNSTSW AX                           ; 00463e2f
    SAHF                                ; 00463e31
    JBE 0x00463f0f                      ; 00463e32
        ;   XREF to: 00463f0f (CONDITIONAL_JUMP)  ; LAB_00463f0f
    FLD double ptr [ESP]                ; 00463e38
    FADD double ptr [0x005bbd8b]        ; 00463e3b | DAT_005bbd8b
    FSTP float ptr [EBX + 0x9bc]        ; 00463e41
        ;   Label: LAB_00463e41
    LEA EAX,[EBX + 0x9bc]               ; 00463e47
    LEA ESI,[ESP + 0x118]               ; 00463e4d
    PUSH EAX                            ; 00463e54
    LEA EDI,[ESP + 0xe0]                ; 00463e55
    MOV dword ptr [EBX + 0x9c0],0x40600000 ; 00463e5c
    PUSH EBX                            ; 00463e66
    MOV dword ptr [EBX + 0x9c4],0x0     ; 00463e67
    MOV dword ptr [ESP + 0x150],EAX     ; 00463e71
    CALL core_actor.cpp_FUN_00408b80    ; 00463e78
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x120]               ; 00463e7d
    ADD ESP,0x8                         ; 00463e84
    MOVSD ES:EDI,ESI                    ; 00463e87
    MOVSD ES:EDI,ESI                    ; 00463e88
    MOVSD ES:EDI,ESI                    ; 00463e89
    LEA EAX,[ESP + 0xdc]                ; 00463e8a
    MOV EDI,dword ptr [ESP + 0x148]     ; 00463e91
    CMP EAX,EDI                         ; 00463e98
    JZ 0x00463eb9                       ; 00463e9a
        ;   XREF to: 00463eb9 (CONDITIONAL_JUMP)  ; LAB_00463eb9
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00463e9c
    MOV dword ptr [EDI],EAX             ; 00463ea3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00463ea5
    MOV dword ptr [EDI + 0x4],EAX       ; 00463eac
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00463eaf
    MOV dword ptr [EDI + 0x8],EAX       ; 00463eb6
    LEA EAX,[EBX + 0x9e4]               ; 00463eb9
        ;   Label: LAB_00463eb9
    PUSH EAX                            ; 00463ebf
    MOV EAX,[0x005fba60]                ; 00463ec0 | DAT_005fba60
    PUSH EAX                            ; 00463ec5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00463ec6
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00463ecb
    TEST EAX,EAX                        ; 00463ece
    JZ 0x00463ede                       ; 00463ed0
        ;   XREF to: 00463ede (CONDITIONAL_JUMP)  ; LAB_00463ede
    MOV EAX,dword ptr [EBX + 0x9e0]     ; 00463ed2
    MOV dword ptr [EBX + 0x9cc],EAX     ; 00463ed8
    FLD float ptr [EBX + 0x9cc]         ; 00463ede
        ;   Label: LAB_00463ede
    FLDZ                                ; 00463ee4
    FCOMPP                              ; 00463ee6
    FNSTSW AX                           ; 00463ee8
    SAHF                                ; 00463eea
    JC 0x0046420c                       ; 00463eeb
        ;   XREF to: 0046420c (CONDITIONAL_JUMP)  ; LAB_0046420c
    MOV ESP,EBP                         ; 00463ef1
    POP EBP                             ; 00463ef3
    POP EDI                             ; 00463ef4
    POP ESI                             ; 00463ef5
    POP EBX                             ; 00463ef6
    RET                                 ; 00463ef7
    FLD float ptr [EBX + 0x9ac]         ; 00463ef8
        ;   Label: LAB_00463ef8
    FMUL double ptr [0x005bbd73]        ; 00463efe | DAT_005bbd73
    FSUBR float ptr [EBX + 0x9a4]       ; 00463f04
    JMP 0x00463e0e                      ; 00463f0a
        ;   XREF to: 00463e0e (UNCONDITIONAL_JUMP)  ; LAB_00463e0e
    FLD double ptr [ESP + 0x8]          ; 00463f0f
        ;   Label: LAB_00463f0f
    FADD double ptr [0x005bbd83]        ; 00463f13 | DAT_005bbd83
    JMP 0x00463e41                      ; 00463f19
        ;   XREF to: 00463e41 (UNCONDITIONAL_JUMP)  ; LAB_00463e41
    FLD float ptr [EBX + 0x998]         ; 00463f1e
        ;   Label: caseD_1
    FADD float ptr [EBX + 0x9ac]        ; 00463f24
    MOV EAX,0x40600000                  ; 00463f2a
    FSTP float ptr [EBX + 0x24]         ; 00463f2f
    MOV dword ptr [ESP + 0xa4],EAX      ; 00463f32
    LEA EAX,[ESP + 0xa0]                ; 00463f39
    XOR EDI,EDI                         ; 00463f40
    PUSH EAX                            ; 00463f42
    LEA ESI,[ESP + 0x134]               ; 00463f43
    MOV dword ptr [ESP + 0xa4],EDI      ; 00463f4a
    PUSH EBX                            ; 00463f51
    MOV dword ptr [ESP + 0xb0],EDI      ; 00463f52
    LEA EDI,[ESP + 0xd8]                ; 00463f59
    CALL core_actor.cpp_FUN_00408b80    ; 00463f60
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x138]               ; 00463f65
    LEA EAX,[ESP + 0xd8]                ; 00463f6c
    ADD ESP,0x8                         ; 00463f73
    LEA EDX,[EBX + 0x9bc]               ; 00463f76
    MOVSD ES:EDI,ESI                    ; 00463f7c
    MOVSD ES:EDI,ESI                    ; 00463f7d
    MOVSD ES:EDI,ESI                    ; 00463f7e
    CMP EDX,EAX                         ; 00463f7f
    JZ 0x00463eb9                       ; 00463f81
        ;   XREF to: 00463eb9 (CONDITIONAL_JUMP)  ; LAB_00463eb9
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00463f87
    MOV dword ptr [EDX],EAX             ; 00463f8e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00463f90
    MOV dword ptr [EDX + 0x4],EAX       ; 00463f97
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00463f9a
    MOV dword ptr [EDX + 0x8],EAX       ; 00463fa1
    JMP 0x00463eb9                      ; 00463fa4
        ;   XREF to: 00463eb9 (UNCONDITIONAL_JUMP)  ; LAB_00463eb9
    CMP dword ptr [EBX + 0x2dc],0x1     ; 00463fa9
        ;   Label: caseD_2
    JZ 0x004640cc                       ; 00463fb0
        ;   XREF to: 004640cc (CONDITIONAL_JUMP)  ; LAB_004640cc
    FLD float ptr [EBX + 0x9ac]         ; 00463fb6
    FCHS                                ; 00463fbc
    FSTP float ptr [ESP + 0x40]         ; 00463fbe
    LEA EAX,[ESP + 0x40]                ; 00463fc2
        ;   Label: LAB_00463fc2
    LEA ESI,[ESP + 0x4c]                ; 00463fc6
    XOR EDI,EDI                         ; 00463fca
    PUSH EAX                            ; 00463fcc
    LEA EAX,[EBX + 0x3c]                ; 00463fcd
    MOV dword ptr [ESP + 0x48],EDI      ; 00463fd0
    PUSH EAX                            ; 00463fd4
    MOV dword ptr [ESP + 0x50],EDI      ; 00463fd5
    LEA EDI,[ESP + 0x60]                ; 00463fd9
    CALL core_dirmat.cpp_FUN_0045b800   ; 00463fdd
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x54]                ; 00463fe2
    ADD ESP,0x8                         ; 00463fe6
    LEA EAX,[EBX + 0x994]               ; 00463fe9
    MOVSD ES:EDI,ESI                    ; 00463fef
    MOVSD ES:EDI,ESI                    ; 00463ff0
    MOVSD ES:EDI,ESI                    ; 00463ff1
    FLD float ptr [EAX]                 ; 00463ff2
    FLD float ptr [EAX + 0x4]           ; 00463ff4
    FLD float ptr [EAX + 0x8]           ; 00463ff7
    LEA EDI,[ESP + 0xac]                ; 00463ffa
    LEA ESI,[ESP + 0x94]                ; 00464001
    FXCH ST2                            ; 00464008
    FADD float ptr [ESP + 0x58]         ; 0046400a
    FXCH                                ; 0046400e
    FADD float ptr [ESP + 0x5c]         ; 00464010
    FXCH ST2                            ; 00464014
    FADD float ptr [ESP + 0x60]         ; 00464016
    FXCH                                ; 0046401a
    FSTP float ptr [ESP + 0x94]         ; 0046401c
    FXCH                                ; 00464023
    FSTP float ptr [ESP + 0x98]         ; 00464025
    FSTP float ptr [ESP + 0x9c]         ; 0046402c
    MOVSD ES:EDI,ESI                    ; 00464033
    MOVSD ES:EDI,ESI                    ; 00464034
    MOVSD ES:EDI,ESI                    ; 00464035
    LEA EDX,[EBX + 0x20]                ; 00464036
    MOV EAX,dword ptr [ESP + 0xac]      ; 00464039
    MOV dword ptr [EDX],EAX             ; 00464040
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00464042
    MOV ECX,0x40600000                  ; 00464049
    MOV dword ptr [EDX + 0x4],EAX       ; 0046404e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00464051
    LEA ESI,[ESP + 0x70]                ; 00464058
    MOV dword ptr [EDX + 0x8],EAX       ; 0046405c
    LEA EAX,[ESP + 0xf4]                ; 0046405f
    LEA EDI,[ESP + 0x88]                ; 00464066
    PUSH EAX                            ; 0046406d
    MOV dword ptr [ESP + 0xfc],ECX      ; 0046406e
    XOR EDX,EDX                         ; 00464075
    PUSH EBX                            ; 00464077
    MOV dword ptr [ESP + 0xfc],EDX      ; 00464078
    MOV dword ptr [ESP + 0x104],EDX     ; 0046407f
    CALL core_actor.cpp_FUN_00408b80    ; 00464086
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x78]                ; 0046408b
    LEA EAX,[ESP + 0x90]                ; 0046408f
    ADD ESP,0x8                         ; 00464096
    LEA EDX,[EBX + 0x9bc]               ; 00464099
    MOVSD ES:EDI,ESI                    ; 0046409f
    MOVSD ES:EDI,ESI                    ; 004640a0
    MOVSD ES:EDI,ESI                    ; 004640a1
    CMP EDX,EAX                         ; 004640a2
    JZ 0x00463eb9                       ; 004640a4
        ;   XREF to: 00463eb9 (CONDITIONAL_JUMP)  ; LAB_00463eb9
    MOV EAX,dword ptr [ESP + 0x88]      ; 004640aa
    MOV dword ptr [EDX],EAX             ; 004640b1
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004640b3
    MOV dword ptr [EDX + 0x4],EAX       ; 004640ba
    MOV EAX,dword ptr [ESP + 0x90]      ; 004640bd
    MOV dword ptr [EDX + 0x8],EAX       ; 004640c4
    JMP 0x00463eb9                      ; 004640c7
        ;   XREF to: 00463eb9 (UNCONDITIONAL_JUMP)  ; LAB_00463eb9
    MOV EAX,dword ptr [EBX + 0x9ac]     ; 004640cc
        ;   Label: LAB_004640cc
    MOV dword ptr [ESP + 0x40],EAX      ; 004640d2
    JMP 0x00463fc2                      ; 004640d6
        ;   XREF to: 00463fc2 (UNCONDITIONAL_JUMP)  ; LAB_00463fc2
    FLD float ptr [EBX + 0x9ac]         ; 004640db
        ;   Label: caseD_3
    FMUL double ptr [0x005bbd73]        ; 004640e1 | DAT_005bbd73
    LEA EDI,[ESP + 0xb8]                ; 004640e7
    PUSH EBX                            ; 004640ee
    FSTP float ptr [EBX + 0x30]         ; 004640ef
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 004640f2
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004640f7
    LEA ESI,[ESP + 0xc4]                ; 004640fa
    FLD float ptr [ESP + 0x10]          ; 00464101
    FLD float ptr [ESP + 0x14]          ; 00464105
    FLD float ptr [ESP + 0x18]          ; 00464109
    FXCH ST2                            ; 0046410d
    FADD float ptr [ESP + 0x1c]         ; 0046410f
    FXCH                                ; 00464113
    FADD float ptr [ESP + 0x20]         ; 00464115
    FXCH ST2                            ; 00464119
    FADD float ptr [ESP + 0x24]         ; 0046411b
    FXCH                                ; 0046411f
    FSTP float ptr [ESP + 0xc4]         ; 00464121
    FXCH                                ; 00464128
    FSTP float ptr [ESP + 0xc8]         ; 0046412a
    FSTP float ptr [ESP + 0xcc]         ; 00464131
    MOVSD ES:EDI,ESI                    ; 00464138
    MOVSD ES:EDI,ESI                    ; 00464139
    MOVSD ES:EDI,ESI                    ; 0046413a
    FLD float ptr [0x005bbd7b]          ; 0046413b | DAT_005bbd7b
    FLD float ptr [ESP + 0xb8]          ; 00464141
    FMUL ST1                            ; 00464148
    FLD float ptr [ESP + 0xbc]          ; 0046414a
    FMUL ST2                            ; 00464151
    LEA EAX,[ESP + 0x100]               ; 00464153
    FLD float ptr [ESP + 0xc0]          ; 0046415a
    FMULP ST3                           ; 00464161
    PUSH EAX                            ; 00464163
    LEA EDI,[ESP + 0x104]               ; 00464164
    LEA ESI,[ESP + 0x80]                ; 0046416b
    FXCH                                ; 00464172
    FSTP float ptr [ESP + 0x80]         ; 00464174
    FSTP float ptr [ESP + 0x84]         ; 0046417b
    FSTP float ptr [ESP + 0x88]         ; 00464182
    MOVSD ES:EDI,ESI                    ; 00464189
    MOVSD ES:EDI,ESI                    ; 0046418a
    MOVSD ES:EDI,ESI                    ; 0046418b
    PUSH EBX                            ; 0046418c
    LEA ESI,[ESP + 0x114]               ; 0046418d
    LEA EDI,[ESP + 0x144]               ; 00464194
    CALL core_actor.cpp_FUN_00408b80    ; 0046419b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x114]               ; 004641a0
    LEA EAX,[ESP + 0x144]               ; 004641a7
    ADD ESP,0x8                         ; 004641ae
    LEA EDX,[EBX + 0x9bc]               ; 004641b1
    MOVSD ES:EDI,ESI                    ; 004641b7
    MOVSD ES:EDI,ESI                    ; 004641b8
    MOVSD ES:EDI,ESI                    ; 004641b9
    CMP EDX,EAX                         ; 004641ba
    JZ 0x00463eb9                       ; 004641bc
        ;   XREF to: 00463eb9 (CONDITIONAL_JUMP)  ; LAB_00463eb9
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004641c2
    MOV dword ptr [EDX],EAX             ; 004641c9
    MOV EAX,dword ptr [ESP + 0x140]     ; 004641cb
    MOV dword ptr [EDX + 0x4],EAX       ; 004641d2
    MOV EAX,dword ptr [ESP + 0x144]     ; 004641d5
    MOV dword ptr [EDX + 0x8],EAX       ; 004641dc
    JMP 0x00463eb9                      ; 004641df
        ;   XREF to: 00463eb9 (UNCONDITIONAL_JUMP)  ; LAB_00463eb9
    MOV EDX,0x5bbd41                    ; 004641e4 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x117                       ; 004641e9
    PUSH 0x5bbd52                       ; 004641ee | = "CDoor::reposition - Unknown type"
    MOV dword ptr [0x01d71de0],EDX      ; 004641f3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004641f9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004641ff
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00464204
    JMP 0x00463eb9                      ; 00464207
        ;   XREF to: 00463eb9 (UNCONDITIONAL_JUMP)  ; LAB_00463eb9
    PUSH dword ptr [EBX + 0x9cc]        ; 0046420c
        ;   Label: LAB_0046420c
    FLD float ptr [EBX + 0x9cc]         ; 00464212
    SUB ESP,0x4                         ; 00464218
    FCHS                                ; 0046421b
    FSTP float ptr [ESP]                ; 0046421d
    CALL core_actor.cpp_FUN_0040ce40    ; 00464220
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x154],EAX     ; 00464225
    XOR EDX,EDX                         ; 0046422c
    FLD float ptr [ESP + 0x154]         ; 0046422e
    ADD ESP,0x8                         ; 00464235
    MOV dword ptr [ESP + 0x68],EDX      ; 00464238
    FSTP float ptr [ESP + 0x64]         ; 0046423c
    PUSH dword ptr [EBX + 0x9cc]        ; 00464240
    FLD float ptr [EBX + 0x9cc]         ; 00464246
    SUB ESP,0x4                         ; 0046424c
    FCHS                                ; 0046424f
    FSTP float ptr [ESP]                ; 00464251
    CALL core_actor.cpp_FUN_0040ce40    ; 00464254
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x154],EAX     ; 00464259
    FLD float ptr [ESP + 0x154]         ; 00464260
    ADD ESP,0x8                         ; 00464267
    LEA EAX,[ESP + 0x64]                ; 0046426a
    PUSH EAX                            ; 0046426e
    LEA ESI,[ESP + 0x128]               ; 0046426f
    LEA EDI,[ESP + 0xec]                ; 00464276
    PUSH EBX                            ; 0046427d
    FSTP float ptr [ESP + 0x74]         ; 0046427e
    CALL core_actor.cpp_FUN_00408b00    ; 00464282
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x12c]               ; 00464287
    ADD ESP,0x8                         ; 0046428e
    LEA EAX,[EBX + 0x20]                ; 00464291
    MOVSD ES:EDI,ESI                    ; 00464294
    MOVSD ES:EDI,ESI                    ; 00464295
    MOVSD ES:EDI,ESI                    ; 00464296
    FLD float ptr [EAX]                 ; 00464297
    FLD float ptr [EAX + 0x4]           ; 00464299
    FLD float ptr [EAX + 0x8]           ; 0046429c
    FXCH ST2                            ; 0046429f
    FADD float ptr [ESP + 0xe8]         ; 004642a1
    FXCH                                ; 004642a8
    FADD float ptr [ESP + 0xec]         ; 004642aa
    FXCH ST2                            ; 004642b1
    FADD float ptr [ESP + 0xf0]         ; 004642b3
    FXCH                                ; 004642ba
    FSTP float ptr [EAX]                ; 004642bc
    FXCH                                ; 004642be
    FSTP float ptr [EAX + 0x4]          ; 004642c0
    FSTP float ptr [EAX + 0x8]          ; 004642c3
    MOV dword ptr [EBX + 0x9cc],0x0     ; 004642c6
    MOV ESP,EBP                         ; 004642d0
    POP EBP                             ; 004642d2
    POP EDI                             ; 004642d3
    POP ESI                             ; 004642d4
    POP EBX                             ; 004642d5
    RET                                 ; 004642d6

