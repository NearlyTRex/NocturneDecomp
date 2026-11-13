; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004b6f30(CFireEffect *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
;
; XREF[2]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 at 0040fe06
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 at 004b6cc9
;
; Referenced Globals:
;   undefined4 DAT_01cb4f5c
;
; Called Functions:
;   core_fire.cpp_CCrater_activate_FUN_004b1fb0
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0xc]          ; 004b6f30
        ;   Label: core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30
    MOV EAX,[0x01cb4f5c]                ; 004b6f34 | DAT_01cb4f5c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b6f39
    SHL EAX,0x4                         ; 004b6f3d
    PUSH EDX                            ; 004b6f40
    MOV EDX,EAX                         ; 004b6f41
    SHL EAX,0x3                         ; 004b6f43
    SUB EAX,EDX                         ; 004b6f46
    ADD EAX,0x1cb4f60                   ; 004b6f48
    PUSH EAX                            ; 004b6f4d
    CALL core_fire.cpp_CCrater_activate_FUN_004b1fb0 ; 004b6f4e
        ;   XREF to: 004b1fb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_activate_FUN_004b1fb0(CCrater * this_ptr, CVector3f * center_position, float radius)
    MOV ECX,dword ptr [0x01cb4f5c]      ; 004b6f53 | DAT_01cb4f5c
    INC ECX                             ; 004b6f59
    ADD ESP,0xc                         ; 004b6f5a
    MOV dword ptr [0x01cb4f5c],ECX      ; 004b6f5d | DAT_01cb4f5c
    CMP ECX,0x14                        ; 004b6f63
    JGE 0x004b6f69                      ; 004b6f66
        ;   XREF to: 004b6f69 (CONDITIONAL_JUMP)  ; LAB_004b6f69
    RET                                 ; 004b6f68
    PUSH ESI                            ; 004b6f69
        ;   Label: LAB_004b6f69
    XOR ESI,ESI                         ; 004b6f6a
    MOV dword ptr [0x01cb4f5c],ESI      ; 004b6f6c | DAT_01cb4f5c
    POP ESI                             ; 004b6f72
    RET                                 ; 004b6f73

