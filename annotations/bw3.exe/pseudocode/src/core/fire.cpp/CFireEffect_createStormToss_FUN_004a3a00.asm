; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createStormToss_FUN_004a3a00(CFireEffect *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   velocity
;
; XREF[1]:
;   core_storm.cpp_CStorm_fire_FUN_00568b50 at 00568c01
;
; Called Functions:
;   core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3a00
        ;   Label: core_fire.cpp_CFireEffect_createStormToss_FUN_004a3a00
    PUSH ESI                            ; 004a3a01
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a3a02
    PUSH 0x40000000                     ; 004a3a06
    PUSH EDX                            ; 004a3a0b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a3a0c
    PUSH ECX                            ; 004a3a10
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a3a11
    PUSH EBX                            ; 004a3a15
    PUSH 0x3                            ; 004a3a16
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a3a18
    PUSH ESI                            ; 004a3a1c
    CALL core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30 ; 004a3a1d
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30(CFireEffect * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    ADD ESP,0x18                        ; 004a3a22
    POP ESI                             ; 004a3a25
    POP EBX                             ; 004a3a26
    RET                                 ; 004a3a27

