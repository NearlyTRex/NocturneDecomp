; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_parseIPComponents_FUN_0056f5c0(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[2]:
;   support_trisock.cpp_FUN_00572190 at 005721a3
;   support_trisock.cpp_parseIPAddress_FUN_0056f4c0 at 0056f4cb
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005a5b9c
;   support_trisock.cpp_buildIPAddress_FUN_0056f630
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056f5c0
        ;   Label: support_trisock.cpp_parseIPComponents_FUN_0056f5c0
    SUB ESP,0x10                        ; 0056f5c1
    LEA EAX,[ESP + 0xc]                 ; 0056f5c4
    PUSH EAX                            ; 0056f5c8
    LEA EAX,[ESP + 0xc]                 ; 0056f5c9
    PUSH EAX                            ; 0056f5cd
    LEA EAX,[ESP + 0xc]                 ; 0056f5ce
    PUSH EAX                            ; 0056f5d2
    LEA EAX,[ESP + 0xc]                 ; 0056f5d3
    PUSH EAX                            ; 0056f5d7
    PUSH 0x5d6891                       ; 0056f5d8
    MOV EDX,dword ptr [ESP + 0x30]      ; 0056f5dd
    PUSH EDX                            ; 0056f5e1
    CALL crt_stdio.c_sscanf_FUN_005a5b9c ; 0056f5e2
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005a5b9c(char * str, char * format)
    ADD ESP,0x18                        ; 0056f5e7
    CMP EAX,0x4                         ; 0056f5ea
    JZ 0x0056f5f6                       ; 0056f5ed
        ;   XREF to: 0056f5f6 (CONDITIONAL_JUMP)  ; LAB_0056f5f6
    XOR EAX,EAX                         ; 0056f5ef
    ADD ESP,0x10                        ; 0056f5f1
    POP EBP                             ; 0056f5f4
    RET                                 ; 0056f5f5
    PUSH EDI                            ; 0056f5f6
        ;   Label: LAB_0056f5f6
    PUSH ESI                            ; 0056f5f7
    PUSH EBX                            ; 0056f5f8
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056f5f9
    PUSH ECX                            ; 0056f5fd
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056f5fe
    PUSH EBX                            ; 0056f602
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056f603
    PUSH ESI                            ; 0056f607
    MOV EDI,dword ptr [ESP + 0x18]      ; 0056f608
    PUSH EDI                            ; 0056f60c
    MOV EBP,dword ptr [ESP + 0x34]      ; 0056f60d
    PUSH EBP                            ; 0056f611
    CALL support_trisock.cpp_buildIPAddress_FUN_0056f630 ; 0056f612
        ;   XREF to: 0056f630 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddress_FUN_0056f630()
    ADD ESP,0x14                        ; 0056f617
    POP EBX                             ; 0056f61a
    POP ESI                             ; 0056f61b
    POP EDI                             ; 0056f61c
    ADD ESP,0x10                        ; 0056f61d
    POP EBP                             ; 0056f620
    RET                                 ; 0056f621

