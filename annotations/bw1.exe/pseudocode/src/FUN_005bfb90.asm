; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bfb90(void)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_00626584 = 005c4f0f
;   undefined1* PTR_FUN_00626588 = 005c4f0f
;   undefined1* PTR_FUN_0062658c = 005c4f0f
;   undefined1* PTR_FUN_00626590 = 005c4f0f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb90
        ;   Label: FUN_005bfb90
    PUSH ESI                            ; 005bfb91
    MOV EDX,0x5c4359                    ; 005bfb92
    MOV ECX,0x5c4385                    ; 005bfb97
    MOV EBX,0x5c4558                    ; 005bfb9c
    MOV ESI,0x5c4f0a                    ; 005bfba1
    MOV dword ptr [0x00626584],EDX      ; 005bfba6 | PTR_FUN_00626584
    MOV dword ptr [0x00626588],ECX      ; 005bfbac | PTR_FUN_00626588
    MOV dword ptr [0x0062658c],EBX      ; 005bfbb2 | PTR_FUN_0062658c
    MOV dword ptr [0x00626590],ESI      ; 005bfbb8 | PTR_FUN_00626590
    POP ESI                             ; 005bfbbe
    POP EBX                             ; 005bfbbf
    RET                                 ; 005bfbc0

