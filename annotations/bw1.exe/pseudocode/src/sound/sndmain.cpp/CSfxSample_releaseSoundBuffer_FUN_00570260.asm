; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 at 00570054
;   sound_sndmain.cpp_FUN_0056e830 at 0056ebd1
;   sound_sndmain.cpp_FUN_00570460 at 005709fc
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570260
        ;   Label: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260
    PUSH EBP                            ; 00570261
    MOV EBX,dword ptr [ESP + 0xc]       ; 00570262
    CMP dword ptr [EBX + 0x1ac],0x0     ; 00570266
    JZ 0x00570299                       ; 0057026d
        ;   XREF to: 00570299 (CONDITIONAL_JUMP)  ; LAB_00570299
    PUSH ESI                            ; 0057026f
    MOV ECX,dword ptr [EBX + 0x158]     ; 00570270
    TEST ECX,ECX                        ; 00570276
    JZ 0x00570284                       ; 00570278
        ;   XREF to: 00570284 (CONDITIONAL_JUMP)  ; LAB_00570284
    MOV ESI,dword ptr [0x02c80650]      ; 0057027a | DAT_02c80650
    TEST ESI,ESI                        ; 00570280
    JNZ 0x0057029c                      ; 00570282
        ;   XREF to: 0057029c (CONDITIONAL_JUMP)  ; LAB_0057029c
    MOV dword ptr [EBX + 0x1ac],0x0     ; 00570284
        ;   Label: LAB_00570284
    MOV dword ptr [EBX + 0x1a8],0x0     ; 0057028e
    POP ESI                             ; 00570298
    POP EBP                             ; 00570299
        ;   Label: LAB_00570299
    POP EBX                             ; 0057029a
    RET                                 ; 0057029b
    PUSH EDI                            ; 0057029c
        ;   Label: LAB_0057029c
    MOV EDI,dword ptr [EBX + 0x1ac]     ; 0057029d
    PUSH EDI                            ; 005702a3
    MOV EBP,dword ptr [EBX + 0x1a8]     ; 005702a4
    PUSH EBP                            ; 005702aa
    PUSH ECX                            ; 005702ab
    MOV EDX,dword ptr [ESI]             ; 005702ac
    PUSH ESI                            ; 005702ae
    CALL dword ptr [EDX + 0x3c]         ; 005702af
    ADD ESP,0x10                        ; 005702b2
    POP EDI                             ; 005702b5
    JMP 0x00570284                      ; 005702b6
        ;   XREF to: 00570284 (UNCONDITIONAL_JUMP)  ; LAB_00570284

