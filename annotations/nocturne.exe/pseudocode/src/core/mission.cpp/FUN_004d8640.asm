; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8640(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004c1190 at 004c1300
;
; Referenced Globals:
;   string s_..\\core\\mission.cpp_00589999
;   string s_CDemonMission::getNextLoadedInve_005899ad
;   string s_..\\core\\mission.cpp_005899e3
;   string s_CDemonMission::getNextLoadedInve_005899f7
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8640
        ;   Label: FUN_004d8640
    PUSH EDI                            ; 004d8641
    PUSH EBP                            ; 004d8642
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d8643
    CMP dword ptr [EBX + 0x854],0x0     ; 004d8647
    JNZ 0x004d8675                      ; 004d864e
        ;   XREF to: 004d8675 (CONDITIONAL_JUMP)  ; LAB_004d8675
    PUSH ESI                            ; 004d8650
    MOV ECX,0x589999                    ; 004d8651 | = "..\\core\\mission.cpp"
    MOV ESI,0x186                       ; 004d8656
    PUSH 0x5899ad                       ; 004d865b | = "CDemonMission::getNextLoadedInventory..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d8660 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d8666 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d866c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d8671
    POP ESI                             ; 004d8674
    MOV EDI,dword ptr [ESP + 0x14]      ; 004d8675
        ;   Label: LAB_004d8675
    PUSH EDI                            ; 004d8679
    MOV EBP,dword ptr [EBX + 0x854]     ; 004d867a
    PUSH EBP                            ; 004d8680
    CALL FUN_00564520                   ; 004d8681
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004d8686
    TEST EAX,EAX                        ; 004d8689
    JNZ 0x004d86a3                      ; 004d868b
        ;   XREF to: 004d86a3 (CONDITIONAL_JUMP)  ; LAB_004d86a3
    MOV EAX,dword ptr [EBX + 0x854]     ; 004d868d
        ;   Label: LAB_004d868d
    MOV EDX,dword ptr [EAX + 0x144]     ; 004d8693
    MOV dword ptr [EBX + 0x854],EDX     ; 004d8699
    POP EBP                             ; 004d869f
    POP EDI                             ; 004d86a0
    POP EBX                             ; 004d86a1
    RET                                 ; 004d86a2
    MOV ECX,dword ptr [EBX + 0x854]     ; 004d86a3
        ;   Label: LAB_004d86a3
    PUSH ECX                            ; 004d86a9
    PUSH EDI                            ; 004d86aa
    MOV EAX,0x5899e3                    ; 004d86ab | = "..\\core\\mission.cpp"
    MOV EDX,0x18b                       ; 004d86b0
    PUSH 0x5899f7                       ; 004d86b5 | = "CDemonMission::getNextLoadedInventory..."
    MOV [0x01cc4800],EAX                ; 004d86ba | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d86bf | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d86c5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 004d86ca
    JMP 0x004d868d                      ; 004d86cd
        ;   XREF to: 004d868d (UNCONDITIONAL_JUMP)  ; LAB_004d868d

