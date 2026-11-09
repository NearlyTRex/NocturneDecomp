; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
;
; XREF[6]:
;   core_elephant.cpp_FUN_0049e1a0 at 0049e520
;   core_gun.cpp_FUN_004e8630 at 004e88bf
;   core_rifle.cpp_FUN_00540080 at 005404aa
;   core_shotgun.cpp_FUN_00561760 at 00561ad0
;   core_tommygun.cpp_FUN_00598420 at 00598704
;   core_turret.cpp_FUN_005a3870 at 005a3d1a
;
; Referenced Globals:
;   undefined4 DAT_01c9f1b8
;
; Called Functions:
;   core_fire.cpp_FUN_004af340
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5a70
        ;   Label: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
    PUSH EDI                            ; 004b5a71
    MOV EDX,dword ptr [0x01c9f1b8]      ; 004b5a72 | DAT_01c9f1b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5a78
    SUB EAX,EDX                         ; 004b5a7f
    SHL EAX,0x3                         ; 004b5a81
    SUB EAX,EDX                         ; 004b5a84
    SHL EAX,0x2                         ; 004b5a86
    INC EDX                             ; 004b5a89
    ADD EAX,0x1c9f1bc                   ; 004b5a8a
    MOV dword ptr [0x01c9f1b8],EDX      ; 004b5a8f | DAT_01c9f1b8
    CMP EDX,0x14                        ; 004b5a95
    JL 0x004b5aa4                       ; 004b5a98
        ;   XREF to: 004b5aa4 (CONDITIONAL_JUMP)  ; LAB_004b5aa4
    PUSH EBX                            ; 004b5a9a
    XOR EBX,EBX                         ; 004b5a9b
    MOV dword ptr [0x01c9f1b8],EBX      ; 004b5a9d | DAT_01c9f1b8
    POP EBX                             ; 004b5aa3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b5aa4
        ;   Label: LAB_004b5aa4
    PUSH ESI                            ; 004b5aa8
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b5aa9
    PUSH EDI                            ; 004b5aad
    PUSH EAX                            ; 004b5aae
    CALL core_fire.cpp_FUN_004af340     ; 004b5aaf
        ;   XREF to: 004af340 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004af340(CMuzzleFlash * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004b5ab4
    POP EDI                             ; 004b5ab7
    POP ESI                             ; 004b5ab8
    RET                                 ; 004b5ab9

