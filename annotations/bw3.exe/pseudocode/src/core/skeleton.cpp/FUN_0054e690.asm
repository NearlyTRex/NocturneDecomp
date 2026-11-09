; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054e690(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_actor.cpp_FUN_0040bba0 at 0040bc55
;   core_skeleton.cpp_FUN_0054eae0 at 0054eb1f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054e690
        ;   Label: core_skeleton.cpp_FUN_0054e690
    MOV EAX,EDX                         ; 0054e694
    ADD EDX,0xf0                        ; 0054e696
    ADD EAX,0x4                         ; 0054e69c
        ;   Label: LAB_0054e69c
    MOV dword ptr [EAX + 0x222c],0x0    ; 0054e69f
    CMP EAX,EDX                         ; 0054e6a9
    JNZ 0x0054e69c                      ; 0054e6ab
        ;   XREF to: 0054e69c (CONDITIONAL_JUMP)  ; LAB_0054e69c
    RET                                 ; 0054e6ad

