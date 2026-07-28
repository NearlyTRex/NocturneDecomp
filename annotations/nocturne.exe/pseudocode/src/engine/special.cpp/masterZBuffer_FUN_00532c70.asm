; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_masterZBuffer_FUN_00532c70(int z_buffer_mode)
;
; Parameters:
; int              Stack[0x4]:4   z_buffer_mode
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50 at 00440d2f
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 at 00440b05
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9de8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532c70 | DAT_01c02594
        ;   Label: engine_special.cpp_masterZBuffer_FUN_00532c70
    JNZ 0x00532c7c                      ; 00532c77
        ;   XREF to: 00532c7c (CONDITIONAL_JUMP)  ; LAB_00532c7c
    XOR EAX,EAX                         ; 00532c79
    RET                                 ; 00532c7b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00532c7c
        ;   Label: LAB_00532c7c
    PUSH ECX                            ; 00532c80
    CALL dword ptr [0x02dc9de8]         ; 00532c81 | DAT_02dc9de8
    ADD ESP,0x4                         ; 00532c87
    RET                                 ; 00532c8a

