; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_0049ce70(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_FUN_004c8dd0
;   core_weapon.cpp_CWeapon_fire_FUN_005ee6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ce70
        ;   Label: core_dynamite.cpp_CDynamite_fire_FUN_0049ce70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049ce71
    PUSH EBX                            ; 0049ce75
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 0049ce76
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0049ce7b
    TEST EAX,EAX                        ; 0049ce7e
    JNZ 0x0049ce84                      ; 0049ce80
        ;   XREF to: 0049ce84 (CONDITIONAL_JUMP)  ; LAB_0049ce84
    POP EBX                             ; 0049ce82
    RET                                 ; 0049ce83
    PUSH ESI                            ; 0049ce84
        ;   Label: LAB_0049ce84
    MOV EDX,dword ptr [EBX + 0x588]     ; 0049ce85
    PUSH EDX                            ; 0049ce8b
    LEA ESI,[EBX + 0x57c]               ; 0049ce8c
    PUSH dword ptr [EBX + 0x578]        ; 0049ce92
    PUSH ESI                            ; 0049ce98
    LEA EAX,[EBX + 0x30]                ; 0049ce99
    PUSH EAX                            ; 0049ce9c
    LEA EAX,[EBX + 0x20]                ; 0049ce9d
    PUSH EAX                            ; 0049cea0
    MOV ECX,dword ptr [0x0067a3d0]      ; 0049cea1 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 0049cea7 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_FUN_004c8dd0 ; 0049cea8
        ;   XREF to: 004c8dd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8dd0(CFireEffect * this_ptr)
    MOV dword ptr [EBX + 0x588],0x0     ; 0049cead
    MOV dword ptr [EBX + 0x578],0xbf800000 ; 0049ceb7
    MOV EAX,0x1                         ; 0049cec1
    MOV dword ptr [ESI + 0x8],0x0       ; 0049cec6
    ADD ESP,0x18                        ; 0049cecd
    MOV EDX,dword ptr [ESI + 0x8]       ; 0049ced0
    MOV dword ptr [ESI + 0x4],EDX       ; 0049ced3
    MOV EDX,dword ptr [ESI + 0x4]       ; 0049ced6
    MOV dword ptr [ESI],EDX             ; 0049ced9
    POP ESI                             ; 0049cedb
    POP EBX                             ; 0049cedc
    RET                                 ; 0049cedd

