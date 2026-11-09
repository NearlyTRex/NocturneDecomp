; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clearZBox_FUN_0055ff10(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; XREF[1]:
;   engine_special.cpp_fillDepthRegion_FUN_0055b342 at 0055b35c
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc28
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055ff10 | DAT_01c37788
        ;   Label: engine_special.cpp_clearZBox_FUN_0055ff10
    JNZ 0x0055ff1c                      ; 0055ff17
        ;   XREF to: 0055ff1c (CONDITIONAL_JUMP)  ; LAB_0055ff1c
    XOR EAX,EAX                         ; 0055ff19
    RET                                 ; 0055ff1b
    PUSH EDI                            ; 0055ff1c
        ;   Label: LAB_0055ff1c
    PUSH ESI                            ; 0055ff1d
    PUSH EBX                            ; 0055ff1e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0055ff1f
    PUSH ECX                            ; 0055ff23
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0055ff24
    PUSH EBX                            ; 0055ff28
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0055ff29
    PUSH ESI                            ; 0055ff2d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0055ff2e
    PUSH EDI                            ; 0055ff32
    CALL dword ptr [0x0264bc28]         ; 0055ff33 | DAT_0264bc28
    ADD ESP,0x10                        ; 0055ff39
    POP EBX                             ; 0055ff3c
    POP ESI                             ; 0055ff3d
    POP EDI                             ; 0055ff3e
    RET                                 ; 0055ff3f

