; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e2e1(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 0040e2e1
        ;   Label: FUN_0040e2e1
    AND AL,0x4                          ; 0040e2e2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e2e4
    MOV EAX,dword ptr [EAX]             ; 0040e2e8
    MOV dword ptr [EDX],EAX             ; 0040e2ea
    MOV EAX,EDX                         ; 0040e2ec
    RET                                 ; 0040e2ee

