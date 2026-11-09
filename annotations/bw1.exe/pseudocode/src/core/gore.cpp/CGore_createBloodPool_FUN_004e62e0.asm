; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[21]:
;   core_batcreat.cpp_FUN_004115b0 at 00411990
;   core_batman.cpp_FUN_00412ba0 at 00413340
;   core_bride.cpp_FUN_00423b70 at 00423d95
;   core_carved.cpp_FUN_00428ae0 at 00429b0f
;   core_cow.cpp_FUN_00448570 at 0044891a
;   core_demnfolk.cpp_FUN_00459100 at 0045a480
;   core_dog.cpp_FUN_004768a0 at 00476ce4
;   core_dracbrid.cpp_FUN_0047b510 at 0047c2d9
;   core_drone.cpp_FUN_00485d70 at 00486246
;   core_ghoul.cpp_FUN_004de330 at 004dee83
;   ... and 11 more
;
; Called Functions:
;   core_gore.cpp_CBloodPool_init_FUN_004e5570
;   core_gore.cpp_CGore_allocateBloodPool_FUN_004e6290
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004e62e0
        ;   Label: core_gore.cpp_CGore_createBloodPool_FUN_004e62e0
    JNZ 0x004e62e8                      ; 004e62e5
        ;   XREF to: 004e62e8 (CONDITIONAL_JUMP)  ; LAB_004e62e8
    RET                                 ; 004e62e7
    PUSH ESI                            ; 004e62e8
        ;   Label: LAB_004e62e8
    PUSH EBX                            ; 004e62e9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e62ea
    PUSH ECX                            ; 004e62ee
    CALL core_gore.cpp_CGore_allocateBloodPool_FUN_004e6290 ; 004e62ef
        ;   XREF to: 004e6290 (UNCONDITIONAL_CALL)  ; CBloodPool * core_gore.cpp_CGore_allocateBloodPool_FUN_004e6290(CGore * this_ptr)
    ADD ESP,0x4                         ; 004e62f4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e62f7
    PUSH EBX                            ; 004e62fb
    MOV ESI,dword ptr [ESP + 0x14]      ; 004e62fc
    PUSH ESI                            ; 004e6300
    PUSH EAX                            ; 004e6301
    CALL core_gore.cpp_CBloodPool_init_FUN_004e5570 ; 004e6302
        ;   XREF to: 004e5570 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_init_FUN_004e5570(CBloodPool * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004e6307
    POP EBX                             ; 004e630a
    POP ESI                             ; 004e630b
    RET                                 ; 004e630c

