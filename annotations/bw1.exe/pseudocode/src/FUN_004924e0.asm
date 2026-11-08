; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004924e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00468950
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004924e0
        ;   Label: FUN_004924e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004924e1
    PUSH EDX                            ; 004924e5
    CALL FUN_005ad4c0                   ; 004924e6
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    ADD ESP,0x4                         ; 004924eb
    PUSH 0x5dbc3e                       ; 004924ee
    MOV EBX,EAX                         ; 004924f3
    ADD EAX,0x158                       ; 004924f5
    PUSH EAX                            ; 004924fa
    MOV dword ptr [EAX + -0x4],0x5ff6c4 ; 004924fb
    CALL FUN_00468950                   ; 00492502
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    LEA EAX,[EBX + 0x57c]               ; 00492507
    MOV dword ptr [EBX + 0x564],0x3f800000 ; 0049250d
    MOV dword ptr [EAX + 0x8],0x0       ; 00492517
    MOV EDX,dword ptr [EAX + 0x8]       ; 0049251e
    MOV dword ptr [EAX + 0x4],EDX       ; 00492521
    MOV EDX,dword ptr [EAX + 0x4]       ; 00492524
    MOV dword ptr [EAX],EDX             ; 00492527
    MOV dword ptr [EBX + 0x578],0xbf800000 ; 00492529
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00492533
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0049253d
    MOV dword ptr [EBX + 0x2e0],0x3     ; 00492547
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00492551
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 0049255b
    MOV dword ptr [EBX + 0x2ec],0x0     ; 00492565
    ADD ESP,0x8                         ; 0049256f
    MOV dword ptr [EBX + 0x2f0],0x0     ; 00492572
    MOV EAX,EBX                         ; 0049257c
    MOV dword ptr [EBX + 0x588],0x0     ; 0049257e
    POP EBX                             ; 00492588
    RET                                 ; 00492589

