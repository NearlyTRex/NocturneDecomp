; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createBindEvilToss_FUN_004a39a0(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   velocity
;
; XREF[1]:
;   core_bindevil.cpp_CBindEvil_fire_FUN_0040f840 at 0040f86a
;
; Called Functions:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a39a0
        ;   Label: core_fire.cpp_CFireEffect_createBindEvilToss_FUN_004a39a0
    PUSH ESI                            ; 004a39a1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a39a2
    PUSH 0x40000000                     ; 004a39a6
    PUSH EDX                            ; 004a39ab
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a39ac
    PUSH ECX                            ; 004a39b0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a39b1
    PUSH EBX                            ; 004a39b5
    PUSH 0x1                            ; 004a39b6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a39b8
    PUSH ESI                            ; 004a39bc
    CALL core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30 ; 004a39bd
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30(CFireEffect * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    ADD ESP,0x18                        ; 004a39c2
    POP ESI                             ; 004a39c5
    POP EBX                             ; 004a39c6
    RET                                 ; 004a39c7

