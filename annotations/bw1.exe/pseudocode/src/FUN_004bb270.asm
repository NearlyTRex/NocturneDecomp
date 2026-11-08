; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004bcba0 at 004bcd3f
;   FUN_004bde80 at 004bdee2
;   FUN_004be0f0 at 004be146
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bb270
        ;   Label: FUN_004bb270
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bb274
    MOV dword ptr [EAX],EDX             ; 004bb278
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bb27a
    MOV dword ptr [EAX + 0x4],EDX       ; 004bb27e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bb281
    MOV dword ptr [EAX + 0x8],EDX       ; 004bb285
    MOV EDX,dword ptr [ESP + 0x14]      ; 004bb288
    MOV dword ptr [EAX + 0xc],EDX       ; 004bb28c
    RET                                 ; 004bb28f

