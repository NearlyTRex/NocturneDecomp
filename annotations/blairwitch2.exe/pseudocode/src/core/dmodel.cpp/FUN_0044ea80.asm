; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_0044ea80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   core_dmodel.cpp_FUN_0044de20 at 0044dedf
;   core_dmodel.cpp_FUN_0044e010 at 0044e0f4
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cf7af
;   TerminatedCString s_Too_many_materials_005cf7c2
;   TerminatedCString s_core_dmodel_cpp_005cf7d6
;   TerminatedCString s_Too_many_parts_005cf7e9
;   TerminatedCString s_core_dmodel_cpp_005cf7f9
;   TerminatedCString s_Out_of_memory_in_CKeyFra_005cf80c
;   TerminatedCString s_core_dmodel_cpp_005cf865
;   TerminatedCString s_Out_of_memory_for_vertex_005cf878
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dmodel.cpp_FUN_0044e590
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ea80
        ;   Label: core_dmodel.cpp_FUN_0044ea80
    PUSH ESI                            ; 0044ea81
    PUSH EDI                            ; 0044ea82
    PUSH EBP                            ; 0044ea83
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044ea84
    PUSH EBX                            ; 0044ea88
    CALL core_dmodel.cpp_FUN_0044e590   ; 0044ea89
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044e590()
    ADD ESP,0x4                         ; 0044ea8e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044ea91
    MOV dword ptr [EBX + 0x104],EAX     ; 0044ea95
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044ea9b
    MOV dword ptr [EBX + 0x110],EAX     ; 0044ea9f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044eaa5
    MOV dword ptr [EBX + 0x120],EAX     ; 0044eaa9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044eaaf
    MOV dword ptr [EBX + 0x244],EAX     ; 0044eab3
    MOV EAX,dword ptr [ESP + 0x28]      ; 0044eab9
    MOV EDX,dword ptr [EBX + 0x120]     ; 0044eabd
    MOV dword ptr [EBX + 0x100],EAX     ; 0044eac3
    CMP EDX,0x4                         ; 0044eac9
    JG 0x0044ebde                       ; 0044eacc
        ;   XREF to: 0044ebde (CONDITIONAL_JUMP)  ; LAB_0044ebde
    CMP dword ptr [EBX + 0x244],0x1e    ; 0044ead2
        ;   Label: LAB_0044ead2
    JLE 0x0044eafd                      ; 0044ead9
        ;   XREF to: 0044eafd (CONDITIONAL_JUMP)  ; LAB_0044eafd
    MOV EBP,0x5cf7d6                    ; 0044eadb | = "..\\core\\dmodel.cpp"
    MOV EAX,0x2c1                       ; 0044eae0
    PUSH 0x5cf7e9                       ; 0044eae5 | = "Too many parts!"
    MOV dword ptr [0x01d046a0],EBP      ; 0044eaea | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0044eaf0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044eaf5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044eafa
    MOV EAX,dword ptr [EBX + 0x104]     ; 0044eafd
        ;   Label: LAB_0044eafd
    MOV EDX,dword ptr [EBX + 0x100]     ; 0044eb03
    IMUL EDX,EAX                        ; 0044eb09
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044eb0c
    SUB EAX,EDX                         ; 0044eb13
    SHL EAX,0x2                         ; 0044eb15
    PUSH EAX                            ; 0044eb18
    CALL crt_unknown.c_FUN_005b8df8     ; 0044eb19
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    MOV EDX,dword ptr [EBX + 0x110]     ; 0044eb1e
    MOV dword ptr [EBX + 0x10c],EAX     ; 0044eb24
    LEA EAX,[EDX*0x8 + 0x0]             ; 0044eb2a
    ADD EAX,EDX                         ; 0044eb31
    ADD ESP,0x4                         ; 0044eb33
    SHL EAX,0x3                         ; 0044eb36
    PUSH EAX                            ; 0044eb39
    CALL crt_unknown.c_FUN_005b8df8     ; 0044eb3a
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    MOV dword ptr [EBX + 0x114],EAX     ; 0044eb3f
    MOV EAX,dword ptr [EBX + 0x110]     ; 0044eb45
    ADD ESP,0x4                         ; 0044eb4b
    SHL EAX,0x2                         ; 0044eb4e
    PUSH EAX                            ; 0044eb51
    CALL crt_unknown.c_FUN_005b8df8     ; 0044eb52
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    MOV EDX,dword ptr [EBX + 0x100]     ; 0044eb57
    MOV dword ptr [EBX + 0x118],EAX     ; 0044eb5d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044eb63
    SUB EAX,EDX                         ; 0044eb6a
    ADD ESP,0x4                         ; 0044eb6c
    SHL EAX,0x3                         ; 0044eb6f
    PUSH EAX                            ; 0044eb72
    CALL crt_unknown.c_FUN_005b8df8     ; 0044eb73
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 0044eb78
    MOV ECX,dword ptr [EBX + 0x10c]     ; 0044eb7b
    MOV dword ptr [EBX + 0x350],EAX     ; 0044eb81
    TEST ECX,ECX                        ; 0044eb87
    JNZ 0x0044ec06                      ; 0044eb89
        ;   XREF to: 0044ec06 (CONDITIONAL_JUMP)  ; LAB_0044ec06
    PUSH EBX                            ; 0044eb8b
        ;   Label: LAB_0044eb8b
    CALL core_dmodel.cpp_FUN_0044e590   ; 0044eb8c
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_0044e590()
    ADD ESP,0x4                         ; 0044eb91
    MOV EDI,dword ptr [EBX + 0x110]     ; 0044eb94
    PUSH EDI                            ; 0044eb9a
    MOV EBP,dword ptr [EBX + 0x104]     ; 0044eb9b
    PUSH EBP                            ; 0044eba1
    MOV EAX,dword ptr [EBX + 0x100]     ; 0044eba2
    PUSH EAX                            ; 0044eba8
    MOV ESI,0x2d3                       ; 0044eba9
    MOV ECX,0x5cf7f9                    ; 0044ebae | = "..\\core\\dmodel.cpp"
    PUSH 0x5cf80c                       ; 0044ebb3 | = "Out of memory in CKeyFramedModel::all..."
    MOV dword ptr [0x01d046a4],ESI      ; 0044ebb8 | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 0044ebbe | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0044ebc4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 0044ebc9
    CMP dword ptr [EBX + 0x100],0x1     ; 0044ebcc
    JZ 0x0044ec4d                       ; 0044ebd3
        ;   XREF to: 0044ec4d (CONDITIONAL_JUMP)  ; LAB_0044ec4d
    POP EBP                             ; 0044ebd9
        ;   Label: LAB_0044ebd9
    POP EDI                             ; 0044ebda
    POP ESI                             ; 0044ebdb
    POP EBX                             ; 0044ebdc
    RET                                 ; 0044ebdd
    MOV ECX,0x5cf7af                    ; 0044ebde | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0044ebde
    MOV ESI,0x2c0                       ; 0044ebe3
    PUSH 0x5cf7c2                       ; 0044ebe8 | = "Too many materials!"
    MOV dword ptr [0x01d046a0],ECX      ; 0044ebed | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044ebf3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044ebf9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044ebfe
    JMP 0x0044ead2                      ; 0044ec01
        ;   XREF to: 0044ead2 (UNCONDITIONAL_JUMP)  ; LAB_0044ead2
    CMP dword ptr [EBX + 0x110],0x0     ; 0044ec06
        ;   Label: LAB_0044ec06
    JLE 0x0044ec1c                      ; 0044ec0d
        ;   XREF to: 0044ec1c (CONDITIONAL_JUMP)  ; LAB_0044ec1c
    CMP dword ptr [EBX + 0x114],0x0     ; 0044ec0f
    JZ 0x0044eb8b                       ; 0044ec16
        ;   XREF to: 0044eb8b (CONDITIONAL_JUMP)  ; LAB_0044eb8b
    CMP dword ptr [EBX + 0x110],0x0     ; 0044ec1c
        ;   Label: LAB_0044ec1c
    JLE 0x0044ec32                      ; 0044ec23
        ;   XREF to: 0044ec32 (CONDITIONAL_JUMP)  ; LAB_0044ec32
    CMP dword ptr [EBX + 0x118],0x0     ; 0044ec25
    JZ 0x0044eb8b                       ; 0044ec2c
        ;   XREF to: 0044eb8b (CONDITIONAL_JUMP)  ; LAB_0044eb8b
    CMP dword ptr [EBX + 0x350],0x0     ; 0044ec32
        ;   Label: LAB_0044ec32
    JZ 0x0044eb8b                       ; 0044ec39
        ;   XREF to: 0044eb8b (CONDITIONAL_JUMP)  ; LAB_0044eb8b
    CMP dword ptr [EBX + 0x100],0x1     ; 0044ec3f
    JZ 0x0044ec4d                       ; 0044ec46
        ;   XREF to: 0044ec4d (CONDITIONAL_JUMP)  ; LAB_0044ec4d
    POP EBP                             ; 0044ec48
    POP EDI                             ; 0044ec49
    POP ESI                             ; 0044ec4a
    POP EBX                             ; 0044ec4b
    RET                                 ; 0044ec4c
    MOV EDX,dword ptr [EBX + 0x104]     ; 0044ec4d
        ;   Label: LAB_0044ec4d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044ec53
    SUB EAX,EDX                         ; 0044ec5a
    SHL EAX,0x2                         ; 0044ec5c
    PUSH EAX                            ; 0044ec5f
    CALL crt_unknown.c_FUN_005b8df8     ; 0044ec60
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 0044ec65
    MOV dword ptr [EBX + 0x108],EAX     ; 0044ec68
    TEST EAX,EAX                        ; 0044ec6e
    JNZ 0x0044ebd9                      ; 0044ec70
        ;   XREF to: 0044ebd9 (CONDITIONAL_JUMP)  ; LAB_0044ebd9
    MOV EBP,dword ptr [EBX + 0x104]     ; 0044ec76
    PUSH EBP                            ; 0044ec7c
    MOV ESI,0x5cf865                    ; 0044ec7d | = "..\\core\\dmodel.cpp"
    MOV EDI,0x2db                       ; 0044ec82
    PUSH 0x5cf878                       ; 0044ec87 | = "Out of memory for vertex normals in C..."
    MOV dword ptr [0x01d046a0],ESI      ; 0044ec8c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0044ec92 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044ec98
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0044ec9d
    POP EBP                             ; 0044eca0
    POP EDI                             ; 0044eca1
    POP ESI                             ; 0044eca2
    POP EBX                             ; 0044eca3
    RET                                 ; 0044eca4

