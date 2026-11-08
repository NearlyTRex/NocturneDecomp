; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00524b10(int param_1,undefined4 param_2,float param_3)
;
;
; XREF[9]:
;   FUN_0041bb40 at 0041bbab
;   FUN_00445cb0 at 004461d2
;   FUN_00460230 at 004603e9
;   FUN_004a1d00 at 004a6339
;   FUN_0051bf30 at 0051c030
;   FUN_00524620 at 0052469a
;   FUN_00524880 at 00524911
;   FUN_00524ae0 at 00524b01
;   FUN_00532930 at 00532adb
;
; Referenced Globals:
;   undefined4 DAT_005eaf57
;
; Called Functions:
;   FUN_00524b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524b10
        ;   Label: FUN_00524b10
    SUB ESP,0x4                         ; 00524b11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00524b14
    FLD float ptr [ESP + 0x14]          ; 00524b18
    FCOMP float ptr [0x005eaf57]        ; 00524b1c | DAT_005eaf57
    FNSTSW AX                           ; 00524b22
    SAHF                                ; 00524b24
    JZ 0x00524b4a                       ; 00524b25
        ;   XREF to: 00524b4a (CONDITIONAL_JUMP)  ; LAB_00524b4a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00524b27
        ;   Label: LAB_00524b27
    MOV dword ptr [EBX + 0x2c],0x0      ; 00524b2b
    MOV dword ptr [EBX + 0x4],EAX       ; 00524b32
    MOV EAX,dword ptr [ESP + 0x14]      ; 00524b35
    PUSH EBX                            ; 00524b39
    MOV dword ptr [EBX + 0x8],EAX       ; 00524b3a
    CALL FUN_00524b70                   ; 00524b3d
        ;   XREF to: 00524b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00524b70()
    ADD ESP,0x4                         ; 00524b42
    ADD ESP,0x4                         ; 00524b45
    POP EBX                             ; 00524b48
    RET                                 ; 00524b49
    MOV EDX,dword ptr [ESP + 0x10]      ; 00524b4a
        ;   Label: LAB_00524b4a
    PUSH EDX                            ; 00524b4e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00524b4f
    PUSH dword ptr [EBX + 0x8]          ; 00524b52
    PUSH ECX                            ; 00524b55
    MOV EAX,dword ptr [EBX + 0x50]      ; 00524b56
    PUSH EBX                            ; 00524b59
    CALL dword ptr [EAX + 0x4]          ; 00524b5a
    ADD ESP,0x10                        ; 00524b5d
    MOV dword ptr [ESP],EAX             ; 00524b60
    FILD dword ptr [ESP]                ; 00524b63
    FSTP float ptr [ESP + 0x14]         ; 00524b66
    JMP 0x00524b27                      ; 00524b6a
        ;   XREF to: 00524b27 (UNCONDITIONAL_JUMP)  ; LAB_00524b27

