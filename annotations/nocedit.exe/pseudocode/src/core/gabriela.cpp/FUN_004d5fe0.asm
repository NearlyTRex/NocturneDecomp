; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d5fe0()
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004d2ea0 at 004d366c
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5fe0
        ;   Label: core_gabriela.cpp_FUN_004d5fe0
    PUSH ESI                            ; 004d5fe1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d5fe2
    PUSH ESI                            ; 004d5fe6
    MOV EDX,dword ptr [0x006810c8]      ; 004d5fe7 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 004d5fed | CDemonSet g_CDemonSetInstance
    LEA EBX,[ESI + 0x1f738]             ; 004d5fee
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d5ff4 | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d5ff9
    MOV EAX,dword ptr [EBX + 0x330]     ; 004d5ffc
    PUSH EAX                            ; 004d6002
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d6003
    CALL dword ptr [EDX + 0xf8]         ; 004d6009
    ADD ESP,0x4                         ; 004d600f
    TEST EAX,EAX                        ; 004d6012
    JZ 0x004d602f                       ; 004d6014 | LAB_004d602f
        ;   XREF to: 004d602f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x330]     ; 004d6016
    CMP dword ptr [EAX + 0x2dc],0x1     ; 004d601c
    JNZ 0x004d602f                      ; 004d6023 | LAB_004d602f
        ;   XREF to: 004d602f (CONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x1fc0c],0x3f800000 ; 004d6025
    MOV EBX,dword ptr [0x006810c8]      ; 004d602f | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004d602f
    PUSH EBX                            ; 004d6035 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 004d6036 | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d603b
    MOV dword ptr [ESI + 0x1fbec],0x0   ; 004d603e
    POP ESI                             ; 004d6048
    POP EBX                             ; 004d6049
    RET                                 ; 004d604a

