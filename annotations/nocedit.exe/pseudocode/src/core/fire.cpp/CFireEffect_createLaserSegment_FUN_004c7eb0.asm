; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004c7eb0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)
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
;   core_fire.cpp_CFireEffect_createLaserPath_FUN_004c7f80 at 004c8127
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 at 004c8b13
;
; Referenced Globals:
;   int g_LaserBeamActiveCount
;   CLaserBeam[64] g_LaserBeamPool
;
; Called Functions:
;   core_fire.cpp_CLaserBeam_init_FUN_004c2420
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c7eb0
        ;   Label: core_fire.cpp_CFireEffect_createLaserSegment_FUN_004c7eb0
    MOV EDX,dword ptr [0x02d667ac]      ; 004c7eb1 | g_LaserBeamActiveCount
    CMP EDX,0x40                        ; 004c7eb7
    JL 0x004c7ebe                       ; 004c7eba
        ;   XREF to: 004c7ebe (CONDITIONAL_JUMP)  ; LAB_004c7ebe
    POP EBP                             ; 004c7ebc
    RET                                 ; 004c7ebd
    PUSH EDI                            ; 004c7ebe
        ;   Label: LAB_004c7ebe
    PUSH ESI                            ; 004c7ebf
    PUSH EBX                            ; 004c7ec0
    PUSH 0x0                            ; 004c7ec1
    MOV ECX,dword ptr [ESP + 0x38]      ; 004c7ec3
    PUSH dword ptr [ESP + 0x3c]         ; 004c7ec7
    PUSH ECX                            ; 004c7ecb
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004c7ecc
    PUSH EBX                            ; 004c7ed0
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004c7ed1
    PUSH ESI                            ; 004c7ed5
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004c7ed6
    PUSH EDI                            ; 004c7eda
    PUSH dword ptr [ESP + 0x3c]         ; 004c7edb
    MOV EBP,dword ptr [ESP + 0x38]      ; 004c7edf
    PUSH dword ptr [ESP + 0x3c]         ; 004c7ee3
    PUSH EBP                            ; 004c7ee7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c7ee8
    PUSH EAX                            ; 004c7eec
    MOV EAX,EDX                         ; 004c7eed
    SHL EAX,0x6                         ; 004c7eef
    ADD EAX,0x2d667b0                   ; 004c7ef2 | g_LaserBeamPool
    PUSH EAX                            ; 004c7ef7
    CALL core_fire.cpp_CLaserBeam_init_FUN_004c2420 ; 004c7ef8
        ;   XREF to: 004c2420 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_init_FUN_004c2420(CLaserBeam * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    MOV EDX,dword ptr [0x02d667ac]      ; 004c7efd | g_LaserBeamActiveCount
    INC EDX                             ; 004c7f03
    ADD ESP,0x2c                        ; 004c7f04
    MOV dword ptr [0x02d667ac],EDX      ; 004c7f07 | g_LaserBeamActiveCount
    POP EBX                             ; 004c7f0d
    POP ESI                             ; 004c7f0e
    POP EDI                             ; 004c7f0f
    POP EBP                             ; 004c7f10
    RET                                 ; 004c7f11

