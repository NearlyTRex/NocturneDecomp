; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_004b3490(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; float            Stack[0xc]:4   start_width
; float            Stack[0x10]:4   end_width
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0 at 004b700b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3490
        ;   Label: core_fire.cpp_CLightningBolt_activate_FUN_004b3490
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b3494
    LEA EAX,[EDX + 0x4]                 ; 004b3498
    CMP EAX,ECX                         ; 004b349b
    JNZ 0x004b34bb                      ; 004b349d
        ;   XREF to: 004b34bb (CONDITIONAL_JUMP)  ; LAB_004b34bb
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 004b349f
        ;   Label: LAB_004b349f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b34a6
    MOV dword ptr [EDX],0x0             ; 004b34aa
    MOV dword ptr [EDX + 0x10],EAX      ; 004b34b0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b34b3
    MOV dword ptr [EDX + 0x18],EAX      ; 004b34b7
    RET                                 ; 004b34ba
    PUSH EBX                            ; 004b34bb
        ;   Label: LAB_004b34bb
    MOV EBX,dword ptr [ECX]             ; 004b34bc
    MOV dword ptr [EAX],EBX             ; 004b34be
    MOV EBX,dword ptr [ECX + 0x4]       ; 004b34c0
    MOV dword ptr [EAX + 0x4],EBX       ; 004b34c3
    MOV EBX,dword ptr [ECX + 0x8]       ; 004b34c6
    MOV dword ptr [EAX + 0x8],EBX       ; 004b34c9
    POP EBX                             ; 004b34cc
    JMP 0x004b349f                      ; 004b34cd
        ;   XREF to: 004b349f (UNCONDITIONAL_JUMP)  ; LAB_004b349f

