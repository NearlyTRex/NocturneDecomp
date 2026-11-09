; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_004448d0(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_bat.cpp_CBat_ctor_FUN_0040ede0 at 0040edf6
;   core_platfrm.cpp_CPlatform_ctor_FUN_005110e0 at 00511107
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004448d0
        ;   Label: core_course.cpp_CCourse_ctor_FUN_004448d0
    MOV dword ptr [EAX + 0x4],0x0       ; 004448d4
    MOV dword ptr [EAX + 0x8],0x1       ; 004448db
    MOV dword ptr [EAX],0x0             ; 004448e2
    RET                                 ; 004448e8

