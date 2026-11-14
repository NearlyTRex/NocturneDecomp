; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_hitTestButtons_FUN_0059bad0(CAudioRecPuzzle *this_ptr,int x,int y)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bad0
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_hitTestButtons_FUN_0059bad0
    PUSH ESI                            ; 0059bad1
    PUSH EDI                            ; 0059bad2
    PUSH EBP                            ; 0059bad3
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059bad4
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059bad8
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0059badc
    XOR EDX,EDX                         ; 0059badf
    TEST ECX,ECX                        ; 0059bae1
    JLE 0x0059bb1e                      ; 0059bae3
        ;   XREF to: 0059bb1e (CONDITIONAL_JUMP)  ; LAB_0059bb1e
    CMP dword ptr [EAX + 0x74],0x1      ; 0059bae5
        ;   Label: LAB_0059bae5
    JNZ 0x0059bb0f                      ; 0059bae9
        ;   XREF to: 0059bb0f (CONDITIONAL_JUMP)  ; LAB_0059bb0f
    MOV EDI,dword ptr [EAX + 0x6c]      ; 0059baeb
    MOV ECX,dword ptr [EAX + 0x64]      ; 0059baee
    MOV EBX,dword ptr [EAX + 0x68]      ; 0059baf1
    MOV ESI,dword ptr [EAX + 0x70]      ; 0059baf4
    ADD EDI,ECX                         ; 0059baf7
    ADD ESI,EBX                         ; 0059baf9
    CMP EBP,ECX                         ; 0059bafb
    JL 0x0059bb0f                       ; 0059bafd
        ;   XREF to: 0059bb0f (CONDITIONAL_JUMP)  ; LAB_0059bb0f
    CMP EBP,EDI                         ; 0059baff
    JG 0x0059bb0f                       ; 0059bb01
        ;   XREF to: 0059bb0f (CONDITIONAL_JUMP)  ; LAB_0059bb0f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0059bb03
    CMP EBX,EDI                         ; 0059bb07
    JG 0x0059bb0f                       ; 0059bb09
        ;   XREF to: 0059bb0f (CONDITIONAL_JUMP)  ; LAB_0059bb0f
    CMP ESI,EDI                         ; 0059bb0b
    JGE 0x0059bb25                      ; 0059bb0d
        ;   XREF to: 0059bb25 (CONDITIONAL_JUMP)  ; LAB_0059bb25
    MOV ECX,dword ptr [ESP + 0x14]      ; 0059bb0f
        ;   Label: LAB_0059bb0f
    INC EDX                             ; 0059bb13
    MOV EBX,dword ptr [ECX + 0x1c]      ; 0059bb14
    ADD EAX,0x2c                        ; 0059bb17
    CMP EDX,EBX                         ; 0059bb1a
    JL 0x0059bae5                       ; 0059bb1c
        ;   XREF to: 0059bae5 (CONDITIONAL_JUMP)  ; LAB_0059bae5
    XOR EAX,EAX                         ; 0059bb1e
        ;   Label: LAB_0059bb1e
    POP EBP                             ; 0059bb20
    POP EDI                             ; 0059bb21
    POP ESI                             ; 0059bb22
    POP EBX                             ; 0059bb23
    RET                                 ; 0059bb24
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059bb25
        ;   Label: LAB_0059bb25
    MOV dword ptr [EAX + 0x20],EDX      ; 0059bb29
    MOV EAX,0x1                         ; 0059bb2c
    POP EBP                             ; 0059bb31
    POP EDI                             ; 0059bb32
    POP ESI                             ; 0059bb33
    POP EBX                             ; 0059bb34
    RET                                 ; 0059bb35

