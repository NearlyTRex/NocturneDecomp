; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004eada0(undefined4 param_1)
;
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005ba900
;   support_trstream.cpp_FUN_0057d870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eada0
        ;   Label: core_melee.cpp_FUN_004eada0
    PUSH ESI                            ; 004eada1
    PUSH EDI                            ; 004eada2
    PUSH EBP                            ; 004eada3
    MOV EBP,ESP                         ; 004eada4
    SUB ESP,0x10                        ; 004eada6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eada9
    XOR EDX,EDX                         ; 004eadac
    MOV word ptr [EBP + -0xc],DX        ; 004eadae
    XOR EDX,EDX                         ; 004eadb2
    MOV dword ptr [EBP + -0x10],EDX     ; 004eadb4
    LEA EAX,[EBP + -0x10]               ; 004eadb7
        ;   Label: LAB_004eadb7
    PUSH EAX                            ; 004eadba
    CALL crt_heap.c__heapwalk_FUN_005ba900 ; 004eadbb
        ;   XREF to: 005ba900 (UNCONDITIONAL_CALL)  ; int crt_heap.c__heapwalk_FUN_005ba900(WatcomHeapInfo * heap_info)
    ADD ESP,0x4                         ; 004eadc0
    TEST EAX,EAX                        ; 004eadc3
    JZ 0x004eade9                       ; 004eadc5
        ;   XREF to: 004eade9 (CONDITIONAL_JUMP)  ; LAB_004eade9
    DEC EAX                             ; 004eadc7
    CMP EAX,0x4                         ; 004eadc8
    JA 0x004eade2                       ; 004eadcb
        ;   XREF to: 004eade2 (CONDITIONAL_JUMP)  ; LAB_004eade2
    JMP dword ptr [EAX*0x4 + 0x4ead80]  ; 004eadcd
    MOV ESP,EBP                         ; 004eade2
        ;   Label: LAB_004eade2
    POP EBP                             ; 004eade4
    POP EDI                             ; 004eade5
    POP ESI                             ; 004eade6
    POP EBX                             ; 004eade7
    RET                                 ; 004eade8
    MOV ECX,dword ptr [EBP + -0xa]      ; 004eade9
        ;   Label: LAB_004eade9
    MOV ESI,dword ptr [EBP + -0x6]      ; 004eadec
    PUSH ECX                            ; 004eadef
    TEST ESI,ESI                        ; 004eadf0
    JZ 0x004eae15                       ; 004eadf2
        ;   XREF to: 004eae15 (CONDITIONAL_JUMP)  ; LAB_004eae15
    MOV EAX,0x5dca41                    ; 004eadf4
    PUSH EAX                            ; 004eadf9
        ;   Label: LAB_004eadf9
    XOR EAX,EAX                         ; 004eadfa
    MOV AX,word ptr [EBP + -0xc]        ; 004eadfc
    PUSH EAX                            ; 004eae00
    MOV EDI,dword ptr [EBP + -0x10]     ; 004eae01
    PUSH EDI                            ; 004eae04
    PUSH 0x5dca4b                       ; 004eae05
    PUSH EBX                            ; 004eae0a
    CALL support_trstream.cpp_FUN_0057d870 ; 004eae0b
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d870()
    ADD ESP,0x18                        ; 004eae10
    JMP 0x004eadb7                      ; 004eae13
        ;   XREF to: 004eadb7 (UNCONDITIONAL_JUMP)  ; LAB_004eadb7
    MOV EAX,0x5dca46                    ; 004eae15
        ;   Label: LAB_004eae15
    JMP 0x004eadf9                      ; 004eae1a
        ;   XREF to: 004eadf9 (UNCONDITIONAL_JUMP)  ; LAB_004eadf9

