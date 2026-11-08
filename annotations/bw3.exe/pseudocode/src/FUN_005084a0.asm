; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005084a0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_00506b00 at 00506e3d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005084a0
        ;   Label: FUN_005084a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005084a4
    MOV EAX,dword ptr [EAX]             ; 005084a8
    MOV dword ptr [EDX],EAX             ; 005084aa
    MOV EAX,EDX                         ; 005084ac
    RET                                 ; 005084ae

