; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049ab30(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; float            Stack[0x10]:4   end_width
; float            Stack[0x14]:4   end_spread
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760 at 0049e790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ab30
        ;   Label: core_fire.cpp_CLightningBolt_activateDirectional_FUN_0049ab30
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ab31
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049ab35
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049ab39
    LEA EAX,[EDX + 0x4]                 ; 0049ab3d
    CMP EAX,ECX                         ; 0049ab40
    JNZ 0x0049ab68                      ; 0049ab42
        ;   XREF to: 0049ab68 (CONDITIONAL_JUMP)  ; LAB_0049ab68
    LEA EAX,[EDX + 0x1c]                ; 0049ab44
        ;   Label: LAB_0049ab44
    CMP EAX,EBX                         ; 0049ab47
    JNZ 0x0049ab7c                      ; 0049ab49
        ;   XREF to: 0049ab7c (CONDITIONAL_JUMP)  ; LAB_0049ab7c
    MOV dword ptr [EDX],0x1             ; 0049ab4b
        ;   Label: LAB_0049ab4b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049ab51
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 0049ab55
    MOV dword ptr [EDX + 0x18],EAX      ; 0049ab5c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049ab5f
    MOV dword ptr [EDX + 0x28],EAX      ; 0049ab63
    POP EBX                             ; 0049ab66
    RET                                 ; 0049ab67
    PUSH ESI                            ; 0049ab68
        ;   Label: LAB_0049ab68
    MOV ESI,dword ptr [ECX]             ; 0049ab69
    MOV dword ptr [EAX],ESI             ; 0049ab6b
    MOV ESI,dword ptr [ECX + 0x4]       ; 0049ab6d
    MOV dword ptr [EAX + 0x4],ESI       ; 0049ab70
    MOV ESI,dword ptr [ECX + 0x8]       ; 0049ab73
    MOV dword ptr [EAX + 0x8],ESI       ; 0049ab76
    POP ESI                             ; 0049ab79
    JMP 0x0049ab44                      ; 0049ab7a
        ;   XREF to: 0049ab44 (UNCONDITIONAL_JUMP)  ; LAB_0049ab44
    MOV ECX,dword ptr [EBX]             ; 0049ab7c
        ;   Label: LAB_0049ab7c
    MOV dword ptr [EAX],ECX             ; 0049ab7e
    MOV ECX,dword ptr [EBX + 0x4]       ; 0049ab80
    MOV dword ptr [EAX + 0x4],ECX       ; 0049ab83
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049ab86
    MOV dword ptr [EAX + 0x8],ECX       ; 0049ab89
    JMP 0x0049ab4b                      ; 0049ab8c
        ;   XREF to: 0049ab4b (UNCONDITIONAL_JUMP)  ; LAB_0049ab4b

