; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMooCow * __cdecl core_moocow_cpp_CMooCow_ctor_FUN_004f8b40(CMooCow *this_ptr)
;
; Parameters:
; CMooCow *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_moocow.cpp_factoryFuncMooCow_FUN_004f8b10 at 004f8b23
;
; Referenced Globals:
;   undefined4 DAT_005e2a38
;   undefined4 DAT_005e2a3c
;
; Called Functions:
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8b40
        ;   Label: core_moocow.cpp_CMooCow_ctor_FUN_004f8b40
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8b41
    PUSH EDX                            ; 004f8b45
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 ; 004f8b46
        ;   XREF to: 0042ac20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042ac20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f8b4b
    PUSH 0x5c916c                       ; 004f8b4e
    MOV EBX,EAX                         ; 004f8b53
    ADD EAX,0x158                       ; 004f8b55
    PUSH EAX                            ; 004f8b5a
    MOV dword ptr [EAX + -0x4],0x5e2a44 ; 004f8b5b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 004f8b62
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3fe00000 ; 004f8b67
    FLD float ptr [0x005e2a38]          ; 004f8b71 | DAT_005e2a38
    MOV dword ptr [EBX + 0x3270],0x40600000 ; 004f8b77
    FLD float ptr [0x005e2a3c]          ; 004f8b81 | DAT_005e2a3c
    MOV dword ptr [EBX + 0xcdd4],0x0    ; 004f8b87
    ADD ESP,0x8                         ; 004f8b91
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 004f8b94
    MOV EAX,EBX                         ; 004f8b9e
    FXCH                                ; 004f8ba0
    FSTP float ptr [EBX + 0x3274]       ; 004f8ba2
    FSTP float ptr [EBX + 0x3278]       ; 004f8ba8
    POP EBX                             ; 004f8bae
    RET                                 ; 004f8baf

