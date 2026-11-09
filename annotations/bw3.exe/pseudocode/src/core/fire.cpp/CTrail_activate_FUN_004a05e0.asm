; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_activate_FUN_004a05e0(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
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
;   core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0 at 004a3d1f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a05e0
        ;   Label: core_fire.cpp_CTrail_activate_FUN_004a05e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a05e4
    CMP EAX,EDX                         ; 004a05e8
    JNZ 0x004a0613                      ; 004a05ea
        ;   XREF to: 004a0613 (CONDITIONAL_JUMP)  ; LAB_004a0613
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a05ec
        ;   Label: LAB_004a05ec
    MOV dword ptr [EAX + 0xc],EDX       ; 004a05f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a05f3
    MOV dword ptr [EAX + 0x14],EDX      ; 004a05f7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a05fa
    MOV dword ptr [EAX + 0x10],EDX      ; 004a05fe
    MOV dword ptr [EAX + 0x18],EDX      ; 004a0601
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a0604
    MOV dword ptr [EAX + 0x1c],EDX      ; 004a0608
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a060b
    MOV dword ptr [EAX + 0x20],EDX      ; 004a060f
    RET                                 ; 004a0612
    MOV ECX,dword ptr [EDX]             ; 004a0613
        ;   Label: LAB_004a0613
    MOV dword ptr [EAX],ECX             ; 004a0615
    MOV ECX,dword ptr [EDX + 0x4]       ; 004a0617
    MOV dword ptr [EAX + 0x4],ECX       ; 004a061a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004a061d
    MOV dword ptr [EAX + 0x8],ECX       ; 004a0620
    JMP 0x004a05ec                      ; 004a0623
        ;   XREF to: 004a05ec (UNCONDITIONAL_JUMP)  ; LAB_004a05ec

