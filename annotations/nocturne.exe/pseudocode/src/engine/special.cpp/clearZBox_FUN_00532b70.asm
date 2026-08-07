; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clearZBox_FUN_00532b70(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; XREF[1]:
;   engine_special.cpp_fillDepthRegion_FUN_0052efc2 at 0052efdc
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9dd8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532b70 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_clearZBox_FUN_00532b70
    JNZ 0x00532b7c                      ; 00532b77
        ;   XREF to: 00532b7c (CONDITIONAL_JUMP)  ; LAB_00532b7c
    XOR EAX,EAX                         ; 00532b79
    RET                                 ; 00532b7b
    PUSH EDI                            ; 00532b7c
        ;   Label: LAB_00532b7c
    PUSH ESI                            ; 00532b7d
    PUSH EBX                            ; 00532b7e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00532b7f
    PUSH ECX                            ; 00532b83
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00532b84
    PUSH EBX                            ; 00532b88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00532b89
    PUSH ESI                            ; 00532b8d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00532b8e
    PUSH EDI                            ; 00532b92
    CALL dword ptr [0x02dc9dd8]         ; 00532b93 | DAT_02dc9dd8
    ADD ESP,0x10                        ; 00532b99
    POP EBX                             ; 00532b9c
    POP ESI                             ; 00532b9d
    POP EDI                             ; 00532b9e
    RET                                 ; 00532b9f

