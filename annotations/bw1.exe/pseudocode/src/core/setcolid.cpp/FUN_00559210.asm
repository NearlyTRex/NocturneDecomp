; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_00559210(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_FUN_00409f20 at 0040a54a
;   core_lightgun.cpp_FUN_00500310 at 005004f5
;   core_lightpis.cpp_FUN_00501a70 at 00501c55
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00559210
        ;   Label: core_setcolid.cpp_FUN_00559210
    MOV dword ptr [EAX + 0x15f6f4],0x1  ; 00559214
    RET                                 ; 0055921e

