; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004bcb50(CGame *this_ptr,char *param_2,int param_3,int param_4,uint param_5)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; uint             Stack[0x14]:4   param_5
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048a8fb
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005d86f6
;   TerminatedCString s_CGame_displayBitmap_trie_005d8707
;   undefined4 DAT_01cb80cc
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcb50
        ;   Label: core_game.cpp_CGame_displayBitmap_FUN_004bcb50
    PUSH ESI                            ; 004bcb51
    PUSH EDI                            ; 004bcb52
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bcb53
    MOV ESI,dword ptr [ESP + 0x14]      ; 004bcb57
    CMP byte ptr [EBX + 0x8d8],0x0      ; 004bcb5b
    JNZ 0x004bcbbb                      ; 004bcb62
        ;   XREF to: 004bcbbb (CONDITIONAL_JUMP)  ; LAB_004bcbbb
    LEA EDI,[EBX + 0x8d8]               ; 004bcb64
        ;   Label: LAB_004bcb64
    PUSH EDI                            ; 004bcb6a
    MOV AL,byte ptr [ESI]               ; 004bcb6b
        ;   Label: LAB_004bcb6b
    MOV byte ptr [EDI],AL               ; 004bcb6d
    CMP AL,0x0                          ; 004bcb6f
    JZ 0x004bcb83                       ; 004bcb71
        ;   XREF to: 004bcb83 (CONDITIONAL_JUMP)  ; LAB_004bcb83
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcb73
    ADD ESI,0x2                         ; 004bcb76
    MOV byte ptr [EDI + 0x1],AL         ; 004bcb79
    ADD EDI,0x2                         ; 004bcb7c
    CMP AL,0x0                          ; 004bcb7f
    JNZ 0x004bcb6b                      ; 004bcb81
        ;   XREF to: 004bcb6b (CONDITIONAL_JUMP)  ; LAB_004bcb6b
    POP EDI                             ; 004bcb83
        ;   Label: LAB_004bcb83
    MOV ESI,dword ptr [ESP + 0x18]      ; 004bcb84
    MOV dword ptr [EBX + 0x9d8],ESI     ; 004bcb88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004bcb8e
    MOV dword ptr [EBX + 0x9dc],ESI     ; 004bcb92
    MOV ESI,dword ptr [ESP + 0x20]      ; 004bcb98
    MOV dword ptr [EBX + 0x3a8],ESI     ; 004bcb9c
    TEST ESI,0x7fffffff                 ; 004bcba2
    SETZ BL                             ; 004bcba8
    AND EBX,0xff                        ; 004bcbab
    MOV dword ptr [0x01cb80cc],EBX      ; 004bcbb1 | DAT_01cb80cc
    POP EDI                             ; 004bcbb7
    POP ESI                             ; 004bcbb8
    POP EBX                             ; 004bcbb9
    RET                                 ; 004bcbba
    LEA EDI,[EBX + 0x8d8]               ; 004bcbbb
        ;   Label: LAB_004bcbbb
    PUSH EDI                            ; 004bcbc1
    PUSH ESI                            ; 004bcbc2
    MOV EDX,0x5d86f6                    ; 004bcbc3 | = "..\\core\\game.cpp"
    MOV ECX,0x1219                      ; 004bcbc8
    PUSH 0x5d8707                       ; 004bcbcd | = "CGame::displayBitmap - tried to queue..."
    MOV dword ptr [0x01d046a0],EDX      ; 004bcbd2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004bcbd8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004bcbde
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004bcbe3
    JMP 0x004bcb64                      ; 004bcbe6
        ;   XREF to: 004bcb64 (UNCONDITIONAL_JUMP)  ; LAB_004bcb64

