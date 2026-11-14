; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_conveyor_cpp_CConveyor_getActorType_FUN_00438480(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CConveyorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c25c0                    ; 00438480 | g_CConveyorClassInfo
        ;   Label: core_conveyor.cpp_CConveyor_getActorType_FUN_00438480
    RET                                 ; 00438485

