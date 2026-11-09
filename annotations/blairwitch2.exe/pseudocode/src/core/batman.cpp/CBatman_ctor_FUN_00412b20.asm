; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00412b20(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batman.cpp_factoryFuncBatman_FUN_00412af0 at 00412b03
;
; Referenced Globals:
;   undefined4 DAT_005f3090
;   undefined4 DAT_005f3094
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412b20
        ;   Label: core_batman.cpp_CBatman_ctor_FUN_00412b20
    PUSH ESI                            ; 00412b21
    PUSH EDI                            ; 00412b22
    MOV EDX,dword ptr [ESP + 0x10]      ; 00412b23
    PUSH EDX                            ; 00412b27
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 00412b28
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00412b2d
    MOV EBX,EAX                         ; 00412b30
    PUSH 0x5cb966                       ; 00412b32
    ADD EAX,0x2b4                       ; 00412b37
    MOV ESI,0x5cb971                    ; 00412b3c
    PUSH EAX                            ; 00412b41
    MOV dword ptr [EAX + -0x4],0x5f30a4 ; 00412b42
    LEA EDI,[EBX + 0x10af8]             ; 00412b49
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00412b4f
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005f3090]          ; 00412b54 | DAT_005f3090
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 00412b5a
    FLD float ptr [0x005f3094]          ; 00412b64 | DAT_005f3094
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 00412b6a
    ADD ESP,0x8                         ; 00412b74
    FXCH                                ; 00412b77
    FSTP float ptr [EBX + 0x3438]       ; 00412b79
    FSTP float ptr [EBX + 0x343c]       ; 00412b7f
    PUSH EDI                            ; 00412b85
    MOV AL,byte ptr [ESI]               ; 00412b86
        ;   Label: LAB_00412b86
    MOV byte ptr [EDI],AL               ; 00412b88
    CMP AL,0x0                          ; 00412b8a
    JZ 0x00412b9e                       ; 00412b8c
        ;   XREF to: 00412b9e (CONDITIONAL_JUMP)  ; LAB_00412b9e
    MOV AL,byte ptr [ESI + 0x1]         ; 00412b8e
    ADD ESI,0x2                         ; 00412b91
    MOV byte ptr [EDI + 0x1],AL         ; 00412b94
    ADD EDI,0x2                         ; 00412b97
    CMP AL,0x0                          ; 00412b9a
    JNZ 0x00412b86                      ; 00412b9c
        ;   XREF to: 00412b86 (CONDITIONAL_JUMP)  ; LAB_00412b86
    POP EDI                             ; 00412b9e
        ;   Label: LAB_00412b9e
    MOV dword ptr [EBX + 0x10b94],0x0   ; 00412b9f
    LEA EAX,[EBX + 0x10b9c]             ; 00412ba9
    MOV dword ptr [EBX + 0x10b98],0x0   ; 00412baf
    MOV dword ptr [EAX + 0x8],0x0       ; 00412bb9
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412bc0
    MOV dword ptr [EAX + 0x4],EDX       ; 00412bc3
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412bc6
    MOV dword ptr [EAX],EDX             ; 00412bc9
    MOV EAX,EBX                         ; 00412bcb
    POP EDI                             ; 00412bcd
    POP ESI                             ; 00412bce
    POP EBX                             ; 00412bcf
    RET                                 ; 00412bd0

