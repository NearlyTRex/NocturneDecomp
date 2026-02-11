; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_gore_cpp_CBloodParticle_onCollision_FUN_004ec290 (CBloodParticle *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
;
; Referenced Globals:
;   double DOUBLE_0062e302 = 0.900000000000000
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_gore.cpp_CGore_FUN_004edb40
;   core_gore.cpp_CGore_FUN_004edb70
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ec290
        ;   Label: core_gore.cpp_CBloodParticle_onCollision_FUN_004ec290
    PUSH EBP                            ; 004ec291
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ec292
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ec296
    FLD float ptr [ECX + 0x4]           ; 004ec29a
    FCOMP double ptr [0x0062e302]       ; 004ec29d | DOUBLE_0062e302
    FNSTSW AX                           ; 004ec2a3
    SAHF                                ; 004ec2a5
    JBE 0x004ec2c4                      ; 004ec2a6
        ;   XREF to: 004ec2c4 (CONDITIONAL_JUMP)  ; LAB_004ec2c4
    MOV EDI,dword ptr [EDX + 0x38]      ; 004ec2a8
    PUSH EDI                            ; 004ec2ab
    PUSH EDX                            ; 004ec2ac
    MOV EBP,dword ptr [0x0067b9a0]      ; 004ec2ad | g_CGorePtr
    PUSH EBP                            ; 004ec2b3 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004edb40 ; 004ec2b4
        ;   XREF to: 004edb40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004edb40(CGore * this_ptr)
    ADD ESP,0xc                         ; 004ec2b9
    MOV EAX,0x1                         ; 004ec2bc
    POP EBP                             ; 004ec2c1
    POP EDI                             ; 004ec2c2
    RET                                 ; 004ec2c3
    PUSH ESI                            ; 004ec2c4
        ;   Label: LAB_004ec2c4
    PUSH EBX                            ; 004ec2c5
    MOV EBX,dword ptr [EDX + 0x38]      ; 004ec2c6
    PUSH EBX                            ; 004ec2c9
    PUSH ECX                            ; 004ec2ca
    PUSH EDX                            ; 004ec2cb
    MOV ESI,dword ptr [0x0067b9a0]      ; 004ec2cc | g_CGorePtr
    PUSH ESI                            ; 004ec2d2 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004edb70 ; 004ec2d3
        ;   XREF to: 004edb70 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004edb70(CGore * this_ptr)
    ADD ESP,0x10                        ; 004ec2d8
    POP EBX                             ; 004ec2db
    POP ESI                             ; 004ec2dc
    MOV EAX,0x1                         ; 004ec2dd
    POP EBP                             ; 004ec2e2
    POP EDI                             ; 004ec2e3
    RET                                 ; 004ec2e4

