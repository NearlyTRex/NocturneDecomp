; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_add3dLine_FUN_00582740(void *start_point,void *end_point,int line_style)
;
; Parameters:
; void *           Stack[0x4]:4   start_point
; void *           Stack[0x8]:4   end_point
; int              Stack[0xc]:4   line_style
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833e0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582740 | DAT_01c50948
        ;   Label: engine_special.cpp_add3dLine_FUN_00582740
    JNZ 0x0058274c                      ; 00582747
        ;   XREF to: 0058274c (CONDITIONAL_JUMP)  ; LAB_0058274c
    XOR EAX,EAX                         ; 00582749
    RET                                 ; 0058274b
    PUSH ESI                            ; 0058274c
        ;   Label: LAB_0058274c
    PUSH EBX                            ; 0058274d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0058274e
    PUSH ECX                            ; 00582752
    MOV EBX,dword ptr [ESP + 0x14]      ; 00582753
    PUSH EBX                            ; 00582757
    MOV ESI,dword ptr [ESP + 0x14]      ; 00582758
    PUSH ESI                            ; 0058275c
    CALL dword ptr [0x02c833e0]         ; 0058275d | DAT_02c833e0
    ADD ESP,0xc                         ; 00582763
    POP EBX                             ; 00582766
    POP ESI                             ; 00582767
    RET                                 ; 00582768

