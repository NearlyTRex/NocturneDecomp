; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b446b
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb696
;
; Referenced Globals:
;   Sleep* g_SleepFunc = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_rt_006261e5
;   TerminatedCString s_engine_fileio_cpp_006261e8
;
; Called Functions:
;   crt_errno.c_errno_FUN_00601450
;   crt_stdio.c_setvbuf_FUN_00601490
;   engine_fileio.cpp_readTimestampFile_FUN_004b23a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2640
        ;   Label: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
    PUSH ESI                            ; 004b2641
    PUSH EDI                            ; 004b2642
    PUSH EBP                            ; 004b2643
    SUB ESP,0x8                         ; 004b2644
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b2647
    XOR ESI,ESI                         ; 004b264b
    PUSH 0x153                          ; 004b264d
        ;   Label: LAB_004b264d
    PUSH 0x626129                       ; 004b2652 | = "..\\engine\\fileio.cpp"
    PUSH 0x6261e5                       ; 004b2657 | = "rt"
    PUSH 0x0                            ; 004b265c
    PUSH EDI                            ; 004b265e
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b265f
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b2664
    ADD ESP,0x14                        ; 004b2666
    TEST EAX,EAX                        ; 004b2669
    JNZ 0x004b2740                      ; 004b266b
        ;   XREF to: 004b2740 (CONDITIONAL_JUMP)  ; LAB_004b2740
    CALL crt_errno.c_errno_FUN_00601450 ; 004b2671
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c_errno_FUN_00601450()
    CMP dword ptr [EAX],0x6             ; 004b2676
    JZ 0x004b2725                       ; 004b2679
        ;   XREF to: 004b2725 (CONDITIONAL_JUMP)  ; LAB_004b2725
    XOR EBX,EBX                         ; 004b267f
        ;   Label: LAB_004b267f
    MOV dword ptr [ESP],EBX             ; 004b2681
        ;   Label: LAB_004b2681
    TEST EBX,EBX                        ; 004b2684
    JZ 0x004b2757                       ; 004b2686
        ;   XREF to: 004b2757 (CONDITIONAL_JUMP)  ; LAB_004b2757
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b268c
    PUSH EBX                            ; 004b2690
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b2691
    PUSH ESI                            ; 004b2695
    LEA EAX,[ESP + 0xc]                 ; 004b2696
    PUSH EAX                            ; 004b269a
    LEA EAX,[ESP + 0xc]                 ; 004b269b
    XOR ECX,ECX                         ; 004b269f
    PUSH EAX                            ; 004b26a1
    MOV dword ptr [ESP + 0x14],ECX      ; 004b26a2
    CALL engine_fileio.cpp_readTimestampFile_FUN_004b23a0 ; 004b26a6
        ;   XREF to: 004b23a0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_readTimestampFile_FUN_004b23a0(FILE * file, STimestampRecord * * records, int * count)
    ADD ESP,0x10                        ; 004b26ab
    MOV EBP,dword ptr [ESP]             ; 004b26ae
    MOV EDI,EAX                         ; 004b26b1
    TEST EBP,EBP                        ; 004b26b3
    JZ 0x004b26cf                       ; 004b26b5
        ;   XREF to: 004b26cf (CONDITIONAL_JUMP)  ; LAB_004b26cf
    PUSH 0xc4                           ; 004b26b7
    PUSH 0x62604b                       ; 004b26bc | = "..\\engine\\fileio.cpp"
    PUSH EBP                            ; 004b26c1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b26c2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b26c7
    XOR EDX,EDX                         ; 004b26ca
    MOV dword ptr [ESP],EDX             ; 004b26cc
    MOV ESI,0xffffffff                  ; 004b26cf
        ;   Label: LAB_004b26cf
    TEST EDI,EDI                        ; 004b26d4
    JL 0x004b26fa                       ; 004b26d6
        ;   XREF to: 004b26fa (CONDITIONAL_JUMP)  ; LAB_004b26fa
    XOR EBX,EBX                         ; 004b26d8
    XOR ESI,ESI                         ; 004b26da
    TEST EDI,EDI                        ; 004b26dc
    JLE 0x004b26fa                      ; 004b26de
        ;   XREF to: 004b26fa (CONDITIONAL_JUMP)  ; LAB_004b26fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b26e0
    MOV ECX,dword ptr [EAX + 0x100]     ; 004b26e4
        ;   Label: LAB_004b26e4
    CMP ESI,ECX                         ; 004b26ea
    JGE 0x004b26f0                      ; 004b26ec
        ;   XREF to: 004b26f0 (CONDITIONAL_JUMP)  ; LAB_004b26f0
    MOV ESI,ECX                         ; 004b26ee
    INC EBX                             ; 004b26f0
        ;   Label: LAB_004b26f0
    ADD EAX,0x148                       ; 004b26f1
    CMP EBX,EDI                         ; 004b26f6
    JL 0x004b26e4                       ; 004b26f8
        ;   XREF to: 004b26e4 (CONDITIONAL_JUMP)  ; LAB_004b26e4
    MOV EBX,dword ptr [ESP + 0x4]       ; 004b26fa
        ;   Label: LAB_004b26fa
    TEST EBX,EBX                        ; 004b26fe
    JZ 0x004b271b                       ; 004b2700
        ;   XREF to: 004b271b (CONDITIONAL_JUMP)  ; LAB_004b271b
    PUSH 0x201                          ; 004b2702
    PUSH 0x6261e8                       ; 004b2707 | = "..\\engine\\fileio.cpp"
    PUSH EBX                            ; 004b270c
    XOR EBP,EBP                         ; 004b270d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b270f
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b2714
    MOV dword ptr [ESP + 0x4],EBP       ; 004b2717
    MOV EAX,ESI                         ; 004b271b
        ;   Label: LAB_004b271b
    ADD ESP,0x8                         ; 004b271d
    POP EBP                             ; 004b2720
    POP EDI                             ; 004b2721
    POP ESI                             ; 004b2722
    POP EBX                             ; 004b2723
    RET                                 ; 004b2724
    PUSH 0x1f4                          ; 004b2725
        ;   Label: LAB_004b2725
    INC ESI                             ; 004b272a
    CALL dword ptr CS:[0x611644]        ; 004b272b | g_SleepFunc
    CMP ESI,0xa                         ; 004b2732
    JL 0x004b264d                       ; 004b2735
        ;   XREF to: 004b264d (CONDITIONAL_JUMP)  ; LAB_004b264d
    JMP 0x004b267f                      ; 004b273b
        ;   XREF to: 004b267f (UNCONDITIONAL_JUMP)  ; LAB_004b267f
    PUSH 0x400                          ; 004b2740
        ;   Label: LAB_004b2740
    PUSH 0x0                            ; 004b2745
    PUSH 0x0                            ; 004b2747
    PUSH EAX                            ; 004b2749
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b274a
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b274f
    JMP 0x004b2681                      ; 004b2752
        ;   XREF to: 004b2681 (UNCONDITIONAL_JUMP)  ; LAB_004b2681
    XOR EAX,EAX                         ; 004b2757
        ;   Label: LAB_004b2757
    ADD ESP,0x8                         ; 004b2759
    POP EBP                             ; 004b275c
    POP EDI                             ; 004b275d
    POP ESI                             ; 004b275e
    POP EBX                             ; 004b275f
    RET                                 ; 004b2760

