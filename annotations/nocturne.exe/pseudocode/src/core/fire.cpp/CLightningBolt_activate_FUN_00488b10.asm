; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_00488b10(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; float            Stack[0xc]:4   start_width
; float            Stack[0x10]:4   end_width
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420 at 0048c44b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488b10
        ;   Label: core_fire.cpp_CLightningBolt_activate_FUN_00488b10
    MOV ECX,dword ptr [ESP + 0x8]       ; 00488b14
    LEA EAX,[EDX + 0x4]                 ; 00488b18
    CMP EAX,ECX                         ; 00488b1b
    JNZ 0x00488b3b                      ; 00488b1d
        ;   XREF to: 00488b3b (CONDITIONAL_JUMP)  ; LAB_00488b3b
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 00488b1f
        ;   Label: LAB_00488b1f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00488b26
    MOV dword ptr [EDX],0x0             ; 00488b2a
    MOV dword ptr [EDX + 0x10],EAX      ; 00488b30
    MOV EAX,dword ptr [ESP + 0x10]      ; 00488b33
    MOV dword ptr [EDX + 0x18],EAX      ; 00488b37
    RET                                 ; 00488b3a
    PUSH EBX                            ; 00488b3b
        ;   Label: LAB_00488b3b
    MOV EBX,dword ptr [ECX]             ; 00488b3c
    MOV dword ptr [EAX],EBX             ; 00488b3e
    MOV EBX,dword ptr [ECX + 0x4]       ; 00488b40
    MOV dword ptr [EAX + 0x4],EBX       ; 00488b43
    MOV EBX,dword ptr [ECX + 0x8]       ; 00488b46
    MOV dword ptr [EAX + 0x8],EBX       ; 00488b49
    POP EBX                             ; 00488b4c
    JMP 0x00488b1f                      ; 00488b4d
        ;   XREF to: 00488b1f (UNCONDITIONAL_JUMP)  ; LAB_00488b1f

