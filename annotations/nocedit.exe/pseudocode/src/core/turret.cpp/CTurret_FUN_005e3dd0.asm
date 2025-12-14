; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_turret.cpp_CTurret_FUN_005e3dd0(CTurret * this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3dd0
        ;   Label: core_turret.cpp_CTurret_FUN_005e3dd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e3dd1
    PUSH EBX                            ; 005e3dd5
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005e3dd6
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0x578]               ; 005e3ddb
    LEA EDX,[EBX + 0x30]                ; 005e3de1
    ADD ESP,0x4                         ; 005e3de4
    CMP EAX,EDX                         ; 005e3de7
    JNZ 0x005e3ded                      ; 005e3de9
        ;   XREF to: 005e3ded (CONDITIONAL_JUMP)  ; LAB_005e3ded
    POP EBX                             ; 005e3deb
    RET                                 ; 005e3dec
    MOV ECX,dword ptr [EDX]             ; 005e3ded
        ;   Label: LAB_005e3ded
    MOV dword ptr [EAX],ECX             ; 005e3def
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e3df1
    MOV dword ptr [EAX + 0x4],ECX       ; 005e3df4
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e3df7
    MOV dword ptr [EAX + 0x8],ECX       ; 005e3dfa
    POP EBX                             ; 005e3dfd
    RET                                 ; 005e3dfe

