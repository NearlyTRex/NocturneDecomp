; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_clearZBox_FUN_005b7c00(int left, int top, int right, int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   right
; int              Stack[0x10]:4   bottom
;
; XREF[1]:
;   wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2 at 005b3fdc
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_clearZBox* g_APIDLL_clearZBox
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7c00 | int g_UseExternalRenderer
        ;   Label: wincore_windll.cpp_clearZBox_FUN_005b7c00
    JNZ 0x005b7c0c                      ; 005b7c07 | LAB_005b7c0c
        ;   XREF to: 005b7c0c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b7c09
    RET                                 ; 005b7c0b
    PUSH EDI                            ; 005b7c0c
        ;   Label: LAB_005b7c0c
    PUSH ESI                            ; 005b7c0d
    PUSH EBX                            ; 005b7c0e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005b7c0f
    PUSH ECX                            ; 005b7c13
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b7c14
    PUSH EBX                            ; 005b7c18
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b7c19
    PUSH ESI                            ; 005b7c1d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005b7c1e
    PUSH EDI                            ; 005b7c22
    CALL dword ptr [0x03f6b8fc]         ; 005b7c23 | APIDLL_clearZBox * g_APIDLL_clearZBox
    ADD ESP,0x10                        ; 005b7c29
    POP EBX                             ; 005b7c2c
    POP ESI                             ; 005b7c2d
    POP EDI                             ; 005b7c2e
    RET                                 ; 005b7c2f

