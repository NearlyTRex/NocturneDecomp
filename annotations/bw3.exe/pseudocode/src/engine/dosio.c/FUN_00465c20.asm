; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465c20(int param_1)
;
;
; XREF[5]:
;   FUN_00482a70 at 00482bfe
;   FUN_00482c70 at 00482dfd
;   FUN_00482ea0 at 00482f34
;   FUN_00483020 at 0048310f
;   FUN_005152e0 at 00515351
;
; Referenced Globals:
;   void* PTR_FindNextFileA_005b355c = 001b3d82
;   TerminatedCString s_engine_dosio_c_005bbfcc
;   TerminatedCString s_CFileFinder_open_search_005bbfde
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FindNextFileA
;   FUN_00465ce0
;   FUN_00465cf0
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465c20
        ;   Label: FUN_00465c20
    PUSH EDI                            ; 00465c21
    SUB ESP,0x140                       ; 00465c22
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00465c28
    CMP dword ptr [EBX + 0x10c],0x0     ; 00465c2f
    JNZ 0x00465c5d                      ; 00465c36
        ;   XREF to: 00465c5d (CONDITIONAL_JUMP)  ; LAB_00465c5d
    PUSH ESI                            ; 00465c38
    MOV ECX,0x5bbfcc                    ; 00465c39 | = "..\\engine\\dosio.c"
    MOV ESI,0x28e                       ; 00465c3e
    PUSH 0x5bbfde                       ; 00465c43 | = "CFileFinder::open - search not opened!"
    MOV dword ptr [0x01d71de0],ECX      ; 00465c48 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00465c4e | DAT_01d71de4
    CALL FUN_004e4330                   ; 00465c54
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00465c59
    POP ESI                             ; 00465c5c
    MOV EAX,ESP                         ; 00465c5d
        ;   Label: LAB_00465c5d
    PUSH EAX                            ; 00465c5f
    MOV EDI,dword ptr [EBX + 0x110]     ; 00465c60
    PUSH EDI                            ; 00465c66
    CALL dword ptr CS:[0x5b355c]        ; 00465c67 | PTR_FindNextFileA_005b355c
    TEST EAX,EAX                        ; 00465c6e
    JZ 0x00465c8c                       ; 00465c70
        ;   XREF to: 00465c8c (CONDITIONAL_JUMP)  ; LAB_00465c8c
    MOV EAX,ESP                         ; 00465c72
    PUSH EAX                            ; 00465c74
    PUSH EBX                            ; 00465c75
    CALL FUN_00465cf0                   ; 00465c76
        ;   XREF to: 00465cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465cf0()
    MOV EAX,0x1                         ; 00465c7b
    ADD ESP,0x8                         ; 00465c80
    ADD ESP,0x140                       ; 00465c83
    POP EDI                             ; 00465c89
    POP EBX                             ; 00465c8a
    RET                                 ; 00465c8b
    PUSH EBX                            ; 00465c8c
        ;   Label: LAB_00465c8c
    CALL FUN_00465ce0                   ; 00465c8d
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ce0()
    ADD ESP,0x4                         ; 00465c92
    XOR EAX,EAX                         ; 00465c95
    ADD ESP,0x140                       ; 00465c97
    POP EDI                             ; 00465c9d
    POP EBX                             ; 00465c9e
    RET                                 ; 00465c9f

