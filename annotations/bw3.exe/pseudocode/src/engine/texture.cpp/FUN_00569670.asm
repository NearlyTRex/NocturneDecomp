; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00569670(int *param_1)
;
;
; XREF[1]:
;   FUN_00569790 at 0056985c
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_005d5e3d
;   TerminatedCString s_CTextureCache_findFreeSl_005d5e53
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cfd0d4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a28f0
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569670
        ;   Label: FUN_00569670
    PUSH ESI                            ; 00569671
    PUSH EDI                            ; 00569672
    PUSH EBP                            ; 00569673
    MOV ESI,dword ptr [ESP + 0x14]      ; 00569674
    CMP dword ptr [ESI],0x0             ; 00569678
    JZ 0x00569704                       ; 0056967b
        ;   XREF to: 00569704 (CONDITIONAL_JUMP)  ; LAB_00569704
    MOV ECX,0xffffffff                  ; 00569681
    MOV EAX,ESI                         ; 00569686
    XOR EDX,EDX                         ; 00569688
    XOR EBX,EBX                         ; 0056968a
    CMP dword ptr [EAX + 0x5c],0x0      ; 0056968c
        ;   Label: LAB_0056968c
    JZ 0x0056975f                       ; 00569690
        ;   XREF to: 0056975f (CONDITIONAL_JUMP)  ; LAB_0056975f
    INC EDX                             ; 00569696
        ;   Label: LAB_00569696
    ADD EAX,0x60                        ; 00569697
    CMP EDX,0x400                       ; 0056969a
    JL 0x0056968c                       ; 005696a0
        ;   XREF to: 0056968c (CONDITIONAL_JUMP)  ; LAB_0056968c
    MOV EDI,EBX                         ; 005696a2
    LEA EAX,[EDI*0x4 + 0x0]             ; 005696a4
        ;   Label: LAB_005696a4
    SUB EAX,EDI                         ; 005696ab
    LEA EBX,[ESI + 0x4]                 ; 005696ad
    SHL EAX,0x5                         ; 005696b0
    ADD EBX,EAX                         ; 005696b3
    MOV EAX,dword ptr [EBX + 0x44]      ; 005696b5
    TEST EAX,EAX                        ; 005696b8
    JZ 0x005696c5                       ; 005696ba
        ;   XREF to: 005696c5 (CONDITIONAL_JUMP)  ; LAB_005696c5
    PUSH EAX                            ; 005696bc
    CALL FUN_005a3770                   ; 005696bd
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005696c2
    MOV ECX,dword ptr [EBX + 0x48]      ; 005696c5
        ;   Label: LAB_005696c5
    TEST ECX,ECX                        ; 005696c8
    JZ 0x005696d5                       ; 005696ca
        ;   XREF to: 005696d5 (CONDITIONAL_JUMP)  ; LAB_005696d5
    PUSH ECX                            ; 005696cc
    CALL FUN_005a3770                   ; 005696cd
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005696d2
    MOV EBP,dword ptr [EBX + 0x4c]      ; 005696d5
        ;   Label: LAB_005696d5
    TEST EBP,EBP                        ; 005696d8
    JZ 0x005696e5                       ; 005696da
        ;   XREF to: 005696e5 (CONDITIONAL_JUMP)  ; LAB_005696e5
    PUSH EBP                            ; 005696dc
    CALL FUN_005a3770                   ; 005696dd
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005696e2
    MOV EDX,dword ptr [EBX + 0x50]      ; 005696e5
        ;   Label: LAB_005696e5
    TEST EDX,EDX                        ; 005696e8
    JNZ 0x00569773                      ; 005696ea
        ;   XREF to: 00569773 (CONDITIONAL_JUMP)  ; LAB_00569773
    PUSH 0x60                           ; 005696f0
    PUSH 0x0                            ; 005696f2
    PUSH EBX                            ; 005696f4
    CALL FUN_005a28f0                   ; 005696f5
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005696fa
    MOV EAX,EDI                         ; 005696fd
    POP EBP                             ; 005696ff
    POP EDI                             ; 00569700
    POP ESI                             ; 00569701
    POP EBX                             ; 00569702
    RET                                 ; 00569703
    MOV EDI,dword ptr [ESI + 0x18004]   ; 00569704
        ;   Label: LAB_00569704
    LEA EAX,[EDI + 0x1]                 ; 0056970a
    MOV dword ptr [ESI + 0x18004],EAX   ; 0056970d
    CMP EAX,0x400                       ; 00569713
    JL 0x005696a4                       ; 00569718
        ;   XREF to: 005696a4 (CONDITIONAL_JUMP)  ; LAB_005696a4
    MOV dword ptr [ESI],0x1             ; 0056971a
    MOV EBX,dword ptr [0x02cfd0d4]      ; 00569720 | DAT_02cfd0d4
    MOV dword ptr [ESI + 0x18004],0x400 ; 00569726
    TEST EBX,EBX                        ; 00569730
    JZ 0x005696a4                       ; 00569732
        ;   XREF to: 005696a4 (CONDITIONAL_JUMP)  ; LAB_005696a4
    MOV EBP,0x5d5e3d                    ; 00569738 | = "..\\engine\\texture.cpp"
    MOV EAX,0xbc                        ; 0056973d
    PUSH 0x5d5e53                       ; 00569742 | = "CTextureCache::findFreeSlot - Cache h..."
    MOV dword ptr [0x01d71de0],EBP      ; 00569747 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0056974d | DAT_01d71de4
    CALL FUN_004e4330                   ; 00569752
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00569757
    JMP 0x005696a4                      ; 0056975a
        ;   XREF to: 005696a4 (UNCONDITIONAL_JUMP)  ; LAB_005696a4
    MOV EBP,dword ptr [EAX + 0x58]      ; 0056975f
        ;   Label: LAB_0056975f
    CMP ECX,EBP                         ; 00569762
    JBE 0x00569696                      ; 00569764
        ;   XREF to: 00569696 (CONDITIONAL_JUMP)  ; LAB_00569696
    MOV EBX,EDX                         ; 0056976a
    MOV ECX,EBP                         ; 0056976c
    JMP 0x00569696                      ; 0056976e
        ;   XREF to: 00569696 (UNCONDITIONAL_JUMP)  ; LAB_00569696
    PUSH EDX                            ; 00569773
        ;   Label: LAB_00569773
    CALL FUN_005a3770                   ; 00569774
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 00569779
    PUSH 0x60                           ; 0056977c
    PUSH 0x0                            ; 0056977e
    PUSH EBX                            ; 00569780
    CALL FUN_005a28f0                   ; 00569781
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00569786
    MOV EAX,EDI                         ; 00569789
    POP EBP                             ; 0056978b
    POP EDI                             ; 0056978c
    POP ESI                             ; 0056978d
    POP EBX                             ; 0056978e
    RET                                 ; 0056978f

