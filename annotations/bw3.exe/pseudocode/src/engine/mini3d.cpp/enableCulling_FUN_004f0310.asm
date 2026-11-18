; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_enableCulling_FUN_004f0310(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   int g_INT_01d76cf8
;   void* g_PTR_02cf60ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0310
        ;   Label: engine_mini3d.cpp_enableCulling_FUN_004f0310
    MOV EDX,dword ptr [0x02cf60ec]      ; 004f0314 | g_PTR_02cf60ec
    MOV [0x01d76cf8],EAX                ; 004f031a | g_INT_01d76cf8
    TEST EDX,EDX                        ; 004f031f
    JZ 0x004f032c                       ; 004f0321
        ;   XREF to: 004f032c (CONDITIONAL_JUMP)  ; LAB_004f032c
    CMP dword ptr [0x01c6cee8],0x0      ; 004f0323 | g_INT_01c6cee8
    JNZ 0x004f032d                      ; 004f032a
        ;   XREF to: 004f032d (CONDITIONAL_JUMP)  ; LAB_004f032d
    RET                                 ; 004f032c
        ;   Label: LAB_004f032c
    PUSH EAX                            ; 004f032d
        ;   Label: LAB_004f032d
    CALL dword ptr [0x02cf60ec]         ; 004f032e | g_PTR_02cf60ec
    ADD ESP,0x4                         ; 004f0334
    RET                                 ; 004f0337

