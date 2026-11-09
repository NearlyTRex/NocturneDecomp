; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_00531010(char *key,int lower_bound,int upper_bound)
;
; Parameters:
; char *           Stack[0x4]:4   key
; int              Stack[0x8]:4   lower_bound
; int              Stack[0xc]:4   upper_bound
;
; XREF[1]:
;   support_newmsg.cpp_getLocalizedString_FUN_00531090 at 005310f2
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531010
        ;   Label: support_newmsg.cpp_findLocalizedString_FUN_00531010
    PUSH ESI                            ; 00531011
    PUSH EDI                            ; 00531012
    PUSH EBP                            ; 00531013
    MOV EDI,dword ptr [ESP + 0x14]      ; 00531014
    MOV EBP,dword ptr [ESP + 0x18]      ; 00531018
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053101c
    CMP EBP,EDX                         ; 00531020
    JLE 0x0053102b                      ; 00531022
        ;   XREF to: 0053102b (CONDITIONAL_JUMP)  ; LAB_0053102b
    MOV EAX,EDI                         ; 00531024
    POP EBP                             ; 00531026
    POP EDI                             ; 00531027
    POP ESI                             ; 00531028
    POP EBX                             ; 00531029
    RET                                 ; 0053102a
    ADD EDX,EBP                         ; 0053102b
        ;   Label: LAB_0053102b
    MOV EAX,EDX                         ; 0053102d
    SAR EDX,0x1f                        ; 0053102f
    SUB EAX,EDX                         ; 00531032
    SAR EAX,0x1                         ; 00531034
    MOV EBX,EAX                         ; 00531036
    LEA ESI,[EAX*0x4 + 0x0]             ; 00531038
    MOV ECX,dword ptr [ESI + 0x1d7f1c4] ; 0053103f
    PUSH ECX                            ; 00531045
    PUSH EDI                            ; 00531046
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 00531047
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053104c
    TEST EAX,EAX                        ; 0053104f
    JL 0x00531060                       ; 00531051
        ;   XREF to: 00531060 (CONDITIONAL_JUMP)  ; LAB_00531060
    JG 0x00531071                       ; 00531053
        ;   XREF to: 00531071 (CONDITIONAL_JUMP)  ; LAB_00531071
    MOV EAX,dword ptr [ESI + 0x1d7f994] ; 00531055
    POP EBP                             ; 0053105b
    POP EDI                             ; 0053105c
    POP ESI                             ; 0053105d
    POP EBX                             ; 0053105e
    RET                                 ; 0053105f
    DEC EBX                             ; 00531060
        ;   Label: LAB_00531060
    PUSH EBX                            ; 00531061
    PUSH EBP                            ; 00531062
    PUSH EDI                            ; 00531063
    CALL support_newmsg.cpp_findLocalizedString_FUN_00531010 ; 00531064
        ;   XREF to: 00531010 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00531010(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 00531069
    POP EBP                             ; 0053106c
    POP EDI                             ; 0053106d
    POP ESI                             ; 0053106e
    POP EBX                             ; 0053106f
    RET                                 ; 00531070
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00531071
        ;   Label: LAB_00531071
    PUSH ESI                            ; 00531075
    INC EBX                             ; 00531076
    PUSH EBX                            ; 00531077
    PUSH EDI                            ; 00531078
    CALL support_newmsg.cpp_findLocalizedString_FUN_00531010 ; 00531079
        ;   XREF to: 00531010 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00531010(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 0053107e
    POP EBP                             ; 00531081
    POP EDI                             ; 00531082
    POP ESI                             ; 00531083
    POP EBX                             ; 00531084
    RET                                 ; 00531085

