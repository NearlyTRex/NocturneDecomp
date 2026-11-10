; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserCone_FUN_0049d7e0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,int red,int green,int blue,float cone_angle)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   origin
; CVector3f *      Stack[0xc]:4   hit_position
; float            Stack[0x10]:4   beam_width
; int              Stack[0x14]:4   red
; int              Stack[0x18]:4   green
; int              Stack[0x1c]:4   blue
; float            Stack[0x20]:4   cone_angle
;
; XREF[3]:
;   core_elephant.cpp_CElephantGun_renderAimBeam_FUN_004864d0 at 004866ae
;   core_lightgun.cpp_CLightGun_renderAimBeam_FUN_004e3b10 at 004e3d9c
;   core_shotgun.cpp_CShotgun_renderAimBeam_FUN_0053fb10 at 0053fcee
;
; Referenced Globals:
;   undefined4 DAT_005f64fc
;   undefined4 DAT_01c965dc
;
; Called Functions:
;   core_fire.cpp_CLaserBeam_init_FUN_00497660
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049d7e0
        ;   Label: core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0
    MOV EDX,dword ptr [0x01c965dc]      ; 0049d7e1 | DAT_01c965dc
    CMP EDX,0x40                        ; 0049d7e7
    JL 0x0049d7ee                       ; 0049d7ea
        ;   XREF to: 0049d7ee (CONDITIONAL_JUMP)  ; LAB_0049d7ee
    POP EBP                             ; 0049d7ec
    RET                                 ; 0049d7ed
    PUSH EDI                            ; 0049d7ee
        ;   Label: LAB_0049d7ee
    PUSH ESI                            ; 0049d7ef
    PUSH EBX                            ; 0049d7f0
    PUSH dword ptr [ESP + 0x30]         ; 0049d7f1
    MOV ECX,dword ptr [ESP + 0x30]      ; 0049d7f5
    PUSH dword ptr [0x005f64fc]         ; 0049d7f9 | DAT_005f64fc
    PUSH ECX                            ; 0049d7ff
    MOV EBX,dword ptr [ESP + 0x34]      ; 0049d800
    PUSH EBX                            ; 0049d804
    MOV ESI,dword ptr [ESP + 0x34]      ; 0049d805
    PUSH ESI                            ; 0049d809
    PUSH 0x0                            ; 0049d80a
    MOV EDI,dword ptr [ESP + 0x34]      ; 0049d80c
    PUSH 0x0                            ; 0049d810
    MOV EBP,dword ptr [ESP + 0x34]      ; 0049d812
    PUSH dword ptr [ESP + 0x3c]         ; 0049d816
    MOV EAX,EDX                         ; 0049d81a
    PUSH EDI                            ; 0049d81c
    SHL EAX,0x6                         ; 0049d81d
    PUSH EBP                            ; 0049d820
    ADD EAX,0x1c965e0                   ; 0049d821
    PUSH EAX                            ; 0049d826
    CALL core_fire.cpp_CLaserBeam_init_FUN_00497660 ; 0049d827
        ;   XREF to: 00497660 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_init_FUN_00497660(CLaserBeam * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    MOV EAX,[0x01c965dc]                ; 0049d82c | DAT_01c965dc
    INC EAX                             ; 0049d831
    ADD ESP,0x2c                        ; 0049d832
    MOV [0x01c965dc],EAX                ; 0049d835 | DAT_01c965dc
    POP EBX                             ; 0049d83a
    POP ESI                             ; 0049d83b
    POP EDI                             ; 0049d83c
    POP EBP                             ; 0049d83d
    RET                                 ; 0049d83e

