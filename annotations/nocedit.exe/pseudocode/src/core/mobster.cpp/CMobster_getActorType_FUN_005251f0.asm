; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_mobster.cpp_CMobster_getActorType_FUN_005251f0(CMobster * this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CMobsterClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2f37ef8                   ; 005251f0 | g_CMobsterClassInfo
        ;   Label: core_mobster.cpp_CMobster_getActorType_FUN_005251f0
    RET                                 ; 005251f5

