; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a39d0(CFireEffect *param_1,CVector3f *param_2,UOrientationVector *param_3,CVector3f *param_4)
;
;
; XREF[1]:
;   core_disease.cpp_CDisease_fire_FUN_0045c040 at 0045c06a
;
; Called Functions:
;   core_fire.cpp_FUN_004a3a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a39d0
        ;   Label: core_fire.cpp_FUN_004a39d0
    PUSH ESI                            ; 004a39d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a39d2
    PUSH 0x40000000                     ; 004a39d6
    PUSH EDX                            ; 004a39db
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a39dc
    PUSH ECX                            ; 004a39e0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a39e1
    PUSH EBX                            ; 004a39e5
    PUSH 0x2                            ; 004a39e6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a39e8
    PUSH ESI                            ; 004a39ec
    CALL core_fire.cpp_FUN_004a3a30     ; 004a39ed
        ;   XREF to: 004a3a30 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_FUN_004a3a30(CFireEffect * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    ADD ESP,0x18                        ; 004a39f2
    POP ESI                             ; 004a39f5
    POP EBX                             ; 004a39f6
    RET                                 ; 004a39f7

