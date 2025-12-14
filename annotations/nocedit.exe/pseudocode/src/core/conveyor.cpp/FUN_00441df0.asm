; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_conveyor.cpp_FUN_00441df0()
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;   undefined4 DAT_032613d8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441df0
        ;   Label: core_conveyor.cpp_FUN_00441df0
    PUSH ESI                            ; 00441df1
    PUSH EDI                            ; 00441df2
    PUSH EBP                            ; 00441df3
    SUB ESP,0x20                        ; 00441df4
    MOV ESI,dword ptr [ESP + 0x34]      ; 00441df7
    LEA EAX,[ESI + 0x744]               ; 00441dfb
    PUSH EAX                            ; 00441e01
    MOV EDX,dword ptr [0x006793d0]      ; 00441e02 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 00441e08 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00441e09
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00441e0e
    TEST EAX,EAX                        ; 00441e11
    JZ 0x00441e1f                       ; 00441e13
        ;   XREF to: 00441e1f (CONDITIONAL_JUMP)  ; LAB_00441e1f
    MOV dword ptr [ESI + 0x80c],0x1     ; 00441e15
    LEA EAX,[ESI + 0x7a8]               ; 00441e1f
        ;   Label: LAB_00441e1f
    PUSH EAX                            ; 00441e25
    MOV ECX,dword ptr [0x006793d0]      ; 00441e26 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 00441e2c | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00441e2d
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00441e32
    TEST EAX,EAX                        ; 00441e35
    JNZ 0x00441e7e                      ; 00441e37
        ;   XREF to: 00441e7e (CONDITIONAL_JUMP)  ; LAB_00441e7e
    CMP dword ptr [ESI + 0x80c],0x0     ; 00441e39
    JZ 0x00441e88                       ; 00441e40
        ;   XREF to: 00441e88 (CONDITIONAL_JUMP)  ; LAB_00441e88
    LEA EAX,[ESI + 0x738]               ; 00441e42
    XOR EDI,EDI                         ; 00441e48
    MOV dword ptr [ESP + 0x18],EAX      ; 00441e4a
    LEA EAX,[ESI + 0x810]               ; 00441e4e
    XOR EBP,EBP                         ; 00441e54
    MOV dword ptr [ESP + 0x1c],EAX      ; 00441e56
    MOV EAX,[0x006810c8]                ; 00441e5a | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00441e5a
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 00441e5f | g_CDemonSetInstance.actor_list_ptr
    JGE 0x00441e88                      ; 00441e65
        ;   XREF to: 00441e88 (CONDITIONAL_JUMP)  ; LAB_00441e88
    MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14d158] ; 00441e67 | g_CDemonSetInstance.actor_list_data[0] | DAT_032613d4 | DAT_032613d8
    MOV ECX,dword ptr [EBX + 0xdc]      ; 00441e6e
    CMP ESI,ECX                         ; 00441e74
    JZ 0x00441e90                       ; 00441e76
        ;   XREF to: 00441e90 (CONDITIONAL_JUMP)  ; LAB_00441e90
    INC EDI                             ; 00441e78
    ADD EBP,0x4                         ; 00441e79
    JMP 0x00441e5a                      ; 00441e7c
        ;   XREF to: 00441e5a (UNCONDITIONAL_JUMP)  ; LAB_00441e5a
    MOV dword ptr [ESI + 0x80c],0x0     ; 00441e7e
        ;   Label: LAB_00441e7e
    ADD ESP,0x20                        ; 00441e88
        ;   Label: LAB_00441e88
    POP EBP                             ; 00441e8b
    POP EDI                             ; 00441e8c
    POP ESI                             ; 00441e8d
    POP EBX                             ; 00441e8e
    RET                                 ; 00441e8f
    CMP byte ptr [ECX + 0x810],0x0      ; 00441e90
        ;   Label: LAB_00441e90
    JNZ 0x00441f1c                      ; 00441e97
        ;   XREF to: 00441f1c (CONDITIONAL_JUMP)  ; LAB_00441f1c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00441e9d
        ;   Label: LAB_00441e9d
    PUSH EDX                            ; 00441ea1
    LEA EAX,[ESP + 0x4]                 ; 00441ea2
    PUSH EAX                            ; 00441ea6
    PUSH ESI                            ; 00441ea7
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00441ea8
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00441ead
    FLD float ptr [ESP + 0x38]          ; 00441eb0
    FLD float ptr [ESP]                 ; 00441eb4
    FMUL ST1                            ; 00441eb7
    FLD float ptr [ESP + 0x4]           ; 00441eb9
    FMUL ST2                            ; 00441ebd
    FLD float ptr [ESP + 0x8]           ; 00441ebf
    FMULP ST3                           ; 00441ec3
    LEA EAX,[ESP + 0xc]                 ; 00441ec5
    LEA EDX,[EBX + 0xe0]                ; 00441ec9
    FXCH                                ; 00441ecf
    FSTP float ptr [ESP + 0xc]          ; 00441ed1
    FSTP float ptr [ESP + 0x10]         ; 00441ed5
    FSTP float ptr [ESP + 0x14]         ; 00441ed9
    CMP EDX,EAX                         ; 00441edd
    JZ 0x00441ef5                       ; 00441edf
        ;   XREF to: 00441ef5 (CONDITIONAL_JUMP)  ; LAB_00441ef5
    MOV EAX,dword ptr [ESP + 0xc]       ; 00441ee1
    MOV dword ptr [EDX],EAX             ; 00441ee5
    MOV EAX,dword ptr [ESP + 0x10]      ; 00441ee7
    MOV dword ptr [EDX + 0x4],EAX       ; 00441eeb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00441eee
    MOV dword ptr [EDX + 0x8],EAX       ; 00441ef2
    MOV dword ptr [EBX + 0xf4],0x0      ; 00441ef5
        ;   Label: LAB_00441ef5
    MOV dword ptr [EBX + 0xf0],0x0      ; 00441eff
    MOV dword ptr [EBX + 0xec],0x0      ; 00441f09
    INC EDI                             ; 00441f13
    ADD EBP,0x4                         ; 00441f14
    JMP 0x00441e5a                      ; 00441f17
        ;   XREF to: 00441e5a (UNCONDITIONAL_JUMP)  ; LAB_00441e5a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00441f1c
        ;   Label: LAB_00441f1c
    PUSH EAX                            ; 00441f20
    PUSH EBX                            ; 00441f21
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00441f22
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00441f27
    TEST EAX,EAX                        ; 00441f2a
    JNZ 0x00441e9d                      ; 00441f2c
        ;   XREF to: 00441e9d (CONDITIONAL_JUMP)  ; LAB_00441e9d
    INC EDI                             ; 00441f32
    ADD EBP,0x4                         ; 00441f33
    JMP 0x00441e5a                      ; 00441f36
        ;   XREF to: 00441e5a (UNCONDITIONAL_JUMP)  ; LAB_00441e5a

