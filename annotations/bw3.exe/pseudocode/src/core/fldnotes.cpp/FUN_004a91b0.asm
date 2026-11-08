; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a91b0(int param_1)
;
;
; XREF[4]:
;   FUN_004a8f30 at 004a8ffd
;   FUN_004a9150 at 004a915b
;   FUN_004a9270 at 004a9279
;   FUN_004a9300 at 004a9306
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c0ed6
;   TerminatedCString s_Out_of_memory_005c0eeb
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004a8490
;   FUN_004a9230
;   FUN_004e4330
;   FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a91b0
        ;   Label: FUN_004a91b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a91b1
    CMP byte ptr [EBX + 0x48],0x0       ; 004a91b5
    JNZ 0x004a91bd                      ; 004a91b9
        ;   XREF to: 004a91bd (CONDITIONAL_JUMP)  ; LAB_004a91bd
    POP EBX                             ; 004a91bb
    RET                                 ; 004a91bc
    PUSH ESI                            ; 004a91bd
        ;   Label: LAB_004a91bd
    PUSH 0x120                          ; 004a91be
    CALL FUN_005a3cb2                   ; 004a91c3
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a91c8
    TEST EAX,EAX                        ; 004a91cb
    JZ 0x004a91e0                       ; 004a91cd
        ;   XREF to: 004a91e0 (CONDITIONAL_JUMP)  ; LAB_004a91e0
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a91cf
    PUSH EDX                            ; 004a91d2
    LEA ESI,[EBX + 0x48]                ; 004a91d3
    PUSH ESI                            ; 004a91d6
    PUSH EAX                            ; 004a91d7
    CALL FUN_004a8490                   ; 004a91d8
        ;   XREF to: 004a8490 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8490()
    ADD ESP,0xc                         ; 004a91dd
    MOV ESI,EAX                         ; 004a91e0
        ;   Label: LAB_004a91e0
    TEST EAX,EAX                        ; 004a91e2
    JNZ 0x004a920b                      ; 004a91e4
        ;   XREF to: 004a920b (CONDITIONAL_JUMP)  ; LAB_004a920b
    PUSH EDI                            ; 004a91e6
    MOV ECX,0x5c0ed6                    ; 004a91e7 | = "..\\core\\fldnotes.cpp"
    MOV EDI,0x578                       ; 004a91ec
    PUSH 0x5c0eeb                       ; 004a91f1 | = "Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 004a91f6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004a91fc | DAT_01d71de4
    CALL FUN_004e4330                   ; 004a9202
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004a9207
    POP EDI                             ; 004a920a
    MOV EAX,dword ptr [EBX + 0x40]      ; 004a920b
        ;   Label: LAB_004a920b
    MOV dword ptr [ESI],EAX             ; 004a920e
    MOV EAX,dword ptr [EBX + 0x44]      ; 004a9210
    MOV dword ptr [ESI + 0x4],EAX       ; 004a9213
    PUSH ESI                            ; 004a9216
    MOV EAX,dword ptr [EBX + 0x34]      ; 004a9217
    PUSH EBX                            ; 004a921a
    MOV dword ptr [ESI + 0x18],EAX      ; 004a921b
    CALL FUN_004a9230                   ; 004a921e
        ;   XREF to: 004a9230 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9230()
    ADD ESP,0x8                         ; 004a9223
    MOV byte ptr [EBX + 0x48],0x0       ; 004a9226
    POP ESI                             ; 004a922a
    POP EBX                             ; 004a922b
    RET                                 ; 004a922c

