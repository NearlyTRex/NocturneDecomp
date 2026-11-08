; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0059ab50(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_0059bec0 at 0059beee
;   FUN_0059bf70 at 0059bf7f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fe4f4 = 0059ab50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ab50
        ;   Label: FUN_0059ab50
    MOV dword ptr [EAX],0x5fe4f4        ; 0059ab54 | PTR_FUN_005fe4f4
    LEA EAX,[EAX]                       ; 0059ab5a
    RET                                 ; 0059ab60
        ;   Label: LAB_0059ab60

