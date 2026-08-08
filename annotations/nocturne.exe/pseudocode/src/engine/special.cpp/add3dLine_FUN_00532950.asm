; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_add3dLine_FUN_00532950(void *start_point,void *end_point,int line_style)
;
; Parameters:
; void *           Stack[0x4]:4   start_point
; void *           Stack[0x8]:4   end_point
; int              Stack[0xc]:4   line_style
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_add3dLine* g_APIDLL_add3dLine
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532950 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_add3dLine_FUN_00532950
    JNZ 0x0053295c                      ; 00532957
        ;   XREF to: 0053295c (CONDITIONAL_JUMP)  ; LAB_0053295c
    XOR EAX,EAX                         ; 00532959
    RET                                 ; 0053295b
    PUSH ESI                            ; 0053295c
        ;   Label: LAB_0053295c
    PUSH EBX                            ; 0053295d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053295e
    PUSH ECX                            ; 00532962
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532963
    PUSH EBX                            ; 00532967
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532968
    PUSH ESI                            ; 0053296c
    CALL dword ptr [0x02dc9dc0]         ; 0053296d | g_APIDLL_add3dLine
    ADD ESP,0xc                         ; 00532973
    POP EBX                             ; 00532976
    POP ESI                             ; 00532977
    RET                                 ; 00532978

