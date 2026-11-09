; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004d0000(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
;
; XREF[2]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610 at 004d065d
;   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004d0020 at 004d004e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0000
        ;   Label: core_ground.cpp_CGround_getVertexIndex_FUN_004d0000
    MOV EAX,dword ptr [EAX + 0x14]      ; 004d0004
    ADD EAX,EAX                         ; 004d0007
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d0009
    ADD EAX,0x2                         ; 004d000d
    IMUL EAX,EDX                        ; 004d0010
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d0013
    ADD EAX,0x20                        ; 004d0017
    ADD EAX,ECX                         ; 004d001a
    RET                                 ; 004d001c

