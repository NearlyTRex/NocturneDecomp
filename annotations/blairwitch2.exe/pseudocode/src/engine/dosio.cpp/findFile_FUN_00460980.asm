; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_findFile_FUN_00460980(undefined4 param_1)
;
;
; XREF[5]:
;   engine_dosio.cpp_FUN_00460c70 at 00460ce7
;   engine_dosio.cpp_getFileSize_FUN_00460aa0 at 00460ac6
;   engine_dosio.cpp_reopenFileStream_FUN_00460d30 at 00460db8
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80 at 00573c16
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 at 0057d3ce
;
; Referenced Globals:
;   undefined4 DAT_01b4d370
;
; Called Functions:
;   engine_dosio.cpp_findFileNormally_FUN_004609e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460980
        ;   Label: engine_dosio.cpp_findFile_FUN_00460980
    PUSH ESI                            ; 00460981
    PUSH EDI                            ; 00460982
    PUSH EBP                            ; 00460983
    MOV EDI,dword ptr [ESP + 0x14]      ; 00460984
    MOV EDX,dword ptr [0x01b4d370]      ; 00460988 | DAT_01b4d370
    CMP EDX,0x1                         ; 0046098e
    JL 0x004609c0                       ; 00460991
        ;   XREF to: 004609c0 (CONDITIONAL_JUMP)  ; LAB_004609c0
    XOR ESI,ESI                         ; 00460993
    TEST EDX,EDX                        ; 00460995
    JLE 0x004609b9                      ; 00460997
        ;   XREF to: 004609b9 (CONDITIONAL_JUMP)  ; LAB_004609b9
    XOR EBX,EBX                         ; 00460999
    MOV EAX,EBX                         ; 0046099b
        ;   Label: LAB_0046099b
    PUSH EDI                            ; 0046099d
    CALL dword ptr [EAX + 0x1b4d374]    ; 0046099e
    ADD ESP,0x4                         ; 004609a4
    TEST EAX,EAX                        ; 004609a7
    JNZ 0x004609ce                      ; 004609a9
        ;   XREF to: 004609ce (CONDITIONAL_JUMP)  ; LAB_004609ce
    MOV EBP,dword ptr [0x01b4d370]      ; 004609ab | DAT_01b4d370
    INC ESI                             ; 004609b1
    ADD EBX,0x4                         ; 004609b2
    CMP ESI,EBP                         ; 004609b5
    JL 0x0046099b                       ; 004609b7
        ;   XREF to: 0046099b (CONDITIONAL_JUMP)  ; LAB_0046099b
    XOR EAX,EAX                         ; 004609b9
        ;   Label: LAB_004609b9
    POP EBP                             ; 004609bb
    POP EDI                             ; 004609bc
    POP ESI                             ; 004609bd
    POP EBX                             ; 004609be
    RET                                 ; 004609bf
    PUSH EDI                            ; 004609c0
        ;   Label: LAB_004609c0
    CALL engine_dosio.cpp_findFileNormally_FUN_004609e0 ; 004609c1
        ;   XREF to: 004609e0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFileNormally_FUN_004609e0()
    ADD ESP,0x4                         ; 004609c6
    POP EBP                             ; 004609c9
    POP EDI                             ; 004609ca
    POP ESI                             ; 004609cb
    POP EBX                             ; 004609cc
    RET                                 ; 004609cd
    MOV EAX,0x1                         ; 004609ce
        ;   Label: LAB_004609ce
    POP EBP                             ; 004609d3
    POP EDI                             ; 004609d4
    POP ESI                             ; 004609d5
    POP EBX                             ; 004609d6
    RET                                 ; 004609d7

