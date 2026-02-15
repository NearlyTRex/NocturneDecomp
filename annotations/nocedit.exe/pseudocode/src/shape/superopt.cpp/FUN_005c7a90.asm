; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_FUN_005c7a90(void)
;
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d7350 at 005d73df
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00601df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7a90
        ;   Label: shape_superopt.cpp_FUN_005c7a90
    PUSH ESI                            ; 005c7a91
    PUSH EBP                            ; 005c7a92
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c7a93
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c7a97
    MOV EDX,dword ptr [EBX + 0x4]       ; 005c7a9b
    TEST EDX,EDX                        ; 005c7a9e
    JZ 0x005c7aaa                       ; 005c7aa0
        ;   XREF to: 005c7aaa (CONDITIONAL_JUMP)  ; LAB_005c7aaa
    MOV EAX,dword ptr [EDX]             ; 005c7aa2
    MOV ECX,dword ptr [ESI]             ; 005c7aa4
    CMP ECX,dword ptr [EAX]             ; 005c7aa6
    JNZ 0x005c7b13                      ; 005c7aa8
        ;   XREF to: 005c7b13 (CONDITIONAL_JUMP)  ; LAB_005c7b13
    CMP dword ptr [EBX + 0x4],0x0       ; 005c7aaa
        ;   Label: LAB_005c7aaa
    JNZ 0x005c7ade                      ; 005c7aae
        ;   XREF to: 005c7ade (CONDITIONAL_JUMP)  ; LAB_005c7ade
    LEA EDX,[ESI + 0x40]                ; 005c7ab0
    LEA EAX,[EBX + 0x14]                ; 005c7ab3
    MOV ECX,dword ptr [EDX]             ; 005c7ab6
    MOV dword ptr [EAX],ECX             ; 005c7ab8
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c7aba
    MOV dword ptr [EAX + 0x4],ECX       ; 005c7abd
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c7ac0
    MOV dword ptr [EAX + 0x8],ECX       ; 005c7ac3
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c7ac6
    MOV dword ptr [EAX + 0xc],ECX       ; 005c7ac9
    MOV ECX,dword ptr [EDX + 0x10]      ; 005c7acc
    MOV dword ptr [EAX + 0x10],ECX      ; 005c7acf
    MOV ECX,dword ptr [EDX + 0x14]      ; 005c7ad2
    MOV dword ptr [EAX + 0x14],ECX      ; 005c7ad5
    MOV EAX,dword ptr [ESI + 0x5c]      ; 005c7ad8
    MOV dword ptr [EBX + 0x10],EAX      ; 005c7adb
    MOV EAX,dword ptr [EBX]             ; 005c7ade
        ;   Label: LAB_005c7ade
    INC EAX                             ; 005c7ae0
    SHL EAX,0x2                         ; 005c7ae1
    PUSH EAX                            ; 005c7ae4
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c7ae5
    PUSH EBP                            ; 005c7ae8
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005c7ae9
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005c7aee
    TEST EAX,EAX                        ; 005c7af1
    JZ 0x005c7b0f                       ; 005c7af3
        ;   XREF to: 005c7b0f (CONDITIONAL_JUMP)  ; LAB_005c7b0f
    MOV dword ptr [EBX + 0x4],EAX       ; 005c7af5
    MOV EAX,dword ptr [EBX]             ; 005c7af8
    LEA EDX,[EAX*0x4 + 0x0]             ; 005c7afa
    INC EAX                             ; 005c7b01
    MOV dword ptr [EBX],EAX             ; 005c7b02
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c7b04
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 005c7b07
    MOV EAX,0x1                         ; 005c7b0a
    POP EBP                             ; 005c7b0f
        ;   Label: LAB_005c7b0f
    POP ESI                             ; 005c7b10
    POP EBX                             ; 005c7b11
    RET                                 ; 005c7b12
    XOR EAX,EAX                         ; 005c7b13
        ;   Label: LAB_005c7b13
    POP EBP                             ; 005c7b15
    POP ESI                             ; 005c7b16
    POP EBX                             ; 005c7b17
    RET                                 ; 005c7b18

