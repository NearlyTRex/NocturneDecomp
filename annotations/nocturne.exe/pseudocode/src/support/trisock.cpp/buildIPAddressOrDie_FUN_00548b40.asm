; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_00548b40(uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)
;
; Parameters:
; uchar *          Stack[0x4]:4   dest_ip
; int              Stack[0x8]:4   octet1
; int              Stack[0xc]:4   octet2
; int              Stack[0x10]:4   octet3
; int              Stack[0x14]:4   octet4
;
; XREF[1]:
;   support_trisock.cpp_staticInit_FUN_00548aa0 at 00548ab9
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596bd8
;   TerminatedCString s_Invalid_IP_values_d_d_d_00596bef
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   support_trisock.cpp_buildIPAddress_FUN_00548c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548b40
        ;   Label: support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40
    PUSH ESI                            ; 00548b41
    PUSH EDI                            ; 00548b42
    PUSH EBP                            ; 00548b43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00548b44
    MOV EDX,dword ptr [ESP + 0x24]      ; 00548b48
    PUSH EDX                            ; 00548b4c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00548b4d
    PUSH ECX                            ; 00548b51
    MOV ESI,dword ptr [ESP + 0x24]      ; 00548b52
    PUSH ESI                            ; 00548b56
    MOV EDI,dword ptr [ESP + 0x24]      ; 00548b57
    PUSH EDI                            ; 00548b5b
    PUSH EBX                            ; 00548b5c
    CALL support_trisock.cpp_buildIPAddress_FUN_00548c60 ; 00548b5d
        ;   XREF to: 00548c60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_buildIPAddress_FUN_00548c60(uint8_t * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 00548b62
    TEST EAX,EAX                        ; 00548b65
    JZ 0x00548b70                       ; 00548b67
        ;   XREF to: 00548b70 (CONDITIONAL_JUMP)  ; LAB_00548b70
    MOV EAX,EBX                         ; 00548b69
    POP EBP                             ; 00548b6b
    POP EDI                             ; 00548b6c
    POP ESI                             ; 00548b6d
    POP EBX                             ; 00548b6e
    RET                                 ; 00548b6f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00548b70
        ;   Label: LAB_00548b70
    PUSH EDX                            ; 00548b74
    MOV ECX,dword ptr [ESP + 0x24]      ; 00548b75
    PUSH ECX                            ; 00548b79
    PUSH ESI                            ; 00548b7a
    PUSH EDI                            ; 00548b7b
    MOV EBP,0x596bd8                    ; 00548b7c | = "..\\support\\trisock.cpp"
    MOV EAX,0x41                        ; 00548b81
    PUSH 0x596bef                       ; 00548b86 | = "Invalid IP values: %d, %d, %d, %d"
    MOV dword ptr [0x01cc4800],EBP      ; 00548b8b | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00548b91 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00548b96
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x14                        ; 00548b9b
    MOV EAX,EBX                         ; 00548b9e
    POP EBP                             ; 00548ba0
    POP EDI                             ; 00548ba1
    POP ESI                             ; 00548ba2
    POP EBX                             ; 00548ba3
    RET                                 ; 00548ba4

