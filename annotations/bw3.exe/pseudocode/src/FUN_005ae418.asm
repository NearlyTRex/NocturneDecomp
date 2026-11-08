; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ae418(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_005a81b8 at 005a81eb
;   FUN_005b17a0 at 005b1817
;
; Referenced Globals:
;   void* PTR_SetUnhandledExceptionFilter_005b3654 = 001b4218
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; Called Functions:
;   FUN_005a7f3c
;   SetUnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae418
        ;   Label: FUN_005ae418
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ae419
    CALL dword ptr [0x006079a0]         ; 005ae41d | PTR_FUN_006079a0
    MOV dword ptr [EAX + 0x54],EBX      ; 005ae423
    XOR EAX,EAX                         ; 005ae426
    MOV EAX,dword ptr FS:[EAX]          ; 005ae428
    MOV EBX,EAX                         ; 005ae42b
    CALL dword ptr [0x006079a0]         ; 005ae42d | PTR_FUN_006079a0
    MOV EAX,dword ptr [EAX + 0x54]      ; 005ae433
    MOV dword ptr [EAX],EBX             ; 005ae436
    CALL dword ptr [0x006079a0]         ; 005ae438 | PTR_FUN_006079a0
    MOV EAX,dword ptr [EAX + 0x54]      ; 005ae43e
    MOV dword ptr [EAX + 0x4],0x5ae248  ; 005ae441 | LAB_005ae248
    CALL dword ptr [0x006079a0]         ; 005ae448 | PTR_FUN_006079a0
    MOV EAX,dword ptr [EAX + 0x54]      ; 005ae44e
    XOR EDX,EDX                         ; 005ae451
    MOV dword ptr FS:[EDX],EAX          ; 005ae453
    PUSH 0x5ae014                       ; 005ae456 | LAB_005ae014
    CALL dword ptr CS:[0x5b3654]        ; 005ae45b | PTR_SetUnhandledExceptionFilter_005b3654
    POP EBX                             ; 005ae462
    RET                                 ; 005ae463

