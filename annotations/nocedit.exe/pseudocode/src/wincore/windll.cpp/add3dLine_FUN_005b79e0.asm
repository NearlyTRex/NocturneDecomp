; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_add3dLine_FUN_005b79e0(void *start_point,void *end_point,int line_style)
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

    CMP dword ptr [0x02d03e94],0x0      ; 005b79e0 | g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_add3dLine_FUN_005b79e0
    JNZ 0x005b79ec                      ; 005b79e7
        ;   XREF to: 005b79ec (CONDITIONAL_JUMP)  ; LAB_005b79ec
    XOR EAX,EAX                         ; 005b79e9
    RET                                 ; 005b79eb
    PUSH ESI                            ; 005b79ec
        ;   Label: LAB_005b79ec
    PUSH EBX                            ; 005b79ed
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b79ee
    PUSH ECX                            ; 005b79f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b79f3
    PUSH EBX                            ; 005b79f7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b79f8
    PUSH ESI                            ; 005b79fc
    CALL dword ptr [0x03f6b8e4]         ; 005b79fd | g_APIDLL_add3dLine
    ADD ESP,0xc                         ; 005b7a03
    POP EBX                             ; 005b7a06
    POP ESI                             ; 005b7a07
    RET                                 ; 005b7a08

