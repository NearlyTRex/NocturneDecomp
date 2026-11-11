; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkafter_superopt_cpp_CChemPuzzle_isButtonHovered_FUN_00414330(CChemPuzzle *this_ptr,int param_2)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414330
        ;   Label: unkafter_superopt.cpp_CChemPuzzle_isButtonHovered_FUN_00414330
    PUSH ESI                            ; 00414331
    PUSH EBP                            ; 00414332
    MOV EDX,dword ptr [ESP + 0x14]      ; 00414333
    LEA EAX,[EDX*0x4 + 0x0]             ; 00414337
    SUB EAX,EDX                         ; 0041433e
    SHL EAX,0x2                         ; 00414340
    SUB EAX,EDX                         ; 00414343
    MOV EDX,dword ptr [ESP + 0x10]      ; 00414345
    SHL EAX,0x2                         ; 00414349
    ADD EAX,EDX                         ; 0041434c
    MOV ESI,dword ptr [0x01c5fadc]      ; 0041434e | DAT_01c5fadc
    MOV EDX,dword ptr [EAX + 0x88]      ; 00414354
    MOV EBX,dword ptr [EAX + 0x90]      ; 0041435a
    MOV ECX,dword ptr [EAX + 0x8c]      ; 00414360
    MOV EAX,dword ptr [EAX + 0x94]      ; 00414366
    ADD EBX,EDX                         ; 0041436c
    ADD EAX,ECX                         ; 0041436e
    CMP EDX,ESI                         ; 00414370
    JG 0x0041438f                       ; 00414372
        ;   XREF to: 0041438f (CONDITIONAL_JUMP)  ; LAB_0041438f
    CMP EBX,ESI                         ; 00414374
    JL 0x0041438f                       ; 00414376
        ;   XREF to: 0041438f (CONDITIONAL_JUMP)  ; LAB_0041438f
    MOV EBP,dword ptr [0x01c5fae0]      ; 00414378 | DAT_01c5fae0
    CMP ECX,EBP                         ; 0041437e
    JG 0x0041438f                       ; 00414380
        ;   XREF to: 0041438f (CONDITIONAL_JUMP)  ; LAB_0041438f
    CMP EAX,EBP                         ; 00414382
    JL 0x0041438f                       ; 00414384
        ;   XREF to: 0041438f (CONDITIONAL_JUMP)  ; LAB_0041438f
    MOV EAX,0x1                         ; 00414386
    POP EBP                             ; 0041438b
    POP ESI                             ; 0041438c
    POP EBX                             ; 0041438d
    RET                                 ; 0041438e
    XOR EAX,EAX                         ; 0041438f
        ;   Label: LAB_0041438f
    POP EBP                             ; 00414391
    POP ESI                             ; 00414392
    POP EBX                             ; 00414393
    RET                                 ; 00414394

