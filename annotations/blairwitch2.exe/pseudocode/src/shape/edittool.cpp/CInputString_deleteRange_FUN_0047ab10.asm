; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0047ab10(CInputString *this_ptr,int start_pos,int end_pos)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_pos
; int              Stack[0xc]:4   end_pos
;
; XREF[3]:
;   shape_edittool.cpp_CInputString_backspace_FUN_0047abd0 at 0047abf6
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 at 0047ab9c
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0 at 0047aee3
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ab10
        ;   Label: shape_edittool.cpp_CInputString_deleteRange_FUN_0047ab10
    PUSH ESI                            ; 0047ab11
    PUSH EDI                            ; 0047ab12
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047ab13
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047ab17
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047ab1b
    TEST EDI,EDI                        ; 0047ab1f
    JL 0x0047ab79                       ; 0047ab21
        ;   XREF to: 0047ab79 (CONDITIONAL_JUMP)  ; LAB_0047ab79
    MOV EDX,dword ptr [EBX + 0x130]     ; 0047ab23
        ;   Label: LAB_0047ab23
    CMP ESI,EDX                         ; 0047ab29
    JLE 0x0047ab2f                      ; 0047ab2b
        ;   XREF to: 0047ab2f (CONDITIONAL_JUMP)  ; LAB_0047ab2f
    MOV ESI,EDX                         ; 0047ab2d
    CMP EDI,ESI                         ; 0047ab2f
        ;   Label: LAB_0047ab2f
    JGE 0x0047ab75                      ; 0047ab31
        ;   XREF to: 0047ab75 (CONDITIONAL_JUMP)  ; LAB_0047ab75
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047ab33
    SUB EAX,ESI                         ; 0047ab39
    PUSH EAX                            ; 0047ab3b
    LEA EAX,[EBX + ESI*0x1]             ; 0047ab3c
    PUSH EAX                            ; 0047ab3f
    LEA EAX,[EBX + EDI*0x1]             ; 0047ab40
    PUSH EAX                            ; 0047ab43
    SUB ESI,EDI                         ; 0047ab44
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0047ab46
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047ab4b
    ADD ESP,0xc                         ; 0047ab51
    SUB ECX,ESI                         ; 0047ab54
    MOV ESI,dword ptr [EBX + 0x134]     ; 0047ab56
    MOV dword ptr [EBX + 0x130],ECX     ; 0047ab5c
    CMP ESI,ECX                         ; 0047ab62
    JLE 0x0047ab6c                      ; 0047ab64
        ;   XREF to: 0047ab6c (CONDITIONAL_JUMP)  ; LAB_0047ab6c
    MOV dword ptr [EBX + 0x134],ECX     ; 0047ab66
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047ab6c
        ;   Label: LAB_0047ab6c
    MOV byte ptr [EBX],0x0              ; 0047ab72
    POP EDI                             ; 0047ab75
        ;   Label: LAB_0047ab75
    POP ESI                             ; 0047ab76
    POP EBX                             ; 0047ab77
    RET                                 ; 0047ab78
    XOR EDI,EDI                         ; 0047ab79
        ;   Label: LAB_0047ab79
    JMP 0x0047ab23                      ; 0047ab7b
        ;   XREF to: 0047ab23 (UNCONDITIONAL_JUMP)  ; LAB_0047ab23

