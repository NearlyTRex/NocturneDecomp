; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * engine_special_cpp_FUN_00582f10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c83374
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00582f10
        ;   Label: engine_special.cpp_FUN_00582f10
    MOV EAX,[0x02c83374]                ; 00582f14 | DAT_02c83374
    MOV dword ptr [EDX],EAX             ; 00582f19
    MOV EAX,0x6257d0                    ; 00582f1b
    RET                                 ; 00582f20

