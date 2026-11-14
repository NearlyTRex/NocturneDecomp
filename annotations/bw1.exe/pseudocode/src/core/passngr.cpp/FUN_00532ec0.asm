; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_passngr_cpp_FUN_00532ec0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e7abdc
;   undefined4 DAT_01e7abe0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01e7abe0]      ; 00532ec0 | DAT_01e7abe0
        ;   Label: core_passngr.cpp_FUN_00532ec0
    MOV EAX,[0x01e7abdc]                ; 00532ec6 | DAT_01e7abdc
    CMP EAX,EDX                         ; 00532ecb
    SETZ AL                             ; 00532ecd
    AND EAX,0xff                        ; 00532ed0
    RET                                 ; 00532ed5

