; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_005088e0(char *key,int lower_bound,int upper_bound)
;
; Parameters:
; char *           Stack[0x4]:4   key
; int              Stack[0x8]:4   lower_bound
; int              Stack[0xc]:4   upper_bound
;
; XREF[1]:
;   support_newmsg.cpp_getLocalizedString_FUN_00508960 at 005089c2
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005088e0
        ;   Label: support_newmsg.cpp_findLocalizedString_FUN_005088e0
    PUSH ESI                            ; 005088e1
    PUSH EDI                            ; 005088e2
    PUSH EBP                            ; 005088e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005088e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005088e8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005088ec
    CMP EBP,EDX                         ; 005088f0
    JLE 0x005088fb                      ; 005088f2
        ;   XREF to: 005088fb (CONDITIONAL_JUMP)  ; LAB_005088fb
    MOV EAX,EDI                         ; 005088f4
    POP EBP                             ; 005088f6
    POP EDI                             ; 005088f7
    POP ESI                             ; 005088f8
    POP EBX                             ; 005088f9
    RET                                 ; 005088fa
    ADD EDX,EBP                         ; 005088fb
        ;   Label: LAB_005088fb
    MOV EAX,EDX                         ; 005088fd
    SAR EDX,0x1f                        ; 005088ff
    SUB EAX,EDX                         ; 00508902
    SAR EAX,0x1                         ; 00508904
    MOV EBX,EAX                         ; 00508906
    LEA ESI,[EAX*0x4 + 0x0]             ; 00508908
    MOV ECX,dword ptr [ESI + 0x1dd489c] ; 0050890f
    PUSH ECX                            ; 00508915
    PUSH EDI                            ; 00508916
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00508917
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 0050891c
    TEST EAX,EAX                        ; 0050891f
    JL 0x00508930                       ; 00508921
        ;   XREF to: 00508930 (CONDITIONAL_JUMP)  ; LAB_00508930
    JG 0x00508941                       ; 00508923
        ;   XREF to: 00508941 (CONDITIONAL_JUMP)  ; LAB_00508941
    MOV EAX,dword ptr [ESI + 0x1dd506c] ; 00508925
    POP EBP                             ; 0050892b
    POP EDI                             ; 0050892c
    POP ESI                             ; 0050892d
    POP EBX                             ; 0050892e
    RET                                 ; 0050892f
    DEC EBX                             ; 00508930
        ;   Label: LAB_00508930
    PUSH EBX                            ; 00508931
    PUSH EBP                            ; 00508932
    PUSH EDI                            ; 00508933
    CALL support_newmsg.cpp_findLocalizedString_FUN_005088e0 ; 00508934
        ;   XREF to: 005088e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_005088e0(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 00508939
    POP EBP                             ; 0050893c
    POP EDI                             ; 0050893d
    POP ESI                             ; 0050893e
    POP EBX                             ; 0050893f
    RET                                 ; 00508940
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00508941
        ;   Label: LAB_00508941
    PUSH ESI                            ; 00508945
    INC EBX                             ; 00508946
    PUSH EBX                            ; 00508947
    PUSH EDI                            ; 00508948
    CALL support_newmsg.cpp_findLocalizedString_FUN_005088e0 ; 00508949
        ;   XREF to: 005088e0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_findLocalizedString_FUN_005088e0(char * key, int lower_bound, int upper_bound)
    ADD ESP,0xc                         ; 0050894e
    POP EBP                             ; 00508951
    POP EDI                             ; 00508952
    POP ESI                             ; 00508953
    POP EBX                             ; 00508954
    RET                                 ; 00508955

