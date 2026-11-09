; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004b0ef0(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004ad640 at 004adeb0
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ef0
        ;   Label: core_gabriela.cpp_FUN_004b0ef0
    PUSH ESI                            ; 004b0ef1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b0ef2
    PUSH ESI                            ; 004b0ef6
    MOV EDX,dword ptr [0x0061b5a8]      ; 004b0ef7 | g_CDemonSetPtr
    PUSH EDX                            ; 004b0efd | g_CDemonSetInstance
    LEA EBX,[ESI + 0x2437c]             ; 004b0efe
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004b0f04
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x468]     ; 004b0f09
    ADD ESP,0x8                         ; 004b0f0f
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004b0f12
    PUSH EAX                            ; 004b0f19
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b0f1a
    CALL dword ptr [EDX + 0xec]         ; 004b0f20
    ADD ESP,0x4                         ; 004b0f26
    TEST EAX,EAX                        ; 004b0f29
    JZ 0x004b0f4d                       ; 004b0f2b
        ;   XREF to: 004b0f4d (CONDITIONAL_JUMP)  ; LAB_004b0f4d
    MOV EAX,dword ptr [EBX + 0x468]     ; 004b0f2d
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004b0f33
    CMP dword ptr [EAX + 0x438],0x1     ; 004b0f3a
    JNZ 0x004b0f4d                      ; 004b0f41
        ;   XREF to: 004b0f4d (CONDITIONAL_JUMP)  ; LAB_004b0f4d
    MOV dword ptr [ESI + 0x25678],0x3f800000 ; 004b0f43
    MOV EBX,dword ptr [0x0061b5a8]      ; 004b0f4d | g_CDemonSetPtr
        ;   Label: LAB_004b0f4d
    PUSH EBX                            ; 004b0f53 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004b0f54
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b0f59
    MOV dword ptr [ESI + 0x25658],0x0   ; 004b0f5c
    POP ESI                             ; 004b0f66
    POP EBX                             ; 004b0f67
    RET                                 ; 004b0f68

