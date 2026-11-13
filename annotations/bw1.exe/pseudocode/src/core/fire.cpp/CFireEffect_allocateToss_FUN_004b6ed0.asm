; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004b6ed0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   toss_type
; CVector3f *      Stack[0xc]:4   position
; UOrientationVector * Stack[0x10]:4   orientation
; CVector3f *      Stack[0x14]:4   velocity
; float            Stack[0x18]:4   fuse_time
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createToss_FUN_004b6e60 at 004b6e95
;
; Referenced Globals:
;   undefined4 DAT_01cb0188
;
; Called Functions:
;   core_fire.cpp_CToss_create_FUN_004b1c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6ed0
        ;   Label: core_fire.cpp_CFireEffect_allocateToss_FUN_004b6ed0
    PUSH ESI                            ; 004b6ed1
    PUSH EDI                            ; 004b6ed2
    PUSH EBP                            ; 004b6ed3
    MOV EBX,dword ptr [0x01cb0188]      ; 004b6ed4 | DAT_01cb0188
    IMUL EAX,EBX,0x3e4                  ; 004b6eda
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b6ee0
    PUSH dword ptr [ESP + 0x28]         ; 004b6ee4
    PUSH EDX                            ; 004b6ee8
    MOV ECX,dword ptr [ESP + 0x28]      ; 004b6ee9
    PUSH ECX                            ; 004b6eed
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b6eee
    PUSH ESI                            ; 004b6ef2
    MOV EDI,dword ptr [ESP + 0x28]      ; 004b6ef3
    PUSH EDI                            ; 004b6ef7
    ADD EAX,0x1cb018c                   ; 004b6ef8
    PUSH EAX                            ; 004b6efd
    CALL core_fire.cpp_CToss_create_FUN_004b1c50 ; 004b6efe
        ;   XREF to: 004b1c50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_create_FUN_004b1c50(CToss * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    MOV EBP,dword ptr [0x01cb0188]      ; 004b6f03 | DAT_01cb0188
    INC EBP                             ; 004b6f09
    ADD ESP,0x18                        ; 004b6f0a
    MOV dword ptr [0x01cb0188],EBP      ; 004b6f0d | DAT_01cb0188
    CMP EBP,0x14                        ; 004b6f13
    JGE 0x004b6f1f                      ; 004b6f16
        ;   XREF to: 004b6f1f (CONDITIONAL_JUMP)  ; LAB_004b6f1f
    MOV EAX,EBX                         ; 004b6f18
    POP EBP                             ; 004b6f1a
    POP EDI                             ; 004b6f1b
    POP ESI                             ; 004b6f1c
    POP EBX                             ; 004b6f1d
    RET                                 ; 004b6f1e
    XOR EDX,EDX                         ; 004b6f1f
        ;   Label: LAB_004b6f1f
    MOV dword ptr [0x01cb0188],EDX      ; 004b6f21 | DAT_01cb0188
    MOV EAX,EBX                         ; 004b6f27
    POP EBP                             ; 004b6f29
    POP EDI                             ; 004b6f2a
    POP ESI                             ; 004b6f2b
    POP EBX                             ; 004b6f2c
    RET                                 ; 004b6f2d

