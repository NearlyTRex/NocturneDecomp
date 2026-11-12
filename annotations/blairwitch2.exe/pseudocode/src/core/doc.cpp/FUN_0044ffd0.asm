; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_doc_cpp_FUN_0044ffd0(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_doc.cpp_FUN_00453d80 at 00454c69
;   core_doc.cpp_FUN_004568e0 at 00457df7
;
; Referenced Globals:
;   undefined4 DAT_005cfb7f
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCryptVesselClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ffd0
        ;   Label: core_doc.cpp_FUN_0044ffd0
    PUSH ESI                            ; 0044ffd1
    PUSH EBP                            ; 0044ffd2
    SUB ESP,0xc                         ; 0044ffd3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044ffd6
    MOV EDX,dword ptr [0x007bc9e8]      ; 0044ffda | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 0044ffe0
    PUSH ESI                            ; 0044ffe1
    XOR EBX,EBX                         ; 0044ffe2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0044ffe4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0044ffe9
    TEST EAX,EAX                        ; 0044ffec
    JNZ 0x00450053                      ; 0044ffee
        ;   XREF to: 00450053 (CONDITIONAL_JUMP)  ; LAB_00450053
    MOV ECX,dword ptr [0x0265378c]      ; 0044fff0 | g_CCryptVesselClassInfo.name_hash
        ;   Label: LAB_0044fff0
    PUSH ECX                            ; 0044fff6
    PUSH ESI                            ; 0044fff7
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0044fff8
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0044fffd
    TEST EAX,EAX                        ; 00450000
    JZ 0x00450014                       ; 00450002
        ;   XREF to: 00450014 (CONDITIONAL_JUMP)  ; LAB_00450014
    ADD EAX,0x2b4                       ; 00450004
    PUSH EAX                            ; 00450009
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0045000a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045000f
    MOV EBX,EAX                         ; 00450012
    TEST EBX,EBX                        ; 00450014
        ;   Label: LAB_00450014
    JZ 0x00450065                       ; 00450016
        ;   XREF to: 00450065 (CONDITIONAL_JUMP)  ; LAB_00450065
    PUSH EDI                            ; 00450018
    XOR EDI,EDI                         ; 00450019
    XOR ESI,ESI                         ; 0045001b
    XOR ECX,ECX                         ; 0045001d
    XOR EDX,EDX                         ; 0045001f
    MOV dword ptr [ESP + 0x8],EDI       ; 00450021
    MOV EAX,dword ptr [EBX + 0x104]     ; 00450025
        ;   Label: LAB_00450025
    CMP ECX,EAX                         ; 0045002b
    JGE 0x00450076                      ; 0045002d
        ;   XREF to: 00450076 (CONDITIONAL_JUMP)  ; LAB_00450076
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0045002f
    ADD EAX,EDX                         ; 00450035
    MOV EBP,dword ptr [EAX]             ; 00450037
    CMP EDI,EBP                         ; 00450039
    JGE 0x00450046                      ; 0045003b
        ;   XREF to: 00450046 (CONDITIONAL_JUMP)  ; LAB_00450046
    MOV EDI,EBP                         ; 0045003d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0045003f
    MOV dword ptr [ESP + 0x8],EBP       ; 00450042
    MOV EBP,dword ptr [EAX + 0x4]       ; 00450046
        ;   Label: LAB_00450046
    CMP ESI,EBP                         ; 00450049
    JL 0x00450072                       ; 0045004b
        ;   XREF to: 00450072 (CONDITIONAL_JUMP)  ; LAB_00450072
    INC ECX                             ; 0045004d
        ;   Label: LAB_0045004d
    ADD EDX,0xc                         ; 0045004e
    JMP 0x00450025                      ; 00450051
        ;   XREF to: 00450025 (UNCONDITIONAL_JUMP)  ; LAB_00450025
    ADD EAX,0x2b4                       ; 00450053
        ;   Label: LAB_00450053
    PUSH EAX                            ; 00450058
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00450059
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045005e
    MOV EBX,EAX                         ; 00450061
    JMP 0x0044fff0                      ; 00450063
        ;   XREF to: 0044fff0 (UNCONDITIONAL_JUMP)  ; LAB_0044fff0
    MOV dword ptr [ESP],EBX             ; 00450065
        ;   Label: LAB_00450065
    MOV EAX,dword ptr [ESP]             ; 00450068
    ADD ESP,0xc                         ; 0045006b
    POP EBP                             ; 0045006e
    POP ESI                             ; 0045006f
    POP EBX                             ; 00450070
    RET                                 ; 00450071
    MOV ESI,EBP                         ; 00450072
        ;   Label: LAB_00450072
    JMP 0x0045004d                      ; 00450074
        ;   XREF to: 0045004d (UNCONDITIONAL_JUMP)  ; LAB_0045004d
    MOV EBP,dword ptr [ESP + 0x8]       ; 00450076
        ;   Label: LAB_00450076
    SUB ESI,EBP                         ; 0045007a
    MOV dword ptr [ESP + 0xc],ESI       ; 0045007c
    FILD dword ptr [ESP + 0xc]          ; 00450080
    FMUL double ptr [0x005cfb7f]        ; 00450084 | DAT_005cfb7f
    FSTP float ptr [ESP + 0x4]          ; 0045008a
    POP EDI                             ; 0045008e
    MOV EAX,dword ptr [ESP]             ; 0045008f
    ADD ESP,0xc                         ; 00450092
    POP EBP                             ; 00450095
    POP ESI                             ; 00450096
    POP EBX                             ; 00450097
    RET                                 ; 00450098

