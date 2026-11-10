; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_onDropped_FUN_004147e0(CBattery *this_ptr,CVector3f *drop_position)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   drop_position
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004147e0
        ;   Label: core_battery.cpp_CBattery_onDropped_FUN_004147e0
    MOV dword ptr [EAX + 0x430],0x0     ; 004147e4
    RET                                 ; 004147ee

