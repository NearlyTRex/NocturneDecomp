; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a83(void)
;
;
; Referenced Globals:
;   void* PTR_CloseClipboard_00575418 = 00175904
;   void* PTR_GlobalAlloc_00575544 = 00175e26
;
; *****************************************************************************

section .text

    AND EAX,0x575544                    ; 00574a83 | PTR_GlobalAlloc_00575544
        ;   Label: crt_unknown.c_FUN_00574a83
    JMP dword ptr [0x00575418]          ; 00574a88 | PTR_CloseClipboard_00575418

