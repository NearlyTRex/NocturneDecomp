; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_FUN_0040e440(CAmmo *this_ptr,int ammo_count)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ammo_count
;
; XREF[1]:
;   core_ammobox.cpp_FUN_0040e670 at 0040e712
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040e440
        ;   Label: core_ammo.cpp_FUN_0040e440
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e444
    MOV dword ptr [EDX + 0x470],EAX     ; 0040e448
    RET                                 ; 0040e44e

