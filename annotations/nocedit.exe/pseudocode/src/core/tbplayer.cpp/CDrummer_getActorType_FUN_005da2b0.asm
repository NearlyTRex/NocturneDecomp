; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_tbplayer.cpp_CDrummer_getActorType_FUN_005da2b0(CDrummer * this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CDrummerClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6cc54                   ; 005da2b0 | CDemonActorType g_CDrummerClassInfo
        ;   Label: core_tbplayer.cpp_CDrummer_getActorType_FUN_005da2b0
    RET                                 ; 005da2b5

