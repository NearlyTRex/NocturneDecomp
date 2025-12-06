; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_FUN_00486430()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486430
        ;   Label: core_dracbrid.cpp_FUN_00486430
    PUSH ESI                            ; 00486431
    SUB ESP,0x4                         ; 00486432
    MOV ESI,dword ptr [ESP + 0x10]      ; 00486435
    MOV EBX,dword ptr [ESP + 0x14]      ; 00486439
    PUSH 0x40a00000                     ; 0048643d
    PUSH 0xc0a00000                     ; 00486442
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00486447 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

