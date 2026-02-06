; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_flies_cpp_CFlies_FUN_004cca50(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 at 00409e89
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CFliesClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cca50
        ;   Label: core_flies.cpp_CFlies_FUN_004cca50
    PUSH ESI                            ; 004cca51
    PUSH EDI                            ; 004cca52
    PUSH EBP                            ; 004cca53
    MOV EDI,dword ptr [ESP + 0x14]      ; 004cca54
    XOR ESI,ESI                         ; 004cca58
    XOR EBX,EBX                         ; 004cca5a
    MOV EAX,[0x006810c8]                ; 004cca5c | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004cca5c
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 004cca61 | g_CDemonSetInstance.actor_list_ptr
    JL 0x004cca76                       ; 004cca67
        ;   XREF to: 004cca76 (CONDITIONAL_JUMP)  ; LAB_004cca76
    XOR EAX,EAX                         ; 004cca69
    POP EBP                             ; 004cca6b
    POP EDI                             ; 004cca6c
    POP ESI                             ; 004cca6d
    POP EBX                             ; 004cca6e
    RET                                 ; 004cca6f
    INC EBX                             ; 004cca70
        ;   Label: LAB_004cca70
    ADD ESI,0x4                         ; 004cca71
    JMP 0x004cca5c                      ; 004cca74
        ;   XREF to: 004cca5c (UNCONDITIONAL_JUMP)  ; LAB_004cca5c
    MOV ECX,dword ptr [0x02d7a7fc]      ; 004cca76 | g_CFliesClassInfo.name_hash
        ;   Label: LAB_004cca76
    PUSH ECX                            ; 004cca7c
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 004cca7d | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBP                            ; 004cca84
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004cca85
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004cca8a
    TEST EAX,EAX                        ; 004cca8d
    JZ 0x004cca70                       ; 004cca8f
        ;   XREF to: 004cca70 (CONDITIONAL_JUMP)  ; LAB_004cca70
    CMP EDI,dword ptr [EAX + 0x2a08]    ; 004cca91
    JNZ 0x004cca70                      ; 004cca97
        ;   XREF to: 004cca70 (CONDITIONAL_JUMP)  ; LAB_004cca70
    POP EBP                             ; 004cca99
    POP EDI                             ; 004cca9a
    POP ESI                             ; 004cca9b
    POP EBX                             ; 004cca9c
    RET                                 ; 004cca9d

