; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(int param_1,int param_2)
;
;
; XREF[38]:
;   FUN_0040a140 at 0040a166
;   FUN_0040b300 at 0040b7da
;   FUN_00418a00 at 00418ec2
;   FUN_0043d1c0 at 0043d330
;   FUN_00477890 at 00477aa2
;   FUN_00478f80 at 00478fd8
;   FUN_0048b6f0 at 0048be91
;   FUN_00498de0 at 00499025
;   FUN_004998c0 at 00499939
;   FUN_004a9270 at 004a942b
;   ... and 28 more
;
; Referenced Globals:
;   string s_..\\core\\setcolid.cpp_00590b43
;   string s_CDemonSet::ignore_-_ignore_list_i_00590b58
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511780
        ;   Label: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
    PUSH EBP                            ; 00511781
    MOV EBX,dword ptr [ESP + 0xc]       ; 00511782
    CMP dword ptr [ESP + 0x10],0x0      ; 00511786
    JZ 0x005117b3                       ; 0051178b
        ;   XREF to: 005117b3 (CONDITIONAL_JUMP)  ; LAB_005117b3
    MOV ECX,dword ptr [EBX + 0x15f2ac]  ; 0051178d
    TEST ECX,ECX                        ; 00511793
    JL 0x005117b3                       ; 00511795
        ;   XREF to: 005117b3 (CONDITIONAL_JUMP)  ; LAB_005117b3
    CMP ECX,0xa                         ; 00511797
    JGE 0x005117b6                      ; 0051179a
        ;   XREF to: 005117b6 (CONDITIONAL_JUMP)  ; LAB_005117b6
    MOV EAX,dword ptr [EBX + 0x15f2ac]  ; 0051179c
        ;   Label: LAB_0051179c
    MOV EDX,dword ptr [ESP + 0x10]      ; 005117a2
    MOV dword ptr [EBX + EAX*0x4 + 0x15f2b4],EDX ; 005117a6
    INC dword ptr [EBX + 0x15f2ac]      ; 005117ad
    POP EBP                             ; 005117b3
        ;   Label: LAB_005117b3
    POP EBX                             ; 005117b4
    RET                                 ; 005117b5
    PUSH EDI                            ; 005117b6
        ;   Label: LAB_005117b6
    MOV EDI,0x590b43                    ; 005117b7 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 005117bc
    PUSH 0x590b58                       ; 005117c1 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x01cc4800],EDI      ; 005117c6 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 005117cc | DAT_01cc4804
    CALL FUN_004c8440                   ; 005117d2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005117d7
    POP EDI                             ; 005117da
    JMP 0x0051179c                      ; 005117db
        ;   XREF to: 0051179c (UNCONDITIONAL_JUMP)  ; LAB_0051179c

