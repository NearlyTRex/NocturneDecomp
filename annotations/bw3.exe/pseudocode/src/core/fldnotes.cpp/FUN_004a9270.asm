; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a9270(int param_1)
;
;
; XREF[3]:
;   core_fldnotes.cpp_FUN_004a8f30 at 004a913e
;   core_fldnotes.cpp_FUN_004a9330 at 004a936b
;   core_fldnotes.cpp_FUN_004a9710 at 004a9747
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a91b0
;   core_fldnotes.cpp_FUN_004a9300
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9270
        ;   Label: core_fldnotes.cpp_FUN_004a9270
    PUSH ESI                            ; 004a9271
    PUSH EDI                            ; 004a9272
    PUSH EBP                            ; 004a9273
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a9274
    PUSH EBX                            ; 004a9278
    CALL core_fldnotes.cpp_FUN_004a91b0 ; 004a9279
        ;   XREF to: 004a91b0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a91b0()
    ADD ESP,0x4                         ; 004a927e
    PUSH 0x6a                           ; 004a9281
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a9283
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a9286
    PUSH EDX                            ; 004a9289
    MOV dword ptr [EBX + 0x14],EAX      ; 004a928a
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 004a928d
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004a9292
    LEA EDX,[EBX + 0x18]                ; 004a9295
    MOV ECX,dword ptr [ECX + 0x41f8]    ; 004a9298
    MOV EDI,EAX                         ; 004a929e
    ADD EAX,ECX                         ; 004a92a0
    MOV ECX,dword ptr [EDX]             ; 004a92a2
    ADD ECX,EAX                         ; 004a92a4
    ADD ESP,0x8                         ; 004a92a6
    MOV dword ptr [EDX],ECX             ; 004a92a9
    XOR EDX,EDX                         ; 004a92ab
    XOR ECX,ECX                         ; 004a92ad
    IMUL ESI,dword ptr [EBX + 0x10],0x144 ; 004a92af
        ;   Label: LAB_004a92af
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a92b6
    ADD EAX,ESI                         ; 004a92b9
    CMP EDX,dword ptr [EAX]             ; 004a92bb
    JGE 0x004a92dd                      ; 004a92bd
        ;   XREF to: 004a92dd (CONDITIONAL_JUMP)  ; LAB_004a92dd
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 004a92bf
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a92c3
    MOV EBP,dword ptr [ESI + 0xc]       ; 004a92c6
    MOV ESI,dword ptr [EBX + 0x18]      ; 004a92c9
    ADD EAX,EBP                         ; 004a92cc
    CMP EAX,ESI                         ; 004a92ce
    JG 0x004a92d8                       ; 004a92d0
        ;   XREF to: 004a92d8 (CONDITIONAL_JUMP)  ; LAB_004a92d8
    INC EDX                             ; 004a92d2
        ;   Label: LAB_004a92d2
    ADD ECX,0x4                         ; 004a92d3
    JMP 0x004a92af                      ; 004a92d6
        ;   XREF to: 004a92af (UNCONDITIONAL_JUMP)  ; LAB_004a92af
    MOV dword ptr [EBX + 0x18],EAX      ; 004a92d8
        ;   Label: LAB_004a92d8
    JMP 0x004a92d2                      ; 004a92db
        ;   XREF to: 004a92d2 (UNCONDITIONAL_JUMP)  ; LAB_004a92d2
    MOV EBP,dword ptr [EBX + 0x18]      ; 004a92dd
        ;   Label: LAB_004a92dd
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a92e0
    ADD EDI,EBP                         ; 004a92e3
    CMP EDI,EAX                         ; 004a92e5
    JG 0x004a92ee                       ; 004a92e7
        ;   XREF to: 004a92ee (CONDITIONAL_JUMP)  ; LAB_004a92ee
    POP EBP                             ; 004a92e9
    POP EDI                             ; 004a92ea
    POP ESI                             ; 004a92eb
    POP EBX                             ; 004a92ec
    RET                                 ; 004a92ed
    PUSH EBX                            ; 004a92ee
        ;   Label: LAB_004a92ee
    CALL core_fldnotes.cpp_FUN_004a9300 ; 004a92ef
        ;   XREF to: 004a9300 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9300()
    ADD ESP,0x4                         ; 004a92f4
    POP EBP                             ; 004a92f7
    POP EDI                             ; 004a92f8
    POP ESI                             ; 004a92f9
    POP EBX                             ; 004a92fa
    RET                                 ; 004a92fb

