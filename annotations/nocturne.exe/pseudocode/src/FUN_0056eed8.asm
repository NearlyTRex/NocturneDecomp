; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056eed8(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00567458 at 0056748b
;   FUN_00573e30 at 00573ea7
;
; Referenced Globals:
;   void* PTR_SetUnhandledExceptionFilter_005755b4 = 00176048
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_005671dc
;   SetUnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056eed8
        ;   Label: FUN_0056eed8
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056eed9
    CALL dword ptr [0x005c1abc]         ; 0056eedd | PTR_FUN_005c1abc
    MOV dword ptr [EAX + 0x54],EBX      ; 0056eee3
    XOR EAX,EAX                         ; 0056eee6
    MOV EAX,dword ptr FS:[EAX]          ; 0056eee8
    MOV EBX,EAX                         ; 0056eeeb
    CALL dword ptr [0x005c1abc]         ; 0056eeed | PTR_FUN_005c1abc
    MOV EAX,dword ptr [EAX + 0x54]      ; 0056eef3
    MOV dword ptr [EAX],EBX             ; 0056eef6
    CALL dword ptr [0x005c1abc]         ; 0056eef8 | PTR_FUN_005c1abc
    MOV EAX,dword ptr [EAX + 0x54]      ; 0056eefe
    MOV dword ptr [EAX + 0x4],0x56ed08  ; 0056ef01 | LAB_0056ed08
    CALL dword ptr [0x005c1abc]         ; 0056ef08 | PTR_FUN_005c1abc
    MOV EAX,dword ptr [EAX + 0x54]      ; 0056ef0e
    XOR EDX,EDX                         ; 0056ef11
    MOV dword ptr FS:[EDX],EAX          ; 0056ef13
    PUSH 0x56ead4                       ; 0056ef16 | LAB_0056ead4
    CALL dword ptr CS:[0x5755b4]        ; 0056ef1b | PTR_SetUnhandledExceptionFilter_005755b4
    POP EBX                             ; 0056ef22
    RET                                 ; 0056ef23

