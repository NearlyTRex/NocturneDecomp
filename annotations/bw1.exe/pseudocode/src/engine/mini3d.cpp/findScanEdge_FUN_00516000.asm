; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl engine_mini3d_cpp_findScanEdge_FUN_00516000(int y,int *exclude)
;
; Parameters:
; int              Stack[0x4]:4   y
; int *            Stack[0x8]:4   exclude
;
; Referenced Globals:
;   undefined4 DAT_01d2c0c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516000
        ;   Label: engine_mini3d.cpp_findScanEdge_FUN_00516000
    PUSH ESI                            ; 00516001
    MOV EBX,dword ptr [0x01d2c0c4]      ; 00516002 | DAT_01d2c0c4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00516008
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051600c
    MOV EAX,0x1d2c0c8                   ; 00516010
    XOR EDX,EDX                         ; 00516015
    TEST EBX,EBX                        ; 00516017
    JLE 0x0051602b                      ; 00516019
        ;   XREF to: 0051602b (CONDITIONAL_JUMP)  ; LAB_0051602b
    CMP ECX,dword ptr [EAX]             ; 0051601b
        ;   Label: LAB_0051601b
    JNZ 0x00516023                      ; 0051601d
        ;   XREF to: 00516023 (CONDITIONAL_JUMP)  ; LAB_00516023
    CMP EAX,ESI                         ; 0051601f
    JNZ 0x0051602d                      ; 00516021
        ;   XREF to: 0051602d (CONDITIONAL_JUMP)  ; LAB_0051602d
    INC EDX                             ; 00516023
        ;   Label: LAB_00516023
    ADD EAX,0x50                        ; 00516024
    CMP EDX,EBX                         ; 00516027
    JL 0x0051601b                       ; 00516029
        ;   XREF to: 0051601b (CONDITIONAL_JUMP)  ; LAB_0051601b
    XOR EAX,EAX                         ; 0051602b
        ;   Label: LAB_0051602b
    MOV dword ptr [0x01d2c0c4],EBX      ; 0051602d | DAT_01d2c0c4
        ;   Label: LAB_0051602d
    POP ESI                             ; 00516033
    POP EBX                             ; 00516034
    RET                                 ; 00516035

