; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   size
; float            Stack[0x10]:4   alpha
; float            Stack[0x14]:4   lifetime
; SMRGLTextureBasic * Stack[0x18]:4   texture_ptr
;
; XREF[2]:
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00442bee
;   core_fire.cpp_CFireEffect_createTrailFromPoints_FUN_004a3d50 at 004a3e19
;
; Referenced Globals:
;   undefined4 DAT_01d01ab0
;
; Called Functions:
;   core_fire.cpp_CTrail_activate_FUN_004a05e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3cf0
        ;   Label: core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a3cf1
    PUSH EDX                            ; 004a3cf5
    MOV ECX,dword ptr [ESP + 0x10]      ; 004a3cf6
    MOV EDX,dword ptr [0x01d01ab0]      ; 004a3cfa | DAT_01d01ab0
    PUSH dword ptr [ESP + 0x1c]         ; 004a3d00
    LEA EAX,[EDX*0x8 + 0x0]             ; 004a3d04
    PUSH dword ptr [ESP + 0x1c]         ; 004a3d0b
    ADD EAX,EDX                         ; 004a3d0f
    PUSH dword ptr [ESP + 0x1c]         ; 004a3d11
    SHL EAX,0x2                         ; 004a3d15
    PUSH ECX                            ; 004a3d18
    ADD EAX,0x1d01ab4                   ; 004a3d19
    PUSH EAX                            ; 004a3d1e
    CALL core_fire.cpp_CTrail_activate_FUN_004a05e0 ; 004a3d1f
        ;   XREF to: 004a05e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_activate_FUN_004a05e0(CTrail * this_ptr, CVector3f * position, float size, float alpha, ...)
    MOV EBX,dword ptr [0x01d01ab0]      ; 004a3d24 | DAT_01d01ab0
    INC EBX                             ; 004a3d2a
    ADD ESP,0x18                        ; 004a3d2b
    MOV dword ptr [0x01d01ab0],EBX      ; 004a3d2e | DAT_01d01ab0
    CMP EBX,0x64                        ; 004a3d34
    JGE 0x004a3d3b                      ; 004a3d37
        ;   XREF to: 004a3d3b (CONDITIONAL_JUMP)  ; LAB_004a3d3b
    POP EBX                             ; 004a3d39
    RET                                 ; 004a3d3a
    PUSH EDI                            ; 004a3d3b
        ;   Label: LAB_004a3d3b
    XOR EDI,EDI                         ; 004a3d3c
    MOV dword ptr [0x01d01ab0],EDI      ; 004a3d3e | DAT_01d01ab0
    POP EDI                             ; 004a3d44
    POP EBX                             ; 004a3d45
    RET                                 ; 004a3d46

