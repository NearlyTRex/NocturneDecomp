; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_watcom_c_FUN_004b19a1(int *param_1)
;
; Parameters:
; int *            Stack[0x4]:4   param_1
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 004b19a1
        ;   Label: crt_watcom.c_FUN_004b19a1
    AND AL,0x4                          ; 004b19a2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b19a4
    MOV EAX,dword ptr [EAX]             ; 004b19a8
    MOV dword ptr [EDX],EAX             ; 004b19aa
    MOV EAX,EDX                         ; 004b19ac
    RET                                 ; 004b19ae

