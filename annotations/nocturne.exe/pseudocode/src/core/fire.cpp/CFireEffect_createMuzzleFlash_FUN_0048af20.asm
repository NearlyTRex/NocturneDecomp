; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
;
; XREF[5]:
;   core_elephant.cpp_FUN_00477890 at 00477b66
;   core_gun.cpp_FUN_004b27c0 at 004b2a00
;   core_shotgun.cpp_FUN_00515ea0 at 005161c8
;   core_tommygun.cpp_FUN_00545c30 at 00545f2c
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054af0b
;
; Referenced Globals:
;   undefined4 DAT_01c4e954
;
; Called Functions:
;   core_fire.cpp_CMuzzleFlash_init_FUN_00484e10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048af20
        ;   Label: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
    PUSH EDI                            ; 0048af21
    MOV EDX,dword ptr [0x01c4e954]      ; 0048af22 | DAT_01c4e954
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048af28
    SUB EAX,EDX                         ; 0048af2f
    SHL EAX,0x3                         ; 0048af31
    SUB EAX,EDX                         ; 0048af34
    SHL EAX,0x2                         ; 0048af36
    INC EDX                             ; 0048af39
    ADD EAX,0x1c4e958                   ; 0048af3a
    MOV dword ptr [0x01c4e954],EDX      ; 0048af3f | DAT_01c4e954
    CMP EDX,0x14                        ; 0048af45
    JL 0x0048af54                       ; 0048af48
        ;   XREF to: 0048af54 (CONDITIONAL_JUMP)  ; LAB_0048af54
    PUSH EBX                            ; 0048af4a
    XOR EBX,EBX                         ; 0048af4b
    MOV dword ptr [0x01c4e954],EBX      ; 0048af4d | DAT_01c4e954
    POP EBX                             ; 0048af53
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048af54
        ;   Label: LAB_0048af54
    PUSH ESI                            ; 0048af58
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048af59
    PUSH EDI                            ; 0048af5d
    PUSH EAX                            ; 0048af5e
    CALL core_fire.cpp_CMuzzleFlash_init_FUN_00484e10 ; 0048af5f
        ;   XREF to: 00484e10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_init_FUN_00484e10(CMuzzleFlash * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 0048af64
    POP EDI                             ; 0048af67
    POP ESI                             ; 0048af68
    RET                                 ; 0048af69

