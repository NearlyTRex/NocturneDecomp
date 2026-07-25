; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_00532fa0(void)
;
;
; Referenced Globals:
;   undefined1 DAT_005c0e80
;   undefined4 DAT_02dc9d64
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00532fa0
        ;   Label: FUN_00532fa0
    MOV EAX,[0x02dc9d64]                ; 00532fa4 | DAT_02dc9d64
    MOV dword ptr [EDX],EAX             ; 00532fa9
    MOV EAX,0x5c0e80                    ; 00532fab | DAT_005c0e80
    RET                                 ; 00532fb0

