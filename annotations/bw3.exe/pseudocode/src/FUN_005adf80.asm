; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005adf80(void)
;
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005b35c8 = 001b3f72
;   void* PTR_LoadLibraryA_005b35f8 = 001b4054
;   TerminatedCString s_USER32_DLL_005da95c
;   TerminatedCString s_GetActiveWindow_005da968
;
; Called Functions:
;   GetProcAddress
;   LoadLibraryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adf80
        ;   Label: FUN_005adf80
    PUSH 0x5da95c                       ; 005adf81 | = "USER32.DLL"
    CALL dword ptr CS:[0x5b35f8]        ; 005adf86 | PTR_LoadLibraryA_005b35f8
    XOR EBX,EBX                         ; 005adf8d
    TEST EAX,EAX                        ; 005adf8f
    JZ 0x005adfaa                       ; 005adf91
        ;   XREF to: 005adfaa (CONDITIONAL_JUMP)  ; LAB_005adfaa
    PUSH 0x5da968                       ; 005adf93 | = "GetActiveWindow"
    PUSH EAX                            ; 005adf98
    CALL dword ptr CS:[0x5b35c8]        ; 005adf99 | PTR_GetProcAddress_005b35c8
    MOV EDX,EAX                         ; 005adfa0
    TEST EAX,EAX                        ; 005adfa2
    JZ 0x005adfaa                       ; 005adfa4
        ;   XREF to: 005adfaa (CONDITIONAL_JUMP)  ; LAB_005adfaa
    CALL EDX                            ; 005adfa6
    MOV EBX,EAX                         ; 005adfa8
    TEST EBX,EBX                        ; 005adfaa
        ;   Label: LAB_005adfaa
    SETNZ AL                            ; 005adfac
    AND EAX,0xff                        ; 005adfaf
    POP EBX                             ; 005adfb4
    RET                                 ; 005adfb5

