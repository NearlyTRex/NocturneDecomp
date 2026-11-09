; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_00565760(CDeformableModel *this_ptr,int part_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042f390 at 0042f3a8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00565760
        ;   Label: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00565760
    LEA EAX,[EDX*0x4 + 0x0]             ; 00565764
    SUB EAX,EDX                         ; 0056576b
    MOV EDX,EAX                         ; 0056576d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056576f
    SHL EDX,0x5                         ; 00565773
    ADD EAX,0xc04                       ; 00565776
    ADD EAX,EDX                         ; 0056577b
    RET                                 ; 0056577d

