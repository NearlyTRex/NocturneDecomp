; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bugs_cpp_CBugs_ctor_FUN_00421040(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_roach.kfm_00579c09
;   string s_hroach.kfm_00579c13
;   string s_mroach.kfm_00579c1e
;   string s_guul.dfm_00579c29
;   undefined1 DAT_00579c32
;   undefined1 DAT_00579c33
;   undefined1 DAT_00579c34
;   undefined1 DAT_00579c35
;   undefined1 DAT_00579c37
;   undefined1 DAT_00579c38
;   undefined1 DAT_00579c39
;   undefined1 DAT_00579c3a
;   string s_false_00579c3c
;   undefined4 s_alse_00579c3c+1
;   undefined4 s_lse_00579c3c+2
;   ... and 4 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421040
        ;   Label: core_bugs.cpp_CBugs_ctor_FUN_00421040
    PUSH ESI                            ; 00421041
    PUSH EDI                            ; 00421042
    MOV EBX,dword ptr [ESP + 0x10]      ; 00421043
    PUSH EBX                            ; 00421047
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00421048
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 0042104d
    PUSH 0x59b010                       ; 00421050 | DAT_0059b010
    PUSH 0x190                          ; 00421055
    ADD EAX,0xbd2c                      ; 0042105a
    PUSH EAX                            ; 0042105f
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00421060
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00421065
    PUSH 0x59b030                       ; 00421068 | DAT_0059b030
    PUSH 0x4                            ; 0042106d
    ADD EAX,0x6404                      ; 0042106f
    PUSH EAX                            ; 00421074
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00421075
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0042107a
    LEA EBX,[EAX + 0xfffeded0]          ; 0042107d
    PUSH 0x6400                         ; 00421083
    MOV dword ptr [EBX + 0x14c],0x59aec4 ; 00421088 | PTR_core_bugs.cpp_CBugs_setup_FUN_004211e0_0059aec4
    PUSH 0x0                            ; 00421092
    LEA EAX,[EBX + 0xbd2c]              ; 00421094
    MOV dword ptr [EBX + 0xbd24],0x0    ; 0042109a
    PUSH EAX                            ; 004210a4
    MOV dword ptr [EBX + 0xbd28],0x32   ; 004210a5
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004210af
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 004210b4
    PUSH 0x579c09                       ; 004210b7 | = "roach.kfm"
    LEA EAX,[EBX + 0x12130]             ; 004210bc
    PUSH EAX                            ; 004210c2
    MOV dword ptr [EBX + 0x1212c],0x3   ; 004210c3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004210cd
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 004210d2
    PUSH 0x579c13                       ; 004210d5 | = "hroach.kfm"
    LEA EAX,[EBX + 0x122ac]             ; 004210da
    PUSH EAX                            ; 004210e0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004210e1
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 004210e6
    PUSH 0x579c1e                       ; 004210e9 | = "mroach.kfm"
    LEA EAX,[EBX + 0x12428]             ; 004210ee
    PUSH EAX                            ; 004210f4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004210f5
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 004210fa
    PUSH 0x579c29                       ; 004210fd | = "guul.dfm"
    LEA EAX,[EBX + 0x150]               ; 00421102
    PUSH EAX                            ; 00421108
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00421109
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x12960],0x0   ; 0042110e
    MOV ESI,0x579c32                    ; 00421118 | DAT_00579c32
    MOV dword ptr [EBX + 0x12964],0x0   ; 0042111d
    ADD ESP,0x8                         ; 00421127
    MOV dword ptr [EBX + 0x1299c],0x0   ; 0042112a
    LEA EDI,[EBX + 0x19708]             ; 00421134
    MOV dword ptr [EBX + 0x19700],0x0   ; 0042113a
    PUSH EDI                            ; 00421144
    MOV AL,byte ptr [ESI]               ; 00421145 | DAT_00579c32 | DAT_00579c34
        ;   Label: LAB_00421145
    MOV byte ptr [EDI],AL               ; 00421147
    CMP AL,0x0                          ; 00421149
    JZ 0x0042115d                       ; 0042114b
        ;   XREF to: 0042115d (CONDITIONAL_JUMP)  ; LAB_0042115d
    MOV AL,byte ptr [ESI + 0x1]         ; 0042114d | DAT_00579c33 | DAT_00579c35
    ADD ESI,0x2                         ; 00421150
    MOV byte ptr [EDI + 0x1],AL         ; 00421153
    ADD EDI,0x2                         ; 00421156
    CMP AL,0x0                          ; 00421159
    JNZ 0x00421145                      ; 0042115b
        ;   XREF to: 00421145 (CONDITIONAL_JUMP)  ; LAB_00421145
    POP EDI                             ; 0042115d
        ;   Label: LAB_0042115d
    MOV ESI,0x579c37                    ; 0042115e | DAT_00579c37
    LEA EDI,[EBX + 0x1976c]             ; 00421163
    MOV dword ptr [EBX + 0x19704],0x0   ; 00421169
    PUSH EDI                            ; 00421173
    MOV AL,byte ptr [ESI]               ; 00421174 | DAT_00579c37 | DAT_00579c39
        ;   Label: LAB_00421174
    MOV byte ptr [EDI],AL               ; 00421176
    CMP AL,0x0                          ; 00421178
    JZ 0x0042118c                       ; 0042117a
        ;   XREF to: 0042118c (CONDITIONAL_JUMP)  ; LAB_0042118c
    MOV AL,byte ptr [ESI + 0x1]         ; 0042117c | DAT_00579c38 | DAT_00579c3a
    ADD ESI,0x2                         ; 0042117f
    MOV byte ptr [EDI + 0x1],AL         ; 00421182
    ADD EDI,0x2                         ; 00421185
    CMP AL,0x0                          ; 00421188
    JNZ 0x00421174                      ; 0042118a
        ;   XREF to: 00421174 (CONDITIONAL_JUMP)  ; LAB_00421174
    POP EDI                             ; 0042118c
        ;   Label: LAB_0042118c
    MOV ESI,0x579c3c                    ; 0042118d | = "false"
    LEA EDI,[EBX + 0x197d0]             ; 00421192
    PUSH EDI                            ; 00421198
    MOV AL,byte ptr [ESI]               ; 00421199 | = "false" | s_lse_00579c3c+2
        ;   Label: LAB_00421199
    MOV byte ptr [EDI],AL               ; 0042119b
    CMP AL,0x0                          ; 0042119d
    JZ 0x004211b1                       ; 0042119f
        ;   XREF to: 004211b1 (CONDITIONAL_JUMP)  ; LAB_004211b1
    MOV AL,byte ptr [ESI + 0x1]         ; 004211a1 | s_alse_00579c3c+1 | s_se_00579c3c+3
    ADD ESI,0x2                         ; 004211a4
    MOV byte ptr [EDI + 0x1],AL         ; 004211a7
    ADD EDI,0x2                         ; 004211aa
    CMP AL,0x0                          ; 004211ad
    JNZ 0x00421199                      ; 004211af
        ;   XREF to: 00421199 (CONDITIONAL_JUMP)  ; LAB_00421199
    POP EDI                             ; 004211b1
        ;   Label: LAB_004211b1
    MOV dword ptr [EBX + 0x2dd4],0x401f5c29 ; 004211b2
    MOV dword ptr [EBX + 0x2dd8],0x40200000 ; 004211bc
    MOV dword ptr [EBX + 0x2de4],0x3fa66666 ; 004211c6
    MOV EAX,EBX                         ; 004211d0
    MOV dword ptr [EBX + 0x2de8],0x3fc00000 ; 004211d2
    POP EDI                             ; 004211dc
    POP ESI                             ; 004211dd
    POP EBX                             ; 004211de
    RET                                 ; 004211df

