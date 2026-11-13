; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004beb80(CGame *this_ptr,char *param_2,int param_3,int param_4,uint param_5)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; uint             Stack[0x14]:4   param_5
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048d5e6
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005c3856
;   TerminatedCString s_CGame_displayBitmap_trie_005c3867
;   undefined4 DAT_01d22b44
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004beb80
        ;   Label: core_game.cpp_CGame_displayBitmap_FUN_004beb80
    PUSH ESI                            ; 004beb81
    PUSH EDI                            ; 004beb82
    MOV EBX,dword ptr [ESP + 0x10]      ; 004beb83
    MOV ESI,dword ptr [ESP + 0x14]      ; 004beb87
    CMP byte ptr [EBX + 0x968],0x0      ; 004beb8b
    JNZ 0x004bebeb                      ; 004beb92
        ;   XREF to: 004bebeb (CONDITIONAL_JUMP)  ; LAB_004bebeb
    LEA EDI,[EBX + 0x968]               ; 004beb94
        ;   Label: LAB_004beb94
    PUSH EDI                            ; 004beb9a
    MOV AL,byte ptr [ESI]               ; 004beb9b
        ;   Label: LAB_004beb9b
    MOV byte ptr [EDI],AL               ; 004beb9d
    CMP AL,0x0                          ; 004beb9f
    JZ 0x004bebb3                       ; 004beba1
        ;   XREF to: 004bebb3 (CONDITIONAL_JUMP)  ; LAB_004bebb3
    MOV AL,byte ptr [ESI + 0x1]         ; 004beba3
    ADD ESI,0x2                         ; 004beba6
    MOV byte ptr [EDI + 0x1],AL         ; 004beba9
    ADD EDI,0x2                         ; 004bebac
    CMP AL,0x0                          ; 004bebaf
    JNZ 0x004beb9b                      ; 004bebb1
        ;   XREF to: 004beb9b (CONDITIONAL_JUMP)  ; LAB_004beb9b
    POP EDI                             ; 004bebb3
        ;   Label: LAB_004bebb3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004bebb4
    MOV dword ptr [EBX + 0xa68],ESI     ; 004bebb8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004bebbe
    MOV dword ptr [EBX + 0xa6c],ESI     ; 004bebc2
    MOV ESI,dword ptr [ESP + 0x20]      ; 004bebc8
    MOV dword ptr [EBX + 0x438],ESI     ; 004bebcc
    TEST ESI,0x7fffffff                 ; 004bebd2
    SETZ BL                             ; 004bebd8
    AND EBX,0xff                        ; 004bebdb
    MOV dword ptr [0x01d22b44],EBX      ; 004bebe1 | DAT_01d22b44
    POP EDI                             ; 004bebe7
    POP ESI                             ; 004bebe8
    POP EBX                             ; 004bebe9
    RET                                 ; 004bebea
    LEA EDI,[EBX + 0x968]               ; 004bebeb
        ;   Label: LAB_004bebeb
    PUSH EDI                            ; 004bebf1
    PUSH ESI                            ; 004bebf2
    MOV EDX,0x5c3856                    ; 004bebf3 | = "..\\core\\game.cpp"
    MOV ECX,0x122b                      ; 004bebf8
    PUSH 0x5c3867                       ; 004bebfd | = "CGame::displayBitmap - tried to queue..."
    MOV dword ptr [0x01d71de0],EDX      ; 004bec02 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004bec08 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004bec0e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004bec13
    JMP 0x004beb94                      ; 004bec16
        ;   XREF to: 004beb94 (UNCONDITIONAL_JUMP)  ; LAB_004beb94

