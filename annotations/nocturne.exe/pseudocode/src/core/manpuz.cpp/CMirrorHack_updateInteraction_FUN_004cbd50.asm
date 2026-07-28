; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(CDemonActor *param_1,float *param_2,int param_3)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbd50
        ;   Label: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004cbd50
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cbd51
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cbd55
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cbd59
    MOV EBX,dword ptr [EAX + 0xc]       ; 004cbd5d
    TEST EBX,EBX                        ; 004cbd60
    JNZ 0x004cbd91                      ; 004cbd62
        ;   XREF to: 004cbd91 (CONDITIONAL_JUMP)  ; LAB_004cbd91
    CMP dword ptr [EAX + 0x10],0x0      ; 004cbd64
    JNZ 0x004cbd9c                      ; 004cbd68
        ;   XREF to: 004cbd9c (CONDITIONAL_JUMP)  ; LAB_004cbd9c
    LEA EAX,[ECX + 0x30]                ; 004cbd6a
    CMP EAX,EDX                         ; 004cbd6d
    JZ 0x004cbd81                       ; 004cbd6f
        ;   XREF to: 004cbd81 (CONDITIONAL_JUMP)  ; LAB_004cbd81
    MOV EBX,dword ptr [EDX]             ; 004cbd71
    MOV dword ptr [EAX],EBX             ; 004cbd73
    MOV EBX,dword ptr [EDX + 0x4]       ; 004cbd75
    MOV dword ptr [EAX + 0x4],EBX       ; 004cbd78
    MOV EBX,dword ptr [EDX + 0x8]       ; 004cbd7b
    MOV dword ptr [EAX + 0x8],EBX       ; 004cbd7e
    PUSH ECX                            ; 004cbd81
        ;   Label: LAB_004cbd81
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004cbd82
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 004cbd87
    ADD ESP,0x4                         ; 004cbd8c
    POP EBX                             ; 004cbd8f
    RET                                 ; 004cbd90
    MOV dword ptr [EAX + 0xc],0x0       ; 004cbd91
        ;   Label: LAB_004cbd91
    XOR EAX,EAX                         ; 004cbd98
    POP EBX                             ; 004cbd9a
    RET                                 ; 004cbd9b
    MOV dword ptr [EAX + 0x10],EBX      ; 004cbd9c
        ;   Label: LAB_004cbd9c
    XOR EAX,EAX                         ; 004cbd9f
    POP EBX                             ; 004cbda1
    RET                                 ; 004cbda2

