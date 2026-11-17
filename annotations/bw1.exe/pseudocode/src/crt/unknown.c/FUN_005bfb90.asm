; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bfb90(void)
;
;
; Referenced Globals:
;   void*[4] g_ARRAY_PTR_00626584
;   undefined4 g_ARRAY_PTR_00626584[1]
;   undefined4 g_ARRAY_PTR_00626584[2]
;   undefined4 g_ARRAY_PTR_00626584[3]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb90
        ;   Label: crt_unknown.c_FUN_005bfb90
    PUSH ESI                            ; 005bfb91
    MOV EDX,0x5c4359                    ; 005bfb92
    MOV ECX,0x5c4385                    ; 005bfb97
    MOV EBX,0x5c4558                    ; 005bfb9c
    MOV ESI,0x5c4f0a                    ; 005bfba1
    MOV dword ptr [0x00626584],EDX      ; 005bfba6 | g_ARRAY_PTR_00626584
    MOV dword ptr [0x00626588],ECX      ; 005bfbac | g_ARRAY_PTR_00626584[1]
    MOV dword ptr [0x0062658c],EBX      ; 005bfbb2 | g_ARRAY_PTR_00626584[2]
    MOV dword ptr [0x00626590],ESI      ; 005bfbb8 | g_ARRAY_PTR_00626584[3]
    POP ESI                             ; 005bfbbe
    POP EBX                             ; 005bfbbf
    RET                                 ; 005bfbc0

