; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_005213e0(CMirror *this_ptr,uint flags)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_glass.cpp_CGlass_dtor_FUN_004eb820 at 004eb845
;
; Called Functions:
;   core_mirror.cpp_SClipPlane_arrdtor_FUN_00522c10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005213e0
        ;   Label: core_mirror.cpp_CMirror_dtor_FUN_005213e0
    PUSH 0x0                            ; 005213e4
    ADD EAX,0x98                        ; 005213e6
    PUSH EAX                            ; 005213eb
    CALL core_mirror.cpp_SClipPlane_arrdtor_FUN_00522c10 ; 005213ec
        ;   XREF to: 00522c10 (UNCONDITIONAL_CALL)  ; SClipPlane * core_mirror.cpp_SClipPlane_arrdtor_FUN_00522c10(SClipPlane * objs, uint flags)
    ADD ESP,0x8                         ; 005213f1
    SUB EAX,0x98                        ; 005213f4
    RET                                 ; 005213f9

