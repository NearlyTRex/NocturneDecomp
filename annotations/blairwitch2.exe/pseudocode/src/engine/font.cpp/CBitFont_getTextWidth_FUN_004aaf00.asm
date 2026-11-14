; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont *this_ptr,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[33]:
;   cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00468b50 at 00468b60
;   core_flashlit.cpp_FUN_004a1570 at 004a15ff
;   core_fldnotes.cpp_SPageResourceText_ctor_FUN_004a1f80 at 004a1fd5
;   core_fldnotes.cpp_STextView_appendWord_FUN_004a3160 at 004a31a9
;   core_fldnotes.cpp_STextView_wordFits_FUN_004a3100 at 004a3110
;   core_game.cpp_CGame_renderOverlay_FUN_004b32c0 at 004b37a2
;   core_game.cpp_FUN_004b5190 at 004b5581
;   core_inv.cpp_FUN_004dadb0 at 004db236
;   core_inv.cpp_FUN_004dd9b0 at 004ddb5b
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e1aee
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aaf00
        ;   Label: engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
    PUSH ESI                            ; 004aaf01
    PUSH EDI                            ; 004aaf02
    PUSH EBP                            ; 004aaf03
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aaf04
    MOV ESI,dword ptr [ESP + 0x18]      ; 004aaf08
    MOV EDX,dword ptr [EBX + 0x4210]    ; 004aaf0c
    XOR EDI,EDI                         ; 004aaf12
    TEST EDX,EDX                        ; 004aaf14
    JZ 0x004aaf66                       ; 004aaf16
        ;   XREF to: 004aaf66 (CONDITIONAL_JUMP)  ; LAB_004aaf66
    MOV ECX,ESI                         ; 004aaf18
    MOV DL,0xa                          ; 004aaf1a
        ;   Label: LAB_004aaf1a
    MOV ESI,ECX                         ; 004aaf1c
    MOV AL,byte ptr [ESI]               ; 004aaf1e
        ;   Label: LAB_004aaf1e
    CMP AL,DL                           ; 004aaf20
    JZ 0x004aaf36                       ; 004aaf22
        ;   XREF to: 004aaf36 (CONDITIONAL_JUMP)  ; LAB_004aaf36
    CMP AL,0x0                          ; 004aaf24
    JZ 0x004aaf34                       ; 004aaf26
        ;   XREF to: 004aaf34 (CONDITIONAL_JUMP)  ; LAB_004aaf34
    INC ESI                             ; 004aaf28
    MOV AL,byte ptr [ESI]               ; 004aaf29
    CMP AL,DL                           ; 004aaf2b
    JZ 0x004aaf36                       ; 004aaf2d
        ;   XREF to: 004aaf36 (CONDITIONAL_JUMP)  ; LAB_004aaf36
    INC ESI                             ; 004aaf2f
    CMP AL,0x0                          ; 004aaf30
    JNZ 0x004aaf1e                      ; 004aaf32
        ;   XREF to: 004aaf1e (CONDITIONAL_JUMP)  ; LAB_004aaf1e
    SUB ESI,ESI                         ; 004aaf34
        ;   Label: LAB_004aaf34
    MOV EBP,ESI                         ; 004aaf36
        ;   Label: LAB_004aaf36
    TEST ESI,ESI                        ; 004aaf38
    JZ 0x004aaf3f                       ; 004aaf3a
        ;   XREF to: 004aaf3f (CONDITIONAL_JUMP)  ; LAB_004aaf3f
    MOV byte ptr [ESI],0x0              ; 004aaf3c
    PUSH ECX                            ; 004aaf3f
        ;   Label: LAB_004aaf3f
    MOV EAX,dword ptr [EBX + 0x4214]    ; 004aaf40
    PUSH EAX                            ; 004aaf46
    MOV EDX,dword ptr [EAX + 0x6a44]    ; 004aaf47
    CALL dword ptr [EDX + 0x8]          ; 004aaf4d
    ADD ESP,0x8                         ; 004aaf50
    CMP EAX,EDI                         ; 004aaf53
    JLE 0x004aaf59                      ; 004aaf55
        ;   XREF to: 004aaf59 (CONDITIONAL_JUMP)  ; LAB_004aaf59
    MOV EDI,EAX                         ; 004aaf57
    TEST EBP,EBP                        ; 004aaf59
        ;   Label: LAB_004aaf59
    JZ 0x004aaf9f                       ; 004aaf5b
        ;   XREF to: 004aaf9f (CONDITIONAL_JUMP)  ; LAB_004aaf9f
    LEA ECX,[EBP + 0x1]                 ; 004aaf5d
    MOV byte ptr [EBP],0xa              ; 004aaf60
    JMP 0x004aaf1a                      ; 004aaf64
        ;   XREF to: 004aaf1a (UNCONDITIONAL_JUMP)  ; LAB_004aaf1a
    XOR ECX,ECX                         ; 004aaf66
        ;   Label: LAB_004aaf66
    CMP CL,byte ptr [ESI]               ; 004aaf68
        ;   Label: LAB_004aaf68
    JZ 0x004aaf9f                       ; 004aaf6a
        ;   XREF to: 004aaf9f (CONDITIONAL_JUMP)  ; LAB_004aaf9f
    MOV EDX,ECX                         ; 004aaf6c
    XOR EAX,EAX                         ; 004aaf6e
        ;   Label: LAB_004aaf6e
    MOV AL,byte ptr [ESI]               ; 004aaf70
    INC ESI                             ; 004aaf72
    CMP EAX,0xa                         ; 004aaf73
    JNZ 0x004aaf8a                      ; 004aaf76
        ;   XREF to: 004aaf8a (CONDITIONAL_JUMP)  ; LAB_004aaf8a
    TEST EDX,EDX                        ; 004aaf78
        ;   Label: LAB_004aaf78
    JLE 0x004aaf82                      ; 004aaf7a
        ;   XREF to: 004aaf82 (CONDITIONAL_JUMP)  ; LAB_004aaf82
    SUB EDX,dword ptr [EBX + 0x41f4]    ; 004aaf7c
    CMP EDX,EDI                         ; 004aaf82
        ;   Label: LAB_004aaf82
    JLE 0x004aaf68                      ; 004aaf84
        ;   XREF to: 004aaf68 (CONDITIONAL_JUMP)  ; LAB_004aaf68
    MOV EDI,EDX                         ; 004aaf86
    JMP 0x004aaf68                      ; 004aaf88
        ;   XREF to: 004aaf68 (UNCONDITIONAL_JUMP)  ; LAB_004aaf68
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x35e8] ; 004aaf8a
        ;   Label: LAB_004aaf8a
    ADD EAX,dword ptr [EBX + 0x41f4]    ; 004aaf91
    ADD EDX,EAX                         ; 004aaf97
    CMP CL,byte ptr [ESI]               ; 004aaf99
    JNZ 0x004aaf6e                      ; 004aaf9b
        ;   XREF to: 004aaf6e (CONDITIONAL_JUMP)  ; LAB_004aaf6e
    JMP 0x004aaf78                      ; 004aaf9d
        ;   XREF to: 004aaf78 (UNCONDITIONAL_JUMP)  ; LAB_004aaf78
    MOV EAX,EDI                         ; 004aaf9f
        ;   Label: LAB_004aaf9f
    POP EBP                             ; 004aafa1
    POP EDI                             ; 004aafa2
    POP ESI                             ; 004aafa3
    POP EBX                             ; 004aafa4
    RET                                 ; 004aafa5

