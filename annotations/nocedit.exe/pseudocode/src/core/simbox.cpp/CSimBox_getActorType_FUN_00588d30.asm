; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_simbox.cpp_CSimBox_getActorType_FUN_00588d30(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CSimBoxClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x36597e8                   ; 00588d30 | CDemonActorType g_CSimBoxClassInfo
        ;   Label: core_simbox.cpp_CSimBox_getActorType_FUN_00588d30
    RET                                 ; 00588d35

