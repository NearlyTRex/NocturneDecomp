; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_CTrigger_onLaserHit_FUN_00548530(CDemonActor *param_1,SLaserInfo *param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548530
        ;   Label: core_trigger.cpp_CTrigger_onLaserHit_FUN_00548530
    PUSH ESI                            ; 00548531
    MOV ESI,dword ptr [ESP + 0xc]       ; 00548532
    MOV EBX,dword ptr [ESP + 0x10]      ; 00548536
    PUSH EBX                            ; 0054853a
    PUSH ESI                            ; 0054853b
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10 ; 0054853c
        ;   XREF to: 0040ab10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_0040ab10(CDemonActor * this_ptr, SLaserInfo * laser_info)
    MOV EDX,dword ptr [ESI + 0x16c]     ; 00548541
    ADD ESP,0x8                         ; 00548547
    CMP EDX,0x5                         ; 0054854a
    JNZ 0x0054855a                      ; 0054854d
        ;   XREF to: 0054855a (CONDITIONAL_JUMP)  ; LAB_0054855a
    MOV ECX,dword ptr [ESI + 0x2ec]     ; 0054854f
    CMP ECX,dword ptr [EBX + 0x8]       ; 00548555
    JZ 0x00548571                       ; 00548558
        ;   XREF to: 00548571 (CONDITIONAL_JUMP)  ; LAB_00548571
    MOV dword ptr [EBX + 0x50],0x0      ; 0054855a
        ;   Label: LAB_0054855a
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 00548561
    MOV EAX,dword ptr [EBX + 0x44]      ; 00548568
    MOV dword ptr [EBX + 0x4c],EAX      ; 0054856b
    POP ESI                             ; 0054856e
    POP EBX                             ; 0054856f
    RET                                 ; 00548570
    MOV dword ptr [ESI + 0x2e8],0x1     ; 00548571
        ;   Label: LAB_00548571
    JMP 0x0054855a                      ; 0054857b
        ;   XREF to: 0054855a (UNCONDITIONAL_JUMP)  ; LAB_0054855a

