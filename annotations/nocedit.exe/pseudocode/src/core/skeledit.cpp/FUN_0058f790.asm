; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_0058f790()
;
;
; XREF[2]:
;   core_skeledit.cpp_FUN_0058b660 at 0058b8aa
;   core_skeledit.cpp_FUN_0058c190 at 0058c35e
;
; Referenced Globals:
;   TerminatedCString s_TheOnlyPart_0064b4bf
;   undefined4 s_heOnlyPart_0064b4c0
;   undefined4 s_eOnlyPart_0064b4c1
;   undefined4 s_OnlyPart_0064b4c2
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 0058f790
        ;   Label: core_skeledit.cpp_FUN_0058f790
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058f795
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058f79a
    PUSH ESI                            ; 0058f79b
    PUSH EDI                            ; 0058f79c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058f79d
    MOV ESI,0x64b4bf                    ; 0058f7a1 | = "TheOnlyPart"
    LEA EDI,[EBX + 0x7144]              ; 0058f7a6
    MOV dword ptr [EBX + 0x7140],0x1    ; 0058f7ac
    PUSH EDI                            ; 0058f7b6
    MOV AL,byte ptr [ESI]               ; 0058f7b7 | = "TheOnlyPart" | s_eOnlyPart_0064b4c1
        ;   Label: LAB_0058f7b7
    MOV byte ptr [EDI],AL               ; 0058f7b9
    CMP AL,0x0                          ; 0058f7bb
    JZ 0x0058f7cf                       ; 0058f7bd
        ;   XREF to: 0058f7cf (CONDITIONAL_JUMP)  ; LAB_0058f7cf
    MOV AL,byte ptr [ESI + 0x1]         ; 0058f7bf | s_heOnlyPart_0064b4c0 | s_OnlyPart_0064b4c2
    ADD ESI,0x2                         ; 0058f7c2
    MOV byte ptr [EDI + 0x1],AL         ; 0058f7c5
    ADD EDI,0x2                         ; 0058f7c8
    CMP AL,0x0                          ; 0058f7cb
    JNZ 0x0058f7b7                      ; 0058f7cd
        ;   XREF to: 0058f7b7 (CONDITIONAL_JUMP)  ; LAB_0058f7b7
    POP EDI                             ; 0058f7cf
        ;   Label: LAB_0058f7cf
    MOV ECX,dword ptr [EBX]             ; 0058f7d0
    XOR EDX,EDX                         ; 0058f7d2
    TEST ECX,ECX                        ; 0058f7d4
    JLE 0x0058f800                      ; 0058f7d6
        ;   XREF to: 0058f800 (CONDITIONAL_JUMP)  ; LAB_0058f800
    MOV EAX,EBX                         ; 0058f7d8
    MOV ECX,dword ptr [EAX + 0x54]      ; 0058f7da
        ;   Label: LAB_0058f7da
    MOV dword ptr [EAX + 0x7178],0x0    ; 0058f7dd
    MOV dword ptr [EAX + 0x7164],ECX    ; 0058f7e7
    INC EDX                             ; 0058f7ed
    MOV ESI,dword ptr [EBX]             ; 0058f7ee
    ADD EAX,0x4                         ; 0058f7f0
    CMP EDX,ESI                         ; 0058f7f3
    JL 0x0058f7da                       ; 0058f7f5
        ;   XREF to: 0058f7da (CONDITIONAL_JUMP)  ; LAB_0058f7da
    LEA EAX,[EAX]                       ; 0058f7f7
    LEA EDX,[EDX]                       ; 0058f7fd
    MOV dword ptr [EBX + 0x718c],0x0    ; 0058f800
        ;   Label: LAB_0058f800
    POP EDI                             ; 0058f80a
    POP ESI                             ; 0058f80b
    POP EBX                             ; 0058f80c
    RET                                 ; 0058f80d

