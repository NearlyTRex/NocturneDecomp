; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0fe0(int param_1,undefined4 param_2)
;
;
; XREF[23]:
;   FUN_004115b0 at 00411d54
;   FUN_00412ba0 at 00413516
;   FUN_0041bb40 at 0041c52a
;   FUN_00423b70 at 00423cd1
;   FUN_00428ae0 at 00429c33
;   FUN_00445cb0 at 00446981
;   FUN_00448570 at 00448938
;   FUN_00459100 at 0045a4c0
;   FUN_004768a0 at 00476d02
;   FUN_0047b510 at 0047c4b8
;   ... and 13 more
;
; Referenced Globals:
;   TerminatedCString s_Capture_005dcba3
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf580
;
; Called Functions:
;   FUN_00433f10
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0fe0
        ;   Label: FUN_004a0fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0fe1
    MOV EAX,[0x0061d95c]                ; 004a0fe5 | DAT_0061d95c
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004a0fea | DAT_01ccf580
    JNZ 0x004a100b                      ; 004a0ff1
        ;   XREF to: 004a100b (CONDITIONAL_JUMP)  ; LAB_004a100b
    PUSH 0x5dcba3                       ; 004a0ff3 | = "Capture"
    MOV ECX,dword ptr [0x0061b4d0]      ; 004a0ff8 | DAT_0061b4d0
    PUSH ECX                            ; 004a0ffe
    CALL FUN_004a6c30                   ; 004a0fff
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004a1004
    TEST EAX,EAX                        ; 004a1007
    JZ 0x004a101c                       ; 004a1009
        ;   XREF to: 004a101c (CONDITIONAL_JUMP)  ; LAB_004a101c
    PUSH 0x0                            ; 004a100b
        ;   Label: LAB_004a100b
    PUSH dword ptr [ESP + 0x10]         ; 004a100d
    PUSH EBX                            ; 004a1011
    CALL FUN_00433f10                   ; 004a1012
        ;   XREF to: 00433f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00433f10()
    ADD ESP,0xc                         ; 004a1017
    POP EBX                             ; 004a101a
    RET                                 ; 004a101b
    LEA EAX,[EBX + 0xc1f4]              ; 004a101c
        ;   Label: LAB_004a101c
    PUSH EAX                            ; 004a1022
    PUSH dword ptr [ESP + 0x10]         ; 004a1023
    PUSH EBX                            ; 004a1027
    CALL FUN_00433f10                   ; 004a1028
        ;   XREF to: 00433f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00433f10()
    ADD ESP,0xc                         ; 004a102d
    POP EBX                             ; 004a1030
    RET                                 ; 004a1031

