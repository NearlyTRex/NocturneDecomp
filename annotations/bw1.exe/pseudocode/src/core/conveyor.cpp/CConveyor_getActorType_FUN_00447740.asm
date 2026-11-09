; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_conveyor_cpp_CConveyor_getActorType_FUN_00447740(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CConveyorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dc628                    ; 00447740 | g_CConveyorClassInfo
        ;   Label: core_conveyor.cpp_CConveyor_getActorType_FUN_00447740
    RET                                 ; 00447745

