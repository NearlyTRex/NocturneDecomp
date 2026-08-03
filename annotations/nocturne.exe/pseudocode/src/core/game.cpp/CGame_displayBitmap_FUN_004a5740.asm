; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004a5740(CGame *this_ptr,char *filename,int width,int height)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b40c
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0058432a
;   TerminatedCString s_CGame_displayBitmap_trie_0058433b
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5740
        ;   Label: core_game.cpp_CGame_displayBitmap_FUN_004a5740
    PUSH ESI                            ; 004a5741
    PUSH EDI                            ; 004a5742
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a5743
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a5747
    CMP byte ptr [EBX + 0x8b4],0x0      ; 004a574b
    JNZ 0x004a578c                      ; 004a5752
        ;   XREF to: 004a578c (CONDITIONAL_JUMP)  ; LAB_004a578c
    LEA EDI,[EBX + 0x8b4]               ; 004a5754
        ;   Label: LAB_004a5754
    PUSH EDI                            ; 004a575a
    MOV AL,byte ptr [ESI]               ; 004a575b
        ;   Label: LAB_004a575b
    MOV byte ptr [EDI],AL               ; 004a575d
    CMP AL,0x0                          ; 004a575f
    JZ 0x004a5773                       ; 004a5761
        ;   XREF to: 004a5773 (CONDITIONAL_JUMP)  ; LAB_004a5773
    MOV AL,byte ptr [ESI + 0x1]         ; 004a5763
    ADD ESI,0x2                         ; 004a5766
    MOV byte ptr [EDI + 0x1],AL         ; 004a5769
    ADD EDI,0x2                         ; 004a576c
    CMP AL,0x0                          ; 004a576f
    JNZ 0x004a575b                      ; 004a5771
        ;   XREF to: 004a575b (CONDITIONAL_JUMP)  ; LAB_004a575b
    POP EDI                             ; 004a5773
        ;   Label: LAB_004a5773
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a5774
    MOV dword ptr [EBX + 0x9b4],ESI     ; 004a5778
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a577e
    MOV dword ptr [EBX + 0x9b8],ESI     ; 004a5782
    POP EDI                             ; 004a5788
    POP ESI                             ; 004a5789
    POP EBX                             ; 004a578a
    RET                                 ; 004a578b
    LEA EDI,[EBX + 0x8b4]               ; 004a578c
        ;   Label: LAB_004a578c
    PUSH EDI                            ; 004a5792
    PUSH ESI                            ; 004a5793
    MOV EDX,0x58432a                    ; 004a5794 | = "..\\core\\game.cpp"
    MOV ECX,0xfcf                       ; 004a5799
    PUSH 0x58433b                       ; 004a579e | = "CGame::displayBitmap - tried to queue..."
    MOV dword ptr [0x01cc4800],EDX      ; 004a57a3 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004a57a9 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004a57af
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004a57b4
    JMP 0x004a5754                      ; 004a57b7
        ;   XREF to: 004a5754 (UNCONDITIONAL_JUMP)  ; LAB_004a5754

