; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo *this_ptr)
;
; Parameters:
; SDamageInfo *    Stack[0x4]:4   this_ptr
;
; XREF[53]:
;   core_actor.cpp_FUN_00409f60 at 0040a339
;   core_baal.cpp_FUN_005968a0 at 0059759a
;   core_blundrbs.cpp_FUN_00410490 at 004111c8
;   core_bodypart.cpp_FUN_00415350 at 00415500
;   core_boneguy.cpp_FUN_004179b0 at 0041810f
;   core_boneguy.cpp_FUN_00419b40 at 0041a261
;   core_boxactor.cpp_FUN_0041f360 at 0041f7a5
;   core_bugs.cpp_FUN_00422570 at 00422623
;   core_burncrss.cpp_FUN_00424550 at 004248b9
;   core_carved.cpp_FUN_00425da0 at 004261e7
;   ... and 43 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042abb0
        ;   Label: core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
    MOV dword ptr [EAX + 0x28],0x0      ; 0042abb4
    MOV dword ptr [EAX + 0x2c],0x0      ; 0042abbb
    MOV dword ptr [EAX],0xffffffff      ; 0042abc2
    LEA EDX,[EAX + 0xc]                 ; 0042abc8
    MOV dword ptr [EAX + 0x8],0x0       ; 0042abcb
    MOV dword ptr [EDX + 0x8],0x0       ; 0042abd2
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042abd9
    MOV dword ptr [EDX + 0x4],ECX       ; 0042abdc
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042abdf
    MOV dword ptr [EDX],ECX             ; 0042abe2
    LEA EDX,[EAX + 0x1c]                ; 0042abe4
    MOV dword ptr [EAX + 0x18],0x41a00000 ; 0042abe7
    MOV dword ptr [EDX + 0x8],0x0       ; 0042abee
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042abf5
    MOV dword ptr [EDX + 0x4],ECX       ; 0042abf8
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042abfb
    MOV dword ptr [EDX],ECX             ; 0042abfe
    MOV dword ptr [EAX + 0x30],0x64     ; 0042ac00
    MOV dword ptr [EAX + 0x34],0x0      ; 0042ac07
    MOV dword ptr [EAX + 0x38],0x0      ; 0042ac0e
    RET                                 ; 0042ac15

