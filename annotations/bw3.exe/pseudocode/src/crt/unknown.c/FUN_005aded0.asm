; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * crt_unknown_c_FUN_005aded0(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7f6c at 005a80e0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005afd50
;   crt_unknown.c_FUN_005afd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aded0
        ;   Label: crt_unknown.c_FUN_005aded0
    PUSH ESI                            ; 005aded1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005aded2
    PUSH EDX                            ; 005aded6
    CALL crt_unknown.c_FUN_005afd50     ; 005aded7
        ;   XREF to: 005afd50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afd50()
    INC EAX                             ; 005adedc
    ADD ESP,0x4                         ; 005adedd
    LEA ESI,[EAX*0x2 + 0x0]             ; 005adee0
    PUSH ESI                            ; 005adee7
    CALL crt_unknown.c_FUN_005a3650     ; 005adee8
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005adeed
    MOV EBX,EAX                         ; 005adef0
    TEST EAX,EAX                        ; 005adef2
    JZ 0x005adf05                       ; 005adef4
        ;   XREF to: 005adf05 (CONDITIONAL_JUMP)  ; LAB_005adf05
    PUSH ESI                            ; 005adef6
    MOV ECX,dword ptr [ESP + 0x10]      ; 005adef7
    PUSH ECX                            ; 005adefb
    PUSH EAX                            ; 005adefc
    CALL crt_unknown.c_FUN_005afd80     ; 005adefd
        ;   XREF to: 005afd80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afd80()
    ADD ESP,0xc                         ; 005adf02
    MOV EAX,EBX                         ; 005adf05
        ;   Label: LAB_005adf05
    POP ESI                             ; 005adf07
    POP EBX                             ; 005adf08
    RET                                 ; 005adf09

