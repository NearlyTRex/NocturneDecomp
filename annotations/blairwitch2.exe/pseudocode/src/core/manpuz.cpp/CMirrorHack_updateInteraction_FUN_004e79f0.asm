; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004e79f0(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; UOrientationVector * Stack[0x8]:4   user_orientation
; SPlayerInput *   Stack[0xc]:4   player_control
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e79f0
        ;   Label: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004e79f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e79f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e79f5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e79f9
    MOV EBX,dword ptr [EAX + 0xc]       ; 004e79fd
    TEST EBX,EBX                        ; 004e7a00
    JNZ 0x004e7a31                      ; 004e7a02
        ;   XREF to: 004e7a31 (CONDITIONAL_JUMP)  ; LAB_004e7a31
    CMP dword ptr [EAX + 0x10],0x0      ; 004e7a04
    JNZ 0x004e7a3c                      ; 004e7a08
        ;   XREF to: 004e7a3c (CONDITIONAL_JUMP)  ; LAB_004e7a3c
    LEA EAX,[ECX + 0x30]                ; 004e7a0a
    CMP EAX,EDX                         ; 004e7a0d
    JZ 0x004e7a21                       ; 004e7a0f
        ;   XREF to: 004e7a21 (CONDITIONAL_JUMP)  ; LAB_004e7a21
    MOV EBX,dword ptr [EDX]             ; 004e7a11
    MOV dword ptr [EAX],EBX             ; 004e7a13
    MOV EBX,dword ptr [EDX + 0x4]       ; 004e7a15
    MOV dword ptr [EAX + 0x4],EBX       ; 004e7a18
    MOV EBX,dword ptr [EDX + 0x8]       ; 004e7a1b
    MOV dword ptr [EAX + 0x8],EBX       ; 004e7a1e
    PUSH ECX                            ; 004e7a21
        ;   Label: LAB_004e7a21
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004e7a22
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 004e7a27
    ADD ESP,0x4                         ; 004e7a2c
    POP EBX                             ; 004e7a2f
    RET                                 ; 004e7a30
    MOV dword ptr [EAX + 0xc],0x0       ; 004e7a31
        ;   Label: LAB_004e7a31
    XOR EAX,EAX                         ; 004e7a38
    POP EBX                             ; 004e7a3a
    RET                                 ; 004e7a3b
    MOV dword ptr [EAX + 0x10],EBX      ; 004e7a3c
        ;   Label: LAB_004e7a3c
    XOR EAX,EAX                         ; 004e7a3f
    POP EBX                             ; 004e7a41
    RET                                 ; 004e7a42

