; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056ea40(void)
;
;
; Referenced Globals:
;   void* PTR_GetProcAddress_00575534 = 00175ddc
;   void* PTR_LoadLibraryA_00575560 = 00175eaa
;   string s_USER32.DLL_00598c64
;   string s_GetActiveWindow_00598c70
;
; Called Functions:
;   GetProcAddress
;   LoadLibraryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ea40
        ;   Label: FUN_0056ea40
    PUSH 0x598c64                       ; 0056ea41 | = "USER32.DLL"
    CALL dword ptr CS:[0x575560]        ; 0056ea46 | PTR_LoadLibraryA_00575560
    XOR EBX,EBX                         ; 0056ea4d
    TEST EAX,EAX                        ; 0056ea4f
    JZ 0x0056ea6a                       ; 0056ea51
        ;   XREF to: 0056ea6a (CONDITIONAL_JUMP)  ; LAB_0056ea6a
    PUSH 0x598c70                       ; 0056ea53 | = "GetActiveWindow"
    PUSH EAX                            ; 0056ea58
    CALL dword ptr CS:[0x575534]        ; 0056ea59 | PTR_GetProcAddress_00575534
    MOV EDX,EAX                         ; 0056ea60
    TEST EAX,EAX                        ; 0056ea62
    JZ 0x0056ea6a                       ; 0056ea64
        ;   XREF to: 0056ea6a (CONDITIONAL_JUMP)  ; LAB_0056ea6a
    CALL EDX                            ; 0056ea66
    MOV EBX,EAX                         ; 0056ea68
    TEST EBX,EBX                        ; 0056ea6a
        ;   Label: LAB_0056ea6a
    SETNZ AL                            ; 0056ea6c
    AND EAX,0xff                        ; 0056ea6f
    POP EBX                             ; 0056ea74
    RET                                 ; 0056ea75

