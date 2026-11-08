; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c32a8(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005bd078 at 005bd0ab
;   FUN_005c6710 at 005c6787
;
; Referenced Globals:
;   void* PTR_SetUnhandledExceptionFilter_005c8640 = 001c91d6
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;
; Called Functions:
;   FUN_005bcdfc
;   SetUnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c32a8
        ;   Label: FUN_005c32a8
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c32a9
    CALL dword ptr [0x0061f2a4]         ; 005c32ad | PTR_FUN_0061f2a4
    MOV dword ptr [EAX + 0x54],EBX      ; 005c32b3
    XOR EAX,EAX                         ; 005c32b6
    MOV EAX,dword ptr FS:[EAX]          ; 005c32b8
    MOV EBX,EAX                         ; 005c32bb
    CALL dword ptr [0x0061f2a4]         ; 005c32bd | PTR_FUN_0061f2a4
    MOV EAX,dword ptr [EAX + 0x54]      ; 005c32c3
    MOV dword ptr [EAX],EBX             ; 005c32c6
    CALL dword ptr [0x0061f2a4]         ; 005c32c8 | PTR_FUN_0061f2a4
    MOV EAX,dword ptr [EAX + 0x54]      ; 005c32ce
    MOV dword ptr [EAX + 0x4],0x5c30d8  ; 005c32d1 | LAB_005c30d8
    CALL dword ptr [0x0061f2a4]         ; 005c32d8 | PTR_FUN_0061f2a4
    MOV EAX,dword ptr [EAX + 0x54]      ; 005c32de
    XOR EDX,EDX                         ; 005c32e1
    MOV dword ptr FS:[EDX],EAX          ; 005c32e3
    PUSH 0x5c2ea4                       ; 005c32e6 | LAB_005c2ea4
    CALL dword ptr CS:[0x5c8640]        ; 005c32eb | PTR_SetUnhandledExceptionFilter_005c8640
    POP EBX                             ; 005c32f2
    RET                                 ; 005c32f3

