; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_FUN_005b1980(CCloth *this_ptr,int vertex_index)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateClothSimulation_FUN_0056eb60 at 0056edf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b1980
        ;   Label: core_cloth.cpp_FUN_005b1980
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b1984
    ADD EAX,EDX                         ; 005b198b
    SHL EAX,0x3                         ; 005b198d
    SUB EAX,EDX                         ; 005b1990
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b1992
    SHL EAX,0x2                         ; 005b1996
    ADD EAX,EDX                         ; 005b1999
    MOV dword ptr [EAX + 0x470],0xffffffff ; 005b199b
    MOV dword ptr [EAX + 0x40c],0x0     ; 005b19a5
    RET                                 ; 005b19af

