; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574ad9(void)
;
;
; Referenced Globals:
;   void* PTR_GetCPInfo_005754e4 = 00175c64
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00574ad9
        ;   Label: crt_unknown.c_FUN_00574ad9
    PUSH EDI                            ; 00574ada
    ADD BH,BH                           ; 00574adb
    AND EAX,0x575520                    ; 00574add
    JMP dword ptr [0x005754e4]          ; 00574ae2 | PTR_GetCPInfo_005754e4

