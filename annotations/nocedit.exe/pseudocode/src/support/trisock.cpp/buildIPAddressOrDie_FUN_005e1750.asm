; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint8_t * __cdecl support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750 (uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)
;
; Parameters:
; uchar *          Stack[0x4]:4   dest_ip
; int              Stack[0x8]:4   octet1
; int              Stack[0xc]:4   octet2
; int              Stack[0x10]:4   octet3
; int              Stack[0x14]:4   octet4
;
; XREF[1]:
;   support_trisock.cpp_staticInit_FUN_005e16b0 at 005e16c9
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_006564a3
;   TerminatedCString s_Invalid_IP_values_d_d_d__006564ba
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   support_trisock.cpp_buildIPAddress_FUN_005e1870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1750
        ;   Label: support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
    PUSH ESI                            ; 005e1751
    PUSH EDI                            ; 005e1752
    PUSH EBP                            ; 005e1753
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e1754
    MOV EDX,dword ptr [ESP + 0x24]      ; 005e1758
    PUSH EDX                            ; 005e175c
    MOV ECX,dword ptr [ESP + 0x24]      ; 005e175d
    PUSH ECX                            ; 005e1761
    MOV ESI,dword ptr [ESP + 0x24]      ; 005e1762
    PUSH ESI                            ; 005e1766
    MOV EDI,dword ptr [ESP + 0x24]      ; 005e1767
    PUSH EDI                            ; 005e176b
    PUSH EBX                            ; 005e176c
    CALL support_trisock.cpp_buildIPAddress_FUN_005e1870 ; 005e176d
        ;   XREF to: 005e1870 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_buildIPAddress_FUN_005e1870(uint8_t * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 005e1772
    TEST EAX,EAX                        ; 005e1775
    JZ 0x005e1780                       ; 005e1777
        ;   XREF to: 005e1780 (CONDITIONAL_JUMP)  ; LAB_005e1780
    MOV EAX,EBX                         ; 005e1779
    POP EBP                             ; 005e177b
    POP EDI                             ; 005e177c
    POP ESI                             ; 005e177d
    POP EBX                             ; 005e177e
    RET                                 ; 005e177f
    MOV EDX,dword ptr [ESP + 0x24]      ; 005e1780
        ;   Label: LAB_005e1780
    PUSH EDX                            ; 005e1784
    MOV ECX,dword ptr [ESP + 0x24]      ; 005e1785
    PUSH ECX                            ; 005e1789
    PUSH ESI                            ; 005e178a
    PUSH EDI                            ; 005e178b
    MOV EBP,0x6564a3                    ; 005e178c | = "..\\support\\trisock.cpp"
    MOV EAX,0x41                        ; 005e1791
    PUSH 0x6564ba                       ; 005e1796 | = "Invalid IP values: %d, %d, %d, %d"
    MOV dword ptr [0x02f0ca48],EBP      ; 005e179b | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005e17a1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e17a6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x14                        ; 005e17ab
    MOV EAX,EBX                         ; 005e17ae
    POP EBP                             ; 005e17b0
    POP EDI                             ; 005e17b1
    POP ESI                             ; 005e17b2
    POP EBX                             ; 005e17b3
    RET                                 ; 005e17b4

