; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_parseIPComponents_FUN_005e1800(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   support_trisock.cpp_parseIPAddress_FUN_005e1700 at 005e170b
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_006564e8
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   support_trisock.cpp_buildIPAddress_FUN_005e1870
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005e1800
        ;   Label: support_trisock.cpp_parseIPComponents_FUN_005e1800
    SUB ESP,0x10                        ; 005e1801
    LEA EAX,[ESP + 0xc]                 ; 005e1804
    PUSH EAX                            ; 005e1808
    LEA EAX,[ESP + 0xc]                 ; 005e1809
    PUSH EAX                            ; 005e180d
    LEA EAX,[ESP + 0xc]                 ; 005e180e
    PUSH EAX                            ; 005e1812
    LEA EAX,[ESP + 0xc]                 ; 005e1813
    PUSH EAX                            ; 005e1817
    PUSH 0x6564e8                       ; 005e1818 | = "%d.%d.%d.%d"
    MOV EDX,dword ptr [ESP + 0x30]      ; 005e181d
    PUSH EDX                            ; 005e1821
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005e1822
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x18                        ; 005e1827
    CMP EAX,0x4                         ; 005e182a
    JZ 0x005e1836                       ; 005e182d
        ;   XREF to: 005e1836 (CONDITIONAL_JUMP)  ; LAB_005e1836
    XOR EAX,EAX                         ; 005e182f
    ADD ESP,0x10                        ; 005e1831
    POP EBP                             ; 005e1834
    RET                                 ; 005e1835
    PUSH EDI                            ; 005e1836
        ;   Label: LAB_005e1836
    PUSH ESI                            ; 005e1837
    PUSH EBX                            ; 005e1838
    MOV ECX,dword ptr [ESP + 0x18]      ; 005e1839
    PUSH ECX                            ; 005e183d
    MOV EBX,dword ptr [ESP + 0x18]      ; 005e183e
    PUSH EBX                            ; 005e1842
    MOV ESI,dword ptr [ESP + 0x18]      ; 005e1843
    PUSH ESI                            ; 005e1847
    MOV EDI,dword ptr [ESP + 0x18]      ; 005e1848
    PUSH EDI                            ; 005e184c
    MOV EBP,dword ptr [ESP + 0x34]      ; 005e184d
    PUSH EBP                            ; 005e1851
    CALL support_trisock.cpp_buildIPAddress_FUN_005e1870 ; 005e1852
        ;   XREF to: 005e1870 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_buildIPAddress_FUN_005e1870(uint8_t * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 005e1857
    POP EBX                             ; 005e185a
    POP ESI                             ; 005e185b
    POP EDI                             ; 005e185c
    ADD ESP,0x10                        ; 005e185d
    POP EBP                             ; 005e1860
    RET                                 ; 005e1861

