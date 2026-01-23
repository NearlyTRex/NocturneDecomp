; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
;
; Parameters:
; FILE *           Stack[0x4]:4   stream_ptr
; char *           Stack[0x8]:4   buffer_ptr
; int              Stack[0xc]:4   buffer_mode
; SIZE_T           Stack[0x10]:4   buffer_size
;
; XREF[10]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3abe
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b4acf
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b36ac
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 at 004b2953
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bbb3d
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004baa01
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9b4f
;   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 at 004b274a
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 at 004b334c
;   engine_fileio.cpp_openFileWithRetry_FUN_004b2200 at 004b2257
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601490
        ;   Label: crt_stdio.c_setvbuf_FUN_00601490
    PUSH ESI                            ; 00601491
    PUSH EDI                            ; 00601492
    PUSH EBP                            ; 00601493
    MOV EBX,dword ptr [ESP + 0x14]      ; 00601494
    MOV EBP,dword ptr [ESP + 0x18]      ; 00601498
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0060149c
    MOV EDI,dword ptr [ESP + 0x20]      ; 006014a0
    CMP EDI,0x7fffffff                  ; 006014a4
    JBE 0x006014b6                      ; 006014aa
        ;   XREF to: 006014b6 (CONDITIONAL_JUMP)  ; LAB_006014b6
    MOV EAX,0xffffffff                  ; 006014ac
    POP EBP                             ; 006014b1
    POP EDI                             ; 006014b2
    POP ESI                             ; 006014b3
    POP EBX                             ; 006014b4
    RET                                 ; 006014b5
    CMP ESI,0x200                       ; 006014b6
        ;   Label: LAB_006014b6
    JC 0x006014c8                       ; 006014bc
        ;   XREF to: 006014c8 (CONDITIONAL_JUMP)  ; LAB_006014c8
    JBE 0x006014da                      ; 006014be
        ;   XREF to: 006014da (CONDITIONAL_JUMP)  ; LAB_006014da
    CMP ESI,0x400                       ; 006014c0
    JMP 0x006014ce                      ; 006014c6
        ;   XREF to: 006014ce (UNCONDITIONAL_JUMP)  ; LAB_006014ce
    CMP ESI,0x100                       ; 006014c8
        ;   Label: LAB_006014c8
    JZ 0x006014da                       ; 006014ce
        ;   XREF to: 006014da (CONDITIONAL_JUMP)  ; LAB_006014da
        ;   Label: LAB_006014ce
    MOV EAX,0xffffffff                  ; 006014d0
    POP EBP                             ; 006014d5
    POP EDI                             ; 006014d6
    POP ESI                             ; 006014d7
    POP EBX                             ; 006014d8
    RET                                 ; 006014d9
    TEST EBP,EBP                        ; 006014da
        ;   Label: LAB_006014da
    JZ 0x006014ec                       ; 006014dc
        ;   XREF to: 006014ec (CONDITIONAL_JUMP)  ; LAB_006014ec
    TEST EDI,EDI                        ; 006014de
    JNZ 0x006014ec                      ; 006014e0
        ;   XREF to: 006014ec (CONDITIONAL_JUMP)  ; LAB_006014ec
    MOV EAX,0xffffffff                  ; 006014e2
    POP EBP                             ; 006014e7
    POP EDI                             ; 006014e8
    POP ESI                             ; 006014e9
    POP EBX                             ; 006014ea
    RET                                 ; 006014eb
    MOV EDX,dword ptr [EBX + 0x10]      ; 006014ec
        ;   Label: LAB_006014ec
    PUSH EDX                            ; 006014ef
    CALL dword ptr [0x00684ee8]         ; 006014f0 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 006014f6
    PUSH EBX                            ; 006014f9
    CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0 ; 006014fa
        ;   XREF to: 00608ee0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0(FILE * file)
    ADD ESP,0x4                         ; 006014ff
    TEST EDI,EDI                        ; 00601502
    JZ 0x00601509                       ; 00601504
        ;   XREF to: 00601509 (CONDITIONAL_JUMP)  ; LAB_00601509
    MOV dword ptr [EBX + 0x14],EDI      ; 00601506
    MOV EAX,dword ptr [EBX + 0x8]       ; 00601509
        ;   Label: LAB_00601509
    MOV dword ptr [EAX + 0x8],EBP       ; 0060150c
    AND byte ptr [EBX + 0xd],0xf8       ; 0060150f
    MOV ECX,dword ptr [EBX + 0xc]       ; 00601513
    MOV dword ptr [EBX],EBP             ; 00601516
    OR ECX,ESI                          ; 00601518
    MOV dword ptr [EBX + 0xc],ECX       ; 0060151a
    TEST EBP,EBP                        ; 0060151d
    JNZ 0x0060152a                      ; 0060151f
        ;   XREF to: 0060152a (CONDITIONAL_JUMP)  ; LAB_0060152a
    PUSH EBX                            ; 00601521
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 00601522
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(FILE * file)
    ADD ESP,0x4                         ; 00601527
    MOV ESI,dword ptr [EBX + 0x10]      ; 0060152a
        ;   Label: LAB_0060152a
    PUSH ESI                            ; 0060152d
    CALL dword ptr [0x00684eec]         ; 0060152e | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00601534
    XOR EAX,EAX                         ; 00601537
    POP EBP                             ; 00601539
    POP EDI                             ; 0060153a
    POP ESI                             ; 0060153b
    POP EBX                             ; 0060153c
    RET                                 ; 0060153d

