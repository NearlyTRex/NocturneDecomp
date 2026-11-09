; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004e7670(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
;
; XREF[2]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80 at 004e7ccd
;   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004e7690 at 004e76be
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7670
        ;   Label: core_ground.cpp_CGround_getVertexIndex_FUN_004e7670
    MOV EAX,dword ptr [EAX + 0x14]      ; 004e7674
    ADD EAX,EAX                         ; 004e7677
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7679
    ADD EAX,0x2                         ; 004e767d
    IMUL EAX,EDX                        ; 004e7680
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e7683
    ADD EAX,0x20                        ; 004e7687
    ADD EAX,ECX                         ; 004e768a
    RET                                 ; 004e768c

