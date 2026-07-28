; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_004ee2f0(char *key,int lower_bound,int upper_bound)
;
; Parameters:
; char *           Stack[0x4]:4   key
; int              Stack[0x8]:4   lower_bound
; int              Stack[0xc]:4   upper_bound
;
; XREF[1]:
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370 at 004ee3d2
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee2f0
        ;   Label: support_newmsg.cpp_findLocalizedString_FUN_004ee2f0
    PUSH ESI                            ; 004ee2f1
    PUSH EDI                            ; 004ee2f2
    PUSH EBP                            ; 004ee2f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ee2f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ee2f8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ee2fc
    CMP EBP,EDX                         ; 004ee300
    JLE 0x004ee30b                      ; 004ee302
        ;   XREF to: 004ee30b (CONDITIONAL_JUMP)  ; LAB_004ee30b
    MOV EAX,EDI                         ; 004ee304
    POP EBP                             ; 004ee306
    POP EDI                             ; 004ee307
    POP ESI                             ; 004ee308
    POP EBX                             ; 004ee309
    RET                                 ; 004ee30a
    ADD EDX,EBP                         ; 004ee30b
        ;   Label: LAB_004ee30b
    MOV EAX,EDX                         ; 004ee30d
    SAR EDX,0x1f                        ; 004ee30f
    SUB EAX,EDX                         ; 004ee312
    SAR EAX,0x1                         ; 004ee314
    MOV EBX,EAX                         ; 004ee316
    LEA ESI,[EAX*0x4 + 0x0]             ; 004ee318
    MOV ECX,dword ptr [ESI + 0x1d1681c] ; 004ee31f
    PUSH ECX                            ; 004ee325
    PUSH EDI                            ; 004ee326
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004ee327
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ee32c
    TEST EAX,EAX                        ; 004ee32f
    JL 0x004ee340                       ; 004ee331
        ;   XREF to: 004ee340 (CONDITIONAL_JUMP)  ; LAB_004ee340
    JG 0x004ee351                       ; 004ee333
        ;   XREF to: 004ee351 (CONDITIONAL_JUMP)  ; LAB_004ee351
    MOV EAX,dword ptr [ESI + 0x1d16fec] ; 004ee335
    POP EBP                             ; 004ee33b
    POP EDI                             ; 004ee33c
    POP ESI                             ; 004ee33d
    POP EBX                             ; 004ee33e
    RET                                 ; 004ee33f
    DEC EBX                             ; 004ee340
        ;   Label: LAB_004ee340
    PUSH EBX                            ; 004ee341
    PUSH EBP                            ; 004ee342
    PUSH EDI                            ; 004ee343
    CALL support_newmsg.cpp_findLocalizedString_FUN_004ee2f0 ; 004ee344
        ;   XREF to: 004ee2f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_004ee2f0(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 004ee349
    POP EBP                             ; 004ee34c
    POP EDI                             ; 004ee34d
    POP ESI                             ; 004ee34e
    POP EBX                             ; 004ee34f
    RET                                 ; 004ee350
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ee351
        ;   Label: LAB_004ee351
    PUSH ESI                            ; 004ee355
    INC EBX                             ; 004ee356
    PUSH EBX                            ; 004ee357
    PUSH EDI                            ; 004ee358
    CALL support_newmsg.cpp_findLocalizedString_FUN_004ee2f0 ; 004ee359
        ;   XREF to: 004ee2f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_004ee2f0(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 004ee35e
    POP EBP                             ; 004ee361
    POP EDI                             ; 004ee362
    POP ESI                             ; 004ee363
    POP EBX                             ; 004ee364
    RET                                 ; 004ee365

