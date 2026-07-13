; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511800(int param_1,int param_2)
;
;
; XREF[14]:
;   FUN_0040b300 at 0040b7ca
;   FUN_00429730 at 00429aad
;   FUN_0043d1c0 at 0043d321
;   FUN_00477890 at 00477a93
;   FUN_00496d10 at 00497199
;   FUN_00498de0 at 00499015
;   FUN_004b27c0 at 004b2944
;   FUN_004c71a0 at 004c7343
;   FUN_004fda20 at 004fdc55
;   FUN_00515ea0 at 005160d8
;   ... and 4 more
;
; Referenced Globals:
;   string s_..\\core\\setcolid.cpp_00590b80
;   string s_CDemonSet::setRayType_-_use_setR_00590b95
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511800
        ;   Label: FUN_00511800
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511804
    MOV dword ptr [EAX + 0x15f298],EDX  ; 00511808
    CMP EDX,0x3                         ; 0051180e
    JZ 0x00511814                       ; 00511811
        ;   XREF to: 00511814 (CONDITIONAL_JUMP)  ; LAB_00511814
    RET                                 ; 00511813
    PUSH EBX                            ; 00511814
        ;   Label: LAB_00511814
    MOV ECX,0x590b80                    ; 00511815 | = "..\\core\\setcolid.cpp"
    MOV EBX,0x49a                       ; 0051181a
    PUSH 0x590b95                       ; 0051181f | = "CDemonSet::setRayType - use setRayTyp..."
    MOV dword ptr [0x01cc4800],ECX      ; 00511824 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0051182a | DAT_01cc4804
    CALL FUN_004c8440                   ; 00511830
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00511835
    POP EBX                             ; 00511838
    RET                                 ; 00511839

