; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0053b100(CDemonSet *this_ptr,int light_scale,int color_scale,int fog_scale)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   light_scale
; int              Stack[0xc]:4   color_scale
; int              Stack[0x10]:4   fog_scale
;
; XREF[11]:
;   core_menu.cpp_FUN_004e7dc0 at 004e7ee2
;   core_menu.cpp_FUN_004e85a0 at 004e867a
;   core_menu.cpp_FUN_004e8f80 at 004e8feb
;   core_menu.cpp_FUN_004e94f0 at 004e9560
;   core_menu.cpp_FUN_004ea280 at 004ea2f1
;   core_menu.cpp_FUN_004ea4d0 at 004ea5dd
;   core_moon.cpp_FUN_004f9670 at 004f9789
;   core_set.cpp_FUN_005326b0 at 00532758
;   core_set.cpp_FUN_005346b0 at 00534771
;   core_set.cpp_FUN_00536c90 at 00536ebb
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b100
        ;   Label: core_set.cpp_FUN_0053b100
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053b104
    MOV dword ptr [EAX + 0x15ae9c],EDX  ; 0053b108
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053b10e
    MOV dword ptr [EAX + 0x15aea0],EDX  ; 0053b112
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053b118
    MOV dword ptr [EAX + 0x15aea4],EDX  ; 0053b11c
    RET                                 ; 0053b122

