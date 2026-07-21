; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_clipLineGlobal_FUN_00403940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   engine_2d.c_clipAndDrawLine_FUN_00403990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403940
        ;   Label: engine_2d.c_clipLineGlobal_FUN_00403940
    PUSH ESI                            ; 00403941
    PUSH EDI                            ; 00403942
    PUSH EBP                            ; 00403943
    MOV EDX,dword ptr [0x01c00c64]      ; 00403944 | DAT_01c00c64
    PUSH EDX                            ; 0040394a
    MOV ECX,dword ptr [0x01c00c60]      ; 0040394b | DAT_01c00c60
    PUSH ECX                            ; 00403951
    MOV EBX,dword ptr [0x01c00c5c]      ; 00403952 | DAT_01c00c5c
    PUSH EBX                            ; 00403958
    MOV ESI,dword ptr [0x01c00c58]      ; 00403959 | DAT_01c00c58
    PUSH ESI                            ; 0040395f
    MOV EDI,dword ptr [ESP + 0x30]      ; 00403960
    PUSH EDI                            ; 00403964
    MOV EBP,dword ptr [ESP + 0x30]      ; 00403965
    PUSH EBP                            ; 00403969
    MOV EAX,dword ptr [ESP + 0x30]      ; 0040396a
    PUSH EAX                            ; 0040396e
    MOV EDX,dword ptr [ESP + 0x30]      ; 0040396f
    PUSH EDX                            ; 00403973
    CALL engine_2d.c_clipAndDrawLine_FUN_00403990 ; 00403974
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clipAndDrawLine_FUN_00403990()
    ADD ESP,0x20                        ; 00403979
    POP EBP                             ; 0040397c
    POP EDI                             ; 0040397d
    POP ESI                             ; 0040397e
    POP EBX                             ; 0040397f
    RET                                 ; 00403980

