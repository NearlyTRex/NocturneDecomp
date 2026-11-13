; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_saveCameraFog_FUN_004434c0(SFog *fog,_FILE *file_handle)
;
; Parameters:
; SFog *           Stack[0x4]:4   fog
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004434c0
        ;   Label: core_dcamera.cpp_saveCameraFog_FUN_004434c0
    PUSH ESI                            ; 004434c1
    PUSH EDI                            ; 004434c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004434c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004434c7
    PUSH 0x5ce77d                       ; 004434cb
    PUSH ESI                            ; 004434d0
    CALL crt_unknown.c_FUN_005b8010     ; 004434d1
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004434d6
    MOV EDX,dword ptr [EBX + 0x8]       ; 004434d9
    PUSH EDX                            ; 004434dc
    MOV ECX,dword ptr [EBX + 0x4]       ; 004434dd
    PUSH ECX                            ; 004434e0
    MOV EDI,dword ptr [EBX]             ; 004434e1
    PUSH EDI                            ; 004434e3
    PUSH 0x5ce78d                       ; 004434e4
    PUSH ESI                            ; 004434e9
    CALL crt_unknown.c_FUN_005b8010     ; 004434ea
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 004434ef
    PUSH 0x5ce797                       ; 004434f2
    PUSH ESI                            ; 004434f7
    CALL crt_unknown.c_FUN_005b8010     ; 004434f8
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004434fd
    SUB ESP,0x8                         ; 00443500
    FLD float ptr [EBX + 0x14]          ; 00443503
    FSTP double ptr [ESP]               ; 00443506
    SUB ESP,0x8                         ; 00443509
    FLD float ptr [EBX + 0x10]          ; 0044350c
    FSTP double ptr [ESP]               ; 0044350f
    SUB ESP,0x8                         ; 00443512
    FLD float ptr [EBX + 0xc]           ; 00443515
    FSTP double ptr [ESP]               ; 00443518
    PUSH 0x5ce79f                       ; 0044351b
    PUSH ESI                            ; 00443520
    CALL crt_unknown.c_FUN_005b8010     ; 00443521
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 00443526
    SUB ESP,0x8                         ; 00443529
    FLD float ptr [EBX + 0x1c]          ; 0044352c
    FSTP double ptr [ESP]               ; 0044352f
    SUB ESP,0x8                         ; 00443532
    FLD float ptr [EBX + 0x18]          ; 00443535
    FSTP double ptr [ESP]               ; 00443538
    PUSH 0x5ce7a9                       ; 0044353b
    PUSH ESI                            ; 00443540
    CALL crt_unknown.c_FUN_005b8010     ; 00443541
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x18                        ; 00443546
    SUB ESP,0x8                         ; 00443549
    FLD float ptr [EBX + 0x20]          ; 0044354c
    FSTP double ptr [ESP]               ; 0044354f
    PUSH 0x5ce7b0                       ; 00443552
    PUSH ESI                            ; 00443557
    CALL crt_unknown.c_FUN_005b8010     ; 00443558
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0044355d
    POP EDI                             ; 00443560
    POP ESI                             ; 00443561
    POP EBX                             ; 00443562
    RET                                 ; 00443563

