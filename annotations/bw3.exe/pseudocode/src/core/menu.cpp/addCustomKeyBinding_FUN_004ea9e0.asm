; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_addCustomKeyBinding_FUN_004ea9e0(int *key_code_ptr,char *key_name)
;
; Parameters:
; int *            Stack[0x4]:4   key_code_ptr
; char *           Stack[0x8]:4   key_name
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d75c98
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ea9e0
        ;   Label: core_menu.cpp_addCustomKeyBinding_FUN_004ea9e0
    PUSH EDI                            ; 004ea9e1
    CMP dword ptr [0x01d75c98],0x20     ; 004ea9e2 | DAT_01d75c98
    JGE 0x004eaa33                      ; 004ea9e9
        ;   XREF to: 004eaa33 (CONDITIONAL_JUMP)  ; LAB_004eaa33
    MOV EAX,[0x01d75c98]                ; 004ea9eb | DAT_01d75c98
        ;   Label: LAB_004ea9eb
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ea9f0
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EDX ; 004ea9f4
    MOV EDX,EAX                         ; 004ea9fb
    SHL EAX,0x2                         ; 004ea9fd
    ADD EAX,EDX                         ; 004eaa00
    MOV EDI,0x1d75d20                   ; 004eaa02
    SHL EAX,0x3                         ; 004eaa07
    MOV ESI,dword ptr [ESP + 0x10]      ; 004eaa0a
    ADD EDI,EAX                         ; 004eaa0e
    PUSH EDI                            ; 004eaa10
    MOV AL,byte ptr [ESI]               ; 004eaa11
        ;   Label: LAB_004eaa11
    MOV byte ptr [EDI],AL               ; 004eaa13
    CMP AL,0x0                          ; 004eaa15
    JZ 0x004eaa29                       ; 004eaa17
        ;   XREF to: 004eaa29 (CONDITIONAL_JUMP)  ; LAB_004eaa29
    MOV AL,byte ptr [ESI + 0x1]         ; 004eaa19
    ADD ESI,0x2                         ; 004eaa1c
    MOV byte ptr [EDI + 0x1],AL         ; 004eaa1f
    ADD EDI,0x2                         ; 004eaa22
    CMP AL,0x0                          ; 004eaa25
    JNZ 0x004eaa11                      ; 004eaa27
        ;   XREF to: 004eaa11 (CONDITIONAL_JUMP)  ; LAB_004eaa11
    POP EDI                             ; 004eaa29
        ;   Label: LAB_004eaa29
    INC dword ptr [0x01d75c98]          ; 004eaa2a | DAT_01d75c98
    POP EDI                             ; 004eaa30
    POP ESI                             ; 004eaa31
    RET                                 ; 004eaa32
    PUSH EBX                            ; 004eaa33
        ;   Label: LAB_004eaa33
    MOV ECX,0x5c7955                    ; 004eaa34
    MOV EBX,0x8f5                       ; 004eaa39
    PUSH 0x5c7966                       ; 004eaa3e
    MOV dword ptr [0x01d71de0],ECX      ; 004eaa43 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004eaa49 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004eaa4f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004eaa54
    POP EBX                             ; 004eaa57
    JMP 0x004ea9eb                      ; 004eaa58
        ;   XREF to: 004ea9eb (UNCONDITIONAL_JUMP)  ; LAB_004ea9eb

