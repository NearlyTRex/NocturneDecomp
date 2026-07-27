; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_setdir_cpp_testOBBIntersection_FUN_00513e80(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0 at 005142e0
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513e80
        ;   Label: core_setdir.cpp_testOBBIntersection_FUN_00513e80
    PUSH ESI                            ; 00513e81
    PUSH EDI                            ; 00513e82
    PUSH EBP                            ; 00513e83
    MOV EBP,ESP                         ; 00513e84
    SUB ESP,0x118                       ; 00513e86
    SUB EBP,0x7a                        ; 00513e8c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00513e8f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00513e95
    LEA EDX,[EBP + -0x3e]               ; 00513e9b
    FLD float ptr [EAX + 0xc]           ; 00513e9e
    FCHS                                ; 00513ea1
    FSTP float ptr [EBP + 0x16]         ; 00513ea3
    FLD float ptr [EAX + 0x10]          ; 00513ea6
    FCHS                                ; 00513ea9
    FSTP float ptr [EBP + 0x1a]         ; 00513eab
    FLD float ptr [EAX + 0x14]          ; 00513eae
    FCHS                                ; 00513eb1
    LEA EAX,[EBP + 0x16]                ; 00513eb3
    FSTP float ptr [EBP + 0x1e]         ; 00513eb6
    CMP EDX,EAX                         ; 00513eb9
    JNZ 0x00514187                      ; 00513ebb
        ;   XREF to: 00514187 (CONDITIONAL_JUMP)  ; LAB_00514187
    MOV EDX,dword ptr [EBP + 0x92]      ; 00513ec1
        ;   Label: LAB_00513ec1
    LEA EAX,[EBP + -0x32]               ; 00513ec7
    ADD EDX,0xc                         ; 00513eca
    CMP EAX,EDX                         ; 00513ecd
    JNZ 0x0051419e                      ; 00513ecf
        ;   XREF to: 0051419e (CONDITIONAL_JUMP)  ; LAB_0051419e
    PUSH 0x5993b0                       ; 00513ed5 | g_CVectorTypeInfo_005993b0
        ;   Label: LAB_00513ed5
    PUSH 0x8                            ; 00513eda
    LEA EAX,[EBP + 0xffffff62]          ; 00513edc
    PUSH EAX                            ; 00513ee2
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00513ee3
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    MOV EAX,dword ptr [EBP + 0x92]      ; 00513ee8
    ADD EAX,0x18                        ; 00513eee
    XOR ESI,ESI                         ; 00513ef1
    MOV dword ptr [EBP + 0x62],EAX      ; 00513ef3
    LEA EAX,[EBX + 0x18]                ; 00513ef6
    ADD ESP,0xc                         ; 00513ef9
    MOV dword ptr [EBP + 0x66],EAX      ; 00513efc
    IMUL EDI,ESI,0xc                    ; 00513eff
        ;   Label: LAB_00513eff
    MOV EAX,dword ptr [EBX + 0xc]       ; 00513f02
    MOV dword ptr [EBP + 0x6a],EAX      ; 00513f05
    LEA EAX,[EBP + 0xffffff62]          ; 00513f08
    ADD EDI,EAX                         ; 00513f0e
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00513f10
        ;   Label: LAB_00513f10
    MOV dword ptr [EBP + 0x22],EAX      ; 00513f13
    TEST SI,0x2                         ; 00513f16
    JZ 0x005141cc                       ; 00513f1b
        ;   XREF to: 005141cc (CONDITIONAL_JUMP)  ; LAB_005141cc
    FLD float ptr [EBX + 0x10]          ; 00513f21
    FCHS                                ; 00513f24
    FSTP float ptr [EBP + 0x6e]         ; 00513f26
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00513f29
        ;   Label: LAB_00513f29
    MOV dword ptr [EBP + 0x26],EAX      ; 00513f2c
    TEST SI,0x4                         ; 00513f2f
    JZ 0x005141d7                       ; 00513f34
        ;   XREF to: 005141d7 (CONDITIONAL_JUMP)  ; LAB_005141d7
    FLD float ptr [EBX + 0x14]          ; 00513f3a
    FCHS                                ; 00513f3d
    FSTP float ptr [EBP + 0x72]         ; 00513f3f
    MOV EAX,dword ptr [EBP + 0x72]      ; 00513f42
        ;   Label: LAB_00513f42
    MOV dword ptr [EBP + 0x2a],EAX      ; 00513f45
    LEA EAX,[EBP + 0x22]                ; 00513f48
    PUSH EAX                            ; 00513f4b
    LEA EAX,[EBP + 0x2e]                ; 00513f4c
    PUSH EAX                            ; 00513f4f
    MOV EDX,dword ptr [EBP + 0x66]      ; 00513f50
    PUSH EDX                            ; 00513f53
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00513f54
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    FLD float ptr [EAX]                 ; 00513f59
    FADD float ptr [EBX]                ; 00513f5b
    LEA EDX,[EBP + 0x22]                ; 00513f5d
    FSTP float ptr [EBP + -0x2]         ; 00513f60
    FLD float ptr [EAX + 0x4]           ; 00513f63
    FADD float ptr [EBX + 0x4]          ; 00513f66
    ADD ESP,0xc                         ; 00513f69
    FSTP float ptr [EBP + 0x2]          ; 00513f6c
    FLD float ptr [EAX + 0x8]           ; 00513f6f
    FADD float ptr [EBX + 0x8]          ; 00513f72
    LEA EAX,[EBP + -0x2]                ; 00513f75
    FSTP float ptr [EBP + 0x6]          ; 00513f78
    CMP EDX,EAX                         ; 00513f7b
    JZ 0x00513f91                       ; 00513f7d
        ;   XREF to: 00513f91 (CONDITIONAL_JUMP)  ; LAB_00513f91
    MOV EAX,dword ptr [EBP + -0x2]      ; 00513f7f
    MOV dword ptr [EBP + 0x22],EAX      ; 00513f82
    MOV EAX,dword ptr [EBP + 0x2]       ; 00513f85
    MOV dword ptr [EBP + 0x26],EAX      ; 00513f88
    MOV EAX,dword ptr [EBP + 0x6]       ; 00513f8b
    MOV dword ptr [EBP + 0x2a],EAX      ; 00513f8e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00513f91
        ;   Label: LAB_00513f91
    FLD float ptr [EBP + 0x22]          ; 00513f97
    FSUB float ptr [EAX]                ; 00513f9a
    FLD float ptr [EBP + 0x26]          ; 00513f9c
    FXCH                                ; 00513f9f
    FSTP float ptr [EBP + 0xa]          ; 00513fa1
    FSUB float ptr [EAX + 0x4]          ; 00513fa4
    FLD float ptr [EBP + 0x2a]          ; 00513fa7
    FXCH                                ; 00513faa
    FSTP float ptr [EBP + 0xe]          ; 00513fac
    FSUB float ptr [EAX + 0x8]          ; 00513faf
    LEA EAX,[EBP + 0xa]                 ; 00513fb2
    PUSH EAX                            ; 00513fb5
    LEA EAX,[EBP + -0xe]                ; 00513fb6
    PUSH EAX                            ; 00513fb9
    MOV ECX,dword ptr [EBP + 0x62]      ; 00513fba
    PUSH ECX                            ; 00513fbd
    FSTP float ptr [EBP + 0x12]         ; 00513fbe
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00513fc1
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EDX,EAX                         ; 00513fc6
    LEA EAX,[EBP + 0x22]                ; 00513fc8
    ADD ESP,0xc                         ; 00513fcb
    CMP EAX,EDX                         ; 00513fce
    JZ 0x00513fe3                       ; 00513fd0
        ;   XREF to: 00513fe3 (CONDITIONAL_JUMP)  ; LAB_00513fe3
    MOV EAX,dword ptr [EDX]             ; 00513fd2
    MOV dword ptr [EBP + 0x22],EAX      ; 00513fd4
    MOV EAX,dword ptr [EDX + 0x4]       ; 00513fd7
    MOV dword ptr [EBP + 0x26],EAX      ; 00513fda
    MOV EAX,dword ptr [EDX + 0x8]       ; 00513fdd
    MOV dword ptr [EBP + 0x2a],EAX      ; 00513fe0
    FLD float ptr [EBP + -0x3e]         ; 00513fe3
        ;   Label: LAB_00513fe3
    FCOMP float ptr [EBP + 0x22]        ; 00513fe6
    FNSTSW AX                           ; 00513fe9
    SAHF                                ; 00513feb
    JA 0x00514029                       ; 00513fec
        ;   XREF to: 00514029 (CONDITIONAL_JUMP)  ; LAB_00514029
    FLD float ptr [EBP + -0x3a]         ; 00513fee
    FCOMP float ptr [EBP + 0x26]        ; 00513ff1
    FNSTSW AX                           ; 00513ff4
    SAHF                                ; 00513ff6
    JA 0x00514029                       ; 00513ff7
        ;   XREF to: 00514029 (CONDITIONAL_JUMP)  ; LAB_00514029
    FLD float ptr [EBP + -0x36]         ; 00513ff9
    FCOMP float ptr [EBP + 0x2a]        ; 00513ffc
    FNSTSW AX                           ; 00513fff
    SAHF                                ; 00514001
    JA 0x00514029                       ; 00514002
        ;   XREF to: 00514029 (CONDITIONAL_JUMP)  ; LAB_00514029
    FLD float ptr [EBP + -0x32]         ; 00514004
    FCOMP float ptr [EBP + 0x22]        ; 00514007
    FNSTSW AX                           ; 0051400a
    SAHF                                ; 0051400c
    JC 0x00514029                       ; 0051400d
        ;   XREF to: 00514029 (CONDITIONAL_JUMP)  ; LAB_00514029
    FLD float ptr [EBP + -0x2e]         ; 0051400f
    FCOMP float ptr [EBP + 0x26]        ; 00514012
    FNSTSW AX                           ; 00514015
    SAHF                                ; 00514017
    JC 0x00514029                       ; 00514018
        ;   XREF to: 00514029 (CONDITIONAL_JUMP)  ; LAB_00514029
    FLD float ptr [EBP + -0x2a]         ; 0051401a
    FCOMP float ptr [EBP + 0x2a]        ; 0051401d
    FNSTSW AX                           ; 00514020
    SAHF                                ; 00514022
    JNC 0x005141e2                      ; 00514023
        ;   XREF to: 005141e2 (CONDITIONAL_JUMP)  ; LAB_005141e2
    LEA EAX,[EBP + 0x22]                ; 00514029
        ;   Label: LAB_00514029
    CMP EDI,EAX                         ; 0051402c
    JZ 0x00514041                       ; 0051402e
        ;   XREF to: 00514041 (CONDITIONAL_JUMP)  ; LAB_00514041
    MOV EAX,dword ptr [EBP + 0x22]      ; 00514030
    MOV dword ptr [EDI],EAX             ; 00514033
    MOV EAX,dword ptr [EBP + 0x26]      ; 00514035
    MOV dword ptr [EDI + 0x4],EAX       ; 00514038
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0051403b
    MOV dword ptr [EDI + 0x8],EAX       ; 0051403e
    INC ESI                             ; 00514041
        ;   Label: LAB_00514041
    ADD EDI,0xc                         ; 00514042
    CMP ESI,0x8                         ; 00514045
    JL 0x005141b4                       ; 00514048
        ;   XREF to: 005141b4 (CONDITIONAL_JUMP)  ; LAB_005141b4
    LEA ESI,[EBP + 0xffffff62]          ; 0051404e
    XOR EBX,EBX                         ; 00514054
    MOV EDX,EBX                         ; 00514056
        ;   Label: LAB_00514056
    XOR DL,0x1                          ; 00514058
    IMUL EDX,EDX,0xc                    ; 0051405b
    LEA EAX,[EBP + 0xffffff62]          ; 0051405e
    FLD float ptr [EDX + EAX*0x1]       ; 00514064
    FSUB float ptr [ESI]                ; 00514067
    FSTP float ptr [EBP + 0x3a]         ; 00514069
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0051406c
    FSUB float ptr [ESI + 0x4]          ; 00514070
    PUSH 0x0                            ; 00514073
    FSTP float ptr [EBP + 0x3e]         ; 00514075
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 00514078
    LEA EAX,[EBP + 0x3a]                ; 0051407c
    PUSH EAX                            ; 0051407f
    LEA EAX,[EBP + -0x3e]               ; 00514080
    PUSH ESI                            ; 00514083
    FSUB float ptr [ESI + 0x8]          ; 00514084
    PUSH EAX                            ; 00514087
    FSTP float ptr [EBP + 0x42]         ; 00514088
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 0051408b
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550()
    FLDZ                                ; 00514090
    MOV dword ptr [EBP + 0x76],EAX      ; 00514092
    ADD ESP,0x10                        ; 00514095
    MOV EAX,dword ptr [EBP + 0x76]      ; 00514098
    MOV dword ptr [EBP + 0x5e],EAX      ; 0051409b
    FLD float ptr [EBP + 0x5e]          ; 0051409e
    FSTP double ptr [EBP + 0x46]        ; 005140a1
    FCOMP double ptr [EBP + 0x46]       ; 005140a4
    FNSTSW AX                           ; 005140a7
    SAHF                                ; 005140a9
    JA 0x005140ba                       ; 005140aa
        ;   XREF to: 005140ba (CONDITIONAL_JUMP)  ; LAB_005140ba
    FLD1                                ; 005140ac
    FCOMP double ptr [EBP + 0x46]       ; 005140ae
    FNSTSW AX                           ; 005140b1
    SAHF                                ; 005140b3
    JNC 0x005141e2                      ; 005140b4
        ;   XREF to: 005141e2 (CONDITIONAL_JUMP)  ; LAB_005141e2
    MOV EAX,EBX                         ; 005140ba
        ;   Label: LAB_005140ba
    XOR AL,0x2                          ; 005140bc
    IMUL EDX,EAX,0xc                    ; 005140be
    LEA EAX,[EBP + 0xffffff62]          ; 005140c1
    FLD float ptr [EDX + EAX*0x1]       ; 005140c7
    FSUB float ptr [ESI]                ; 005140ca
    FSTP float ptr [EBP + -0x1a]        ; 005140cc
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 005140cf
    FSUB float ptr [ESI + 0x4]          ; 005140d3
    PUSH 0x0                            ; 005140d6
    FSTP float ptr [EBP + -0x16]        ; 005140d8
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 005140db
    LEA EAX,[EBP + -0x1a]               ; 005140df
    PUSH EAX                            ; 005140e2
    LEA EAX,[EBP + -0x3e]               ; 005140e3
    PUSH ESI                            ; 005140e6
    FSUB float ptr [ESI + 0x8]          ; 005140e7
    PUSH EAX                            ; 005140ea
    FSTP float ptr [EBP + -0x12]        ; 005140eb
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 005140ee
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550()
    FLDZ                                ; 005140f3
    MOV dword ptr [EBP + 0x76],EAX      ; 005140f5
    ADD ESP,0x10                        ; 005140f8
    FLD float ptr [EBP + 0x76]          ; 005140fb
    FSTP double ptr [EBP + 0x4e]        ; 005140fe
    FCOMP double ptr [EBP + 0x4e]       ; 00514101
    FNSTSW AX                           ; 00514104
    SAHF                                ; 00514106
    JA 0x00514117                       ; 00514107
        ;   XREF to: 00514117 (CONDITIONAL_JUMP)  ; LAB_00514117
    FLD1                                ; 00514109
    FCOMP double ptr [EBP + 0x4e]       ; 0051410b
    FNSTSW AX                           ; 0051410e
    SAHF                                ; 00514110
    JNC 0x005141e2                      ; 00514111
        ;   XREF to: 005141e2 (CONDITIONAL_JUMP)  ; LAB_005141e2
    MOV EAX,EBX                         ; 00514117
        ;   Label: LAB_00514117
    XOR AL,0x4                          ; 00514119
    IMUL EAX,EAX,0xc                    ; 0051411b
    LEA EDX,[EBP + 0xffffff62]          ; 0051411e
    FLD float ptr [EDX + EAX*0x1]       ; 00514124
    FSUB float ptr [ESI]                ; 00514127
    FSTP float ptr [EBP + -0x26]        ; 00514129
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0051412c
    FSUB float ptr [ESI + 0x4]          ; 00514130
    PUSH 0x0                            ; 00514133
    FSTP float ptr [EBP + -0x22]        ; 00514135
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 00514138
    LEA EAX,[EBP + -0x26]               ; 0051413c
    PUSH EAX                            ; 0051413f
    LEA EAX,[EBP + -0x3e]               ; 00514140
    PUSH ESI                            ; 00514143
    FSUB float ptr [ESI + 0x8]          ; 00514144
    PUSH EAX                            ; 00514147
    FSTP float ptr [EBP + -0x1e]        ; 00514148
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550 ; 0051414b
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550()
    FLDZ                                ; 00514150
    MOV dword ptr [EBP + 0x76],EAX      ; 00514152
    ADD ESP,0x10                        ; 00514155
    FLD float ptr [EBP + 0x76]          ; 00514158
    FSTP double ptr [EBP + 0x56]        ; 0051415b
    FCOMP double ptr [EBP + 0x56]       ; 0051415e
    FNSTSW AX                           ; 00514161
    SAHF                                ; 00514163
    JA 0x00514170                       ; 00514164
        ;   XREF to: 00514170 (CONDITIONAL_JUMP)  ; LAB_00514170
    FLD1                                ; 00514166
    FCOMP double ptr [EBP + 0x56]       ; 00514168
    FNSTSW AX                           ; 0051416b
    SAHF                                ; 0051416d
    JNC 0x005141e2                      ; 0051416e
        ;   XREF to: 005141e2 (CONDITIONAL_JUMP)  ; LAB_005141e2
    INC EBX                             ; 00514170
        ;   Label: LAB_00514170
    ADD ESI,0xc                         ; 00514171
    CMP EBX,0x8                         ; 00514174
    JL 0x00514056                       ; 00514177
        ;   XREF to: 00514056 (CONDITIONAL_JUMP)  ; LAB_00514056
    XOR EAX,EAX                         ; 0051417d
    LEA ESP,[EBP + 0x7a]                ; 0051417f
    POP EBP                             ; 00514182
    POP EDI                             ; 00514183
    POP ESI                             ; 00514184
    POP EBX                             ; 00514185
    RET                                 ; 00514186
    MOV EAX,dword ptr [EBP + 0x16]      ; 00514187
        ;   Label: LAB_00514187
    MOV dword ptr [EBP + -0x3e],EAX     ; 0051418a
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0051418d
    MOV dword ptr [EBP + -0x3a],EAX     ; 00514190
    MOV EAX,dword ptr [EBP + 0x1e]      ; 00514193
    MOV dword ptr [EBP + -0x36],EAX     ; 00514196
    JMP 0x00513ec1                      ; 00514199
        ;   XREF to: 00513ec1 (UNCONDITIONAL_JUMP)  ; LAB_00513ec1
    MOV EAX,dword ptr [EDX]             ; 0051419e
        ;   Label: LAB_0051419e
    MOV dword ptr [EBP + -0x32],EAX     ; 005141a0
    MOV EAX,dword ptr [EDX + 0x4]       ; 005141a3
    MOV dword ptr [EBP + -0x2e],EAX     ; 005141a6
    MOV EAX,dword ptr [EDX + 0x8]       ; 005141a9
    MOV dword ptr [EBP + -0x2a],EAX     ; 005141ac
    JMP 0x00513ed5                      ; 005141af
        ;   XREF to: 00513ed5 (UNCONDITIONAL_JUMP)  ; LAB_00513ed5
    TEST SI,0x1                         ; 005141b4
        ;   Label: LAB_005141b4
    JZ 0x00513eff                       ; 005141b9
        ;   XREF to: 00513eff (CONDITIONAL_JUMP)  ; LAB_00513eff
    FLD float ptr [EBX + 0xc]           ; 005141bf
    FCHS                                ; 005141c2
    FSTP float ptr [EBP + 0x6a]         ; 005141c4
    JMP 0x00513f10                      ; 005141c7
        ;   XREF to: 00513f10 (UNCONDITIONAL_JUMP)  ; LAB_00513f10
    MOV EAX,dword ptr [EBX + 0x10]      ; 005141cc
        ;   Label: LAB_005141cc
    MOV dword ptr [EBP + 0x6e],EAX      ; 005141cf
    JMP 0x00513f29                      ; 005141d2
        ;   XREF to: 00513f29 (UNCONDITIONAL_JUMP)  ; LAB_00513f29
    MOV EAX,dword ptr [EBX + 0x14]      ; 005141d7
        ;   Label: LAB_005141d7
    MOV dword ptr [EBP + 0x72],EAX      ; 005141da
    JMP 0x00513f42                      ; 005141dd
        ;   XREF to: 00513f42 (UNCONDITIONAL_JUMP)  ; LAB_00513f42
    MOV EAX,0x1                         ; 005141e2
        ;   Label: LAB_005141e2
    LEA ESP,[EBP + 0x7a]                ; 005141e7
    POP EBP                             ; 005141ea
    POP EDI                             ; 005141eb
    POP ESI                             ; 005141ec
    POP EBX                             ; 005141ed
    RET                                 ; 005141ee

