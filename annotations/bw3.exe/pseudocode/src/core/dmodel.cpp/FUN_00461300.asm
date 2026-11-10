; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_00461300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004606a0 at 0046075f
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00460890 at 00460974
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005bb7e4
;   TerminatedCString s_Too_many_materials_005bb7f7
;   TerminatedCString s_core_dmodel_cpp_005bb80b
;   TerminatedCString s_Too_many_parts_005bb81e
;   TerminatedCString s_core_dmodel_cpp_005bb82e
;   TerminatedCString s_Out_of_memory_in_CKeyFra_005bb841
;   TerminatedCString s_core_dmodel_cpp_005bb89a
;   TerminatedCString s_Out_of_memory_for_vertex_005bb8ad
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dmodel.cpp_FUN_00460e10
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461300
        ;   Label: core_dmodel.cpp_FUN_00461300
    PUSH ESI                            ; 00461301
    PUSH EDI                            ; 00461302
    PUSH EBP                            ; 00461303
    MOV EBX,dword ptr [ESP + 0x14]      ; 00461304
    PUSH EBX                            ; 00461308
    CALL core_dmodel.cpp_FUN_00460e10   ; 00461309
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00460e10()
    ADD ESP,0x4                         ; 0046130e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00461311
    MOV dword ptr [EBX + 0x104],EAX     ; 00461315
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046131b
    MOV dword ptr [EBX + 0x110],EAX     ; 0046131f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00461325
    MOV dword ptr [EBX + 0x120],EAX     ; 00461329
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046132f
    MOV dword ptr [EBX + 0x244],EAX     ; 00461333
    MOV EAX,dword ptr [ESP + 0x28]      ; 00461339
    MOV EDX,dword ptr [EBX + 0x120]     ; 0046133d
    MOV dword ptr [EBX + 0x100],EAX     ; 00461343
    CMP EDX,0x4                         ; 00461349
    JG 0x0046145e                       ; 0046134c
        ;   XREF to: 0046145e (CONDITIONAL_JUMP)  ; LAB_0046145e
    CMP dword ptr [EBX + 0x244],0x1e    ; 00461352
        ;   Label: LAB_00461352
    JLE 0x0046137d                      ; 00461359
        ;   XREF to: 0046137d (CONDITIONAL_JUMP)  ; LAB_0046137d
    MOV EBP,0x5bb80b                    ; 0046135b | = "..\\core\\dmodel.cpp"
    MOV EAX,0x2c1                       ; 00461360
    PUSH 0x5bb81e                       ; 00461365 | = "Too many parts!"
    MOV dword ptr [0x01d71de0],EBP      ; 0046136a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00461370 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00461375
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046137a
    MOV EAX,dword ptr [EBX + 0x104]     ; 0046137d
        ;   Label: LAB_0046137d
    MOV EDX,dword ptr [EBX + 0x100]     ; 00461383
    IMUL EDX,EAX                        ; 00461389
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046138c
    SUB EAX,EDX                         ; 00461393
    SHL EAX,0x2                         ; 00461395
    PUSH EAX                            ; 00461398
    CALL crt_unknown.c_FUN_005a40df     ; 00461399
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    MOV EDX,dword ptr [EBX + 0x110]     ; 0046139e
    MOV dword ptr [EBX + 0x10c],EAX     ; 004613a4
    LEA EAX,[EDX*0x8 + 0x0]             ; 004613aa
    ADD EAX,EDX                         ; 004613b1
    ADD ESP,0x4                         ; 004613b3
    SHL EAX,0x3                         ; 004613b6
    PUSH EAX                            ; 004613b9
    CALL crt_unknown.c_FUN_005a40df     ; 004613ba
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    MOV dword ptr [EBX + 0x114],EAX     ; 004613bf
    MOV EAX,dword ptr [EBX + 0x110]     ; 004613c5
    ADD ESP,0x4                         ; 004613cb
    SHL EAX,0x2                         ; 004613ce
    PUSH EAX                            ; 004613d1
    CALL crt_unknown.c_FUN_005a40df     ; 004613d2
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    MOV EDX,dword ptr [EBX + 0x100]     ; 004613d7
    MOV dword ptr [EBX + 0x118],EAX     ; 004613dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004613e3
    SUB EAX,EDX                         ; 004613ea
    ADD ESP,0x4                         ; 004613ec
    SHL EAX,0x3                         ; 004613ef
    PUSH EAX                            ; 004613f2
    CALL crt_unknown.c_FUN_005a40df     ; 004613f3
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 004613f8
    MOV ECX,dword ptr [EBX + 0x10c]     ; 004613fb
    MOV dword ptr [EBX + 0x350],EAX     ; 00461401
    TEST ECX,ECX                        ; 00461407
    JNZ 0x00461486                      ; 00461409
        ;   XREF to: 00461486 (CONDITIONAL_JUMP)  ; LAB_00461486
    PUSH EBX                            ; 0046140b
        ;   Label: LAB_0046140b
    CALL core_dmodel.cpp_FUN_00460e10   ; 0046140c
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00460e10()
    ADD ESP,0x4                         ; 00461411
    MOV EDI,dword ptr [EBX + 0x110]     ; 00461414
    PUSH EDI                            ; 0046141a
    MOV EBP,dword ptr [EBX + 0x104]     ; 0046141b
    PUSH EBP                            ; 00461421
    MOV EAX,dword ptr [EBX + 0x100]     ; 00461422
    PUSH EAX                            ; 00461428
    MOV ESI,0x2d3                       ; 00461429
    MOV ECX,0x5bb82e                    ; 0046142e | = "..\\core\\dmodel.cpp"
    PUSH 0x5bb841                       ; 00461433 | = "Out of memory in CKeyFramedModel::all..."
    MOV dword ptr [0x01d71de4],ESI      ; 00461438 | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 0046143e | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00461444
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x10                        ; 00461449
    CMP dword ptr [EBX + 0x100],0x1     ; 0046144c
    JZ 0x004614cd                       ; 00461453
        ;   XREF to: 004614cd (CONDITIONAL_JUMP)  ; LAB_004614cd
    POP EBP                             ; 00461459
        ;   Label: LAB_00461459
    POP EDI                             ; 0046145a
    POP ESI                             ; 0046145b
    POP EBX                             ; 0046145c
    RET                                 ; 0046145d
    MOV ECX,0x5bb7e4                    ; 0046145e | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0046145e
    MOV ESI,0x2c0                       ; 00461463
    PUSH 0x5bb7f7                       ; 00461468 | = "Too many materials!"
    MOV dword ptr [0x01d71de0],ECX      ; 0046146d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00461473 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00461479
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046147e
    JMP 0x00461352                      ; 00461481
        ;   XREF to: 00461352 (UNCONDITIONAL_JUMP)  ; LAB_00461352
    CMP dword ptr [EBX + 0x110],0x0     ; 00461486
        ;   Label: LAB_00461486
    JLE 0x0046149c                      ; 0046148d
        ;   XREF to: 0046149c (CONDITIONAL_JUMP)  ; LAB_0046149c
    CMP dword ptr [EBX + 0x114],0x0     ; 0046148f
    JZ 0x0046140b                       ; 00461496
        ;   XREF to: 0046140b (CONDITIONAL_JUMP)  ; LAB_0046140b
    CMP dword ptr [EBX + 0x110],0x0     ; 0046149c
        ;   Label: LAB_0046149c
    JLE 0x004614b2                      ; 004614a3
        ;   XREF to: 004614b2 (CONDITIONAL_JUMP)  ; LAB_004614b2
    CMP dword ptr [EBX + 0x118],0x0     ; 004614a5
    JZ 0x0046140b                       ; 004614ac
        ;   XREF to: 0046140b (CONDITIONAL_JUMP)  ; LAB_0046140b
    CMP dword ptr [EBX + 0x350],0x0     ; 004614b2
        ;   Label: LAB_004614b2
    JZ 0x0046140b                       ; 004614b9
        ;   XREF to: 0046140b (CONDITIONAL_JUMP)  ; LAB_0046140b
    CMP dword ptr [EBX + 0x100],0x1     ; 004614bf
    JZ 0x004614cd                       ; 004614c6
        ;   XREF to: 004614cd (CONDITIONAL_JUMP)  ; LAB_004614cd
    POP EBP                             ; 004614c8
    POP EDI                             ; 004614c9
    POP ESI                             ; 004614ca
    POP EBX                             ; 004614cb
    RET                                 ; 004614cc
    MOV EDX,dword ptr [EBX + 0x104]     ; 004614cd
        ;   Label: LAB_004614cd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004614d3
    SUB EAX,EDX                         ; 004614da
    SHL EAX,0x2                         ; 004614dc
    PUSH EAX                            ; 004614df
    CALL crt_unknown.c_FUN_005a40df     ; 004614e0
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 004614e5
    MOV dword ptr [EBX + 0x108],EAX     ; 004614e8
    TEST EAX,EAX                        ; 004614ee
    JNZ 0x00461459                      ; 004614f0
        ;   XREF to: 00461459 (CONDITIONAL_JUMP)  ; LAB_00461459
    MOV EBP,dword ptr [EBX + 0x104]     ; 004614f6
    PUSH EBP                            ; 004614fc
    MOV ESI,0x5bb89a                    ; 004614fd | = "..\\core\\dmodel.cpp"
    MOV EDI,0x2db                       ; 00461502
    PUSH 0x5bb8ad                       ; 00461507 | = "Out of memory for vertex normals in C..."
    MOV dword ptr [0x01d71de0],ESI      ; 0046150c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00461512 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00461518
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0046151d
    POP EBP                             ; 00461520
    POP EDI                             ; 00461521
    POP ESI                             ; 00461522
    POP EBX                             ; 00461523
    RET                                 ; 00461524

