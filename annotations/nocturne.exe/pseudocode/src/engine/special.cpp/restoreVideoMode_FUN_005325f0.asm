; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_restoreVideoMode_FUN_005325f0(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005533a0 at 005533b8
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70 at 00553b84
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9d88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005325f0
        ;   Label: engine_special.cpp_restoreVideoMode_FUN_005325f0
    CMP dword ptr [0x01c02594],0x0      ; 005325f1 | g_UseExternalRenderer
    JZ 0x0053260c                       ; 005325f8
        ;   XREF to: 0053260c (CONDITIONAL_JUMP)  ; LAB_0053260c
    XOR ECX,ECX                         ; 005325fa
    MOV EBX,dword ptr [0x02dc9d88]      ; 005325fc | DAT_02dc9d88
    MOV dword ptr [0x01c02594],ECX      ; 00532602 | g_UseExternalRenderer
    TEST EBX,EBX                        ; 00532608
    JNZ 0x00532610                      ; 0053260a
        ;   XREF to: 00532610 (CONDITIONAL_JUMP)  ; LAB_00532610
    XOR EAX,EAX                         ; 0053260c
        ;   Label: LAB_0053260c
    POP EBX                             ; 0053260e
    RET                                 ; 0053260f
    CALL dword ptr [0x02dc9d88]         ; 00532610 | DAT_02dc9d88
        ;   Label: LAB_00532610
    POP EBX                             ; 00532616
    RET                                 ; 00532617

