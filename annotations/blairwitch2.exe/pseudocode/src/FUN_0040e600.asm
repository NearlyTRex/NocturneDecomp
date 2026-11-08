; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e600(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   FUN_00450c60 at 004513e5
;   FUN_004ad640 at 004ae548
;   FUN_00563060 at 0056391f
;
; Referenced Globals:
;   TerminatedCString s_Open_pct_f_005cb262
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e600
        ;   Label: FUN_0040e600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e601
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e605
    FLD float ptr [ESP + 0xc]           ; 0040e609
    MOV dword ptr [EBX + 0x478],EAX     ; 0040e60d
    SUB ESP,0x8                         ; 0040e613
    FSTP double ptr [ESP]               ; 0040e616
    PUSH 0x5cb262                       ; 0040e619 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0040e61e | PTR_DAT_00609ed0
    PUSH EDX                            ; 0040e624 | DAT_007c158c
    CALL FUN_00436710                   ; 0040e625
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    MOV ECX,dword ptr [EBX + 0x4a4]     ; 0040e62a
    ADD ESP,0x10                        ; 0040e630
    TEST ECX,ECX                        ; 0040e633
    JNZ 0x0040e64b                      ; 0040e635
        ;   XREF to: 0040e64b (CONDITIONAL_JUMP)  ; LAB_0040e64b
    MOV AH,byte ptr [EBX + 0x484]       ; 0040e637
    MOV dword ptr [EBX + 0x4a4],0x1     ; 0040e63d
    TEST AH,AH                          ; 0040e647
    JNZ 0x0040e64d                      ; 0040e649
        ;   XREF to: 0040e64d (CONDITIONAL_JUMP)  ; LAB_0040e64d
    POP EBX                             ; 0040e64b
        ;   Label: LAB_0040e64b
    RET                                 ; 0040e64c
    LEA EDX,[EBX + 0x484]               ; 0040e64d
        ;   Label: LAB_0040e64d
    PUSH EDX                            ; 0040e653
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040e654
    PUSH EBX                            ; 0040e65a
    CALL dword ptr [EAX + 0x34]         ; 0040e65b
    ADD ESP,0x8                         ; 0040e65e
    POP EBX                             ; 0040e661
    RET                                 ; 0040e662

