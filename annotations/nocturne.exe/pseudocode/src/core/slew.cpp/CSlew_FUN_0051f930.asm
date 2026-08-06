; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_slew_cpp_CSlew_FUN_0051f930(CSlew *this_ptr)
;
; Parameters:
; CSlew *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049cd4f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051f930
        ;   Label: core_slew.cpp_CSlew_FUN_0051f930
    MOV dword ptr [EDX + 0x8],0x0       ; 0051f934
    LEA EAX,[EDX + 0xc]                 ; 0051f93b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051f93e
    MOV dword ptr [EDX + 0x4],ECX       ; 0051f941
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051f944
    MOV dword ptr [EDX],ECX             ; 0051f947
    MOV dword ptr [EAX + 0x8],0x0       ; 0051f949
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051f950
    MOV dword ptr [EAX + 0x4],ECX       ; 0051f953
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051f956
    MOV dword ptr [EAX],ECX             ; 0051f959
    MOV dword ptr [EDX + 0x18],0x41e00000 ; 0051f95b
    LEA EAX,[EAX]                       ; 0051f962
    LEA EDX,[EDX]                       ; 0051f968
    MOV EAX,EAX                         ; 0051f96e
    RET                                 ; 0051f970

