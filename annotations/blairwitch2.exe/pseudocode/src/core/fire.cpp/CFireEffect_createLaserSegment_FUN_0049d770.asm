; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   origin
; CVector3f *      Stack[0xc]:4   hit_position
; float            Stack[0x10]:4   beam_width
; float            Stack[0x14]:4   reticle_intensity
; CVector3f *      Stack[0x18]:4   reflection_normal
; int              Stack[0x1c]:4   red
; int              Stack[0x20]:4   green
; int              Stack[0x24]:4   blue
; float            Stack[0x28]:4   halo_spread
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_0049d840 at 0049d9f0
;   core_fire.cpp_FUN_0049db20 at 0049e1de
;
; Referenced Globals:
;   undefined4 DAT_01c965dc
;
; Called Functions:
;   core_fire.cpp_CLaserBeam_init_FUN_00497660
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049d770
        ;   Label: core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770
    MOV EDX,dword ptr [0x01c965dc]      ; 0049d771 | DAT_01c965dc
    CMP EDX,0x40                        ; 0049d777
    JL 0x0049d77e                       ; 0049d77a
        ;   XREF to: 0049d77e (CONDITIONAL_JUMP)  ; LAB_0049d77e
    POP EBP                             ; 0049d77c
    RET                                 ; 0049d77d
    PUSH EDI                            ; 0049d77e
        ;   Label: LAB_0049d77e
    PUSH ESI                            ; 0049d77f
    PUSH EBX                            ; 0049d780
    PUSH 0x0                            ; 0049d781
    MOV ECX,dword ptr [ESP + 0x38]      ; 0049d783
    PUSH dword ptr [ESP + 0x3c]         ; 0049d787
    PUSH ECX                            ; 0049d78b
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049d78c
    PUSH EBX                            ; 0049d790
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0049d791
    PUSH ESI                            ; 0049d795
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0049d796
    PUSH EDI                            ; 0049d79a
    PUSH dword ptr [ESP + 0x3c]         ; 0049d79b
    MOV EBP,dword ptr [ESP + 0x38]      ; 0049d79f
    PUSH dword ptr [ESP + 0x3c]         ; 0049d7a3
    PUSH EBP                            ; 0049d7a7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049d7a8
    PUSH EAX                            ; 0049d7ac
    MOV EAX,EDX                         ; 0049d7ad
    SHL EAX,0x6                         ; 0049d7af
    ADD EAX,0x1c965e0                   ; 0049d7b2
    PUSH EAX                            ; 0049d7b7
    CALL core_fire.cpp_CLaserBeam_init_FUN_00497660 ; 0049d7b8
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_init_FUN_00497660(CLaserBeam * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    MOV EDX,dword ptr [0x01c965dc]      ; 0049d7bd | DAT_01c965dc
    INC EDX                             ; 0049d7c3
    ADD ESP,0x2c                        ; 0049d7c4
    MOV dword ptr [0x01c965dc],EDX      ; 0049d7c7 | DAT_01c965dc
    POP EBX                             ; 0049d7cd
    POP ESI                             ; 0049d7ce
    POP EDI                             ; 0049d7cf
    POP EBP                             ; 0049d7d0
    RET                                 ; 0049d7d1

