; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_math_c__ZeroTail_FUN_10009cd0(int man,int bit)
;
; Parameters:
; int              Stack[0x4]:4   man
; int              Stack[0x8]:4   bit
;
; XREF[1]:
;   crt_math.c__RoundMan_FUN_10009db0 at 10009e0b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10009cd0
        ;   Label: crt_math.c__ZeroTail_FUN_10009cd0
    PUSH ESI                            ; 10009cd1
    MOV ESI,dword ptr [ESP + 0x10]      ; 10009cd2
    PUSH EDI                            ; 10009cd6
    MOV EAX,ESI                         ; 10009cd7
    MOV EBX,0xffffffff                  ; 10009cd9
    CDQ                                 ; 10009cde
    AND EDX,0x1f                        ; 10009cdf
    MOV CL,0x1f                         ; 10009ce2
    ADD EAX,EDX                         ; 10009ce4
    SAR EAX,0x5                         ; 10009ce6
    MOV EDI,EAX                         ; 10009ce9
    MOV EAX,ESI                         ; 10009ceb
    CDQ                                 ; 10009ced
    XOR EAX,EDX                         ; 10009cee
    SUB EAX,EDX                         ; 10009cf0
    AND EAX,0x1f                        ; 10009cf2
    XOR EAX,EDX                         ; 10009cf5
    SUB EAX,EDX                         ; 10009cf7
    SUB CL,AL                           ; 10009cf9
    MOV EAX,dword ptr [ESP + 0x10]      ; 10009cfb
    SHL EBX,CL                          ; 10009cff
    NOT EBX                             ; 10009d01
    TEST dword ptr [EAX + EDI*0x4],EBX  ; 10009d03
    JZ 0x10009d0e                       ; 10009d06
        ;   XREF to: 10009d0e (CONDITIONAL_JUMP)  ; LAB_10009d0e
    XOR EAX,EAX                         ; 10009d08
    POP EDI                             ; 10009d0a
    POP ESI                             ; 10009d0b
    POP EBX                             ; 10009d0c
    RET                                 ; 10009d0d
    INC EDI                             ; 10009d0e
        ;   Label: LAB_10009d0e
    CMP EDI,0x3                         ; 10009d0f
    JGE 0x10009d25                      ; 10009d12
        ;   XREF to: 10009d25 (CONDITIONAL_JUMP)  ; LAB_10009d25
    LEA EAX,[EAX + EDI*0x4]             ; 10009d14
    CMP dword ptr [EAX],0x0             ; 10009d17
        ;   Label: LAB_10009d17
    JNZ 0x10009d2e                      ; 10009d1a
        ;   XREF to: 10009d2e (CONDITIONAL_JUMP)  ; LAB_10009d2e
    ADD EAX,0x4                         ; 10009d1c
    INC EDI                             ; 10009d1f
    CMP EDI,0x3                         ; 10009d20
    JL 0x10009d17                       ; 10009d23
        ;   XREF to: 10009d17 (CONDITIONAL_JUMP)  ; LAB_10009d17
    MOV EAX,0x1                         ; 10009d25
        ;   Label: LAB_10009d25
    POP EDI                             ; 10009d2a
    POP ESI                             ; 10009d2b
    POP EBX                             ; 10009d2c
    RET                                 ; 10009d2d
    XOR EAX,EAX                         ; 10009d2e
        ;   Label: LAB_10009d2e
    POP EDI                             ; 10009d30
    POP ESI                             ; 10009d31
    POP EBX                             ; 10009d32
    RET                                 ; 10009d33

