; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)
;
; Parameters:
; char *           Stack[0x4]:4   key
; int              Stack[0x8]:4   lower_bound
; int              Stack[0xc]:4   upper_bound
;
; XREF[1]:
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0 at 00544263
;
; Referenced Globals:
;   char*[500] g_MessageKeys
;   char*[500] g_MessageTexts
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544170
        ;   Label: support_newmsg.cpp_findLocalizedString_FUN_00544170
    PUSH ESI                            ; 00544171
    PUSH EDI                            ; 00544172
    PUSH EBP                            ; 00544173
    MOV EDI,dword ptr [ESP + 0x14]      ; 00544174
    MOV EBP,dword ptr [ESP + 0x18]      ; 00544178
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054417c
    CMP EBP,EDX                         ; 00544180
    JLE 0x0054418b                      ; 00544182
        ;   XREF to: 0054418b (CONDITIONAL_JUMP)  ; LAB_0054418b
    MOV EAX,EDI                         ; 00544184
    POP EBP                             ; 00544186
    POP EDI                             ; 00544187
    POP ESI                             ; 00544188
    POP EBX                             ; 00544189
    RET                                 ; 0054418a
    ADD EDX,EBP                         ; 0054418b
        ;   Label: LAB_0054418b
    MOV EAX,EDX                         ; 0054418d
    SAR EDX,0x1f                        ; 0054418f
    SUB EAX,EDX                         ; 00544192
    SAR EAX,0x1                         ; 00544194
    MOV EBX,EAX                         ; 00544196
    LEA ESI,[EAX*0x4 + 0x0]             ; 00544198
    MOV ECX,dword ptr [ESI + 0x2fa8cdc] ; 0054419f | g_MessageKeys
    PUSH ECX                            ; 005441a5
    PUSH EDI                            ; 005441a6
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005441a7
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005441ac
    TEST EAX,EAX                        ; 005441af
    JL 0x005441c0                       ; 005441b1
        ;   XREF to: 005441c0 (CONDITIONAL_JUMP)  ; LAB_005441c0
    JG 0x005441d1                       ; 005441b3
        ;   XREF to: 005441d1 (CONDITIONAL_JUMP)  ; LAB_005441d1
    MOV EAX,dword ptr [ESI + 0x2fa94ac] ; 005441b5 | g_MessageTexts
    POP EBP                             ; 005441bb
    POP EDI                             ; 005441bc
    POP ESI                             ; 005441bd
    POP EBX                             ; 005441be
    RET                                 ; 005441bf
    DEC EBX                             ; 005441c0
        ;   Label: LAB_005441c0
    PUSH EBX                            ; 005441c1
    PUSH EBP                            ; 005441c2
    PUSH EDI                            ; 005441c3
    CALL support_newmsg.cpp_findLocalizedString_FUN_00544170 ; 005441c4
        ;   XREF to: 00544170 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 005441c9
    POP EBP                             ; 005441cc
    POP EDI                             ; 005441cd
    POP ESI                             ; 005441ce
    POP EBX                             ; 005441cf
    RET                                 ; 005441d0
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005441d1
        ;   Label: LAB_005441d1
    PUSH ESI                            ; 005441d5
    INC EBX                             ; 005441d6
    PUSH EBX                            ; 005441d7
    PUSH EDI                            ; 005441d8
    CALL support_newmsg.cpp_findLocalizedString_FUN_00544170 ; 005441d9
        ;   XREF to: 00544170 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_00544170(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 005441de
    POP EBP                             ; 005441e1
    POP EDI                             ; 005441e2
    POP ESI                             ; 005441e3
    POP EBX                             ; 005441e4
    RET                                 ; 005441e5

