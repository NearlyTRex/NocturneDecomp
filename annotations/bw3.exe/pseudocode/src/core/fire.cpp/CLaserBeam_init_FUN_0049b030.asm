; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_init_FUN_0049b030(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   origin
; CVector3f *      Stack[0xc]:4   hit_position
; float            Stack[0x10]:4   beam_width
; float            Stack[0x14]:4   reticle_intensity
; CVector3f *      Stack[0x18]:4   reflection_normal
; int              Stack[0x1c]:4   red
; int              Stack[0x20]:4   green
; int              Stack[0x24]:4   blue
; float            Stack[0x28]:4   halo_spread
; float            Stack[0x2c]:4   cone_angle
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_004a2b10 at 004a2b57
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0 at 004a2ae8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b030
        ;   Label: core_fire.cpp_CLaserBeam_init_FUN_0049b030
    PUSH ESI                            ; 0049b031
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049b032
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049b036
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049b03a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0049b03e
    CMP EDX,EAX                         ; 0049b042
    JNZ 0x0049b0ad                      ; 0049b044
        ;   XREF to: 0049b0ad (CONDITIONAL_JUMP)  ; LAB_0049b0ad
    LEA EAX,[EDX + 0xc]                 ; 0049b046
        ;   Label: LAB_0049b046
    CMP EAX,EBX                         ; 0049b049
    JZ 0x0049b05d                       ; 0049b04b
        ;   XREF to: 0049b05d (CONDITIONAL_JUMP)  ; LAB_0049b05d
    MOV ESI,dword ptr [EBX]             ; 0049b04d
    MOV dword ptr [EAX],ESI             ; 0049b04f
    MOV ESI,dword ptr [EBX + 0x4]       ; 0049b051
    MOV dword ptr [EAX + 0x4],ESI       ; 0049b054
    MOV ESI,dword ptr [EBX + 0x8]       ; 0049b057
    MOV dword ptr [EAX + 0x8],ESI       ; 0049b05a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049b05d
        ;   Label: LAB_0049b05d
    MOV dword ptr [EDX + 0x18],EAX      ; 0049b061
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049b064
    MOV dword ptr [EDX + 0x1c],EAX      ; 0049b068
    FLD float ptr [EDX + 0x1c]          ; 0049b06b
    FLDZ                                ; 0049b06e
    FCOMPP                              ; 0049b070
    FNSTSW AX                           ; 0049b072
    SAHF                                ; 0049b074
    JNC 0x0049b07e                      ; 0049b075
        ;   XREF to: 0049b07e (CONDITIONAL_JUMP)  ; LAB_0049b07e
    LEA EAX,[EDX + 0x20]                ; 0049b077
    CMP EAX,ECX                         ; 0049b07a
    JNZ 0x0049b0bf                      ; 0049b07c
        ;   XREF to: 0049b0bf (CONDITIONAL_JUMP)  ; LAB_0049b0bf
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049b07e
        ;   Label: LAB_0049b07e
    SHL EAX,0x7                         ; 0049b082
    MOV dword ptr [EDX + 0x2c],EAX      ; 0049b085
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049b088
    SHL EAX,0x7                         ; 0049b08c
    MOV dword ptr [EDX + 0x30],EAX      ; 0049b08f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049b092
    SHL EAX,0x7                         ; 0049b096
    MOV dword ptr [EDX + 0x34],EAX      ; 0049b099
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049b09c
    MOV dword ptr [EDX + 0x38],EAX      ; 0049b0a0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049b0a3
    MOV dword ptr [EDX + 0x3c],EAX      ; 0049b0a7
    POP ESI                             ; 0049b0aa
    POP EBX                             ; 0049b0ab
    RET                                 ; 0049b0ac
    MOV ESI,dword ptr [EAX]             ; 0049b0ad
        ;   Label: LAB_0049b0ad
    MOV dword ptr [EDX],ESI             ; 0049b0af
    MOV ESI,dword ptr [EAX + 0x4]       ; 0049b0b1
    MOV dword ptr [EDX + 0x4],ESI       ; 0049b0b4
    MOV ESI,dword ptr [EAX + 0x8]       ; 0049b0b7
    MOV dword ptr [EDX + 0x8],ESI       ; 0049b0ba
    JMP 0x0049b046                      ; 0049b0bd
        ;   XREF to: 0049b046 (UNCONDITIONAL_JUMP)  ; LAB_0049b046
    MOV EBX,dword ptr [ECX]             ; 0049b0bf
        ;   Label: LAB_0049b0bf
    MOV dword ptr [EAX],EBX             ; 0049b0c1
    MOV EBX,dword ptr [ECX + 0x4]       ; 0049b0c3
    MOV dword ptr [EAX + 0x4],EBX       ; 0049b0c6
    MOV EBX,dword ptr [ECX + 0x8]       ; 0049b0c9
    MOV dword ptr [EAX + 0x8],EBX       ; 0049b0cc
    JMP 0x0049b07e                      ; 0049b0cf
        ;   XREF to: 0049b07e (UNCONDITIONAL_JUMP)  ; LAB_0049b07e

