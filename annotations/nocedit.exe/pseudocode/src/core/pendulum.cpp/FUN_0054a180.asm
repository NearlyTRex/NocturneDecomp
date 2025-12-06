; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_pendulum.cpp_FUN_0054a180()
;
;
; Referenced Globals:
;   double DOUBLE_0063ed01 = -1
;   double DOUBLE_0063ed09 = 0.100000000000000
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CEnemyClassInfo.name_hash
;   CEventList g_CEventListInstance
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;   undefined4 DAT_03263318
;   undefined4 DAT_0326331c
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_pendulum.cpp_FUN_005495c0
;   core_pendulum.cpp_FUN_00549b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a180
        ;   Label: core_pendulum.cpp_FUN_0054a180
    PUSH ESI                            ; 0054a181
    PUSH EDI                            ; 0054a182
    PUSH EBP                            ; 0054a183
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054a184
    CMP dword ptr [ESI + 0x39c],0x0     ; 0054a188
    JZ 0x0054a254                       ; 0054a18f | LAB_0054a254
        ;   XREF to: 0054a254 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x338]               ; 0054a195
        ;   Label: LAB_0054a195
    PUSH EAX                            ; 0054a19b
    MOV EBX,dword ptr [0x006793d0]      ; 0054a19c | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EBX                            ; 0054a1a2 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054a1a3 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a1a8
    TEST EAX,EAX                        ; 0054a1ab
    JZ 0x0054a1cf                       ; 0054a1ad | LAB_0054a1cf
        ;   XREF to: 0054a1cf (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x430],0x3f800000 ; 0054a1af
    JZ 0x0054a1cf                       ; 0054a1b9 | LAB_0054a1cf
        ;   XREF to: 0054a1cf (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x434],0x0     ; 0054a1bb
    MOV dword ptr [ESI + 0x430],0x3f800000 ; 0054a1c5
    PUSH dword ptr [ESP + 0x18]         ; 0054a1cf
        ;   Label: LAB_0054a1cf
    PUSH ESI                            ; 0054a1d3
    CALL core_pendulum.cpp_FUN_00549b90 ; 0054a1d4 | undefined core_pendulum.cpp_FUN_00549b90()
        ;   XREF to: 00549b90 (UNCONDITIONAL_CALL)
    FLD float ptr [ESI + 0x430]         ; 0054a1d9
    FMUL double ptr [0x0063ed01]        ; 0054a1df | double DOUBLE_0063ed01
    FMUL float ptr [ESI + 0x434]        ; 0054a1e5
    FLD1                                ; 0054a1eb
    FLDL2E                              ; 0054a1ed
    FMUL ST2                            ; 0054a1ef
    FST ST2                             ; 0054a1f1
    FPREM                               ; 0054a1f3
    F2XM1                               ; 0054a1f5
    FADDP                               ; 0054a1f7
    FSCALE                              ; 0054a1f9
    FSTP ST1                            ; 0054a1fb
    ADD ESP,0x8                         ; 0054a1fd
    FCOMP double ptr [0x0063ed09]       ; 0054a200 | double DOUBLE_0063ed09
    FNSTSW AX                           ; 0054a206
    SAHF                                ; 0054a208
    JBE 0x0054a2d7                      ; 0054a209 | LAB_0054a2d7
        ;   XREF to: 0054a2d7 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESI + 0x428]     ; 0054a20f
    MOV dword ptr [ESI + 0x440],0x0     ; 0054a215
    TEST EBP,EBP                        ; 0054a21f
    JZ 0x0054a27d                       ; 0054a221 | LAB_0054a27d
        ;   XREF to: 0054a27d (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 0054a223
        ;   Label: LAB_0054a223
    XOR EBP,EBP                         ; 0054a225
    MOV EAX,[0x006810c8]                ; 0054a227 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_0054a227
    CMP EBP,dword ptr [EAX + 0x14f098]  ; 0054a22c | g_CDemonSetInstance.damage_listener_count
    JGE 0x0054a286                      ; 0054a232 | LAB_0054a286
        ;   XREF to: 0054a286 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI + 0x428]     ; 0054a234
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c] ; 0054a23a | g_CDemonSetInstance.damage_listeners
    TEST ECX,ECX                        ; 0054a241
    JNZ 0x0054a28b                      ; 0054a243 | LAB_0054a28b
        ;   XREF to: 0054a28b (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x42c],0x0     ; 0054a245
        ;   Label: LAB_0054a245
    JNZ 0x0054a2ad                      ; 0054a24c | LAB_0054a2ad
        ;   XREF to: 0054a2ad (CONDITIONAL_JUMP)
    INC EBP                             ; 0054a24e
        ;   Label: LAB_0054a24e
    ADD EDI,0x4                         ; 0054a24f
    JMP 0x0054a227                      ; 0054a252 | LAB_0054a227
        ;   XREF to: 0054a227 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x2d4]               ; 0054a254
        ;   Label: LAB_0054a254
    PUSH EAX                            ; 0054a25a
    MOV ECX,dword ptr [0x006793d0]      ; 0054a25b | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH ECX                            ; 0054a261 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0054a262 | int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a267
    TEST EAX,EAX                        ; 0054a26a
    JZ 0x0054a286                       ; 0054a26c | LAB_0054a286
        ;   XREF to: 0054a286 (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x39c],0x1     ; 0054a26e
    JMP 0x0054a195                      ; 0054a278 | LAB_0054a195
        ;   XREF to: 0054a195 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x42c],0x0     ; 0054a27d
        ;   Label: LAB_0054a27d
    JNZ 0x0054a223                      ; 0054a284 | LAB_0054a223
        ;   XREF to: 0054a223 (CONDITIONAL_JUMP)
    POP EBP                             ; 0054a286
        ;   Label: LAB_0054a286
    POP EDI                             ; 0054a287
    POP ESI                             ; 0054a288
    POP EBX                             ; 0054a289
    RET                                 ; 0054a28a
    MOV EAX,[0x02db880c]                ; 0054a28b | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0054a28b
    PUSH EAX                            ; 0054a290
    PUSH EBX                            ; 0054a291
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054a292 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a297
    TEST EAX,EAX                        ; 0054a29a
    JZ 0x0054a245                       ; 0054a29c | LAB_0054a245
        ;   XREF to: 0054a245 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0054a29e
    PUSH EAX                            ; 0054a2a0
    PUSH EBX                            ; 0054a2a1
    PUSH ESI                            ; 0054a2a2
    CALL core_pendulum.cpp_FUN_005495c0 ; 0054a2a3 | undefined core_pendulum.cpp_FUN_005495c0()
        ;   XREF to: 005495c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054a2a8
    JMP 0x0054a24e                      ; 0054a2ab | LAB_0054a24e
        ;   XREF to: 0054a24e (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02cf2bf0]      ; 0054a2ad | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0054a2ad
    PUSH ECX                            ; 0054a2b3
    PUSH EBX                            ; 0054a2b4
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054a2b5 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054a2ba
    TEST EAX,EAX                        ; 0054a2bd
    JZ 0x0054a24e                       ; 0054a2bf | LAB_0054a24e
        ;   XREF to: 0054a24e (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0054a2c1
    PUSH 0x0                            ; 0054a2c2
    PUSH EBX                            ; 0054a2c4
    PUSH ESI                            ; 0054a2c5
    CALL core_pendulum.cpp_FUN_005495c0 ; 0054a2c6 | undefined core_pendulum.cpp_FUN_005495c0()
        ;   XREF to: 005495c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0054a2cb
    INC EBP                             ; 0054a2ce
    ADD EDI,0x4                         ; 0054a2cf
    JMP 0x0054a227                      ; 0054a2d2 | LAB_0054a227
        ;   XREF to: 0054a227 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x440],0x1     ; 0054a2d7
        ;   Label: LAB_0054a2d7
    POP EBP                             ; 0054a2e1
    POP EDI                             ; 0054a2e2
    POP ESI                             ; 0054a2e3
    POP EBX                             ; 0054a2e4
    RET                                 ; 0054a2e5

