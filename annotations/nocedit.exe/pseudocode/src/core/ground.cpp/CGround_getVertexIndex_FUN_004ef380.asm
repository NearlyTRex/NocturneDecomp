; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_ground.cpp_CGround_getVertexIndex_FUN_004ef380(CGround * this_ptr, int column, int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
;
; XREF[2]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 at 004efa05
;   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0 at 004ef3ce
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef380
        ;   Label: core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
    MOV EAX,dword ptr [EAX + 0x14]      ; 004ef384
    ADD EAX,EAX                         ; 004ef387
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ef389
    ADD EAX,0x2                         ; 004ef38d
    IMUL EAX,EDX                        ; 004ef390
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ef393
    ADD EAX,0x20                        ; 004ef397
    ADD EAX,ECX                         ; 004ef39a
    RET                                 ; 004ef39c

