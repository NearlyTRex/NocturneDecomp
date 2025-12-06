; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_00588d40(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_simbox.cpp_CSimBox_FUN_00588d00 at 00588d1a
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00649bed
;   TerminatedCString s_none_00649bfa
;   undefined4 s_one_00649bfb
;   undefined4 s_ne_00649bfc
;   undefined4 s_e_00649bfd
;   CDemonActor_vtable g_CSimBoxVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_box.cpp_CBox_ctor_FUN_0041dc50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588d40
        ;   Label: core_simbox.cpp_CSimBox_ctor_FUN_00588d40
    PUSH ESI                            ; 00588d41
    PUSH EDI                            ; 00588d42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00588d43
    PUSH EBX                            ; 00588d47
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00588d48 | CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00588d4d
    ADD EAX,0x158                       ; 00588d50
    PUSH EAX                            ; 00588d55
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00588d56 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00588d5b
    ADD EAX,0x200                       ; 00588d5e
    PUSH EAX                            ; 00588d63
    CALL core_box.cpp_CBox_ctor_FUN_0041dc50 ; 00588d64 | CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
        ;   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00588d69
    LEA EBX,[EAX + 0xfffffca8]          ; 00588d6c
    PUSH 0x649bed                       ; 00588d72 | = "question.kfm" | s_question_kfm_00649bed = question.kfm
    LEA EAX,[EBX + 0x158]               ; 00588d77
    PUSH EAX                            ; 00588d7d
    MOV dword ptr [EBX + 0x154],0x662d24 ; 00588d7e | CDemonActor_vtable g_CSimBoxVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00588d88 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00588d8d
    MOV ESI,0x649bfa                    ; 00588d90 | = "none" | s_none_00649bfa = none
    LEA EDI,[EBX + 0x2dc]               ; 00588d95
    PUSH EDI                            ; 00588d9b
    MOV AL,byte ptr [ESI]               ; 00588d9c | = "none" | s_none_00649bfa = none
        ;   Label: LAB_00588d9c
    MOV byte ptr [EDI],AL               ; 00588d9e
    CMP AL,0x0                          ; 00588da0
    JZ 0x00588db4                       ; 00588da2 | LAB_00588db4
        ;   XREF to: 00588db4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00588da4 | s_one_00649bfb
    ADD ESI,0x2                         ; 00588da7
    MOV byte ptr [EDI + 0x1],AL         ; 00588daa
    ADD EDI,0x2                         ; 00588dad
    CMP AL,0x0                          ; 00588db0
    JNZ 0x00588d9c                      ; 00588db2 | LAB_00588d9c
        ;   XREF to: 00588d9c (CONDITIONAL_JUMP)
    POP EDI                             ; 00588db4
        ;   Label: LAB_00588db4
    LEA EAX,[EBX + 0x340]               ; 00588db5
    MOV dword ptr [EAX + 0x8],0x0       ; 00588dbb
    MOV EDX,dword ptr [EAX + 0x8]       ; 00588dc2
    MOV dword ptr [EAX + 0x4],EDX       ; 00588dc5
    MOV EDX,dword ptr [EAX + 0x4]       ; 00588dc8
    MOV dword ptr [EAX],EDX             ; 00588dcb
    LEA EAX,[EBX + 0x34c]               ; 00588dcd
    MOV dword ptr [EAX + 0x8],0x0       ; 00588dd3
    MOV EDX,dword ptr [EAX + 0x8]       ; 00588dda
    MOV dword ptr [EAX + 0x4],EDX       ; 00588ddd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00588de0
    MOV dword ptr [EAX],EDX             ; 00588de3
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00588de5
    MOV EAX,EBX                         ; 00588def
    MOV dword ptr [EBX + 0x2d8],0x42c80000 ; 00588df1
    POP EDI                             ; 00588dfb
    POP ESI                             ; 00588dfc
    POP EBX                             ; 00588dfd
    RET                                 ; 00588dfe

