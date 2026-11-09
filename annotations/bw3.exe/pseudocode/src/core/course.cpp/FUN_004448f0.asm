; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_FUN_004448f0(CCourse *this_ptr,uint flags)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_bat.cpp_CBat_dtor_FUN_0040f3d0 at 0040f3e5
;   core_conveyor.cpp_CPlatform_dtor_FUN_00512cf0 at 00512d05
;
; Called Functions:
;   core_course.cpp_FUN_00444aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004448f0
        ;   Label: core_course.cpp_FUN_004448f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004448f1
    PUSH EBX                            ; 004448f5
    CALL core_course.cpp_FUN_00444aa0   ; 004448f6
        ;   XREF to: 00444aa0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00444aa0()
    ADD ESP,0x4                         ; 004448fb
    MOV EAX,EBX                         ; 004448fe
    POP EBX                             ; 00444900
    RET                                 ; 00444901

