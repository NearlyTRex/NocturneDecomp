; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_resetState_FUN_004421a0(CCloth *this_ptr,int vertex_index)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateClothSimulation_FUN_005917b0 at 00591a40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004421a0
        ;   Label: core_cloth.cpp_CCloth_resetState_FUN_004421a0
    LEA EAX,[EDX*0x8 + 0x0]             ; 004421a4
    ADD EAX,EDX                         ; 004421ab
    SHL EAX,0x3                         ; 004421ad
    SUB EAX,EDX                         ; 004421b0
    MOV EDX,dword ptr [ESP + 0x4]       ; 004421b2
    SHL EAX,0x2                         ; 004421b6
    ADD EAX,EDX                         ; 004421b9
    MOV dword ptr [EAX + 0x470],0xffffffff ; 004421bb
    MOV dword ptr [EAX + 0x40c],0x0     ; 004421c5
    RET                                 ; 004421cf

