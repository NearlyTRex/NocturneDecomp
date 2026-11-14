; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170(CFireEffect *this_ptr,CVector3f *param_2,undefined4 param_3)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[2]:
;   core_confedrt.cpp_FUN_005a14e0 at 005a1705
;   core_union.cpp_FUN_005a5460 at 005a5685
;
; Referenced Globals:
;   undefined4 DAT_01c8672c
;
; Called Functions:
;   core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d170
        ;   Label: core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
    PUSH EDI                            ; 0049d171
    MOV EDX,dword ptr [0x01c8672c]      ; 0049d172 | DAT_01c8672c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d178
    SUB EAX,EDX                         ; 0049d17f
    SHL EAX,0x3                         ; 0049d181
    SUB EAX,EDX                         ; 0049d184
    SHL EAX,0x2                         ; 0049d186
    INC EDX                             ; 0049d189
    ADD EAX,0x1c86730                   ; 0049d18a
    MOV dword ptr [0x01c8672c],EDX      ; 0049d18f | DAT_01c8672c
    CMP EDX,0x14                        ; 0049d195
    JL 0x0049d1a4                       ; 0049d198
        ;   XREF to: 0049d1a4 (CONDITIONAL_JUMP)  ; LAB_0049d1a4
    PUSH EBX                            ; 0049d19a
    XOR EBX,EBX                         ; 0049d19b
    MOV dword ptr [0x01c8672c],EBX      ; 0049d19d | DAT_01c8672c
    POP EBX                             ; 0049d1a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0049d1a4
        ;   Label: LAB_0049d1a4
    PUSH ESI                            ; 0049d1a8
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049d1a9
    PUSH EDI                            ; 0049d1ad
    PUSH EAX                            ; 0049d1ae
    CALL core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360 ; 0049d1af
        ;   XREF to: 0059d360 (UNCONDITIONAL_CALL)  ; void core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360(CMuzzleEffect * this_ptr, CVector3f * param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0049d1b4
    POP EDI                             ; 0049d1b7
    POP ESI                             ; 0049d1b8
    RET                                 ; 0049d1b9

