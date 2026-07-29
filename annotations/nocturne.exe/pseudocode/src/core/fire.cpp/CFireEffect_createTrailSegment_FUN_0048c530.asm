; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_0048c530(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   size
; float            Stack[0x10]:4   alpha
; float            Stack[0x14]:4   lifetime
; SMRGLTextureBasic * Stack[0x18]:4   texture_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_0048c590 at 0048c654
;
; Referenced Globals:
;   undefined4 DAT_01c676c8
;
; Called Functions:
;   core_fire.cpp_CTrail_activate_FUN_004892c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c530
        ;   Label: core_fire.cpp_CFireEffect_createTrailSegment_FUN_0048c530
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048c531
    PUSH EDX                            ; 0048c535
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048c536
    MOV EDX,dword ptr [0x01c676c8]      ; 0048c53a | DAT_01c676c8
    PUSH dword ptr [ESP + 0x1c]         ; 0048c540
    LEA EAX,[EDX*0x8 + 0x0]             ; 0048c544
    PUSH dword ptr [ESP + 0x1c]         ; 0048c54b
    ADD EAX,EDX                         ; 0048c54f
    PUSH dword ptr [ESP + 0x1c]         ; 0048c551
    SHL EAX,0x2                         ; 0048c555
    PUSH ECX                            ; 0048c558
    ADD EAX,0x1c676cc                   ; 0048c559
    PUSH EAX                            ; 0048c55e
    CALL core_fire.cpp_CTrail_activate_FUN_004892c0 ; 0048c55f
        ;   XREF to: 004892c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_activate_FUN_004892c0(CTrail * this_ptr, CVector3f * position, float size, float alpha, ...)
    MOV EBX,dword ptr [0x01c676c8]      ; 0048c564 | DAT_01c676c8
    INC EBX                             ; 0048c56a
    ADD ESP,0x18                        ; 0048c56b
    MOV dword ptr [0x01c676c8],EBX      ; 0048c56e | DAT_01c676c8
    CMP EBX,0x64                        ; 0048c574
    JGE 0x0048c57b                      ; 0048c577
        ;   XREF to: 0048c57b (CONDITIONAL_JUMP)  ; LAB_0048c57b
    POP EBX                             ; 0048c579
    RET                                 ; 0048c57a
    PUSH EDI                            ; 0048c57b
        ;   Label: LAB_0048c57b
    XOR EDI,EDI                         ; 0048c57c
    MOV dword ptr [0x01c676c8],EDI      ; 0048c57e | DAT_01c676c8
    POP EDI                             ; 0048c584
    POP EBX                             ; 0048c585
    RET                                 ; 0048c586

