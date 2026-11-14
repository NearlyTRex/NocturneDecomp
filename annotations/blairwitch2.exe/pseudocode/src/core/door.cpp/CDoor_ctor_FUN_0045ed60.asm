; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_0045ed60(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_door.cpp_factoryFuncDoor_FUN_0045ed30 at 0045ed43
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_event.cpp_CRuleList_clear_FUN_00492350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ed60
        ;   Label: core_door.cpp_CDoor_ctor_FUN_0045ed60
    PUSH ESI                            ; 0045ed61
    PUSH EDI                            ; 0045ed62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045ed63
    PUSH EBX                            ; 0045ed67
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 0045ed68
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045ed6d
    ADD EAX,0x2b4                       ; 0045ed70
    PUSH EAX                            ; 0045ed75
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0045ed76
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045ed7b
    LEA EBX,[EAX + 0x320]               ; 0045ed7e
    PUSH EBX                            ; 0045ed84
    CALL core_event.cpp_CRuleList_clear_FUN_00492350 ; 0045ed85
        ;   XREF to: 00492350 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_clear_FUN_00492350(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0045ed8a
    SUB EBX,0x5d4                       ; 0045ed8d
    PUSH 0x5d0956                       ; 0045ed93
    LEA EAX,[EBX + 0x2b4]               ; 0045ed98
    PUSH EAX                            ; 0045ed9e
    MOV dword ptr [EBX + 0x2b0],0x5f54e4 ; 0045ed9f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0045eda9
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x434],0x0     ; 0045edae
    ADD ESP,0x8                         ; 0045edb8
    MOV dword ptr [EBX + 0x438],0x1     ; 0045edbb
    LEA EAX,[EBX + 0xaf0]               ; 0045edc5
    MOV dword ptr [EBX + 0x43c],0x0     ; 0045edcb
    LEA EDX,[EBX + 0x20]                ; 0045edd5
    MOV dword ptr [EBX + 0x440],0x0     ; 0045edd8
    CMP EAX,EDX                         ; 0045ede2
    JZ 0x0045edf6                       ; 0045ede4
        ;   XREF to: 0045edf6 (CONDITIONAL_JUMP)  ; LAB_0045edf6
    MOV ECX,dword ptr [EDX]             ; 0045ede6
    MOV dword ptr [EAX],ECX             ; 0045ede8
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045edea
    MOV dword ptr [EAX + 0x4],ECX       ; 0045eded
    MOV ECX,dword ptr [EDX + 0x8]       ; 0045edf0
    MOV dword ptr [EAX + 0x8],ECX       ; 0045edf3
    MOV ESI,0x5d0963                    ; 0045edf6
        ;   Label: LAB_0045edf6
    LEA EDI,[EBX + 0x444]               ; 0045edfb
    PUSH EDI                            ; 0045ee01
    MOV AL,byte ptr [ESI]               ; 0045ee02
        ;   Label: LAB_0045ee02
    MOV byte ptr [EDI],AL               ; 0045ee04
    CMP AL,0x0                          ; 0045ee06
    JZ 0x0045ee1a                       ; 0045ee08
        ;   XREF to: 0045ee1a (CONDITIONAL_JUMP)  ; LAB_0045ee1a
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ee0a
    ADD ESI,0x2                         ; 0045ee0d
    MOV byte ptr [EDI + 0x1],AL         ; 0045ee10
    ADD EDI,0x2                         ; 0045ee13
    CMP AL,0x0                          ; 0045ee16
    JNZ 0x0045ee02                      ; 0045ee18
        ;   XREF to: 0045ee02 (CONDITIONAL_JUMP)  ; LAB_0045ee02
    POP EDI                             ; 0045ee1a
        ;   Label: LAB_0045ee1a
    MOV ESI,0x5d0973                    ; 0045ee1b
    LEA EDI,[EBX + 0x4a8]               ; 0045ee20
    PUSH EDI                            ; 0045ee26
    MOV AL,byte ptr [ESI]               ; 0045ee27
        ;   Label: LAB_0045ee27
    MOV byte ptr [EDI],AL               ; 0045ee29
    CMP AL,0x0                          ; 0045ee2b
    JZ 0x0045ee3f                       ; 0045ee2d
        ;   XREF to: 0045ee3f (CONDITIONAL_JUMP)  ; LAB_0045ee3f
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ee2f
    ADD ESI,0x2                         ; 0045ee32
    MOV byte ptr [EDI + 0x1],AL         ; 0045ee35
    ADD EDI,0x2                         ; 0045ee38
    CMP AL,0x0                          ; 0045ee3b
    JNZ 0x0045ee27                      ; 0045ee3d
        ;   XREF to: 0045ee27 (CONDITIONAL_JUMP)  ; LAB_0045ee27
    POP EDI                             ; 0045ee3f
        ;   Label: LAB_0045ee3f
    MOV ESI,0x5d0984                    ; 0045ee40
    MOV byte ptr [EBX + 0x9c0],0x0      ; 0045ee45
    LEA EDI,[EBX + 0xa88]               ; 0045ee4c
    MOV byte ptr [EBX + 0xa24],0x0      ; 0045ee52
    PUSH EDI                            ; 0045ee59
    MOV AL,byte ptr [ESI]               ; 0045ee5a
        ;   Label: LAB_0045ee5a
    MOV byte ptr [EDI],AL               ; 0045ee5c
    CMP AL,0x0                          ; 0045ee5e
    JZ 0x0045ee72                       ; 0045ee60
        ;   XREF to: 0045ee72 (CONDITIONAL_JUMP)  ; LAB_0045ee72
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ee62
    ADD ESI,0x2                         ; 0045ee65
    MOV byte ptr [EDI + 0x1],AL         ; 0045ee68
    ADD EDI,0x2                         ; 0045ee6b
    CMP AL,0x0                          ; 0045ee6e
    JNZ 0x0045ee5a                      ; 0045ee70
        ;   XREF to: 0045ee5a (CONDITIONAL_JUMP)  ; LAB_0045ee5a
    POP EDI                             ; 0045ee72
        ;   Label: LAB_0045ee72
    MOV dword ptr [EBX + 0xaec],0x0     ; 0045ee73
    MOV dword ptr [EBX + 0xb08],0x0     ; 0045ee7d
    MOV dword ptr [EBX + 0xb0c],0x3f800000 ; 0045ee87
    MOV dword ptr [EBX + 0xb10],0x3f800000 ; 0045ee91
    MOV dword ptr [EBX + 0xb14],0x3f800000 ; 0045ee9b
    MOV dword ptr [EBX + 0x430],0x0     ; 0045eea5
    MOV byte ptr [EBX + 0x50c],0x0      ; 0045eeaf
    MOV byte ptr [EBX + 0x570],0x0      ; 0045eeb6
    MOV dword ptr [EBX + 0xb24],0x0     ; 0045eebd
    MOV dword ptr [EBX + 0xb28],0x0     ; 0045eec7
    MOV dword ptr [EBX + 0xb2c],0x1     ; 0045eed1
    MOV dword ptr [EBX + 0xb30],0x0     ; 0045eedb
    MOV ESI,0x5d0994                    ; 0045eee5
    MOV dword ptr [EBX + 0xb34],0x3     ; 0045eeea
    LEA EDI,[EBX + 0xb40]               ; 0045eef4
    MOV dword ptr [EBX + 0xb38],0x1     ; 0045eefa
    PUSH EDI                            ; 0045ef04
    MOV AL,byte ptr [ESI]               ; 0045ef05
        ;   Label: LAB_0045ef05
    MOV byte ptr [EDI],AL               ; 0045ef07
    CMP AL,0x0                          ; 0045ef09
    JZ 0x0045ef1d                       ; 0045ef0b
        ;   XREF to: 0045ef1d (CONDITIONAL_JUMP)  ; LAB_0045ef1d
    MOV AL,byte ptr [ESI + 0x1]         ; 0045ef0d
    ADD ESI,0x2                         ; 0045ef10
    MOV byte ptr [EDI + 0x1],AL         ; 0045ef13
    ADD EDI,0x2                         ; 0045ef16
    CMP AL,0x0                          ; 0045ef19
    JNZ 0x0045ef05                      ; 0045ef1b
        ;   XREF to: 0045ef05 (CONDITIONAL_JUMP)  ; LAB_0045ef05
    POP EDI                             ; 0045ef1d
        ;   Label: LAB_0045ef1d
    MOV dword ptr [EBX + 0xb3c],0x0     ; 0045ef1e
    MOV EAX,EBX                         ; 0045ef28
    MOV dword ptr [EBX + 0xba4],0x0     ; 0045ef2a
    POP EDI                             ; 0045ef34
    POP ESI                             ; 0045ef35
    POP EBX                             ; 0045ef36
    RET                                 ; 0045ef37

