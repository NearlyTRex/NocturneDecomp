; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_staticInit_FUN_0048b780(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbaa4
;   undefined4 DAT_005fbaa8
;   undefined4 DAT_005fbaec
;   undefined4 DAT_005fbaf0
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_event.cpp_CEventList_ctor_FUN_0048bfb0
;
; *****************************************************************************

section .text

    PUSH 0x1c6e360                      ; 0048b780
        ;   Label: core_event.cpp_staticInit_FUN_0048b780
    CALL core_event.cpp_CEventList_ctor_FUN_0048bfb0 ; 0048b785
        ;   XREF to: 0048bfb0 (UNCONDITIONAL_CALL)  ; CEventList * core_event.cpp_CEventList_ctor_FUN_0048bfb0(CEventList * this_ptr)
    MOV EDX,0x27a8                      ; 0048b78a
    MOV ECX,0x27b0                      ; 0048b78f
    MOV EAX,[0x007e2cec]                ; 0048b794 | g_CCharacterClassInfo.name_hash
    ADD ESP,0x4                         ; 0048b799
    MOV dword ptr [0x005fbaa4],EDX      ; 0048b79c | DAT_005fbaa4
    MOV [0x005fbaa8],EAX                ; 0048b7a2 | DAT_005fbaa8
    MOV dword ptr [0x005fbaec],ECX      ; 0048b7a7 | DAT_005fbaec
    MOV [0x005fbaf0],EAX                ; 0048b7ad | DAT_005fbaf0
    RET                                 ; 0048b7b2

