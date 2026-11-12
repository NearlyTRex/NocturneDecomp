; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00570924(int param_1,undefined1 *param_2)
;
;
; Called Functions:
;   crt_string.c__strncpy_FUN_00565f70
;   crt_unknown.c_FUN_005708c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570924
        ;   Label: crt_unknown.c_FUN_00570924
    PUSH ESI                            ; 00570925
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570926
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057092a
    LEA EAX,[EBX + 0x16]                ; 0057092e
    PUSH EAX                            ; 00570931
    LEA EAX,[EBX + 0x18]                ; 00570932
    PUSH EAX                            ; 00570935
    LEA EAX,[ESI + 0x14]                ; 00570936
    PUSH EAX                            ; 00570939
    CALL crt_unknown.c_FUN_005708c0     ; 0057093a
        ;   XREF to: 005708c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005708c0()
    ADD ESP,0xc                         ; 0057093f
    MOV AL,byte ptr [ESI]               ; 00570942
    ADD ESI,0x2c                        ; 00570944
    MOV byte ptr [EBX + 0x15],AL        ; 00570947
    PUSH 0xff                           ; 0057094a
    MOV EAX,dword ptr [ESI + -0xc]      ; 0057094f
    PUSH ESI                            ; 00570952
    MOV dword ptr [EBX + 0x1a],EAX      ; 00570953
    LEA EAX,[EBX + 0x1e]                ; 00570956
    PUSH EAX                            ; 00570959
    CALL crt_string.c__strncpy_FUN_00565f70 ; 0057095a
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00565f70(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0057095f
    MOV byte ptr [EBX + 0x11d],0x0      ; 00570962
    POP ESI                             ; 00570969
    POP EBX                             ; 0057096a
    RET                                 ; 0057096b

