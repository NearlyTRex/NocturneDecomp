; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(int param_1)
;
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0 at 0045297a
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990 at 00452ef2
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057ce07
;   TerminatedCString s_CKeyFramedModel_buildCol_0057ce1a
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
;   core_main.c_FUN_004c8440
;   shape_memdbg.cpp_free_FUN_00564486
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453ff0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
    PUSH EDI                            ; 00453ff1
    PUSH EBP                            ; 00453ff2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00453ff3
    MOV EAX,dword ptr [EBX + 0x358]     ; 00453ff7
    TEST EAX,EAX                        ; 00453ffd
    JNZ 0x004540e2                      ; 00453fff
        ;   XREF to: 004540e2 (CONDITIONAL_JUMP)  ; LAB_004540e2
    MOV dword ptr [EBX + 0x354],0x0     ; 00454005
        ;   Label: LAB_00454005
    MOV EDX,dword ptr [EBX + 0x110]     ; 0045400f
    MOV dword ptr [EBX + 0x358],0x0     ; 00454015
    CMP EDX,0x1                         ; 0045401f
    JL 0x004540de                       ; 00454022
        ;   XREF to: 004540de (CONDITIONAL_JUMP)  ; LAB_004540de
    CMP dword ptr [EBX + 0x100],0x1     ; 00454028
    JL 0x004540de                       ; 0045402f
        ;   XREF to: 004540de (CONDITIONAL_JUMP)  ; LAB_004540de
    XOR EAX,EAX                         ; 00454035
    TEST EDX,EDX                        ; 00454037
    JLE 0x00454070                      ; 00454039
        ;   XREF to: 00454070 (CONDITIONAL_JUMP)  ; LAB_00454070
    XOR EDX,EDX                         ; 0045403b
    ADD EDX,0x48                        ; 0045403d
        ;   Label: LAB_0045403d
    MOV ECX,dword ptr [EBX + 0x114]     ; 00454040
    MOV ECX,dword ptr [ECX + EDX*0x1 + -0x44] ; 00454046
    MOV EDI,dword ptr [EBX + 0x354]     ; 0045404a
    SUB ECX,0x2                         ; 00454050
    INC EAX                             ; 00454053
    ADD EDI,ECX                         ; 00454054
    MOV EBP,dword ptr [EBX + 0x110]     ; 00454056
    MOV dword ptr [EBX + 0x354],EDI     ; 0045405c
    CMP EAX,EBP                         ; 00454062
    JL 0x0045403d                       ; 00454064
        ;   XREF to: 0045403d (CONDITIONAL_JUMP)  ; LAB_0045403d
    LEA EAX,[EAX]                       ; 00454066
    LEA EDX,[EDX]                       ; 0045406c
    PUSH ESI                            ; 00454070
        ;   Label: LAB_00454070
    MOV ESI,dword ptr [EBX + 0x100]     ; 00454071
    IMUL ESI,dword ptr [EBX + 0x354]    ; 00454077
    LEA EAX,[ESI*0x8 + 0x0]             ; 0045407e
    MOV EDX,EAX                         ; 00454085
    SHL EAX,0x3                         ; 00454087
    SUB EAX,EDX                         ; 0045408a
    ADD EAX,0x4                         ; 0045408c
    PUSH EAX                            ; 0045408f
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 00454090
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 00454095
    TEST EAX,EAX                        ; 00454098
    JZ 0x004540a2                       ; 0045409a
        ;   XREF to: 004540a2 (CONDITIONAL_JUMP)  ; LAB_004540a2
    ADD EAX,0x4                         ; 0045409c
    MOV dword ptr [EAX + -0x4],ESI      ; 0045409f
    MOV dword ptr [EBX + 0x358],EAX     ; 004540a2
        ;   Label: LAB_004540a2
    TEST EAX,EAX                        ; 004540a8
    JNZ 0x004540cf                      ; 004540aa
        ;   XREF to: 004540cf (CONDITIONAL_JUMP)  ; LAB_004540cf
    MOV ESI,0x57ce07                    ; 004540ac | = "..\\core\\dmodel.cpp"
    MOV EDI,0x470                       ; 004540b1
    PUSH 0x57ce1a                       ; 004540b6 | = "CKeyFramedModel::buildCollisionTriLis..."
    MOV dword ptr [0x01cc4800],ESI      ; 004540bb | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004540c1 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004540c7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004540cc
    PUSH 0x2dd1184                      ; 004540cf | DAT_02dd1184
        ;   Label: LAB_004540cf
    PUSH EBX                            ; 004540d4
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100 ; 004540d5
        ;   XREF to: 00454100 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100()
    ADD ESP,0x8                         ; 004540da
    POP ESI                             ; 004540dd
    POP EBP                             ; 004540de
        ;   Label: LAB_004540de
    POP EDI                             ; 004540df
    POP EBX                             ; 004540e0
    RET                                 ; 004540e1
    SUB EAX,0x4                         ; 004540e2
        ;   Label: LAB_004540e2
    PUSH EAX                            ; 004540e5
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004540e6
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004540eb
    JMP 0x00454005                      ; 004540ee
        ;   XREF to: 00454005 (UNCONDITIONAL_JUMP)  ; LAB_00454005

