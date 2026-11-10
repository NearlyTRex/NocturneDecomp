; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
;
; XREF[2]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 00410286
;   core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360 at 0049e3c9
;
; Referenced Globals:
;   undefined4 DAT_01c9c4d0
;
; Called Functions:
;   core_fire.cpp_FUN_00499610
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0xc]          ; 0049e630
        ;   Label: core_fire.cpp_CFireEffect_createCrater_FUN_0049e630
    MOV EAX,[0x01c9c4d0]                ; 0049e634 | DAT_01c9c4d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049e639
    SHL EAX,0x4                         ; 0049e63d
    PUSH EDX                            ; 0049e640
    MOV EDX,EAX                         ; 0049e641
    SHL EAX,0x3                         ; 0049e643
    SUB EAX,EDX                         ; 0049e646
    ADD EAX,0x1c9c4d4                   ; 0049e648
    PUSH EAX                            ; 0049e64d
    CALL core_fire.cpp_FUN_00499610     ; 0049e64e
        ;   XREF to: 00499610 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_00499610()
    MOV ECX,dword ptr [0x01c9c4d0]      ; 0049e653 | DAT_01c9c4d0
    INC ECX                             ; 0049e659
    ADD ESP,0xc                         ; 0049e65a
    MOV dword ptr [0x01c9c4d0],ECX      ; 0049e65d | DAT_01c9c4d0
    CMP ECX,0x14                        ; 0049e663
    JGE 0x0049e669                      ; 0049e666
        ;   XREF to: 0049e669 (CONDITIONAL_JUMP)  ; LAB_0049e669
    RET                                 ; 0049e668
    PUSH ESI                            ; 0049e669
        ;   Label: LAB_0049e669
    XOR ESI,ESI                         ; 0049e66a
    MOV dword ptr [0x01c9c4d0],ESI      ; 0049e66c | DAT_01c9c4d0
    POP ESI                             ; 0049e672
    RET                                 ; 0049e673

