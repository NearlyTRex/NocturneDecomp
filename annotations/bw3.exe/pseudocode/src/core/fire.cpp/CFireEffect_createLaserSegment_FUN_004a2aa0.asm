; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread)
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
;   core_fire.cpp_FUN_004a2b70 at 004a2dcd
;   core_fire.cpp_FUN_004a2e20 at 004a3301
;
; Referenced Globals:
;   undefined4 DAT_01cf5088
;
; Called Functions:
;   core_fire.cpp_CLaserBeam_init_FUN_0049b030
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a2aa0
        ;   Label: core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
    MOV EDX,dword ptr [0x01cf5088]      ; 004a2aa1 | DAT_01cf5088
    CMP EDX,0x40                        ; 004a2aa7
    JL 0x004a2aae                       ; 004a2aaa
        ;   XREF to: 004a2aae (CONDITIONAL_JUMP)  ; LAB_004a2aae
    POP EBP                             ; 004a2aac
    RET                                 ; 004a2aad
    PUSH EDI                            ; 004a2aae
        ;   Label: LAB_004a2aae
    PUSH ESI                            ; 004a2aaf
    PUSH EBX                            ; 004a2ab0
    PUSH 0x0                            ; 004a2ab1
    MOV ECX,dword ptr [ESP + 0x38]      ; 004a2ab3
    PUSH dword ptr [ESP + 0x3c]         ; 004a2ab7
    PUSH ECX                            ; 004a2abb
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004a2abc
    PUSH EBX                            ; 004a2ac0
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004a2ac1
    PUSH ESI                            ; 004a2ac5
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004a2ac6
    PUSH EDI                            ; 004a2aca
    PUSH dword ptr [ESP + 0x3c]         ; 004a2acb
    MOV EBP,dword ptr [ESP + 0x38]      ; 004a2acf
    PUSH dword ptr [ESP + 0x3c]         ; 004a2ad3
    PUSH EBP                            ; 004a2ad7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a2ad8
    PUSH EAX                            ; 004a2adc
    MOV EAX,EDX                         ; 004a2add
    SHL EAX,0x6                         ; 004a2adf
    ADD EAX,0x1cf508c                   ; 004a2ae2
    PUSH EAX                            ; 004a2ae7
    CALL core_fire.cpp_CLaserBeam_init_FUN_0049b030 ; 004a2ae8
        ;   XREF to: 0049b030 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_init_FUN_0049b030(CLaserBeam * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    MOV EDX,dword ptr [0x01cf5088]      ; 004a2aed | DAT_01cf5088
    INC EDX                             ; 004a2af3
    ADD ESP,0x2c                        ; 004a2af4
    MOV dword ptr [0x01cf5088],EDX      ; 004a2af7 | DAT_01cf5088
    POP EBX                             ; 004a2afd
    POP ESI                             ; 004a2afe
    POP EDI                             ; 004a2aff
    POP EBP                             ; 004a2b00
    RET                                 ; 004a2b01

