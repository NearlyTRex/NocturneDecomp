; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0049e5d0(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)
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
;   core_fire.cpp_CFireEffect_createToss_FUN_0049e560 at 0049e595
;
; Referenced Globals:
;   undefined4 DAT_01c976fc
;
; Called Functions:
;   core_fire.cpp_FUN_004992b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e5d0
        ;   Label: core_fire.cpp_CFireEffect_allocateToss_FUN_0049e5d0
    PUSH ESI                            ; 0049e5d1
    PUSH EDI                            ; 0049e5d2
    PUSH EBP                            ; 0049e5d3
    MOV EBX,dword ptr [0x01c976fc]      ; 0049e5d4 | DAT_01c976fc
    IMUL EAX,EBX,0x3e4                  ; 0049e5da
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049e5e0
    PUSH dword ptr [ESP + 0x28]         ; 0049e5e4
    PUSH EDX                            ; 0049e5e8
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049e5e9
    PUSH ECX                            ; 0049e5ed
    MOV ESI,dword ptr [ESP + 0x28]      ; 0049e5ee
    PUSH ESI                            ; 0049e5f2
    MOV EDI,dword ptr [ESP + 0x28]      ; 0049e5f3
    PUSH EDI                            ; 0049e5f7
    ADD EAX,0x1c97700                   ; 0049e5f8
    PUSH EAX                            ; 0049e5fd
    CALL core_fire.cpp_FUN_004992b0     ; 0049e5fe
        ;   XREF to: 004992b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004992b0()
    MOV EBP,dword ptr [0x01c976fc]      ; 0049e603 | DAT_01c976fc
    INC EBP                             ; 0049e609
    ADD ESP,0x18                        ; 0049e60a
    MOV dword ptr [0x01c976fc],EBP      ; 0049e60d | DAT_01c976fc
    CMP EBP,0x14                        ; 0049e613
    JGE 0x0049e61f                      ; 0049e616
        ;   XREF to: 0049e61f (CONDITIONAL_JUMP)  ; LAB_0049e61f
    MOV EAX,EBX                         ; 0049e618
    POP EBP                             ; 0049e61a
    POP EDI                             ; 0049e61b
    POP ESI                             ; 0049e61c
    POP EBX                             ; 0049e61d
    RET                                 ; 0049e61e
    XOR EDX,EDX                         ; 0049e61f
        ;   Label: LAB_0049e61f
    MOV dword ptr [0x01c976fc],EDX      ; 0049e621 | DAT_01c976fc
    MOV EAX,EBX                         ; 0049e627
    POP EBP                             ; 0049e629
    POP EDI                             ; 0049e62a
    POP ESI                             ; 0049e62b
    POP EBX                             ; 0049e62c
    RET                                 ; 0049e62d

