; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont *this_ptr,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[32]:
;   cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00481060 at 00481070
;   core_flashlit.cpp_FUN_004b9e30 at 004b9ebf
;   core_fldnotes.cpp_SPageResourceText_ctor_FUN_004ba850 at 004ba8a5
;   core_fldnotes.cpp_STextView_appendWord_FUN_004bbb90 at 004bbbd9
;   core_fldnotes.cpp_STextView_wordFits_FUN_004bbb30 at 004bbb40
;   core_game.cpp_CGame_renderOverlay_FUN_004cc2b0 at 004cc792
;   core_inv.cpp_FUN_004f7690 at 004f83f1
;   core_inv.cpp_FUN_004fae10 at 004fafd3
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fef05
;   core_main.c_FUN_005032a0 at 00503845
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3ea0
        ;   Label: engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
    PUSH ESI                            ; 004c3ea1
    PUSH EDI                            ; 004c3ea2
    PUSH EBP                            ; 004c3ea3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c3ea4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c3ea8
    MOV EDX,dword ptr [EBX + 0x4210]    ; 004c3eac
    XOR EDI,EDI                         ; 004c3eb2
    TEST EDX,EDX                        ; 004c3eb4
    JZ 0x004c3f06                       ; 004c3eb6
        ;   XREF to: 004c3f06 (CONDITIONAL_JUMP)  ; LAB_004c3f06
    MOV ECX,ESI                         ; 004c3eb8
    MOV DL,0xa                          ; 004c3eba
        ;   Label: LAB_004c3eba
    MOV ESI,ECX                         ; 004c3ebc
    MOV AL,byte ptr [ESI]               ; 004c3ebe
        ;   Label: LAB_004c3ebe
    CMP AL,DL                           ; 004c3ec0
    JZ 0x004c3ed6                       ; 004c3ec2
        ;   XREF to: 004c3ed6 (CONDITIONAL_JUMP)  ; LAB_004c3ed6
    CMP AL,0x0                          ; 004c3ec4
    JZ 0x004c3ed4                       ; 004c3ec6
        ;   XREF to: 004c3ed4 (CONDITIONAL_JUMP)  ; LAB_004c3ed4
    INC ESI                             ; 004c3ec8
    MOV AL,byte ptr [ESI]               ; 004c3ec9
    CMP AL,DL                           ; 004c3ecb
    JZ 0x004c3ed6                       ; 004c3ecd
        ;   XREF to: 004c3ed6 (CONDITIONAL_JUMP)  ; LAB_004c3ed6
    INC ESI                             ; 004c3ecf
    CMP AL,0x0                          ; 004c3ed0
    JNZ 0x004c3ebe                      ; 004c3ed2
        ;   XREF to: 004c3ebe (CONDITIONAL_JUMP)  ; LAB_004c3ebe
    SUB ESI,ESI                         ; 004c3ed4
        ;   Label: LAB_004c3ed4
    MOV EBP,ESI                         ; 004c3ed6
        ;   Label: LAB_004c3ed6
    TEST ESI,ESI                        ; 004c3ed8
    JZ 0x004c3edf                       ; 004c3eda
        ;   XREF to: 004c3edf (CONDITIONAL_JUMP)  ; LAB_004c3edf
    MOV byte ptr [ESI],0x0              ; 004c3edc
    PUSH ECX                            ; 004c3edf
        ;   Label: LAB_004c3edf
    MOV EAX,dword ptr [EBX + 0x4214]    ; 004c3ee0
    PUSH EAX                            ; 004c3ee6
    MOV EDX,dword ptr [EAX + 0x6a44]    ; 004c3ee7
    CALL dword ptr [EDX + 0x8]          ; 004c3eed
    ADD ESP,0x8                         ; 004c3ef0
    CMP EAX,EDI                         ; 004c3ef3
    JLE 0x004c3ef9                      ; 004c3ef5
        ;   XREF to: 004c3ef9 (CONDITIONAL_JUMP)  ; LAB_004c3ef9
    MOV EDI,EAX                         ; 004c3ef7
    TEST EBP,EBP                        ; 004c3ef9
        ;   Label: LAB_004c3ef9
    JZ 0x004c3f3f                       ; 004c3efb
        ;   XREF to: 004c3f3f (CONDITIONAL_JUMP)  ; LAB_004c3f3f
    LEA ECX,[EBP + 0x1]                 ; 004c3efd
    MOV byte ptr [EBP],0xa              ; 004c3f00
    JMP 0x004c3eba                      ; 004c3f04
        ;   XREF to: 004c3eba (UNCONDITIONAL_JUMP)  ; LAB_004c3eba
    XOR ECX,ECX                         ; 004c3f06
        ;   Label: LAB_004c3f06
    CMP CL,byte ptr [ESI]               ; 004c3f08
        ;   Label: LAB_004c3f08
    JZ 0x004c3f3f                       ; 004c3f0a
        ;   XREF to: 004c3f3f (CONDITIONAL_JUMP)  ; LAB_004c3f3f
    MOV EDX,ECX                         ; 004c3f0c
    XOR EAX,EAX                         ; 004c3f0e
        ;   Label: LAB_004c3f0e
    MOV AL,byte ptr [ESI]               ; 004c3f10
    INC ESI                             ; 004c3f12
    CMP EAX,0xa                         ; 004c3f13
    JNZ 0x004c3f2a                      ; 004c3f16
        ;   XREF to: 004c3f2a (CONDITIONAL_JUMP)  ; LAB_004c3f2a
    TEST EDX,EDX                        ; 004c3f18
        ;   Label: LAB_004c3f18
    JLE 0x004c3f22                      ; 004c3f1a
        ;   XREF to: 004c3f22 (CONDITIONAL_JUMP)  ; LAB_004c3f22
    SUB EDX,dword ptr [EBX + 0x41f4]    ; 004c3f1c
    CMP EDX,EDI                         ; 004c3f22
        ;   Label: LAB_004c3f22
    JLE 0x004c3f08                      ; 004c3f24
        ;   XREF to: 004c3f08 (CONDITIONAL_JUMP)  ; LAB_004c3f08
    MOV EDI,EDX                         ; 004c3f26
    JMP 0x004c3f08                      ; 004c3f28
        ;   XREF to: 004c3f08 (UNCONDITIONAL_JUMP)  ; LAB_004c3f08
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x35e8] ; 004c3f2a
        ;   Label: LAB_004c3f2a
    ADD EAX,dword ptr [EBX + 0x41f4]    ; 004c3f31
    ADD EDX,EAX                         ; 004c3f37
    CMP CL,byte ptr [ESI]               ; 004c3f39
    JNZ 0x004c3f0e                      ; 004c3f3b
        ;   XREF to: 004c3f0e (CONDITIONAL_JUMP)  ; LAB_004c3f0e
    JMP 0x004c3f18                      ; 004c3f3d
        ;   XREF to: 004c3f18 (UNCONDITIONAL_JUMP)  ; LAB_004c3f18
    MOV EAX,EDI                         ; 004c3f3f
        ;   Label: LAB_004c3f3f
    POP EBP                             ; 004c3f41
    POP EDI                             ; 004c3f42
    POP ESI                             ; 004c3f43
    POP EBX                             ; 004c3f44
    RET                                 ; 004c3f45

