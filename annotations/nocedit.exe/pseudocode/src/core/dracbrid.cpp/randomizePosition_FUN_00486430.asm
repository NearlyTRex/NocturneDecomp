; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dracbrid_cpp_randomizePosition_FUN_00486430(CVector3f *dest,CVector3f *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3f *      Stack[0x8]:4   src
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486430
        ;   Label: core_dracbrid.cpp_randomizePosition_FUN_00486430
    PUSH ESI                            ; 00486431
    SUB ESP,0x4                         ; 00486432
    MOV ESI,dword ptr [ESP + 0x10]      ; 00486435
    MOV EBX,dword ptr [ESP + 0x14]      ; 00486439
    PUSH 0x40a00000                     ; 0048643d
    PUSH 0xc0a00000                     ; 00486442
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00486447
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

