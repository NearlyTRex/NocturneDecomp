; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_004d2880(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_menu_cpp_00588d42
;   TerminatedCString s_Too_many_custom_keys_00588d53
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01cc8120
;   undefined4 DAT_01cc8124
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d2880
        ;   Label: core_menu.cpp_FUN_004d2880
    PUSH EDI                            ; 004d2881
    CMP dword ptr [0x01cc8120],0x1e     ; 004d2882 | DAT_01cc8120
    JGE 0x004d28d3                      ; 004d2889
        ;   XREF to: 004d28d3 (CONDITIONAL_JUMP)  ; LAB_004d28d3
    MOV EAX,[0x01cc8120]                ; 004d288b | DAT_01cc8120
        ;   Label: LAB_004d288b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d2890
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EDX ; 004d2894 | DAT_01cc8124
    MOV EDX,EAX                         ; 004d289b
    SHL EAX,0x2                         ; 004d289d
    ADD EAX,EDX                         ; 004d28a0
    MOV EDI,0x1cc81a0                   ; 004d28a2
    SHL EAX,0x3                         ; 004d28a7
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d28aa
    ADD EDI,EAX                         ; 004d28ae
    PUSH EDI                            ; 004d28b0
    MOV AL,byte ptr [ESI]               ; 004d28b1
        ;   Label: LAB_004d28b1
    MOV byte ptr [EDI],AL               ; 004d28b3
    CMP AL,0x0                          ; 004d28b5
    JZ 0x004d28c9                       ; 004d28b7
        ;   XREF to: 004d28c9 (CONDITIONAL_JUMP)  ; LAB_004d28c9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d28b9
    ADD ESI,0x2                         ; 004d28bc
    MOV byte ptr [EDI + 0x1],AL         ; 004d28bf
    ADD EDI,0x2                         ; 004d28c2
    CMP AL,0x0                          ; 004d28c5
    JNZ 0x004d28b1                      ; 004d28c7
        ;   XREF to: 004d28b1 (CONDITIONAL_JUMP)  ; LAB_004d28b1
    POP EDI                             ; 004d28c9
        ;   Label: LAB_004d28c9
    INC dword ptr [0x01cc8120]          ; 004d28ca | DAT_01cc8120
    POP EDI                             ; 004d28d0
    POP ESI                             ; 004d28d1
    RET                                 ; 004d28d2
    PUSH EBX                            ; 004d28d3
        ;   Label: LAB_004d28d3
    MOV ECX,0x588d42                    ; 004d28d4 | = "..\\core\\menu.cpp"
    MOV EBX,0x827                       ; 004d28d9
    PUSH 0x588d53                       ; 004d28de | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],ECX      ; 004d28e3 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004d28e9 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d28ef
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d28f4
    POP EBX                             ; 004d28f7
    JMP 0x004d288b                      ; 004d28f8
        ;   XREF to: 004d288b (UNCONDITIONAL_JUMP)  ; LAB_004d288b

