; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; UOrientationVector * Stack[0x8]:4   user_orientation
; SPlayerInput *   Stack[0xc]:4   player_control
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e34d0
        ;   Label: core_turret.cpp_CTurret_updateInteraction_FUN_005e34d0
    PUSH ESI                            ; 005e34d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e34d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005e34d6
    MOV ESI,dword ptr [ESP + 0x14]      ; 005e34da
    CMP dword ptr [ESI + 0x10],0x0      ; 005e34de
    JNZ 0x005e3525                      ; 005e34e2
        ;   XREF to: 005e3525 (CONDITIONAL_JUMP)  ; LAB_005e3525
    LEA EAX,[EBX + 0x30]                ; 005e34e4
    CMP EAX,EDX                         ; 005e34e7
    JZ 0x005e34fb                       ; 005e34e9
        ;   XREF to: 005e34fb (CONDITIONAL_JUMP)  ; LAB_005e34fb
    MOV ECX,dword ptr [EDX]             ; 005e34eb
    MOV dword ptr [EAX],ECX             ; 005e34ed
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e34ef
    MOV dword ptr [EAX + 0x4],ECX       ; 005e34f2
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e34f5
    MOV dword ptr [EAX + 0x8],ECX       ; 005e34f8
    PUSH EDI                            ; 005e34fb
        ;   Label: LAB_005e34fb
    PUSH EBX                            ; 005e34fc
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005e34fd
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0xc]       ; 005e3502
    ADD ESP,0x4                         ; 005e3505
    TEST EDI,EDI                        ; 005e3508
    JZ 0x005e351c                       ; 005e350a
        ;   XREF to: 005e351c (CONDITIONAL_JUMP)  ; LAB_005e351c
    PUSH EBX                            ; 005e350c
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e350d
    CALL dword ptr [EAX + 0xf8]         ; 005e3513
    ADD ESP,0x4                         ; 005e3519
    MOV EAX,0x1                         ; 005e351c
        ;   Label: LAB_005e351c
    POP EDI                             ; 005e3521
    POP ESI                             ; 005e3522
    POP EBX                             ; 005e3523
    RET                                 ; 005e3524
    MOV dword ptr [ESI + 0x10],0x0      ; 005e3525
        ;   Label: LAB_005e3525
    XOR EAX,EAX                         ; 005e352c
    POP ESI                             ; 005e352e
    POP EBX                             ; 005e352f
    RET                                 ; 005e3530

