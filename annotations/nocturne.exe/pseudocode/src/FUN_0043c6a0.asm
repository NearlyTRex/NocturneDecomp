; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043c6a0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c6a0
        ;   Label: FUN_0043c6a0
    SUB ESP,0xc                         ; 0043c6a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043c6a4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043c6a8
    MOV ECX,dword ptr [EDX + 0xbd24]    ; 0043c6ac
    PUSH ECX                            ; 0043c6b2
    LEA EAX,[ESP + 0x4]                 ; 0043c6b3
    PUSH EAX                            ; 0043c6b7
    LEA EAX,[EDX + 0x150]               ; 0043c6b8
    PUSH EAX                            ; 0043c6be
    CALL FUN_0051d380                   ; 0043c6bf
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 0043c6c4
    CMP EBX,EAX                         ; 0043c6c7
    JNZ 0x0043c6d5                      ; 0043c6c9
        ;   XREF to: 0043c6d5 (CONDITIONAL_JUMP)  ; LAB_0043c6d5
    MOV EAX,0x1                         ; 0043c6cb
    ADD ESP,0xc                         ; 0043c6d0
    POP EBX                             ; 0043c6d3
    RET                                 ; 0043c6d4
    MOV EDX,dword ptr [EAX]             ; 0043c6d5
        ;   Label: LAB_0043c6d5
    MOV dword ptr [EBX],EDX             ; 0043c6d7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043c6d9
    MOV dword ptr [EBX + 0x4],EDX       ; 0043c6dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043c6df
    MOV dword ptr [EBX + 0x8],EDX       ; 0043c6e2
    MOV EAX,0x1                         ; 0043c6e5
    ADD ESP,0xc                         ; 0043c6ea
    POP EBX                             ; 0043c6ed
    RET                                 ; 0043c6ee

