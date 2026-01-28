; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_fflush_FUN_00601540(FILE *stream)
;
; Parameters:
; FILE *           Stack[0x4]:4   stream
;
; XREF[5]:
;   crt_stdio.c_ftell_FUN_00601560 at 00601575
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4eb8
;   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 at 004b2f14
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbf8d
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd69a
;
; Called Functions:
;   crt_stdio.c_fflushInternal_FUN_006039d0
;   crt_unknown.c_FUN_00605950
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00601540
        ;   Label: crt_stdio.c_fflush_FUN_00601540
    TEST EAX,EAX                        ; 00601544
    JNZ 0x00601550                      ; 00601546
        ;   XREF to: 00601550 (CONDITIONAL_JUMP)  ; LAB_00601550
    CALL crt_unknown.c_FUN_00605950     ; 00601548
        ;   XREF to: 00605950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00605950()
    XOR EAX,EAX                         ; 0060154d
    RET                                 ; 0060154f
    PUSH EAX                            ; 00601550
        ;   Label: LAB_00601550
    CALL crt_stdio.c_fflushInternal_FUN_006039d0 ; 00601551
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflushInternal_FUN_006039d0(FILE * file_handle)
    ADD ESP,0x4                         ; 00601556
    RET                                 ; 00601559

