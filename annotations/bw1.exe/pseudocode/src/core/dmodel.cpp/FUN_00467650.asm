; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_00467650(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   core_dmodel.cpp_FUN_004669f0 at 00466aaf
;   core_dmodel.cpp_FUN_00466be0 at 00466cc4
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d94cc
;   TerminatedCString s_Too_many_materials_005d94df
;   TerminatedCString s_core_dmodel_cpp_005d94f3
;   TerminatedCString s_Too_many_parts_005d9506
;   TerminatedCString s_core_dmodel_cpp_005d9516
;   TerminatedCString s_Out_of_memory_in_CKeyFra_005d9529
;   TerminatedCString s_core_dmodel_cpp_005d9582
;   TerminatedCString s_Out_of_memory_for_vertex_005d9595
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dmodel.cpp_FUN_00467160
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467650
        ;   Label: core_dmodel.cpp_FUN_00467650
    PUSH ESI                            ; 00467651
    PUSH EDI                            ; 00467652
    PUSH EBP                            ; 00467653
    MOV EBX,dword ptr [ESP + 0x14]      ; 00467654
    PUSH EBX                            ; 00467658
    CALL core_dmodel.cpp_FUN_00467160   ; 00467659
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 0046765e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00467661
    MOV dword ptr [EBX + 0x104],EAX     ; 00467665
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046766b
    MOV dword ptr [EBX + 0x110],EAX     ; 0046766f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00467675
    MOV dword ptr [EBX + 0x120],EAX     ; 00467679
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046767f
    MOV dword ptr [EBX + 0x244],EAX     ; 00467683
    MOV EAX,dword ptr [ESP + 0x28]      ; 00467689
    MOV EDX,dword ptr [EBX + 0x120]     ; 0046768d
    MOV dword ptr [EBX + 0x100],EAX     ; 00467693
    CMP EDX,0x4                         ; 00467699
    JG 0x004677ae                       ; 0046769c
        ;   XREF to: 004677ae (CONDITIONAL_JUMP)  ; LAB_004677ae
    CMP dword ptr [EBX + 0x244],0x1e    ; 004676a2
        ;   Label: LAB_004676a2
    JLE 0x004676cd                      ; 004676a9
        ;   XREF to: 004676cd (CONDITIONAL_JUMP)  ; LAB_004676cd
    MOV EBP,0x5d94f3                    ; 004676ab | = "..\\core\\dmodel.cpp"
    MOV EAX,0x2c1                       ; 004676b0
    PUSH 0x5d9506                       ; 004676b5 | = "Too many parts!"
    MOV dword ptr [0x01d1d400],EBP      ; 004676ba | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004676c0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004676c5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004676ca
    MOV EAX,dword ptr [EBX + 0x104]     ; 004676cd
        ;   Label: LAB_004676cd
    MOV EDX,dword ptr [EBX + 0x100]     ; 004676d3
    IMUL EDX,EAX                        ; 004676d9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004676dc
    SUB EAX,EDX                         ; 004676e3
    SHL EAX,0x2                         ; 004676e5
    PUSH EAX                            ; 004676e8
    CALL crt_unknown.c_FUN_005c1268     ; 004676e9
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    MOV EDX,dword ptr [EBX + 0x110]     ; 004676ee
    MOV dword ptr [EBX + 0x10c],EAX     ; 004676f4
    LEA EAX,[EDX*0x8 + 0x0]             ; 004676fa
    ADD EAX,EDX                         ; 00467701
    ADD ESP,0x4                         ; 00467703
    SHL EAX,0x3                         ; 00467706
    PUSH EAX                            ; 00467709
    CALL crt_unknown.c_FUN_005c1268     ; 0046770a
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    MOV dword ptr [EBX + 0x114],EAX     ; 0046770f
    MOV EAX,dword ptr [EBX + 0x110]     ; 00467715
    ADD ESP,0x4                         ; 0046771b
    SHL EAX,0x2                         ; 0046771e
    PUSH EAX                            ; 00467721
    CALL crt_unknown.c_FUN_005c1268     ; 00467722
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    MOV EDX,dword ptr [EBX + 0x100]     ; 00467727
    MOV dword ptr [EBX + 0x118],EAX     ; 0046772d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00467733
    SUB EAX,EDX                         ; 0046773a
    ADD ESP,0x4                         ; 0046773c
    SHL EAX,0x3                         ; 0046773f
    PUSH EAX                            ; 00467742
    CALL crt_unknown.c_FUN_005c1268     ; 00467743
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 00467748
    MOV ECX,dword ptr [EBX + 0x10c]     ; 0046774b
    MOV dword ptr [EBX + 0x350],EAX     ; 00467751
    TEST ECX,ECX                        ; 00467757
    JNZ 0x004677d6                      ; 00467759
        ;   XREF to: 004677d6 (CONDITIONAL_JUMP)  ; LAB_004677d6
    PUSH EBX                            ; 0046775b
        ;   Label: LAB_0046775b
    CALL core_dmodel.cpp_FUN_00467160   ; 0046775c
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467160()
    ADD ESP,0x4                         ; 00467761
    MOV EDI,dword ptr [EBX + 0x110]     ; 00467764
    PUSH EDI                            ; 0046776a
    MOV EBP,dword ptr [EBX + 0x104]     ; 0046776b
    PUSH EBP                            ; 00467771
    MOV EAX,dword ptr [EBX + 0x100]     ; 00467772
    PUSH EAX                            ; 00467778
    MOV ESI,0x2d3                       ; 00467779
    MOV ECX,0x5d9516                    ; 0046777e | = "..\\core\\dmodel.cpp"
    PUSH 0x5d9529                       ; 00467783 | = "Out of memory in CKeyFramedModel::all..."
    MOV dword ptr [0x01d1d404],ESI      ; 00467788 | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 0046778e | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 00467794
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x10                        ; 00467799
    CMP dword ptr [EBX + 0x100],0x1     ; 0046779c
    JZ 0x0046781d                       ; 004677a3
        ;   XREF to: 0046781d (CONDITIONAL_JUMP)  ; LAB_0046781d
    POP EBP                             ; 004677a9
        ;   Label: LAB_004677a9
    POP EDI                             ; 004677aa
    POP ESI                             ; 004677ab
    POP EBX                             ; 004677ac
    RET                                 ; 004677ad
    MOV ECX,0x5d94cc                    ; 004677ae | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_004677ae
    MOV ESI,0x2c0                       ; 004677b3
    PUSH 0x5d94df                       ; 004677b8 | = "Too many materials!"
    MOV dword ptr [0x01d1d400],ECX      ; 004677bd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004677c3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004677c9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004677ce
    JMP 0x004676a2                      ; 004677d1
        ;   XREF to: 004676a2 (UNCONDITIONAL_JUMP)  ; LAB_004676a2
    CMP dword ptr [EBX + 0x110],0x0     ; 004677d6
        ;   Label: LAB_004677d6
    JLE 0x004677ec                      ; 004677dd
        ;   XREF to: 004677ec (CONDITIONAL_JUMP)  ; LAB_004677ec
    CMP dword ptr [EBX + 0x114],0x0     ; 004677df
    JZ 0x0046775b                       ; 004677e6
        ;   XREF to: 0046775b (CONDITIONAL_JUMP)  ; LAB_0046775b
    CMP dword ptr [EBX + 0x110],0x0     ; 004677ec
        ;   Label: LAB_004677ec
    JLE 0x00467802                      ; 004677f3
        ;   XREF to: 00467802 (CONDITIONAL_JUMP)  ; LAB_00467802
    CMP dword ptr [EBX + 0x118],0x0     ; 004677f5
    JZ 0x0046775b                       ; 004677fc
        ;   XREF to: 0046775b (CONDITIONAL_JUMP)  ; LAB_0046775b
    CMP dword ptr [EBX + 0x350],0x0     ; 00467802
        ;   Label: LAB_00467802
    JZ 0x0046775b                       ; 00467809
        ;   XREF to: 0046775b (CONDITIONAL_JUMP)  ; LAB_0046775b
    CMP dword ptr [EBX + 0x100],0x1     ; 0046780f
    JZ 0x0046781d                       ; 00467816
        ;   XREF to: 0046781d (CONDITIONAL_JUMP)  ; LAB_0046781d
    POP EBP                             ; 00467818
    POP EDI                             ; 00467819
    POP ESI                             ; 0046781a
    POP EBX                             ; 0046781b
    RET                                 ; 0046781c
    MOV EDX,dword ptr [EBX + 0x104]     ; 0046781d
        ;   Label: LAB_0046781d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00467823
    SUB EAX,EDX                         ; 0046782a
    SHL EAX,0x2                         ; 0046782c
    PUSH EAX                            ; 0046782f
    CALL crt_unknown.c_FUN_005c1268     ; 00467830
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 00467835
    MOV dword ptr [EBX + 0x108],EAX     ; 00467838
    TEST EAX,EAX                        ; 0046783e
    JNZ 0x004677a9                      ; 00467840
        ;   XREF to: 004677a9 (CONDITIONAL_JUMP)  ; LAB_004677a9
    MOV EBP,dword ptr [EBX + 0x104]     ; 00467846
    PUSH EBP                            ; 0046784c
    MOV ESI,0x5d9582                    ; 0046784d | = "..\\core\\dmodel.cpp"
    MOV EDI,0x2db                       ; 00467852
    PUSH 0x5d9595                       ; 00467857 | = "Out of memory for vertex normals in C..."
    MOV dword ptr [0x01d1d400],ESI      ; 0046785c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00467862 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00467868
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0046786d
    POP EBP                             ; 00467870
    POP EDI                             ; 00467871
    POP ESI                             ; 00467872
    POP EBX                             ; 00467873
    RET                                 ; 00467874

