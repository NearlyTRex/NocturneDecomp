; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056cd9b(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_0056b75d at 0056b7d2
;   crt_fstream.cpp_openFile_FUN_00565eb5 at 00565edb
;
; Called Functions:
;   FUN_00570ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd9b
        ;   Label: FUN_0056cd9b
    PUSH ESI                            ; 0056cd9c
    PUSH EBP                            ; 0056cd9d
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056cd9e
    CMP dword ptr [EBX + 0x2c],-0x1     ; 0056cda2
    JNZ 0x0056ce3a                      ; 0056cda6
        ;   XREF to: 0056ce3a (CONDITIONAL_JUMP)  ; LAB_0056ce3a
    MOV AH,byte ptr [ESP + 0x18]        ; 0056cdac
    TEST AH,0x8                         ; 0056cdb0
    JNZ 0x0056ce40                      ; 0056cdb3
        ;   XREF to: 0056ce40 (CONDITIONAL_JUMP)  ; LAB_0056ce40
    MOV DH,byte ptr [ESP + 0x18]        ; 0056cdb9
        ;   Label: LAB_0056cdb9
    TEST DH,0x2                         ; 0056cdbd
    JZ 0x0056cdd0                       ; 0056cdc0
        ;   XREF to: 0056cdd0 (CONDITIONAL_JUMP)  ; LAB_0056cdd0
    TEST DH,0xd                         ; 0056cdc2
    JNZ 0x0056cdd0                      ; 0056cdc5
        ;   XREF to: 0056cdd0 (CONDITIONAL_JUMP)  ; LAB_0056cdd0
    MOV CH,DH                           ; 0056cdc7
    OR CH,0x10                          ; 0056cdc9
    MOV byte ptr [ESP + 0x18],CH        ; 0056cdcc
    TEST byte ptr [ESP + 0x19],0x1      ; 0056cdd0
        ;   Label: LAB_0056cdd0
    JZ 0x0056cdde                       ; 0056cdd5
        ;   XREF to: 0056cdde (CONDITIONAL_JUMP)  ; LAB_0056cdde
    TEST byte ptr [ESP + 0x18],0x80     ; 0056cdd7
    JNZ 0x0056ce3a                      ; 0056cddc
        ;   XREF to: 0056ce3a (CONDITIONAL_JUMP)  ; LAB_0056ce3a
    MOV DL,byte ptr [ESP + 0x18]        ; 0056cdde
        ;   Label: LAB_0056cdde
    TEST DL,0x40                        ; 0056cde2
    JZ 0x0056cdec                       ; 0056cde5
        ;   XREF to: 0056cdec (CONDITIONAL_JUMP)  ; LAB_0056cdec
    TEST DL,0x20                        ; 0056cde7
    JNZ 0x0056ce3a                      ; 0056cdea
        ;   XREF to: 0056ce3a (CONDITIONAL_JUMP)  ; LAB_0056ce3a
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056cdec
        ;   Label: LAB_0056cdec
    PUSH ECX                            ; 0056cdf0
    LEA EAX,[ESP + 0x1c]                ; 0056cdf1
    PUSH EAX                            ; 0056cdf5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056cdf6
    PUSH ESI                            ; 0056cdfa
    CALL FUN_00570ad0                   ; 0056cdfb
        ;   XREF to: 00570ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ad0()
    ADD ESP,0xc                         ; 0056ce00
    MOV dword ptr [EBX + 0x2c],EAX      ; 0056ce03
    TEST EAX,EAX                        ; 0056ce06
    JL 0x0056ce4e                       ; 0056ce08
        ;   XREF to: 0056ce4e (CONDITIONAL_JUMP)  ; LAB_0056ce4e
    MOV CL,byte ptr [EBX + 0x39]        ; 0056ce0a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056ce0d
    AND CL,0xfe                         ; 0056ce11
    MOV dword ptr [EBX + 0x30],EAX      ; 0056ce14
    MOV byte ptr [EBX + 0x39],CL        ; 0056ce17
    TEST byte ptr [ESP + 0x18],0x4      ; 0056ce1a
    JZ 0x0056ce34                       ; 0056ce1f
        ;   XREF to: 0056ce34 (CONDITIONAL_JUMP)  ; LAB_0056ce34
    MOV EBP,dword ptr [ESP + 0x18]      ; 0056ce21
    PUSH EBP                            ; 0056ce25
    PUSH 0x2                            ; 0056ce26
    PUSH 0x0                            ; 0056ce28
    MOV EAX,dword ptr [EBX + 0x28]      ; 0056ce2a
    PUSH EBX                            ; 0056ce2d
    CALL dword ptr [EAX + 0x18]         ; 0056ce2e
    ADD ESP,0x10                        ; 0056ce31
    MOV EAX,EBX                         ; 0056ce34
        ;   Label: LAB_0056ce34
    POP EBP                             ; 0056ce36
    POP ESI                             ; 0056ce37
    POP EBX                             ; 0056ce38
    RET                                 ; 0056ce39
    XOR EAX,EAX                         ; 0056ce3a
        ;   Label: LAB_0056ce3a
    POP EBP                             ; 0056ce3c
    POP ESI                             ; 0056ce3d
    POP EBX                             ; 0056ce3e
    RET                                 ; 0056ce3f
    MOV DL,AH                           ; 0056ce40
        ;   Label: LAB_0056ce40
    OR DL,0x2                           ; 0056ce42
    MOV byte ptr [ESP + 0x18],DL        ; 0056ce45
    JMP 0x0056cdb9                      ; 0056ce49
        ;   XREF to: 0056cdb9 (UNCONDITIONAL_JUMP)  ; LAB_0056cdb9
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0056ce4e
        ;   Label: LAB_0056ce4e
    JMP 0x0056ce3a                      ; 0056ce55
        ;   XREF to: 0056ce3a (UNCONDITIONAL_JUMP)  ; LAB_0056ce3a

