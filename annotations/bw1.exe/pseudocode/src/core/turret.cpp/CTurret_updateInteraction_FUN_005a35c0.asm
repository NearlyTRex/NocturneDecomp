; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005a35c0(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; UOrientationVector * Stack[0x8]:4   user_orientation
; SPlayerInput *   Stack[0xc]:4   player_control
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a35c0
        ;   Label: core_turret.cpp_CTurret_updateInteraction_FUN_005a35c0
    PUSH ESI                            ; 005a35c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a35c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a35c6
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a35ca
    CMP dword ptr [ESI + 0x10],0x0      ; 005a35ce
    JNZ 0x005a3615                      ; 005a35d2
        ;   XREF to: 005a3615 (CONDITIONAL_JUMP)  ; LAB_005a3615
    LEA EAX,[EBX + 0x30]                ; 005a35d4
    CMP EAX,EDX                         ; 005a35d7
    JZ 0x005a35eb                       ; 005a35d9
        ;   XREF to: 005a35eb (CONDITIONAL_JUMP)  ; LAB_005a35eb
    MOV ECX,dword ptr [EDX]             ; 005a35db
    MOV dword ptr [EAX],ECX             ; 005a35dd
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a35df
    MOV dword ptr [EAX + 0x4],ECX       ; 005a35e2
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a35e5
    MOV dword ptr [EAX + 0x8],ECX       ; 005a35e8
    PUSH EDI                            ; 005a35eb
        ;   Label: LAB_005a35eb
    PUSH EBX                            ; 005a35ec
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 005a35ed
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0xc]       ; 005a35f2
    ADD ESP,0x4                         ; 005a35f5
    TEST EDI,EDI                        ; 005a35f8
    JZ 0x005a360c                       ; 005a35fa
        ;   XREF to: 005a360c (CONDITIONAL_JUMP)  ; LAB_005a360c
    PUSH EBX                            ; 005a35fc
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a35fd
    CALL dword ptr [EAX + 0xe4]         ; 005a3603
    ADD ESP,0x4                         ; 005a3609
    MOV EAX,0x1                         ; 005a360c
        ;   Label: LAB_005a360c
    POP EDI                             ; 005a3611
    POP ESI                             ; 005a3612
    POP EBX                             ; 005a3613
    RET                                 ; 005a3614
    MOV dword ptr [ESI + 0x10],0x0      ; 005a3615
        ;   Label: LAB_005a3615
    XOR EAX,EAX                         ; 005a361c
    POP ESI                             ; 005a361e
    POP EBX                             ; 005a361f
    RET                                 ; 005a3620

