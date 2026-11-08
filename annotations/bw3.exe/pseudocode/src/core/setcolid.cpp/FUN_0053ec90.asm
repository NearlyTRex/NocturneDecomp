; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ec90(int param_1,int param_2)
;
;
; XREF[13]:
;   FUN_00409f60 at 0040a688
;   FUN_00410490 at 00410755
;   FUN_00424550 at 0042477d
;   FUN_00432330 at 004329c0
;   FUN_00486d40 at 00486ffb
;   FUN_0048b020 at 0048b21c
;   FUN_004ae850 at 004aea3c
;   FUN_004c07b0 at 004c11a1
;   FUN_004d0fc0 at 004d119a
;   FUN_005220d0 at 00522166
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0c31
;   TerminatedCString s_CDemonSet_setRayType_use_005d0c46
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ec90
        ;   Label: FUN_0053ec90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053ec94
    MOV dword ptr [EAX + 0x15f698],EDX  ; 0053ec98
    CMP EDX,0x3                         ; 0053ec9e
    JZ 0x0053eca4                       ; 0053eca1
        ;   XREF to: 0053eca4 (CONDITIONAL_JUMP)  ; LAB_0053eca4
    RET                                 ; 0053eca3
    PUSH EBX                            ; 0053eca4
        ;   Label: LAB_0053eca4
    MOV ECX,0x5d0c31                    ; 0053eca5 | = "..\\core\\setcolid.cpp"
    MOV EBX,0x49a                       ; 0053ecaa
    PUSH 0x5d0c46                       ; 0053ecaf | = "CDemonSet::setRayType - use setRayTyp..."
    MOV dword ptr [0x01d71de0],ECX      ; 0053ecb4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0053ecba | DAT_01d71de4
    CALL FUN_004e4330                   ; 0053ecc0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0053ecc5
    POP EBX                             ; 0053ecc8
    RET                                 ; 0053ecc9

