; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_conveyor_cpp_CConveyor_getActorType_FUN_00441c90(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CConveyorClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x83c160                    ; 00441c90 | g_CConveyorClassInfo
        ;   Label: core_conveyor.cpp_CConveyor_getActorType_FUN_00441c90
    RET                                 ; 00441c95

