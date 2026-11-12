; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_passngr_cpp_FUN_00511b6e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e5ec6c
;   undefined4 DAT_01e5ec70
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00511b6e
        ;   Label: core_passngr.cpp_FUN_00511b6e
    MOV EDX,dword ptr [0x01e5ec70]      ; 00511b70 | DAT_01e5ec70
    MOV EAX,[0x01e5ec6c]                ; 00511b76 | DAT_01e5ec6c
    CMP EAX,EDX                         ; 00511b7b
    SETZ AL                             ; 00511b7d
    AND EAX,0xff                        ; 00511b80
    RET                                 ; 00511b85

