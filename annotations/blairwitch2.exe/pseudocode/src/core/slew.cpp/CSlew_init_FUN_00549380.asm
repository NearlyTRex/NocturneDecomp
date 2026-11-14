; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl core_slew_cpp_CSlew_init_FUN_00549380(CSlew *this_ptr)
;
; Parameters:
; CSlew *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b52d2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00549380
        ;   Label: core_slew.cpp_CSlew_init_FUN_00549380
    MOV dword ptr [EDX + 0x8],0x0       ; 00549384
    LEA EAX,[EDX + 0xc]                 ; 0054938b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054938e
    MOV dword ptr [EDX + 0x4],ECX       ; 00549391
    MOV ECX,dword ptr [EDX + 0x4]       ; 00549394
    MOV dword ptr [EDX],ECX             ; 00549397
    MOV dword ptr [EAX + 0x8],0x0       ; 00549399
    MOV ECX,dword ptr [EAX + 0x8]       ; 005493a0
    MOV dword ptr [EAX + 0x4],ECX       ; 005493a3
    MOV ECX,dword ptr [EAX + 0x4]       ; 005493a6
    MOV dword ptr [EAX],ECX             ; 005493a9
    MOV dword ptr [EDX + 0x18],0x41e00000 ; 005493ab
    LEA EAX,[EAX]                       ; 005493b2
    LEA EDX,[EDX]                       ; 005493b8
    MOV EAX,EAX                         ; 005493be
    RET                                 ; 005493c0

