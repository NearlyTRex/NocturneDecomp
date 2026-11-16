; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0056325d(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00604d34
;   undefined4 DAT_00604d38
;   undefined4 DAT_00604d3c
;   undefined4 DAT_00604d40
;   undefined4 DAT_01c6b5cc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056325d
        ;   Label: FUN_0056325d
    MOV EBP,ESP                         ; 0056325e
    PUSH ESI                            ; 00563260
    PUSH EDI                            ; 00563261
    MOV [0x00604d34],EAX                ; 00563262 | DAT_00604d34
    MOV dword ptr [0x00604d38],EBX      ; 00563267 | DAT_00604d38
    MOV dword ptr [0x00604d3c],ECX      ; 0056326d | DAT_00604d3c
    MOV dword ptr [0x00604d40],EDX      ; 00563273 | DAT_00604d40
    MOV EBX,dword ptr [EBP + 0x8]       ; 00563279
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056327c
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056327f
    CALL dword ptr [0x01c6b5cc]         ; 00563282 | DAT_01c6b5cc
    MOV EAX,[0x00604d34]                ; 00563288 | DAT_00604d34
    MOV EBX,dword ptr [0x00604d38]      ; 0056328d | DAT_00604d38
    MOV ECX,dword ptr [0x00604d3c]      ; 00563293 | DAT_00604d3c
    MOV EDX,dword ptr [0x00604d40]      ; 00563299 | DAT_00604d40
    POP EDI                             ; 0056329f
    POP ESI                             ; 005632a0
    LEAVE                               ; 005632a1
    RET                                 ; 005632a2

