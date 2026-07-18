; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_setVideoModeX_FUN_005b7e90(int width,int height,int bits_per_pixel,int flags)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
; int              Stack[0x10]:4   flags
;
; Referenced Globals:
;   APIDLL_setVideoModeX* g_APIDLL_setVideoModeX
;   int g_VideoModeXBPP
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7e90
        ;   Label: wincore_windll.cpp_setVideoModeX_FUN_005b7e90
    PUSH ESI                            ; 005b7e91
    PUSH EDI                            ; 005b7e92
    PUSH EBP                            ; 005b7e93
    XOR EDX,EDX                         ; 005b7e94
    MOV ECX,dword ptr [0x03f6b934]      ; 005b7e96 | g_APIDLL_setVideoModeX
    MOV dword ptr [0x03f6b9a0],EDX      ; 005b7e9c | g_VideoModeXBPP
    TEST ECX,ECX                        ; 005b7ea2
    JNZ 0x005b7ead                      ; 005b7ea4
        ;   XREF to: 005b7ead (CONDITIONAL_JUMP)  ; LAB_005b7ead
    XOR EAX,EAX                         ; 005b7ea6
    POP EBP                             ; 005b7ea8
        ;   Label: LAB_005b7ea8
    POP EDI                             ; 005b7ea9
    POP ESI                             ; 005b7eaa
    POP EBX                             ; 005b7eab
    RET                                 ; 005b7eac
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b7ead
        ;   Label: LAB_005b7ead
    PUSH EBX                            ; 005b7eb1
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b7eb2
    PUSH ESI                            ; 005b7eb6
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b7eb7
    PUSH EDI                            ; 005b7ebb
    MOV EBP,dword ptr [ESP + 0x20]      ; 005b7ebc
    PUSH EBP                            ; 005b7ec0
    CALL dword ptr [0x03f6b934]         ; 005b7ec1 | g_APIDLL_setVideoModeX
    ADD ESP,0x10                        ; 005b7ec7
    TEST EAX,EAX                        ; 005b7eca
    JZ 0x005b7ea8                       ; 005b7ecc
        ;   XREF to: 005b7ea8 (CONDITIONAL_JUMP)  ; LAB_005b7ea8
    MOV EAX,0x1                         ; 005b7ece
    MOV dword ptr [0x03f6b9a0],ESI      ; 005b7ed3 | g_VideoModeXBPP
    POP EBP                             ; 005b7ed9
    POP EDI                             ; 005b7eda
    POP ESI                             ; 005b7edb
    POP EBX                             ; 005b7edc
    RET                                 ; 005b7edd

