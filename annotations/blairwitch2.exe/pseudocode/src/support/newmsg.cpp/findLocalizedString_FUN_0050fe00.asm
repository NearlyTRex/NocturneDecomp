; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_0050fe00(char *key,int lower_bound,int upper_bound)
;
; Parameters:
; char *           Stack[0x4]:4   key
; int              Stack[0x8]:4   lower_bound
; int              Stack[0xc]:4   upper_bound
;
; XREF[1]:
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80 at 0050fee2
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fe00
        ;   Label: support_newmsg.cpp_findLocalizedString_FUN_0050fe00
    PUSH ESI                            ; 0050fe01
    PUSH EDI                            ; 0050fe02
    PUSH EBP                            ; 0050fe03
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050fe04
    MOV EBP,dword ptr [ESP + 0x18]      ; 0050fe08
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050fe0c
    CMP EBP,EDX                         ; 0050fe10
    JLE 0x0050fe1b                      ; 0050fe12
        ;   XREF to: 0050fe1b (CONDITIONAL_JUMP)  ; LAB_0050fe1b
    MOV EAX,EDI                         ; 0050fe14
    POP EBP                             ; 0050fe16
    POP EDI                             ; 0050fe17
    POP ESI                             ; 0050fe18
    POP EBX                             ; 0050fe19
    RET                                 ; 0050fe1a
    ADD EDX,EBP                         ; 0050fe1b
        ;   Label: LAB_0050fe1b
    MOV EAX,EDX                         ; 0050fe1d
    SAR EDX,0x1f                        ; 0050fe1f
    SUB EAX,EDX                         ; 0050fe22
    SAR EAX,0x1                         ; 0050fe24
    MOV EBX,EAX                         ; 0050fe26
    LEA ESI,[EAX*0x4 + 0x0]             ; 0050fe28
    MOV ECX,dword ptr [ESI + 0x1d6325c] ; 0050fe2f
    PUSH ECX                            ; 0050fe35
    PUSH EDI                            ; 0050fe36
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0050fe37
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050fe3c
    TEST EAX,EAX                        ; 0050fe3f
    JL 0x0050fe50                       ; 0050fe41
        ;   XREF to: 0050fe50 (CONDITIONAL_JUMP)  ; LAB_0050fe50
    JG 0x0050fe61                       ; 0050fe43
        ;   XREF to: 0050fe61 (CONDITIONAL_JUMP)  ; LAB_0050fe61
    MOV EAX,dword ptr [ESI + 0x1d63a2c] ; 0050fe45
    POP EBP                             ; 0050fe4b
    POP EDI                             ; 0050fe4c
    POP ESI                             ; 0050fe4d
    POP EBX                             ; 0050fe4e
    RET                                 ; 0050fe4f
    DEC EBX                             ; 0050fe50
        ;   Label: LAB_0050fe50
    PUSH EBX                            ; 0050fe51
    PUSH EBP                            ; 0050fe52
    PUSH EDI                            ; 0050fe53
    CALL support_newmsg.cpp_findLocalizedString_FUN_0050fe00 ; 0050fe54
        ;   XREF to: 0050fe00 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_0050fe00(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 0050fe59
    POP EBP                             ; 0050fe5c
    POP EDI                             ; 0050fe5d
    POP ESI                             ; 0050fe5e
    POP EBX                             ; 0050fe5f
    RET                                 ; 0050fe60
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050fe61
        ;   Label: LAB_0050fe61
    PUSH ESI                            ; 0050fe65
    INC EBX                             ; 0050fe66
    PUSH EBX                            ; 0050fe67
    PUSH EDI                            ; 0050fe68
    CALL support_newmsg.cpp_findLocalizedString_FUN_0050fe00 ; 0050fe69
        ;   XREF to: 0050fe00 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_0050fe00(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 0050fe6e
    POP EBP                             ; 0050fe71
    POP EDI                             ; 0050fe72
    POP ESI                             ; 0050fe73
    POP EBX                             ; 0050fe74
    RET                                 ; 0050fe75

