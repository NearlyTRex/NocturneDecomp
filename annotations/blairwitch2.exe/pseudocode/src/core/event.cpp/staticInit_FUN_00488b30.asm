; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_staticInit_FUN_00488b30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00614234
;   undefined4 DAT_00614238
;   undefined4 DAT_0061427c
;   undefined4 DAT_00614280
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_event.cpp_CEventList_ctor_FUN_00489360
;
; *****************************************************************************

section .text

    PUSH 0x1c38bc0                      ; 00488b30
        ;   Label: core_event.cpp_staticInit_FUN_00488b30
    CALL core_event.cpp_CEventList_ctor_FUN_00489360 ; 00488b35
        ;   XREF to: 00489360 (UNCONDITIONAL_CALL)  ; CEventList * core_event.cpp_CEventList_ctor_FUN_00489360(CEventList * this_ptr)
    MOV EDX,0x2814                      ; 00488b3a
    MOV ECX,0x281c                      ; 00488b3f
    MOV EAX,[0x007bdc94]                ; 00488b44 | g_CCharacterClassInfo.name_hash
    ADD ESP,0x4                         ; 00488b49
    MOV dword ptr [0x00614234],EDX      ; 00488b4c | DAT_00614234
    MOV [0x00614238],EAX                ; 00488b52 | DAT_00614238
    MOV dword ptr [0x0061427c],ECX      ; 00488b57 | DAT_0061427c
    MOV [0x00614280],EAX                ; 00488b5d | DAT_00614280
    RET                                 ; 00488b62

