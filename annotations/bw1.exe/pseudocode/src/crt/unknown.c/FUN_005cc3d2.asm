; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cc3d2(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8e45 at 005c8e6d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cc3d2
        ;   Label: crt_unknown.c_FUN_005cc3d2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005cc3d6
    MOV dword ptr [EAX],EDX             ; 005cc3da
    RET                                 ; 005cc3dc

