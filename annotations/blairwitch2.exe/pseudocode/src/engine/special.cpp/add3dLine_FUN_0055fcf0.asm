; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_add3dLine_FUN_0055fcf0(void *start_point,void *end_point,int line_style)
;
; Parameters:
; void *           Stack[0x4]:4   start_point
; void *           Stack[0x8]:4   end_point
; int              Stack[0xc]:4   line_style
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055fcf0 | DAT_01c37788
        ;   Label: engine_special.cpp_add3dLine_FUN_0055fcf0
    JNZ 0x0055fcfc                      ; 0055fcf7
        ;   XREF to: 0055fcfc (CONDITIONAL_JUMP)  ; LAB_0055fcfc
    XOR EAX,EAX                         ; 0055fcf9
    RET                                 ; 0055fcfb
    PUSH ESI                            ; 0055fcfc
        ;   Label: LAB_0055fcfc
    PUSH EBX                            ; 0055fcfd
    MOV ECX,dword ptr [ESP + 0x14]      ; 0055fcfe
    PUSH ECX                            ; 0055fd02
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055fd03
    PUSH EBX                            ; 0055fd07
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055fd08
    PUSH ESI                            ; 0055fd0c
    CALL dword ptr [0x0264bc10]         ; 0055fd0d | DAT_0264bc10
    ADD ESP,0xc                         ; 0055fd13
    POP EBX                             ; 0055fd16
    POP ESI                             ; 0055fd17
    RET                                 ; 0055fd18

