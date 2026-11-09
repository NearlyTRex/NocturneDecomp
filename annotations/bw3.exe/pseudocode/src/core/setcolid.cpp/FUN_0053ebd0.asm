; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_FUN_0053ebd0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_actor.cpp_FUN_00409f60 at 0040a6a6
;   core_blundrbs.cpp_FUN_00410490 at 00410777
;   core_burncrss.cpp_FUN_00424550 at 0042479f
;   core_exorcism.cpp_FUN_0048b020 at 0048b23e
;   core_flintlck.cpp_FUN_004ae850 at 004aea5b
;   core_lightgun.cpp_FUN_004e1070 at 004e1f37
;   core_weapon.cpp_FUN_0057bb60 at 0057bcc3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ebd0
        ;   Label: core_setcolid.cpp_FUN_0053ebd0
    MOV dword ptr [EAX + 0x15f6f4],0x1  ; 0053ebd4
    RET                                 ; 0053ebde

