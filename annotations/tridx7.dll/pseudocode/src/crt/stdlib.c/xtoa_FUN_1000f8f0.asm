; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c_xtoa_FUN_1000f8f0(ulong val,char *buf,uint radix,int neg)
;
; Parameters:
; ulong            Stack[0x4]:4   val
; char *           Stack[0x8]:4   buf
; uint             Stack[0xc]:4   radix
; int              Stack[0x10]:4   neg
;
; XREF[3]:
;   crt_stdlib.c__itoa_FUN_1000f8b0 at 1000f8cb
;   crt_stdlib.c__ltoa_FUN_1000f950 at 1000f973
;   crt_stdlib.c__ultoa_FUN_1000f980 at 1000f992
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x0      ; 1000f8f0
        ;   Label: crt_stdlib.c_xtoa_FUN_1000f8f0
    PUSH EBX                            ; 1000f8f5
    PUSH ESI                            ; 1000f8f6
    MOV ESI,dword ptr [ESP + 0x10]      ; 1000f8f7
    PUSH EDI                            ; 1000f8fb
    PUSH EBP                            ; 1000f8fc
    JZ 0x1000f90b                       ; 1000f8fd
        ;   XREF to: 1000f90b (CONDITIONAL_JUMP)  ; LAB_1000f90b
    MOV byte ptr [ESI],0x2d             ; 1000f8ff
    INC ESI                             ; 1000f902
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000f903
    NEG ECX                             ; 1000f907
    JMP 0x1000f90f                      ; 1000f909
        ;   XREF to: 1000f90f (UNCONDITIONAL_JUMP)  ; LAB_1000f90f
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000f90b
        ;   Label: LAB_1000f90b
    MOV EDI,ESI                         ; 1000f90f
        ;   Label: LAB_1000f90f
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000f911
    MOV EAX,ECX                         ; 1000f915
        ;   Label: LAB_1000f915
    SUB EDX,EDX                         ; 1000f917
    DIV EBP                             ; 1000f919
    MOV EBX,EDX                         ; 1000f91b
    MOV EAX,ECX                         ; 1000f91d
    SUB EDX,EDX                         ; 1000f91f
    DIV EBP                             ; 1000f921
    MOV ECX,EAX                         ; 1000f923
    CMP EBX,0x9                         ; 1000f925
    JBE 0x1000f92f                      ; 1000f928
        ;   XREF to: 1000f92f (CONDITIONAL_JUMP)  ; LAB_1000f92f
    ADD BL,0x57                         ; 1000f92a
    JMP 0x1000f932                      ; 1000f92d
        ;   XREF to: 1000f932 (UNCONDITIONAL_JUMP)  ; LAB_1000f932
    ADD BL,0x30                         ; 1000f92f
        ;   Label: LAB_1000f92f
    MOV byte ptr [ESI],BL               ; 1000f932
        ;   Label: LAB_1000f932
    INC ESI                             ; 1000f934
    TEST ECX,ECX                        ; 1000f935
    JNZ 0x1000f915                      ; 1000f937
        ;   XREF to: 1000f915 (CONDITIONAL_JUMP)  ; LAB_1000f915
    MOV byte ptr [ESI],0x0              ; 1000f939
    DEC ESI                             ; 1000f93c
    MOV AL,byte ptr [ESI]               ; 1000f93d
        ;   Label: LAB_1000f93d
    MOV CL,byte ptr [EDI]               ; 1000f93f
    MOV byte ptr [ESI],CL               ; 1000f941
    DEC ESI                             ; 1000f943
    MOV byte ptr [EDI],AL               ; 1000f944
    INC EDI                             ; 1000f946
    CMP EDI,ESI                         ; 1000f947
    JC 0x1000f93d                       ; 1000f949
        ;   XREF to: 1000f93d (CONDITIONAL_JUMP)  ; LAB_1000f93d
    POP EBP                             ; 1000f94b
    POP EDI                             ; 1000f94c
    POP ESI                             ; 1000f94d
    POP EBX                             ; 1000f94e
    RET                                 ; 1000f94f

