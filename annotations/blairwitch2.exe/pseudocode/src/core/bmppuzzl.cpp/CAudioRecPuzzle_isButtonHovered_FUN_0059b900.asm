; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900(CAudioRecPuzzle *this_ptr,int param_2)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b900
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_isButtonHovered_FUN_0059b900
    PUSH ESI                            ; 0059b901
    PUSH EBP                            ; 0059b902
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059b903
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059b907
    SUB EAX,EDX                         ; 0059b90e
    SHL EAX,0x2                         ; 0059b910
    SUB EAX,EDX                         ; 0059b913
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059b915
    SHL EAX,0x2                         ; 0059b919
    ADD EAX,EDX                         ; 0059b91c
    MOV ESI,dword ptr [0x01c2a37c]      ; 0059b91e | DAT_01c2a37c
    MOV EDX,dword ptr [EAX + 0x64]      ; 0059b924
    MOV EBX,dword ptr [EAX + 0x6c]      ; 0059b927
    MOV ECX,dword ptr [EAX + 0x68]      ; 0059b92a
    MOV EAX,dword ptr [EAX + 0x70]      ; 0059b92d
    ADD EBX,EDX                         ; 0059b930
    ADD EAX,ECX                         ; 0059b932
    CMP EDX,ESI                         ; 0059b934
    JG 0x0059b961                       ; 0059b936
        ;   XREF to: 0059b961 (CONDITIONAL_JUMP)  ; LAB_0059b961
    CMP EBX,ESI                         ; 0059b938
    JL 0x0059b961                       ; 0059b93a
        ;   XREF to: 0059b961 (CONDITIONAL_JUMP)  ; LAB_0059b961
    MOV EBP,dword ptr [0x01c2a380]      ; 0059b93c | DAT_01c2a380
    CMP ECX,EBP                         ; 0059b942
    JG 0x0059b961                       ; 0059b944
        ;   XREF to: 0059b961 (CONDITIONAL_JUMP)  ; LAB_0059b961
    CMP EAX,EBP                         ; 0059b946
    JL 0x0059b961                       ; 0059b948
        ;   XREF to: 0059b961 (CONDITIONAL_JUMP)  ; LAB_0059b961
    MOV EAX,0x1                         ; 0059b94a
    POP EBP                             ; 0059b94f
    POP ESI                             ; 0059b950
    POP EBX                             ; 0059b951
    LEA EAX,[EAX]                       ; 0059b952
    LEA EDX,[EDX]                       ; 0059b958
    MOV EAX,EAX                         ; 0059b95e
    XOR EAX,EAX                         ; 0059b961
        ;   Label: LAB_0059b961
    POP EBP                             ; 0059b963
    POP ESI                             ; 0059b964
    POP EBX                             ; 0059b965
    RET                                 ; 0059b966

