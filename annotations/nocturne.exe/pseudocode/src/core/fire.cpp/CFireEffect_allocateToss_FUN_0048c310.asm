; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310(CFireEffect *this_ptr,int toss_type,CVector3f *position,UOrientationVector *orientation,CVector3f *velocity,float fuse_time)
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
;   core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0 at 0048c2d5
;
; Referenced Globals:
;   undefined4 DAT_01c5d820
;
; Called Functions:
;   core_fire.cpp_CToss_create_FUN_004873b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c310
        ;   Label: core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310
    PUSH ESI                            ; 0048c311
    PUSH EDI                            ; 0048c312
    PUSH EBP                            ; 0048c313
    MOV EBX,dword ptr [0x01c5d820]      ; 0048c314 | DAT_01c5d820
    IMUL EAX,EBX,0x3e4                  ; 0048c31a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0048c320
    PUSH dword ptr [ESP + 0x28]         ; 0048c324
    PUSH EDX                            ; 0048c328
    MOV ECX,dword ptr [ESP + 0x28]      ; 0048c329
    PUSH ECX                            ; 0048c32d
    MOV ESI,dword ptr [ESP + 0x28]      ; 0048c32e
    PUSH ESI                            ; 0048c332
    MOV EDI,dword ptr [ESP + 0x28]      ; 0048c333
    PUSH EDI                            ; 0048c337
    ADD EAX,0x1c5d824                   ; 0048c338
    PUSH EAX                            ; 0048c33d
    CALL core_fire.cpp_CToss_create_FUN_004873b0 ; 0048c33e
        ;   XREF to: 004873b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_create_FUN_004873b0(CToss * this_ptr, int toss_type, CVector3f * position, UOrientationVector * orientation, ...)
    MOV EBP,dword ptr [0x01c5d820]      ; 0048c343 | DAT_01c5d820
    INC EBP                             ; 0048c349
    ADD ESP,0x18                        ; 0048c34a
    MOV dword ptr [0x01c5d820],EBP      ; 0048c34d | DAT_01c5d820
    CMP EBP,0x14                        ; 0048c353
    JGE 0x0048c35f                      ; 0048c356
        ;   XREF to: 0048c35f (CONDITIONAL_JUMP)  ; LAB_0048c35f
    MOV EAX,EBX                         ; 0048c358
    POP EBP                             ; 0048c35a
    POP EDI                             ; 0048c35b
    POP ESI                             ; 0048c35c
    POP EBX                             ; 0048c35d
    RET                                 ; 0048c35e
    XOR EDX,EDX                         ; 0048c35f
        ;   Label: LAB_0048c35f
    MOV dword ptr [0x01c5d820],EDX      ; 0048c361 | DAT_01c5d820
    MOV EAX,EBX                         ; 0048c367
    POP EBP                             ; 0048c369
    POP EDI                             ; 0048c36a
    POP ESI                             ; 0048c36b
    POP EBX                             ; 0048c36c
    RET                                 ; 0048c36d

