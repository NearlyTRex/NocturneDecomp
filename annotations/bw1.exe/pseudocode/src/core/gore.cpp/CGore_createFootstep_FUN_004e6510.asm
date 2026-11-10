; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004e6510(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; int              Stack[0x10]:4   surface_type
; int              Stack[0x14]:4   alpha
; EBloodType       Stack[0x18]:4   blood_type
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040c870 at 0040c96d
;
; Referenced Globals:
;   undefined4 DAT_01cf6efc
;   undefined4 DAT_01cf6f00
;
; Called Functions:
;   core_gore.cpp_CFootstep_init_FUN_004e56e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6510
        ;   Label: core_gore.cpp_CGore_createFootstep_FUN_004e6510
    PUSH ESI                            ; 004e6511
    PUSH EDI                            ; 004e6512
    PUSH EBP                            ; 004e6513
    MOV EBP,ESP                         ; 004e6514
    MOV EDX,0x1cf6f04                   ; 004e6516
    MOV ECX,dword ptr [0x01cf6efc]      ; 004e651b | DAT_01cf6efc
    MOV EAX,[0x01cf6efc]                ; 004e6521 | DAT_01cf6efc
    INC ECX                             ; 004e6526
    SHL EAX,0x6                         ; 004e6527
    MOV dword ptr [0x01cf6efc],ECX      ; 004e652a | DAT_01cf6efc
    ADD EDX,EAX                         ; 004e6530
    CMP ECX,0x3e8                       ; 004e6532
    JGE 0x004e657d                      ; 004e6538
        ;   XREF to: 004e657d (CONDITIONAL_JUMP)  ; LAB_004e657d
    MOV EDI,dword ptr [0x01cf6f00]      ; 004e653a | DAT_01cf6f00
        ;   Label: LAB_004e653a
    CMP EDI,0x3e8                       ; 004e6540
    JGE 0x004e6550                      ; 004e6546
        ;   XREF to: 004e6550 (CONDITIONAL_JUMP)  ; LAB_004e6550
    LEA EAX,[EDI + 0x1]                 ; 004e6548
    MOV [0x01cf6f00],EAX                ; 004e654b | DAT_01cf6f00
    MOV ECX,dword ptr [EBP + 0x28]      ; 004e6550
        ;   Label: LAB_004e6550
    PUSH ECX                            ; 004e6553
    MOV EBX,dword ptr [EBP + 0x24]      ; 004e6554
    MOV ESI,dword ptr [EBP + 0x20]      ; 004e6557
    PUSH EBX                            ; 004e655a
    CMP ESI,0xb                         ; 004e655b
    SETZ AL                             ; 004e655e
    AND EAX,0xff                        ; 004e6561
    PUSH EAX                            ; 004e6566
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004e6567
    PUSH EDI                            ; 004e656a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e656b
    PUSH EAX                            ; 004e656e
    PUSH EDX                            ; 004e656f
    CALL core_gore.cpp_CFootstep_init_FUN_004e56e0 ; 004e6570
        ;   XREF to: 004e56e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CFootstep_init_FUN_004e56e0(CFootstep * this_ptr, CVector3f * position, UOrientationVector * orientation, int is_bloody, ...)
    ADD ESP,0x18                        ; 004e6575
    POP EBP                             ; 004e6578
    POP EDI                             ; 004e6579
    POP ESI                             ; 004e657a
    POP EBX                             ; 004e657b
    RET                                 ; 004e657c
    XOR ESI,ESI                         ; 004e657d
        ;   Label: LAB_004e657d
    MOV dword ptr [0x01cf6efc],ESI      ; 004e657f | DAT_01cf6efc
    JMP 0x004e653a                      ; 004e6585
        ;   XREF to: 004e653a (UNCONDITIONAL_JUMP)  ; LAB_004e653a

