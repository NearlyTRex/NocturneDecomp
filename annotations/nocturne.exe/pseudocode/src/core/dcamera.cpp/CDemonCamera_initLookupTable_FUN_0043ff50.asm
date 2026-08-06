; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508515
;
; Referenced Globals:
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_FUN_004401b0
;   core_dcamera.cpp_CDemonCamera_FUN_00446800
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70
;   core_dcamera.cpp_CDemonCamera_init_FUN_00440010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ff50
        ;   Label: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50
    PUSH ESI                            ; 0043ff51
    PUSH EDI                            ; 0043ff52
    PUSH EBP                            ; 0043ff53
    SUB ESP,0x8                         ; 0043ff54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043ff57
    PUSH 0x10000                        ; 0043ff5b
    PUSH EBX                            ; 0043ff60
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70 ; 0043ff61
        ;   XREF to: 00447a70 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70(CDemonCamera * this_ptr, int gamma_value)
    MOV EDX,dword ptr [0x005b7620]      ; 0043ff66 | g_WindowHeight
    ADD ESP,0x8                         ; 0043ff6c
    CMP EDX,0x1e0                       ; 0043ff6f
    JGE 0x00440006                      ; 0043ff75
        ;   XREF to: 00440006 (CONDITIONAL_JUMP)  ; LAB_00440006
    MOV EAX,0xf0                        ; 0043ff7b
    PUSH EAX                            ; 0043ff80
        ;   Label: LAB_0043ff80
    PUSH EBX                            ; 0043ff81
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_00440010 ; 0043ff82
        ;   XREF to: 00440010 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_00440010(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0043ff87
    PUSH 0x0                            ; 0043ff8a
    PUSH 0x0                            ; 0043ff8c
    PUSH EBX                            ; 0043ff8e
    CALL core_dcamera.cpp_CDemonCamera_FUN_004401b0 ; 0043ff8f
        ;   XREF to: 004401b0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_FUN_004401b0(CDemonCamera * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0043ff94
    PUSH EBX                            ; 0043ff97
    CALL core_dcamera.cpp_CDemonCamera_FUN_00446800 ; 0043ff98
        ;   XREF to: 00446800 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_FUN_00446800(CDemonCamera * this_ptr)
    MOV ECX,0x40                        ; 0043ff9d
    ADD ESP,0x4                         ; 0043ffa2
    XOR EBP,EBP                         ; 0043ffa5
    MOV dword ptr [ESP],ECX             ; 0043ffa7
    MOV dword ptr [ESP + 0x4],EBP       ; 0043ffaa
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043ffae
        ;   Label: LAB_0043ffae
    MOV EBX,EBP                         ; 0043ffb2
    MOV EDI,dword ptr [ESP]             ; 0043ffb4
    SHL EBX,0x6                         ; 0043ffb7
    IMUL ECX,EBP,0x0                    ; 0043ffba
    MOV EDX,ECX                         ; 0043ffbd
        ;   Label: LAB_0043ffbd
    MOV EAX,ECX                         ; 0043ffbf
    SAR EDX,0x1f                        ; 0043ffc1
    SHL EDX,0x4                         ; 0043ffc4
    SBB EAX,EDX                         ; 0043ffc7
    SAR EAX,0x4                         ; 0043ffc9
    MOV EDX,EAX                         ; 0043ffcc
    SAR EDX,0x1f                        ; 0043ffce
    SHL EDX,0x2                         ; 0043ffd1
    SBB EAX,EDX                         ; 0043ffd4
    SAR EAX,0x2                         ; 0043ffd6
    INC EBX                             ; 0043ffd9
    ADD ECX,ESI                         ; 0043ffda
    MOV byte ptr [EBX + 0x12cdb57],AL   ; 0043ffdc
    CMP EBX,EDI                         ; 0043ffe2
    JNZ 0x0043ffbd                      ; 0043ffe4
        ;   XREF to: 0043ffbd (CONDITIONAL_JUMP)  ; LAB_0043ffbd
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043ffe6
    MOV ESI,dword ptr [ESP]             ; 0043ffea
    INC EBP                             ; 0043ffed
    INC EDI                             ; 0043ffee
    ADD ESI,0x40                        ; 0043ffef
    MOV dword ptr [ESP + 0x4],EDI       ; 0043fff2
    MOV dword ptr [ESP],ESI             ; 0043fff6
    CMP EBP,0x40                        ; 0043fff9
    JL 0x0043ffae                       ; 0043fffc
        ;   XREF to: 0043ffae (CONDITIONAL_JUMP)  ; LAB_0043ffae
    ADD ESP,0x8                         ; 0043fffe
    POP EBP                             ; 00440001
    POP EDI                             ; 00440002
    POP ESI                             ; 00440003
    POP EBX                             ; 00440004
    RET                                 ; 00440005
    MOV EAX,0x1e0                       ; 00440006
        ;   Label: LAB_00440006
    JMP 0x0043ff80                      ; 0044000b
        ;   XREF to: 0043ff80 (UNCONDITIONAL_JUMP)  ; LAB_0043ff80

