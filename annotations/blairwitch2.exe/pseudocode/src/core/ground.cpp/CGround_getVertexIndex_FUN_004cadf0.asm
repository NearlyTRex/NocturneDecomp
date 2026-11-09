; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_getVertexIndex_FUN_004cadf0(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
;
; XREF[2]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004cb400 at 004cb44d
;   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004cae10 at 004cae3e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cadf0
        ;   Label: core_ground.cpp_CGround_getVertexIndex_FUN_004cadf0
    MOV EAX,dword ptr [EAX + 0x14]      ; 004cadf4
    ADD EAX,EAX                         ; 004cadf7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cadf9
    ADD EAX,0x2                         ; 004cadfd
    IMUL EAX,EDX                        ; 004cae00
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cae03
    ADD EAX,0x20                        ; 004cae07
    ADD EAX,ECX                         ; 004cae0a
    RET                                 ; 004cae0c

