; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053fad0(int param_1)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0053fad0
        ;   Label: FUN_0053fad0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053fad3
    CMP dword ptr [EAX + 0x6c8],0x6     ; 0053fad7
    JNZ 0x0053faec                      ; 0053fade
        ;   XREF to: 0053faec (CONDITIONAL_JUMP)  ; LAB_0053faec
    XOR ECX,ECX                         ; 0053fae0
    MOV dword ptr [ESP],ECX             ; 0053fae2
    MOV EAX,dword ptr [ESP]             ; 0053fae5
    ADD ESP,0x8                         ; 0053fae8
    RET                                 ; 0053faeb
    PUSH 0x43480000                     ; 0053faec
        ;   Label: LAB_0053faec
    PUSH 0x43160000                     ; 0053faf1
    CALL FUN_0040cf60                   ; 0053faf6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0053fafb
    FLD float ptr [ESP + 0xc]           ; 0053faff
    ADD ESP,0x8                         ; 0053fb03
    FSTP float ptr [ESP]                ; 0053fb06
    MOV EAX,dword ptr [ESP]             ; 0053fb09
    ADD ESP,0x8                         ; 0053fb0c
    RET                                 ; 0053fb0f

