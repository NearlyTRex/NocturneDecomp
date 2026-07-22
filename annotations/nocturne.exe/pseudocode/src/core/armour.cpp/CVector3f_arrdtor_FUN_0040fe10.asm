; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(undefined4 param_1)
;
;
; XREF[37]:
;   FUN_0040fc30 at 0040fc69
;   FUN_004132c0 at 004132f9
;   FUN_00414c60 at 00414c99
;   FUN_00415250 at 00415289
;   FUN_00415a30 at 00415a79
;   FUN_00420f20 at 00420f59
;   FUN_0043c6f0 at 0043c729
;   FUN_00454f30 at 00454f69
;   FUN_0045b350 at 0045b389
;   FUN_00463310 at 00463349
;   ... and 27 more
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0040fe10 | DAT_005993b0
        ;   Label: core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
    PUSH 0xf                            ; 0040fe15
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe17
    PUSH EDX                            ; 0040fe1b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0040fe1c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe21
    RET                                 ; 0040fe24

