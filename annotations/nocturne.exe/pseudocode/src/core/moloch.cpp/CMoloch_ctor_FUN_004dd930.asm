; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_004dd930(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_moloch.cpp_factoryFuncMoloch_FUN_004dd900 at 004dd913
;
; Referenced Globals:
;   TerminatedCString s_moloch_h_dfm_0058a712
;   TerminatedCString s_molochToDemon_0058a71f
;   undefined4 s_olochToDemon_0058a71f+1
;   undefined4 s_lochToDemon_0058a71f+2
;   undefined4 s_ochToDemon_0058a71f+3
;   TerminatedCString s_molochToHuman_0058a72d
;   undefined4 s_olochToHuman_0058a72d+1
;   undefined4 s_lochToHuman_0058a72d+2
;   undefined4 s_ochToHuman_0058a72d+3
;   CHero_full_vtable g_CMolochVTable
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004b46d0
;   core_morph.cpp_CMorph_ctor_FUN_004e0050
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd930
        ;   Label: core_moloch.cpp_CMoloch_ctor_FUN_004dd930
    PUSH ESI                            ; 004dd931
    PUSH EDI                            ; 004dd932
    MOV EBX,dword ptr [ESP + 0x10]      ; 004dd933
    PUSH EBX                            ; 004dd937
    CALL core_hero.cpp_CHero_ctor_FUN_004b46d0 ; 004dd938
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004b46d0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004dd93d
    ADD EAX,0x1fa3c                     ; 004dd940
    PUSH EAX                            ; 004dd945
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 ; 004dd946
        ;   XREF to: 0051b660 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004dd94b
    ADD EAX,0x2388                      ; 004dd94e
    PUSH EAX                            ; 004dd953
    CALL core_morph.cpp_CMorph_ctor_FUN_004e0050 ; 004dd954
        ;   XREF to: 004e0050 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004e0050(CMorph * this_ptr)
    ADD ESP,0x4                         ; 004dd959
    LEA EBX,[EAX + 0xfffde23c]          ; 004dd95c
    PUSH 0x58a712                       ; 004dd962 | = "moloch_h.dfm"
    LEA EAX,[EBX + 0x150]               ; 004dd967
    PUSH EAX                            ; 004dd96d
    MOV dword ptr [EBX + 0x14c],0x5a0ac4 ; 004dd96e | g_CMolochVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004dd978
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004dd97d
    MOV ESI,0x58a71f                    ; 004dd980 | = "molochToDemon"
    LEA EDI,[EBX + 0x21cfc]             ; 004dd985
    PUSH EDI                            ; 004dd98b
    MOV AL,byte ptr [ESI]               ; 004dd98c | = "molochToDemon" | s_lochToDemon_0058a71f+2
        ;   Label: LAB_004dd98c
    MOV byte ptr [EDI],AL               ; 004dd98e
    CMP AL,0x0                          ; 004dd990
    JZ 0x004dd9a4                       ; 004dd992
        ;   XREF to: 004dd9a4 (CONDITIONAL_JUMP)  ; LAB_004dd9a4
    MOV AL,byte ptr [ESI + 0x1]         ; 004dd994 | s_olochToDemon_0058a71f+1 | s_ochToDemon_0058a71f+3
    ADD ESI,0x2                         ; 004dd997
    MOV byte ptr [EDI + 0x1],AL         ; 004dd99a
    ADD EDI,0x2                         ; 004dd99d
    CMP AL,0x0                          ; 004dd9a0
    JNZ 0x004dd98c                      ; 004dd9a2
        ;   XREF to: 004dd98c (CONDITIONAL_JUMP)  ; LAB_004dd98c
    POP EDI                             ; 004dd9a4
        ;   Label: LAB_004dd9a4
    MOV ESI,0x58a72d                    ; 004dd9a5 | = "molochToHuman"
    LEA EDI,[EBX + 0x21d60]             ; 004dd9aa
    PUSH EDI                            ; 004dd9b0
    MOV AL,byte ptr [ESI]               ; 004dd9b1 | = "molochToHuman" | s_lochToHuman_0058a72d+2
        ;   Label: LAB_004dd9b1
    MOV byte ptr [EDI],AL               ; 004dd9b3
    CMP AL,0x0                          ; 004dd9b5
    JZ 0x004dd9c9                       ; 004dd9b7
        ;   XREF to: 004dd9c9 (CONDITIONAL_JUMP)  ; LAB_004dd9c9
    MOV AL,byte ptr [ESI + 0x1]         ; 004dd9b9 | s_olochToHuman_0058a72d+1 | s_ochToHuman_0058a72d+3
    ADD ESI,0x2                         ; 004dd9bc
    MOV byte ptr [EDI + 0x1],AL         ; 004dd9bf
    ADD EDI,0x2                         ; 004dd9c2
    CMP AL,0x0                          ; 004dd9c5
    JNZ 0x004dd9b1                      ; 004dd9c7
        ;   XREF to: 004dd9b1 (CONDITIONAL_JUMP)  ; LAB_004dd9b1
    POP EDI                             ; 004dd9c9
        ;   Label: LAB_004dd9c9
    MOV dword ptr [EBX + 0x21cf0],0x1   ; 004dd9ca
    MOV dword ptr [EBX + 0x21cf4],0x0   ; 004dd9d4
    MOV EAX,EBX                         ; 004dd9de
    MOV dword ptr [EBX + 0x21cf8],0x0   ; 004dd9e0
    POP EDI                             ; 004dd9ea
    POP ESI                             ; 004dd9eb
    POP EBX                             ; 004dd9ec
    RET                                 ; 004dd9ed

