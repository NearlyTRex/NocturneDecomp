; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_activate_FUN_004892c0(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
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
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530 at 0048c55f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004892c0
        ;   Label: core_fire.cpp_CTrail_activate_FUN_004892c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004892c4
    CMP EAX,EDX                         ; 004892c8
    JNZ 0x004892f3                      ; 004892ca
        ;   XREF to: 004892f3 (CONDITIONAL_JUMP)  ; LAB_004892f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004892cc
        ;   Label: LAB_004892cc
    MOV dword ptr [EAX + 0xc],EDX       ; 004892d0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004892d3
    MOV dword ptr [EAX + 0x14],EDX      ; 004892d7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004892da
    MOV dword ptr [EAX + 0x10],EDX      ; 004892de
    MOV dword ptr [EAX + 0x18],EDX      ; 004892e1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004892e4
    MOV dword ptr [EAX + 0x1c],EDX      ; 004892e8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004892eb
    MOV dword ptr [EAX + 0x20],EDX      ; 004892ef
    RET                                 ; 004892f2
    MOV ECX,dword ptr [EDX]             ; 004892f3
        ;   Label: LAB_004892f3
    MOV dword ptr [EAX],ECX             ; 004892f5
    MOV ECX,dword ptr [EDX + 0x4]       ; 004892f7
    MOV dword ptr [EAX + 0x4],ECX       ; 004892fa
    MOV ECX,dword ptr [EDX + 0x8]       ; 004892fd
    MOV dword ptr [EAX + 0x8],ECX       ; 00489300
    JMP 0x004892cc                      ; 00489303
        ;   XREF to: 004892cc (UNCONDITIONAL_JUMP)  ; LAB_004892cc

