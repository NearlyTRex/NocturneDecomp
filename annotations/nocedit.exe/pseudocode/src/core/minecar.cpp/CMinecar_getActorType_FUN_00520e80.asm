; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_minecar.cpp_CMinecar_getActorType_FUN_00520e80(CMineCar * this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CMineCarClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2f333c8                   ; 00520e80 | g_CMineCarClassInfo
        ;   Label: core_minecar.cpp_CMinecar_getActorType_FUN_00520e80
    RET                                 ; 00520e85

