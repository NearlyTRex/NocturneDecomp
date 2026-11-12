; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_findFile_FUN_004656d0(SFoundFileInfo *context)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   context
;
; XREF[5]:
;   engine_dosio.cpp_FUN_004659c0 at 00465a37
;   engine_dosio.cpp_getFileSize_FUN_004657f0 at 00465816
;   engine_dosio.cpp_reopenFileStream_FUN_00465a80 at 00465b08
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00569790 at 00569826
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 at 00573ffe
;
; Referenced Globals:
;   undefined4 DAT_01b8517c
;
; Called Functions:
;   engine_dosio.cpp_findFileNormally_FUN_00465730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004656d0
        ;   Label: engine_dosio.cpp_findFile_FUN_004656d0
    PUSH ESI                            ; 004656d1
    PUSH EDI                            ; 004656d2
    PUSH EBP                            ; 004656d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004656d4
    MOV EDX,dword ptr [0x01b8517c]      ; 004656d8 | DAT_01b8517c
    CMP EDX,0x1                         ; 004656de
    JL 0x00465710                       ; 004656e1
        ;   XREF to: 00465710 (CONDITIONAL_JUMP)  ; LAB_00465710
    XOR ESI,ESI                         ; 004656e3
    TEST EDX,EDX                        ; 004656e5
    JLE 0x00465709                      ; 004656e7
        ;   XREF to: 00465709 (CONDITIONAL_JUMP)  ; LAB_00465709
    XOR EBX,EBX                         ; 004656e9
    MOV EAX,EBX                         ; 004656eb
        ;   Label: LAB_004656eb
    PUSH EDI                            ; 004656ed
    CALL dword ptr [EAX + 0x1b85180]    ; 004656ee
    ADD ESP,0x4                         ; 004656f4
    TEST EAX,EAX                        ; 004656f7
    JNZ 0x0046571e                      ; 004656f9
        ;   XREF to: 0046571e (CONDITIONAL_JUMP)  ; LAB_0046571e
    MOV EBP,dword ptr [0x01b8517c]      ; 004656fb | DAT_01b8517c
    INC ESI                             ; 00465701
    ADD EBX,0x4                         ; 00465702
    CMP ESI,EBP                         ; 00465705
    JL 0x004656eb                       ; 00465707
        ;   XREF to: 004656eb (CONDITIONAL_JUMP)  ; LAB_004656eb
    XOR EAX,EAX                         ; 00465709
        ;   Label: LAB_00465709
    POP EBP                             ; 0046570b
    POP EDI                             ; 0046570c
    POP ESI                             ; 0046570d
    POP EBX                             ; 0046570e
    RET                                 ; 0046570f
    PUSH EDI                            ; 00465710
        ;   Label: LAB_00465710
    CALL engine_dosio.cpp_findFileNormally_FUN_00465730 ; 00465711
        ;   XREF to: 00465730 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_findFileNormally_FUN_00465730(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 00465716
    POP EBP                             ; 00465719
    POP EDI                             ; 0046571a
    POP ESI                             ; 0046571b
    POP EBX                             ; 0046571c
    RET                                 ; 0046571d
    MOV EAX,0x1                         ; 0046571e
        ;   Label: LAB_0046571e
    POP EBP                             ; 00465723
    POP EDI                             ; 00465724
    POP ESI                             ; 00465725
    POP EBX                             ; 00465726
    RET                                 ; 00465727

