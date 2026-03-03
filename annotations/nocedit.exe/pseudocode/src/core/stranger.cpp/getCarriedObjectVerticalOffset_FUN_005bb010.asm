; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(CDemonActor *object)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   object
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0 at 005c1416
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_005c2850 at 005c2b09
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 at 005bf218
;
; Referenced Globals:
;   double DOUBLE_006531ac = 0.00390625
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 g_CCryptVesselClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb010
        ;   Label: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010
    PUSH ESI                            ; 005bb011
    PUSH EBP                            ; 005bb012
    SUB ESP,0xc                         ; 005bb013
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005bb016
    MOV EDX,dword ptr [0x008229e8]      ; 005bb01a | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 005bb020
    PUSH ESI                            ; 005bb021
    XOR EBX,EBX                         ; 005bb022
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005bb024
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005bb029
    TEST EAX,EAX                        ; 005bb02c
    JNZ 0x005bb093                      ; 005bb02e
        ;   XREF to: 005bb093 (CONDITIONAL_JUMP)  ; LAB_005bb093
    MOV ECX,dword ptr [0x03f875d8]      ; 005bb030 | g_CCryptVesselClassInfo.name_hash
        ;   Label: LAB_005bb030
    PUSH ECX                            ; 005bb036
    PUSH ESI                            ; 005bb037
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005bb038
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005bb03d
    TEST EAX,EAX                        ; 005bb040
    JZ 0x005bb054                       ; 005bb042
        ;   XREF to: 005bb054 (CONDITIONAL_JUMP)  ; LAB_005bb054
    ADD EAX,0x158                       ; 005bb044
    PUSH EAX                            ; 005bb049
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005bb04a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bb04f
    MOV EBX,EAX                         ; 005bb052
    TEST EBX,EBX                        ; 005bb054
        ;   Label: LAB_005bb054
    JZ 0x005bb0a5                       ; 005bb056
        ;   XREF to: 005bb0a5 (CONDITIONAL_JUMP)  ; LAB_005bb0a5
    PUSH EDI                            ; 005bb058
    XOR EDI,EDI                         ; 005bb059
    XOR ESI,ESI                         ; 005bb05b
    XOR ECX,ECX                         ; 005bb05d
    XOR EDX,EDX                         ; 005bb05f
    MOV dword ptr [ESP + 0x8],EDI       ; 005bb061
    MOV EAX,dword ptr [EBX + 0x104]     ; 005bb065
        ;   Label: LAB_005bb065
    CMP ECX,EAX                         ; 005bb06b
    JGE 0x005bb0b6                      ; 005bb06d
        ;   XREF to: 005bb0b6 (CONDITIONAL_JUMP)  ; LAB_005bb0b6
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005bb06f
    ADD EAX,EDX                         ; 005bb075
    MOV EBP,dword ptr [EAX]             ; 005bb077
    CMP EDI,EBP                         ; 005bb079
    JGE 0x005bb086                      ; 005bb07b
        ;   XREF to: 005bb086 (CONDITIONAL_JUMP)  ; LAB_005bb086
    MOV EDI,EBP                         ; 005bb07d
    MOV EBP,dword ptr [EAX + 0x4]       ; 005bb07f
    MOV dword ptr [ESP + 0x8],EBP       ; 005bb082
    MOV EBP,dword ptr [EAX + 0x4]       ; 005bb086
        ;   Label: LAB_005bb086
    CMP ESI,EBP                         ; 005bb089
    JL 0x005bb0b2                       ; 005bb08b
        ;   XREF to: 005bb0b2 (CONDITIONAL_JUMP)  ; LAB_005bb0b2
    INC ECX                             ; 005bb08d
        ;   Label: LAB_005bb08d
    ADD EDX,0xc                         ; 005bb08e
    JMP 0x005bb065                      ; 005bb091
        ;   XREF to: 005bb065 (UNCONDITIONAL_JUMP)  ; LAB_005bb065
    ADD EAX,0x158                       ; 005bb093
        ;   Label: LAB_005bb093
    PUSH EAX                            ; 005bb098
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005bb099
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bb09e
    MOV EBX,EAX                         ; 005bb0a1
    JMP 0x005bb030                      ; 005bb0a3
        ;   XREF to: 005bb030 (UNCONDITIONAL_JUMP)  ; LAB_005bb030
    MOV dword ptr [ESP],EBX             ; 005bb0a5
        ;   Label: LAB_005bb0a5
    MOV EAX,dword ptr [ESP]             ; 005bb0a8
    ADD ESP,0xc                         ; 005bb0ab
    POP EBP                             ; 005bb0ae
    POP ESI                             ; 005bb0af
    POP EBX                             ; 005bb0b0
    RET                                 ; 005bb0b1
    MOV ESI,EBP                         ; 005bb0b2
        ;   Label: LAB_005bb0b2
    JMP 0x005bb08d                      ; 005bb0b4
        ;   XREF to: 005bb08d (UNCONDITIONAL_JUMP)  ; LAB_005bb08d
    MOV EBP,dword ptr [ESP + 0x8]       ; 005bb0b6
        ;   Label: LAB_005bb0b6
    SUB ESI,EBP                         ; 005bb0ba
    MOV dword ptr [ESP + 0xc],ESI       ; 005bb0bc
    FILD dword ptr [ESP + 0xc]          ; 005bb0c0
    FMUL double ptr [0x006531ac]        ; 005bb0c4 | DOUBLE_006531ac
    FSTP float ptr [ESP + 0x4]          ; 005bb0ca
    POP EDI                             ; 005bb0ce
    MOV EAX,dword ptr [ESP]             ; 005bb0cf
    ADD ESP,0xc                         ; 005bb0d2
    POP EBP                             ; 005bb0d5
    POP ESI                             ; 005bb0d6
    POP EBX                             ; 005bb0d7
    RET                                 ; 005bb0d8

