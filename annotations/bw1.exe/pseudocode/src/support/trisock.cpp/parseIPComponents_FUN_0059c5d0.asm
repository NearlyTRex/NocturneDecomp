; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_parseIPComponents_FUN_0059c5d0(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[2]:
;   support_trisock.cpp_FUN_0059f1a0 at 0059f1b3
;   support_trisock.cpp_parseIPAddress_FUN_0059c4d0 at 0059c4db
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   support_trisock.cpp_buildIPAddress_FUN_0059c640
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0059c5d0
        ;   Label: support_trisock.cpp_parseIPComponents_FUN_0059c5d0
    SUB ESP,0x10                        ; 0059c5d1
    LEA EAX,[ESP + 0xc]                 ; 0059c5d4
    PUSH EAX                            ; 0059c5d8
    LEA EAX,[ESP + 0xc]                 ; 0059c5d9
    PUSH EAX                            ; 0059c5dd
    LEA EAX,[ESP + 0xc]                 ; 0059c5de
    PUSH EAX                            ; 0059c5e2
    LEA EAX,[ESP + 0xc]                 ; 0059c5e3
    PUSH EAX                            ; 0059c5e7
    PUSH 0x5f8322                       ; 0059c5e8
    MOV EDX,dword ptr [ESP + 0x30]      ; 0059c5ed
    PUSH EDX                            ; 0059c5f1
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0059c5f2
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0x18                        ; 0059c5f7
    CMP EAX,0x4                         ; 0059c5fa
    JZ 0x0059c606                       ; 0059c5fd
        ;   XREF to: 0059c606 (CONDITIONAL_JUMP)  ; LAB_0059c606
    XOR EAX,EAX                         ; 0059c5ff
    ADD ESP,0x10                        ; 0059c601
    POP EBP                             ; 0059c604
    RET                                 ; 0059c605
    PUSH EDI                            ; 0059c606
        ;   Label: LAB_0059c606
    PUSH ESI                            ; 0059c607
    PUSH EBX                            ; 0059c608
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059c609
    PUSH ECX                            ; 0059c60d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0059c60e
    PUSH EBX                            ; 0059c612
    MOV ESI,dword ptr [ESP + 0x18]      ; 0059c613
    PUSH ESI                            ; 0059c617
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059c618
    PUSH EDI                            ; 0059c61c
    MOV EBP,dword ptr [ESP + 0x34]      ; 0059c61d
    PUSH EBP                            ; 0059c621
    CALL support_trisock.cpp_buildIPAddress_FUN_0059c640 ; 0059c622
        ;   XREF to: 0059c640 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_0059c640()
    ADD ESP,0x14                        ; 0059c627
    POP EBX                             ; 0059c62a
    POP ESI                             ; 0059c62b
    POP EDI                             ; 0059c62c
    ADD ESP,0x10                        ; 0059c62d
    POP EBP                             ; 0059c630
    RET                                 ; 0059c631

