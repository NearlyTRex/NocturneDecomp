; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[18]:
;   core_batcreat.cpp_FUN_00411a10 at 00411d32
;   core_batman.cpp_FUN_00412f40 at 00413646
;   core_bride.cpp_FUN_0041dbe0 at 0041dde4
;   core_cow.cpp_FUN_004392b0 at 0043965a
;   core_dog.cpp_FUN_0045e360 at 0045e7a4
;   core_dracbrid.cpp_FUN_00462ff0 at 00463db9
;   core_drone.cpp_FUN_0046d870 at 0046dd46
;   core_ghoul.cpp_FUN_004c1bb0 at 004c2703
;   core_hotdemon.cpp_FUN_004d3a70 at 004d3d67
;   core_imp.cpp_FUN_004d6980 at 004d6fdb
;   ... and 8 more
;
; Called Functions:
;   core_gore.cpp_CBloodPool_init_FUN_004c8d10
;   core_gore.cpp_CGore_allocateBloodPool_FUN_004c9a80
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004c9ad0
        ;   Label: core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0
    JNZ 0x004c9ad8                      ; 004c9ad5
        ;   XREF to: 004c9ad8 (CONDITIONAL_JUMP)  ; LAB_004c9ad8
    RET                                 ; 004c9ad7
    PUSH ESI                            ; 004c9ad8
        ;   Label: LAB_004c9ad8
    PUSH EBX                            ; 004c9ad9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c9ada
    PUSH ECX                            ; 004c9ade
    CALL core_gore.cpp_CGore_allocateBloodPool_FUN_004c9a80 ; 004c9adf
        ;   XREF to: 004c9a80 (UNCONDITIONAL_CALL)  ; CBloodPool * core_gore.cpp_CGore_allocateBloodPool_FUN_004c9a80(CGore * this_ptr)
    ADD ESP,0x4                         ; 004c9ae4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c9ae7
    PUSH EBX                            ; 004c9aeb
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c9aec
    PUSH ESI                            ; 004c9af0
    PUSH EAX                            ; 004c9af1
    CALL core_gore.cpp_CBloodPool_init_FUN_004c8d10 ; 004c9af2
        ;   XREF to: 004c8d10 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodPool_init_FUN_004c8d10(CBloodPool * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004c9af7
    POP EBX                             ; 004c9afa
    POP ESI                             ; 004c9afb
    RET                                 ; 004c9afc

