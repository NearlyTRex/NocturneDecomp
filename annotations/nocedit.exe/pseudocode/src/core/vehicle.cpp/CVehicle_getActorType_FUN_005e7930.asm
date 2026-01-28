; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_vehicle_cpp_CVehicle_getActorType_FUN_005e7930(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CVehicleClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f87564                   ; 005e7930 | g_CVehicleClassInfo
        ;   Label: core_vehicle.cpp_CVehicle_getActorType_FUN_005e7930
    RET                                 ; 005e7935

