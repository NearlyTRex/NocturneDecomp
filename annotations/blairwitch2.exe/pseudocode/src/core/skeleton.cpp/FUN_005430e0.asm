; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPart * __cdecl core_skeleton_cpp_FUN_005430e0(CDeformableModel *this_ptr,int part_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
;
; XREF[1]:
;   core_charactr.cpp_FUN_00425a70 at 00425a88
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005430e0
        ;   Label: core_skeleton.cpp_FUN_005430e0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005430e4
    SUB EAX,EDX                         ; 005430eb
    MOV EDX,EAX                         ; 005430ed
    MOV EAX,dword ptr [ESP + 0x4]       ; 005430ef
    SHL EDX,0x5                         ; 005430f3
    ADD EAX,0xc04                       ; 005430f6
    ADD EAX,EDX                         ; 005430fb
    RET                                 ; 005430fd

