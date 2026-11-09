; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_init_FUN_004b0000(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)
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
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_004b60e0 at 004b6127
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004b6070 at 004b60b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0000
        ;   Label: core_fire.cpp_CLaserBeam_init_FUN_004b0000
    PUSH ESI                            ; 004b0001
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0002
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b0006
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b000a
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b000e
    CMP EDX,EAX                         ; 004b0012
    JNZ 0x004b007d                      ; 004b0014
        ;   XREF to: 004b007d (CONDITIONAL_JUMP)  ; LAB_004b007d
    LEA EAX,[EDX + 0xc]                 ; 004b0016
        ;   Label: LAB_004b0016
    CMP EAX,EBX                         ; 004b0019
    JZ 0x004b002d                       ; 004b001b
        ;   XREF to: 004b002d (CONDITIONAL_JUMP)  ; LAB_004b002d
    MOV ESI,dword ptr [EBX]             ; 004b001d
    MOV dword ptr [EAX],ESI             ; 004b001f
    MOV ESI,dword ptr [EBX + 0x4]       ; 004b0021
    MOV dword ptr [EAX + 0x4],ESI       ; 004b0024
    MOV ESI,dword ptr [EBX + 0x8]       ; 004b0027
    MOV dword ptr [EAX + 0x8],ESI       ; 004b002a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b002d
        ;   Label: LAB_004b002d
    MOV dword ptr [EDX + 0x18],EAX      ; 004b0031
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b0034
    MOV dword ptr [EDX + 0x1c],EAX      ; 004b0038
    FLD float ptr [EDX + 0x1c]          ; 004b003b
    FLDZ                                ; 004b003e
    FCOMPP                              ; 004b0040
    FNSTSW AX                           ; 004b0042
    SAHF                                ; 004b0044
    JNC 0x004b004e                      ; 004b0045
        ;   XREF to: 004b004e (CONDITIONAL_JUMP)  ; LAB_004b004e
    LEA EAX,[EDX + 0x20]                ; 004b0047
    CMP EAX,ECX                         ; 004b004a
    JNZ 0x004b008f                      ; 004b004c
        ;   XREF to: 004b008f (CONDITIONAL_JUMP)  ; LAB_004b008f
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b004e
        ;   Label: LAB_004b004e
    SHL EAX,0x7                         ; 004b0052
    MOV dword ptr [EDX + 0x2c],EAX      ; 004b0055
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b0058
    SHL EAX,0x7                         ; 004b005c
    MOV dword ptr [EDX + 0x30],EAX      ; 004b005f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b0062
    SHL EAX,0x7                         ; 004b0066
    MOV dword ptr [EDX + 0x34],EAX      ; 004b0069
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b006c
    MOV dword ptr [EDX + 0x38],EAX      ; 004b0070
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b0073
    MOV dword ptr [EDX + 0x3c],EAX      ; 004b0077
    POP ESI                             ; 004b007a
    POP EBX                             ; 004b007b
    RET                                 ; 004b007c
    MOV ESI,dword ptr [EAX]             ; 004b007d
        ;   Label: LAB_004b007d
    MOV dword ptr [EDX],ESI             ; 004b007f
    MOV ESI,dword ptr [EAX + 0x4]       ; 004b0081
    MOV dword ptr [EDX + 0x4],ESI       ; 004b0084
    MOV ESI,dword ptr [EAX + 0x8]       ; 004b0087
    MOV dword ptr [EDX + 0x8],ESI       ; 004b008a
    JMP 0x004b0016                      ; 004b008d
        ;   XREF to: 004b0016 (UNCONDITIONAL_JUMP)  ; LAB_004b0016
    MOV EBX,dword ptr [ECX]             ; 004b008f
        ;   Label: LAB_004b008f
    MOV dword ptr [EAX],EBX             ; 004b0091
    MOV EBX,dword ptr [ECX + 0x4]       ; 004b0093
    MOV dword ptr [EAX + 0x4],EBX       ; 004b0096
    MOV EBX,dword ptr [ECX + 0x8]       ; 004b0099
    MOV dword ptr [EAX + 0x8],EBX       ; 004b009c
    JMP 0x004b004e                      ; 004b009f
        ;   XREF to: 004b004e (UNCONDITIONAL_JUMP)  ; LAB_004b004e

