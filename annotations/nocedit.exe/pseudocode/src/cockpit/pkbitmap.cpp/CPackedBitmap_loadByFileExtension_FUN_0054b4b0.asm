; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap *this_ptr,int processing_flags)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   processing_flags
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 at 0054c52c
;
; Referenced Globals:
;   TerminatedCString s_raw_0063f07f
;   TerminatedCString s_pbm_0063f084
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_0054b910
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b4b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
    PUSH ESI                            ; 0054b4b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054b4b2
    MOV DL,0x2e                         ; 0054b4b6
    MOV ESI,EBX                         ; 0054b4b8
    MOV AL,byte ptr [ESI]               ; 0054b4ba
        ;   Label: LAB_0054b4ba
    CMP AL,DL                           ; 0054b4bc
    JZ 0x0054b4d2                       ; 0054b4be
        ;   XREF to: 0054b4d2 (CONDITIONAL_JUMP)  ; LAB_0054b4d2
    CMP AL,0x0                          ; 0054b4c0
    JZ 0x0054b4d0                       ; 0054b4c2
        ;   XREF to: 0054b4d0 (CONDITIONAL_JUMP)  ; LAB_0054b4d0
    INC ESI                             ; 0054b4c4
    MOV AL,byte ptr [ESI]               ; 0054b4c5
    CMP AL,DL                           ; 0054b4c7
    JZ 0x0054b4d2                       ; 0054b4c9
        ;   XREF to: 0054b4d2 (CONDITIONAL_JUMP)  ; LAB_0054b4d2
    INC ESI                             ; 0054b4cb
    CMP AL,0x0                          ; 0054b4cc
    JNZ 0x0054b4ba                      ; 0054b4ce
        ;   XREF to: 0054b4ba (CONDITIONAL_JUMP)  ; LAB_0054b4ba
    SUB ESI,ESI                         ; 0054b4d0
        ;   Label: LAB_0054b4d0
    TEST ESI,ESI                        ; 0054b4d2
        ;   Label: LAB_0054b4d2
    JNZ 0x0054b4d9                      ; 0054b4d4
        ;   XREF to: 0054b4d9 (CONDITIONAL_JUMP)  ; LAB_0054b4d9
    POP ESI                             ; 0054b4d6
        ;   Label: LAB_0054b4d6
    POP EBX                             ; 0054b4d7
    RET                                 ; 0054b4d8
    PUSH 0x63f07f                       ; 0054b4d9 | = ".raw"
        ;   Label: LAB_0054b4d9
    PUSH ESI                            ; 0054b4de
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0054b4df
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054b4e4
    TEST EAX,EAX                        ; 0054b4e7
    JZ 0x0054b50e                       ; 0054b4e9
        ;   XREF to: 0054b50e (CONDITIONAL_JUMP)  ; LAB_0054b50e
    PUSH 0x63f084                       ; 0054b4eb | = ".pbm"
    PUSH ESI                            ; 0054b4f0
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0054b4f1
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054b4f6
    TEST EAX,EAX                        ; 0054b4f9
    JNZ 0x0054b4d6                      ; 0054b4fb
        ;   XREF to: 0054b4d6 (CONDITIONAL_JUMP)  ; LAB_0054b4d6
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054b4fd
    PUSH ECX                            ; 0054b501
    PUSH EBX                            ; 0054b502
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_0054b910 ; 0054b503
        ;   XREF to: 0054b910 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_0054b910(CPackedBitmap * this_ptr, int post_load_processing)
    ADD ESP,0x8                         ; 0054b508
    POP ESI                             ; 0054b50b
    POP EBX                             ; 0054b50c
    RET                                 ; 0054b50d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054b50e
        ;   Label: LAB_0054b50e
    PUSH EDX                            ; 0054b512
    PUSH EBX                            ; 0054b513
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 ; 0054b514
        ;   XREF to: 0054b080 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 0054b519
    POP ESI                             ; 0054b51c
    POP EBX                             ; 0054b51d
    RET                                 ; 0054b51e

