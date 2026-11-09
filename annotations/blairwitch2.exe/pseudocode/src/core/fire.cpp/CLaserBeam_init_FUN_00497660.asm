; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_init_FUN_00497660(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)
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
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_0049d7e0 at 0049d827
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770 at 0049d7b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497660
        ;   Label: core_fire.cpp_CLaserBeam_init_FUN_00497660
    PUSH ESI                            ; 00497661
    MOV EDX,dword ptr [ESP + 0xc]       ; 00497662
    MOV EAX,dword ptr [ESP + 0x10]      ; 00497666
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049766a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0049766e
    CMP EDX,EAX                         ; 00497672
    JNZ 0x004976dd                      ; 00497674
        ;   XREF to: 004976dd (CONDITIONAL_JUMP)  ; LAB_004976dd
    LEA EAX,[EDX + 0xc]                 ; 00497676
        ;   Label: LAB_00497676
    CMP EAX,EBX                         ; 00497679
    JZ 0x0049768d                       ; 0049767b
        ;   XREF to: 0049768d (CONDITIONAL_JUMP)  ; LAB_0049768d
    MOV ESI,dword ptr [EBX]             ; 0049767d
    MOV dword ptr [EAX],ESI             ; 0049767f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00497681
    MOV dword ptr [EAX + 0x4],ESI       ; 00497684
    MOV ESI,dword ptr [EBX + 0x8]       ; 00497687
    MOV dword ptr [EAX + 0x8],ESI       ; 0049768a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049768d
        ;   Label: LAB_0049768d
    MOV dword ptr [EDX + 0x18],EAX      ; 00497691
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00497694
    MOV dword ptr [EDX + 0x1c],EAX      ; 00497698
    FLD float ptr [EDX + 0x1c]          ; 0049769b
    FLDZ                                ; 0049769e
    FCOMPP                              ; 004976a0
    FNSTSW AX                           ; 004976a2
    SAHF                                ; 004976a4
    JNC 0x004976ae                      ; 004976a5
        ;   XREF to: 004976ae (CONDITIONAL_JUMP)  ; LAB_004976ae
    LEA EAX,[EDX + 0x20]                ; 004976a7
    CMP EAX,ECX                         ; 004976aa
    JNZ 0x004976ef                      ; 004976ac
        ;   XREF to: 004976ef (CONDITIONAL_JUMP)  ; LAB_004976ef
    MOV EAX,dword ptr [ESP + 0x24]      ; 004976ae
        ;   Label: LAB_004976ae
    SHL EAX,0x7                         ; 004976b2
    MOV dword ptr [EDX + 0x2c],EAX      ; 004976b5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004976b8
    SHL EAX,0x7                         ; 004976bc
    MOV dword ptr [EDX + 0x30],EAX      ; 004976bf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004976c2
    SHL EAX,0x7                         ; 004976c6
    MOV dword ptr [EDX + 0x34],EAX      ; 004976c9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004976cc
    MOV dword ptr [EDX + 0x38],EAX      ; 004976d0
    MOV EAX,dword ptr [ESP + 0x34]      ; 004976d3
    MOV dword ptr [EDX + 0x3c],EAX      ; 004976d7
    POP ESI                             ; 004976da
    POP EBX                             ; 004976db
    RET                                 ; 004976dc
    MOV ESI,dword ptr [EAX]             ; 004976dd
        ;   Label: LAB_004976dd
    MOV dword ptr [EDX],ESI             ; 004976df
    MOV ESI,dword ptr [EAX + 0x4]       ; 004976e1
    MOV dword ptr [EDX + 0x4],ESI       ; 004976e4
    MOV ESI,dword ptr [EAX + 0x8]       ; 004976e7
    MOV dword ptr [EDX + 0x8],ESI       ; 004976ea
    JMP 0x00497676                      ; 004976ed
        ;   XREF to: 00497676 (UNCONDITIONAL_JUMP)  ; LAB_00497676
    MOV EBX,dword ptr [ECX]             ; 004976ef
        ;   Label: LAB_004976ef
    MOV dword ptr [EAX],EBX             ; 004976f1
    MOV EBX,dword ptr [ECX + 0x4]       ; 004976f3
    MOV dword ptr [EAX + 0x4],EBX       ; 004976f6
    MOV EBX,dword ptr [ECX + 0x8]       ; 004976f9
    MOV dword ptr [EAX + 0x8],EBX       ; 004976fc
    JMP 0x004976ae                      ; 004976ff
        ;   XREF to: 004976ae (UNCONDITIONAL_JUMP)  ; LAB_004976ae

