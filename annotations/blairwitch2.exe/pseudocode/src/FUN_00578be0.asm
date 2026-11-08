; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00578be0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_00578e80 at 00578eac
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00578be0
        ;   Label: FUN_00578be0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00578be4
    MOV EAX,dword ptr [EAX]             ; 00578be8
    MOV dword ptr [EDX],EAX             ; 00578bea
    MOV EAX,EDX                         ; 00578bec
    RET                                 ; 00578bee

