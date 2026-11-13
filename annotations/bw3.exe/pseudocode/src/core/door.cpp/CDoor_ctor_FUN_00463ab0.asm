; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_00463ab0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_door.cpp_factoryFuncDoor_FUN_00463a80 at 00463a93
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_event.cpp_CRuleList_clear_FUN_00495b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463ab0
        ;   Label: core_door.cpp_CDoor_ctor_FUN_00463ab0
    PUSH ESI                            ; 00463ab1
    PUSH EDI                            ; 00463ab2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00463ab3
    PUSH EBX                            ; 00463ab7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00463ab8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00463abd
    ADD EAX,0x158                       ; 00463ac0
    PUSH EAX                            ; 00463ac5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00463ac6
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00463acb
    LEA EBX,[EAX + 0x320]               ; 00463ace
    PUSH EBX                            ; 00463ad4
    CALL core_event.cpp_CRuleList_clear_FUN_00495b40 ; 00463ad5
        ;   XREF to: 00495b40 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_clear_FUN_00495b40(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 00463ada
    SUB EBX,0x478                       ; 00463add
    PUSH 0x5bbcc9                       ; 00463ae3
    LEA EAX,[EBX + 0x158]               ; 00463ae8
    PUSH EAX                            ; 00463aee
    MOV dword ptr [EBX + 0x154],0x5debb4 ; 00463aef
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00463af9
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00463afe
    ADD ESP,0x8                         ; 00463b08
    MOV dword ptr [EBX + 0x2dc],0x1     ; 00463b0b
    LEA EAX,[EBX + 0x994]               ; 00463b15
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00463b1b
    LEA EDX,[EBX + 0x20]                ; 00463b25
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00463b28
    CMP EAX,EDX                         ; 00463b32
    JZ 0x00463b46                       ; 00463b34
        ;   XREF to: 00463b46 (CONDITIONAL_JUMP)  ; LAB_00463b46
    MOV ECX,dword ptr [EDX]             ; 00463b36
    MOV dword ptr [EAX],ECX             ; 00463b38
    MOV ECX,dword ptr [EDX + 0x4]       ; 00463b3a
    MOV dword ptr [EAX + 0x4],ECX       ; 00463b3d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00463b40
    MOV dword ptr [EAX + 0x8],ECX       ; 00463b43
    MOV ESI,0x5bbcd6                    ; 00463b46
        ;   Label: LAB_00463b46
    LEA EDI,[EBX + 0x2e8]               ; 00463b4b
    PUSH EDI                            ; 00463b51
    MOV AL,byte ptr [ESI]               ; 00463b52
        ;   Label: LAB_00463b52
    MOV byte ptr [EDI],AL               ; 00463b54
    CMP AL,0x0                          ; 00463b56
    JZ 0x00463b6a                       ; 00463b58
        ;   XREF to: 00463b6a (CONDITIONAL_JUMP)  ; LAB_00463b6a
    MOV AL,byte ptr [ESI + 0x1]         ; 00463b5a
    ADD ESI,0x2                         ; 00463b5d
    MOV byte ptr [EDI + 0x1],AL         ; 00463b60
    ADD EDI,0x2                         ; 00463b63
    CMP AL,0x0                          ; 00463b66
    JNZ 0x00463b52                      ; 00463b68
        ;   XREF to: 00463b52 (CONDITIONAL_JUMP)  ; LAB_00463b52
    POP EDI                             ; 00463b6a
        ;   Label: LAB_00463b6a
    MOV ESI,0x5bbce6                    ; 00463b6b
    LEA EDI,[EBX + 0x34c]               ; 00463b70
    PUSH EDI                            ; 00463b76
    MOV AL,byte ptr [ESI]               ; 00463b77
        ;   Label: LAB_00463b77
    MOV byte ptr [EDI],AL               ; 00463b79
    CMP AL,0x0                          ; 00463b7b
    JZ 0x00463b8f                       ; 00463b7d
        ;   XREF to: 00463b8f (CONDITIONAL_JUMP)  ; LAB_00463b8f
    MOV AL,byte ptr [ESI + 0x1]         ; 00463b7f
    ADD ESI,0x2                         ; 00463b82
    MOV byte ptr [EDI + 0x1],AL         ; 00463b85
    ADD EDI,0x2                         ; 00463b88
    CMP AL,0x0                          ; 00463b8b
    JNZ 0x00463b77                      ; 00463b8d
        ;   XREF to: 00463b77 (CONDITIONAL_JUMP)  ; LAB_00463b77
    POP EDI                             ; 00463b8f
        ;   Label: LAB_00463b8f
    MOV ESI,0x5bbcf7                    ; 00463b90
    MOV byte ptr [EBX + 0x864],0x0      ; 00463b95
    LEA EDI,[EBX + 0x92c]               ; 00463b9c
    MOV byte ptr [EBX + 0x8c8],0x0      ; 00463ba2
    PUSH EDI                            ; 00463ba9
    MOV AL,byte ptr [ESI]               ; 00463baa
        ;   Label: LAB_00463baa
    MOV byte ptr [EDI],AL               ; 00463bac
    CMP AL,0x0                          ; 00463bae
    JZ 0x00463bc2                       ; 00463bb0
        ;   XREF to: 00463bc2 (CONDITIONAL_JUMP)  ; LAB_00463bc2
    MOV AL,byte ptr [ESI + 0x1]         ; 00463bb2
    ADD ESI,0x2                         ; 00463bb5
    MOV byte ptr [EDI + 0x1],AL         ; 00463bb8
    ADD EDI,0x2                         ; 00463bbb
    CMP AL,0x0                          ; 00463bbe
    JNZ 0x00463baa                      ; 00463bc0
        ;   XREF to: 00463baa (CONDITIONAL_JUMP)  ; LAB_00463baa
    POP EDI                             ; 00463bc2
        ;   Label: LAB_00463bc2
    MOV dword ptr [EBX + 0x990],0x0     ; 00463bc3
    MOV dword ptr [EBX + 0x9ac],0x0     ; 00463bcd
    MOV dword ptr [EBX + 0x9b0],0x3f800000 ; 00463bd7
    MOV dword ptr [EBX + 0x9b4],0x3f800000 ; 00463be1
    MOV dword ptr [EBX + 0x9b8],0x3f800000 ; 00463beb
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00463bf5
    MOV byte ptr [EBX + 0x3b0],0x0      ; 00463bff
    MOV byte ptr [EBX + 0x414],0x0      ; 00463c06
    MOV dword ptr [EBX + 0x9c8],0x0     ; 00463c0d
    MOV dword ptr [EBX + 0x9cc],0x0     ; 00463c17
    MOV dword ptr [EBX + 0x9d0],0x1     ; 00463c21
    MOV dword ptr [EBX + 0x9d4],0x0     ; 00463c2b
    MOV ESI,0x5bbd07                    ; 00463c35
    MOV dword ptr [EBX + 0x9d8],0x3     ; 00463c3a
    LEA EDI,[EBX + 0x9e4]               ; 00463c44
    MOV dword ptr [EBX + 0x9dc],0x1     ; 00463c4a
    PUSH EDI                            ; 00463c54
    MOV AL,byte ptr [ESI]               ; 00463c55
        ;   Label: LAB_00463c55
    MOV byte ptr [EDI],AL               ; 00463c57
    CMP AL,0x0                          ; 00463c59
    JZ 0x00463c6d                       ; 00463c5b
        ;   XREF to: 00463c6d (CONDITIONAL_JUMP)  ; LAB_00463c6d
    MOV AL,byte ptr [ESI + 0x1]         ; 00463c5d
    ADD ESI,0x2                         ; 00463c60
    MOV byte ptr [EDI + 0x1],AL         ; 00463c63
    ADD EDI,0x2                         ; 00463c66
    CMP AL,0x0                          ; 00463c69
    JNZ 0x00463c55                      ; 00463c6b
        ;   XREF to: 00463c55 (CONDITIONAL_JUMP)  ; LAB_00463c55
    POP EDI                             ; 00463c6d
        ;   Label: LAB_00463c6d
    MOV dword ptr [EBX + 0x9e0],0x0     ; 00463c6e
    MOV EAX,EBX                         ; 00463c78
    MOV dword ptr [EBX + 0xa48],0x0     ; 00463c7a
    POP EDI                             ; 00463c84
    POP ESI                             ; 00463c85
    POP EBX                             ; 00463c86
    RET                                 ; 00463c87

