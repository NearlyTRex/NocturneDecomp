; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004d7730(CGame *this_ptr,char *param_2,int param_3,int param_4,uint param_5)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; uint             Stack[0x14]:4   param_5
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a3004
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005e3252
;   TerminatedCString s_CGame_displayBitmap_trie_005e3263
;   undefined4 DAT_01cd0b3c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7730
        ;   Label: core_game.cpp_CGame_displayBitmap_FUN_004d7730
    PUSH ESI                            ; 004d7731
    PUSH EDI                            ; 004d7732
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d7733
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d7737
    CMP byte ptr [EBX + 0x8e8],0x0      ; 004d773b
    JNZ 0x004d779b                      ; 004d7742
        ;   XREF to: 004d779b (CONDITIONAL_JUMP)  ; LAB_004d779b
    LEA EDI,[EBX + 0x8e8]               ; 004d7744
        ;   Label: LAB_004d7744
    PUSH EDI                            ; 004d774a
    MOV AL,byte ptr [ESI]               ; 004d774b
        ;   Label: LAB_004d774b
    MOV byte ptr [EDI],AL               ; 004d774d
    CMP AL,0x0                          ; 004d774f
    JZ 0x004d7763                       ; 004d7751
        ;   XREF to: 004d7763 (CONDITIONAL_JUMP)  ; LAB_004d7763
    MOV AL,byte ptr [ESI + 0x1]         ; 004d7753
    ADD ESI,0x2                         ; 004d7756
    MOV byte ptr [EDI + 0x1],AL         ; 004d7759
    ADD EDI,0x2                         ; 004d775c
    CMP AL,0x0                          ; 004d775f
    JNZ 0x004d774b                      ; 004d7761
        ;   XREF to: 004d774b (CONDITIONAL_JUMP)  ; LAB_004d774b
    POP EDI                             ; 004d7763
        ;   Label: LAB_004d7763
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d7764
    MOV dword ptr [EBX + 0x9e8],ESI     ; 004d7768
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004d776e
    MOV dword ptr [EBX + 0x9ec],ESI     ; 004d7772
    MOV ESI,dword ptr [ESP + 0x20]      ; 004d7778
    MOV dword ptr [EBX + 0x3b8],ESI     ; 004d777c
    TEST ESI,0x7fffffff                 ; 004d7782
    SETZ BL                             ; 004d7788
    AND EBX,0xff                        ; 004d778b
    MOV dword ptr [0x01cd0b3c],EBX      ; 004d7791 | DAT_01cd0b3c
    POP EDI                             ; 004d7797
    POP ESI                             ; 004d7798
    POP EBX                             ; 004d7799
    RET                                 ; 004d779a
    LEA EDI,[EBX + 0x8e8]               ; 004d779b
        ;   Label: LAB_004d779b
    PUSH EDI                            ; 004d77a1
    PUSH ESI                            ; 004d77a2
    MOV EDX,0x5e3252                    ; 004d77a3 | = "..\\core\\game.cpp"
    MOV ECX,0x11f4                      ; 004d77a8
    PUSH 0x5e3263                       ; 004d77ad | = "CGame::displayBitmap - tried to queue..."
    MOV dword ptr [0x01d1d400],EDX      ; 004d77b2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004d77b8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d77be
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004d77c3
    JMP 0x004d7744                      ; 004d77c6
        ;   XREF to: 004d7744 (UNCONDITIONAL_JUMP)  ; LAB_004d7744

