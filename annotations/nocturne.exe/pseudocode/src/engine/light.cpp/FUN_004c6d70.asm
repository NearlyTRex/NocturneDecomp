; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_light_cpp_FUN_004c6d70(void)
;
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_004c6a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6d70
        ;   Label: engine_light.cpp_FUN_004c6d70
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c6d71
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c6d75
    PUSH EDX                            ; 004c6d78
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c6d79
    PUSH ECX                            ; 004c6d7c
    MOV EBX,dword ptr [EAX]             ; 004c6d7d
    PUSH EBX                            ; 004c6d7f
    CALL engine_light.cpp_calculatePhongLighting_FUN_004c6a70 ; 004c6d80
        ;   XREF to: 004c6a70 (UNCONDITIONAL_CALL)  ; undefined engine_light.cpp_calculatePhongLighting_FUN_004c6a70()
    ADD ESP,0xc                         ; 004c6d85
    POP EBX                             ; 004c6d88
    RET                                 ; 004c6d89

