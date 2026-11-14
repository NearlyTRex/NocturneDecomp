; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_parseIPComponents_FUN_00578cf0(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[2]:
;   support_trisock.cpp_FUN_00579720 at 00579733
;   support_trisock.cpp_parseIPAddress_FUN_00578bf0 at 00578bfb
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   support_trisock.cpp_buildIPAddress_FUN_00578d60
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00578cf0
        ;   Label: support_trisock.cpp_parseIPComponents_FUN_00578cf0
    SUB ESP,0x10                        ; 00578cf1
    LEA EAX,[ESP + 0xc]                 ; 00578cf4
    PUSH EAX                            ; 00578cf8
    LEA EAX,[ESP + 0xc]                 ; 00578cf9
    PUSH EAX                            ; 00578cfd
    LEA EAX,[ESP + 0xc]                 ; 00578cfe
    PUSH EAX                            ; 00578d02
    LEA EAX,[ESP + 0xc]                 ; 00578d03
    PUSH EAX                            ; 00578d07
    PUSH 0x5ed008                       ; 00578d08
    MOV EDX,dword ptr [ESP + 0x30]      ; 00578d0d
    PUSH EDX                            ; 00578d11
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00578d12
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0x18                        ; 00578d17
    CMP EAX,0x4                         ; 00578d1a
    JZ 0x00578d26                       ; 00578d1d
        ;   XREF to: 00578d26 (CONDITIONAL_JUMP)  ; LAB_00578d26
    XOR EAX,EAX                         ; 00578d1f
    ADD ESP,0x10                        ; 00578d21
    POP EBP                             ; 00578d24
    RET                                 ; 00578d25
    PUSH EDI                            ; 00578d26
        ;   Label: LAB_00578d26
    PUSH ESI                            ; 00578d27
    PUSH EBX                            ; 00578d28
    MOV ECX,dword ptr [ESP + 0x18]      ; 00578d29
    PUSH ECX                            ; 00578d2d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00578d2e
    PUSH EBX                            ; 00578d32
    MOV ESI,dword ptr [ESP + 0x18]      ; 00578d33
    PUSH ESI                            ; 00578d37
    MOV EDI,dword ptr [ESP + 0x18]      ; 00578d38
    PUSH EDI                            ; 00578d3c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00578d3d
    PUSH EBP                            ; 00578d41
    CALL support_trisock.cpp_buildIPAddress_FUN_00578d60 ; 00578d42
        ;   XREF to: 00578d60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_buildIPAddress_FUN_00578d60(uint8_t * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 00578d47
    POP EBX                             ; 00578d4a
    POP ESI                             ; 00578d4b
    POP EDI                             ; 00578d4c
    ADD ESP,0x10                        ; 00578d4d
    POP EBP                             ; 00578d50
    RET                                 ; 00578d51

