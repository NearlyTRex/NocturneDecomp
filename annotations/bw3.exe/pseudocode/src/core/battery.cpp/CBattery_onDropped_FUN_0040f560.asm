; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_onDropped_FUN_0040f560(CBattery *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040f560
        ;   Label: core_battery.cpp_CBattery_onDropped_FUN_0040f560
    MOV dword ptr [EAX + 0x2d4],0x0     ; 0040f564
    RET                                 ; 0040f56e

