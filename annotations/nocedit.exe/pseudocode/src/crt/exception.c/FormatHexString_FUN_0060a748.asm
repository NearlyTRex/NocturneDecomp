; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   format
; DWORD            Stack[0xc]:4   value
;
; XREF[1]:
;   crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4 at 0060a8e6
;
; Referenced Globals:
;   char[17] g_HexLookupTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a748
        ;   Label: crt_exception.c_FormatHexString_FUN_0060a748
    PUSH ESI                            ; 0060a749
    MOV EAX,dword ptr [ESP + 0xc]       ; 0060a74a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0060a74e
    MOV CL,byte ptr [EAX]               ; 0060a752
    XOR EBX,EBX                         ; 0060a754
    TEST CL,CL                          ; 0060a756
    JZ 0x0060a762                       ; 0060a758
        ;   XREF to: 0060a762 (CONDITIONAL_JUMP)  ; LAB_0060a762
    MOV CH,byte ptr [EAX + 0x1]         ; 0060a75a
        ;   Label: LAB_0060a75a
    INC EAX                             ; 0060a75d
    TEST CH,CH                          ; 0060a75e
    JNZ 0x0060a75a                      ; 0060a760
        ;   XREF to: 0060a75a (CONDITIONAL_JUMP)  ; LAB_0060a75a
    LEA ESI,[EAX + 0x9]                 ; 0060a762
        ;   Label: LAB_0060a762
    MOV CL,byte ptr [EDX]               ; 0060a765
        ;   Label: LAB_0060a765
    MOV byte ptr [EAX],CL               ; 0060a767
    TEST CL,CL                          ; 0060a769
    JZ 0x0060a77f                       ; 0060a76b
        ;   XREF to: 0060a77f (CONDITIONAL_JUMP)  ; LAB_0060a77f
    CMP CL,0x30                         ; 0060a76d
    JNZ 0x0060a77a                      ; 0060a770
        ;   XREF to: 0060a77a (CONDITIONAL_JUMP)  ; LAB_0060a77a
    CMP byte ptr [EDX + 0x1],0x78       ; 0060a772
    JNZ 0x0060a77a                      ; 0060a776
        ;   XREF to: 0060a77a (CONDITIONAL_JUMP)  ; LAB_0060a77a
    MOV EBX,ESI                         ; 0060a778
    INC ESI                             ; 0060a77a
        ;   Label: LAB_0060a77a
    INC EAX                             ; 0060a77b
    INC EDX                             ; 0060a77c
    JMP 0x0060a765                      ; 0060a77d
        ;   XREF to: 0060a765 (UNCONDITIONAL_JUMP)  ; LAB_0060a765
    TEST EBX,EBX                        ; 0060a77f
        ;   Label: LAB_0060a77f
    JZ 0x0060a7a1                       ; 0060a781
        ;   XREF to: 0060a7a1 (CONDITIONAL_JUMP)  ; LAB_0060a7a1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0060a783
    TEST EAX,EAX                        ; 0060a787
    JZ 0x0060a7a1                       ; 0060a789
        ;   XREF to: 0060a7a1 (CONDITIONAL_JUMP)  ; LAB_0060a7a1
    MOV EDX,EAX                         ; 0060a78b
        ;   Label: LAB_0060a78b
    AND EDX,0xf                         ; 0060a78d
    DEC EBX                             ; 0060a790
    MOV DL,byte ptr [EDX + 0x6853f8]    ; 0060a791 | g_HexLookupTable
    SHR EAX,0x4                         ; 0060a797
    MOV byte ptr [EBX + 0x1],DL         ; 0060a79a
    TEST EAX,EAX                        ; 0060a79d
    JNZ 0x0060a78b                      ; 0060a79f
        ;   XREF to: 0060a78b (CONDITIONAL_JUMP)  ; LAB_0060a78b
    POP ESI                             ; 0060a7a1
        ;   Label: LAB_0060a7a1
    POP EBX                             ; 0060a7a2
    RET                                 ; 0060a7a3

