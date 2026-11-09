; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004c97e0(CGore *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_FUN_004c7da0 at 004c7dc4
;
; Called Functions:
;   core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004c7e00
;   core_gore.cpp_CGore_allocateBloodSplat_FUN_004c9790
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004c97e0
        ;   Label: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004c97e0
    JNZ 0x004c97e8                      ; 004c97e5
        ;   XREF to: 004c97e8 (CONDITIONAL_JUMP)  ; LAB_004c97e8
    RET                                 ; 004c97e7
    PUSH ESI                            ; 004c97e8
        ;   Label: LAB_004c97e8
    PUSH EBX                            ; 004c97e9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c97ea
    PUSH ECX                            ; 004c97ee
    CALL core_gore.cpp_CGore_allocateBloodSplat_FUN_004c9790 ; 004c97ef
        ;   XREF to: 004c9790 (UNCONDITIONAL_CALL)  ; CBloodSplat * core_gore.cpp_CGore_allocateBloodSplat_FUN_004c9790(CGore * this_ptr)
    ADD ESP,0x4                         ; 004c97f4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c97f7
    PUSH EBX                            ; 004c97fb
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c97fc
    PUSH ESI                            ; 004c9800
    PUSH EAX                            ; 004c9801
    CALL core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004c7e00 ; 004c9802
        ;   XREF to: 004c7e00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004c7e00(CBloodSplat * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004c9807
    POP EBX                             ; 004c980a
    POP ESI                             ; 004c980b
    RET                                 ; 004c980c

