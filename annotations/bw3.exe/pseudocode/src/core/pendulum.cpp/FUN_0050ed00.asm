; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_pendulum_cpp_FUN_0050ed00(CPendulum *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005cbb4d
;   undefined4 DAT_005cbb55
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_pendulum.cpp_FUN_0050df70
;   core_pendulum.cpp_FUN_0050e700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ed00
        ;   Label: core_pendulum.cpp_FUN_0050ed00
    PUSH ESI                            ; 0050ed01
    PUSH EDI                            ; 0050ed02
    PUSH EBP                            ; 0050ed03
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050ed04
    CMP dword ptr [ESI + 0x39c],0x0     ; 0050ed08
    JZ 0x0050edd4                       ; 0050ed0f
        ;   XREF to: 0050edd4 (CONDITIONAL_JUMP)  ; LAB_0050edd4
    LEA EAX,[ESI + 0x338]               ; 0050ed15
        ;   Label: LAB_0050ed15
    PUSH EAX                            ; 0050ed1b
    MOV EBX,dword ptr [0x005fba60]      ; 0050ed1c | DAT_005fba60
    PUSH EBX                            ; 0050ed22
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0050ed23
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050ed28
    TEST EAX,EAX                        ; 0050ed2b
    JZ 0x0050ed4f                       ; 0050ed2d
        ;   XREF to: 0050ed4f (CONDITIONAL_JUMP)  ; LAB_0050ed4f
    CMP dword ptr [ESI + 0x430],0x3f800000 ; 0050ed2f
    JZ 0x0050ed4f                       ; 0050ed39
        ;   XREF to: 0050ed4f (CONDITIONAL_JUMP)  ; LAB_0050ed4f
    MOV dword ptr [ESI + 0x434],0x0     ; 0050ed3b
    MOV dword ptr [ESI + 0x430],0x3f800000 ; 0050ed45
    PUSH dword ptr [ESP + 0x18]         ; 0050ed4f
        ;   Label: LAB_0050ed4f
    PUSH ESI                            ; 0050ed53
    CALL core_pendulum.cpp_FUN_0050e700 ; 0050ed54
        ;   XREF to: 0050e700 (UNCONDITIONAL_CALL)  ; void core_pendulum.cpp_FUN_0050e700(CPendulum * this_ptr, float delta_time)
    FLD float ptr [ESI + 0x430]         ; 0050ed59
    FMUL double ptr [0x005cbb4d]        ; 0050ed5f | DAT_005cbb4d
    FMUL float ptr [ESI + 0x434]        ; 0050ed65
    FLD1                                ; 0050ed6b
    FLDL2E                              ; 0050ed6d
    FMUL ST2                            ; 0050ed6f
    FST ST2                             ; 0050ed71
    FPREM                               ; 0050ed73
    F2XM1                               ; 0050ed75
    FADDP                               ; 0050ed77
    FSCALE                              ; 0050ed79
    FSTP ST1                            ; 0050ed7b
    ADD ESP,0x8                         ; 0050ed7d
    FCOMP double ptr [0x005cbb55]       ; 0050ed80 | DAT_005cbb55
    FNSTSW AX                           ; 0050ed86
    SAHF                                ; 0050ed88
    JBE 0x0050ee57                      ; 0050ed89
        ;   XREF to: 0050ee57 (CONDITIONAL_JUMP)  ; LAB_0050ee57
    MOV EBP,dword ptr [ESI + 0x428]     ; 0050ed8f
    MOV dword ptr [ESI + 0x440],0x0     ; 0050ed95
    TEST EBP,EBP                        ; 0050ed9f
    JZ 0x0050edfd                       ; 0050eda1
        ;   XREF to: 0050edfd (CONDITIONAL_JUMP)  ; LAB_0050edfd
    XOR EDI,EDI                         ; 0050eda3
        ;   Label: LAB_0050eda3
    XOR EBP,EBP                         ; 0050eda5
    MOV EAX,[0x00603b28]                ; 0050eda7 | g_CDemonSetPtr
        ;   Label: LAB_0050eda7
    CMP EBP,dword ptr [EAX + 0x14f0a8]  ; 0050edac
    JGE 0x0050ee06                      ; 0050edb2
        ;   XREF to: 0050ee06 (CONDITIONAL_JUMP)  ; LAB_0050ee06
    MOV ECX,dword ptr [ESI + 0x428]     ; 0050edb4
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 0050edba
    TEST ECX,ECX                        ; 0050edc1
    JNZ 0x0050ee0b                      ; 0050edc3
        ;   XREF to: 0050ee0b (CONDITIONAL_JUMP)  ; LAB_0050ee0b
    CMP dword ptr [ESI + 0x42c],0x0     ; 0050edc5
        ;   Label: LAB_0050edc5
    JNZ 0x0050ee2d                      ; 0050edcc
        ;   XREF to: 0050ee2d (CONDITIONAL_JUMP)  ; LAB_0050ee2d
    INC EBP                             ; 0050edce
        ;   Label: LAB_0050edce
    ADD EDI,0x4                         ; 0050edcf
    JMP 0x0050eda7                      ; 0050edd2
        ;   XREF to: 0050eda7 (UNCONDITIONAL_JUMP)  ; LAB_0050eda7
    LEA EAX,[ESI + 0x2d4]               ; 0050edd4
        ;   Label: LAB_0050edd4
    PUSH EAX                            ; 0050edda
    MOV ECX,dword ptr [0x005fba60]      ; 0050eddb | DAT_005fba60
    PUSH ECX                            ; 0050ede1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0050ede2
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0050ede7
    TEST EAX,EAX                        ; 0050edea
    JZ 0x0050ee06                       ; 0050edec
        ;   XREF to: 0050ee06 (CONDITIONAL_JUMP)  ; LAB_0050ee06
    MOV dword ptr [ESI + 0x39c],0x1     ; 0050edee
    JMP 0x0050ed15                      ; 0050edf8
        ;   XREF to: 0050ed15 (UNCONDITIONAL_JUMP)  ; LAB_0050ed15
    CMP dword ptr [ESI + 0x42c],0x0     ; 0050edfd
        ;   Label: LAB_0050edfd
    JNZ 0x0050eda3                      ; 0050ee04
        ;   XREF to: 0050eda3 (CONDITIONAL_JUMP)  ; LAB_0050eda3
    POP EBP                             ; 0050ee06
        ;   Label: LAB_0050ee06
    POP EDI                             ; 0050ee07
    POP ESI                             ; 0050ee08
    POP EBX                             ; 0050ee09
    RET                                 ; 0050ee0a
    MOV EAX,[0x01d5ba70]                ; 0050ee0b | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0050ee0b
    PUSH EAX                            ; 0050ee10
    PUSH EBX                            ; 0050ee11
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0050ee12
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0050ee17
    TEST EAX,EAX                        ; 0050ee1a
    JZ 0x0050edc5                       ; 0050ee1c
        ;   XREF to: 0050edc5 (CONDITIONAL_JUMP)  ; LAB_0050edc5
    PUSH 0x0                            ; 0050ee1e
    PUSH EAX                            ; 0050ee20
    PUSH EBX                            ; 0050ee21
    PUSH ESI                            ; 0050ee22
    CALL core_pendulum.cpp_FUN_0050df70 ; 0050ee23
        ;   XREF to: 0050df70 (UNCONDITIONAL_CALL)  ; void core_pendulum.cpp_FUN_0050df70(CPendulum * this_ptr, CDemonActor * actor, CDemonActor * left_hand_actor, CDemonActor * right_hand_actor)
    ADD ESP,0x10                        ; 0050ee28
    JMP 0x0050edce                      ; 0050ee2b
        ;   XREF to: 0050edce (UNCONDITIONAL_JUMP)  ; LAB_0050edce
    MOV ECX,dword ptr [0x01c5bc48]      ; 0050ee2d | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0050ee2d
    PUSH ECX                            ; 0050ee33
    PUSH EBX                            ; 0050ee34
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0050ee35
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0050ee3a
    TEST EAX,EAX                        ; 0050ee3d
    JZ 0x0050edce                       ; 0050ee3f
        ;   XREF to: 0050edce (CONDITIONAL_JUMP)  ; LAB_0050edce
    PUSH EAX                            ; 0050ee41
    PUSH 0x0                            ; 0050ee42
    PUSH EBX                            ; 0050ee44
    PUSH ESI                            ; 0050ee45
    CALL core_pendulum.cpp_FUN_0050df70 ; 0050ee46
        ;   XREF to: 0050df70 (UNCONDITIONAL_CALL)  ; void core_pendulum.cpp_FUN_0050df70(CPendulum * this_ptr, CDemonActor * actor, CDemonActor * left_hand_actor, CDemonActor * right_hand_actor)
    ADD ESP,0x10                        ; 0050ee4b
    INC EBP                             ; 0050ee4e
    ADD EDI,0x4                         ; 0050ee4f
    JMP 0x0050eda7                      ; 0050ee52
        ;   XREF to: 0050eda7 (UNCONDITIONAL_JUMP)  ; LAB_0050eda7
    MOV dword ptr [ESI + 0x440],0x1     ; 0050ee57
        ;   Label: LAB_0050ee57
    POP EBP                             ; 0050ee61
    POP EDI                             ; 0050ee62
    POP ESI                             ; 0050ee63
    POP EBX                             ; 0050ee64
    RET                                 ; 0050ee65

