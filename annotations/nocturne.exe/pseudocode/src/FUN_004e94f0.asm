; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e94f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    MOV dword ptr [0x01cea3f8],0x1      ; 004e94f0 | DAT_01cea3f8
        ;   Label: FUN_004e94f0
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004e94fa
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004e94ff
    MOV ECX,0x12                        ; 004e9501
    SAR EDX,0x1f                        ; 004e9506
    IDIV ECX                            ; 004e9509
    MOV [0x01cea3f4],EAX                ; 004e950b | DAT_01cea3f4
    RET                                 ; 004e9510

