; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_004a3a30(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   toss_type
; CVector3f *      Stack[0xc]:4   position
; UOrientationVector * Stack[0x10]:4   orientation
; CVector3f *      Stack[0x14]:4   velocity
; float            Stack[0x18]:4   fuse_time
;
; XREF[4]:
;   core_fire.cpp_CFireEffect_createBindEvilToss_FUN_004a39a0 at 004a39bd
;   core_fire.cpp_CFireEffect_createDiseaseToss_FUN_004a39d0 at 004a39ed
;   core_fire.cpp_CFireEffect_createStormToss_FUN_004a3a00 at 004a3a1d
;   core_fire.cpp_CFireEffect_createToss_FUN_004a3920 at 004a3955
;
; Referenced Globals:
;   undefined4 DAT_01cf61d0
;
; Called Functions:
;   core_fire.cpp_CToss_create_FUN_0049cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3a30
        ;   Label: core_fire.cpp_CFireEffect_allocateToss_FUN_004a3a30
    PUSH ESI                            ; 004a3a31
    PUSH EDI                            ; 004a3a32
    PUSH EBP                            ; 004a3a33
    PUSH dword ptr [ESP + 0x28]         ; 004a3a34
    MOV EBX,dword ptr [0x01cf61d0]      ; 004a3a38 | DAT_01cf61d0
    MOV EDX,dword ptr [ESP + 0x28]      ; 004a3a3e
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a3a42
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a3a49
    SUB EAX,EBX                         ; 004a3a4d
    PUSH EDX                            ; 004a3a4f
    SHL EAX,0x3                         ; 004a3a50
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a3a53
    ADD EAX,EBX                         ; 004a3a57
    PUSH ECX                            ; 004a3a59
    SHL EAX,0x3                         ; 004a3a5a
    PUSH ESI                            ; 004a3a5d
    MOV EDX,EAX                         ; 004a3a5e
    SHL EAX,0x2                         ; 004a3a60
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a3a63
    ADD EAX,EDX                         ; 004a3a67
    PUSH EDI                            ; 004a3a69
    ADD EAX,0x1cf61d4                   ; 004a3a6a
    PUSH EAX                            ; 004a3a6f
    CALL core_fire.cpp_CToss_create_FUN_0049cee0 ; 004a3a70
        ;   XREF to: 0049cee0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_create_FUN_0049cee0(CToss * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    MOV EBP,dword ptr [0x01cf61d0]      ; 004a3a75 | DAT_01cf61d0
    INC EBP                             ; 004a3a7b
    ADD ESP,0x18                        ; 004a3a7c
    MOV dword ptr [0x01cf61d0],EBP      ; 004a3a7f | DAT_01cf61d0
    CMP EBP,0x14                        ; 004a3a85
    JGE 0x004a3a91                      ; 004a3a88
        ;   XREF to: 004a3a91 (CONDITIONAL_JUMP)  ; LAB_004a3a91
    MOV EAX,EBX                         ; 004a3a8a
    POP EBP                             ; 004a3a8c
    POP EDI                             ; 004a3a8d
    POP ESI                             ; 004a3a8e
    POP EBX                             ; 004a3a8f
    RET                                 ; 004a3a90
    XOR EDX,EDX                         ; 004a3a91
        ;   Label: LAB_004a3a91
    MOV dword ptr [0x01cf61d0],EDX      ; 004a3a93 | DAT_01cf61d0
    MOV EAX,EBX                         ; 004a3a99
    POP EBP                             ; 004a3a9b
    POP EDI                             ; 004a3a9c
    POP ESI                             ; 004a3a9d
    POP EBX                             ; 004a3a9e
    RET                                 ; 004a3a9f

