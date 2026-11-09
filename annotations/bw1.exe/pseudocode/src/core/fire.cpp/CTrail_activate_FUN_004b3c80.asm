; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_activate_FUN_004b3c80(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   size
; float            Stack[0x10]:4   alpha
; float            Stack[0x14]:4   lifetime
; SMRGLTextureBasic * Stack[0x18]:4   texture_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_004b70f0 at 004b711f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b3c80
        ;   Label: core_fire.cpp_CTrail_activate_FUN_004b3c80
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b3c84
    CMP EAX,EDX                         ; 004b3c88
    JNZ 0x004b3cb3                      ; 004b3c8a
        ;   XREF to: 004b3cb3 (CONDITIONAL_JUMP)  ; LAB_004b3cb3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b3c8c
        ;   Label: LAB_004b3c8c
    MOV dword ptr [EAX + 0xc],EDX       ; 004b3c90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3c93
    MOV dword ptr [EAX + 0x14],EDX      ; 004b3c97
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b3c9a
    MOV dword ptr [EAX + 0x10],EDX      ; 004b3c9e
    MOV dword ptr [EAX + 0x18],EDX      ; 004b3ca1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3ca4
    MOV dword ptr [EAX + 0x1c],EDX      ; 004b3ca8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004b3cab
    MOV dword ptr [EAX + 0x20],EDX      ; 004b3caf
    RET                                 ; 004b3cb2
    MOV ECX,dword ptr [EDX]             ; 004b3cb3
        ;   Label: LAB_004b3cb3
    MOV dword ptr [EAX],ECX             ; 004b3cb5
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b3cb7
    MOV dword ptr [EAX + 0x4],ECX       ; 004b3cba
    MOV ECX,dword ptr [EDX + 0x8]       ; 004b3cbd
    MOV dword ptr [EAX + 0x8],ECX       ; 004b3cc0
    JMP 0x004b3c8c                      ; 004b3cc3
        ;   XREF to: 004b3c8c (UNCONDITIONAL_JUMP)  ; LAB_004b3c8c

