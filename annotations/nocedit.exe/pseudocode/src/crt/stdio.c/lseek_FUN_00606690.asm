; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_lseek_FUN_00606690(int file_handle_index,long distance_to_move,int move_method)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
; long             Stack[0x8]:4   distance_to_move
; int              Stack[0xc]:4   move_method
;
; XREF[10]:
;   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 at 0060d9e4
;   crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae at 0060d85e
;   crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8 at 0060dc1f
;   crt_fstream.cpp_filebuf_sync_FUN_0060dc5e at 0060dcc7
;   crt_io.c_chsize_FUN_00600cf0 at 00600d3a
;   crt_io.c_extend_file_for_append_FUN_00608410 at 00608425
;   crt_stdio.c__fclose_FUN_00601fd0 at 00602028
;   crt_stdio.c_fseek_FUN_005ffacc at 005ffb57
;   crt_unknown.c_FUN_00600c80 at 00600ca2
;   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 at 0060eae3
;
; Referenced Globals:
;   undefined4 CAVE_cave_006088b0
;   undefined4 SUB_00608908
;   SET_FILE_POINTER_FUNC* g_SetFilePointerFunc = 002121b6
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00606690
        ;   Label: crt_stdio.c_lseek_FUN_00606690
    PUSH ESI                            ; 00606691
    PUSH EDI                            ; 00606692
    MOV EBX,dword ptr [ESP + 0x10]      ; 00606693
    TEST EBX,EBX                        ; 00606697
    JL 0x006066a3                       ; 00606699
        ;   XREF to: 006066a3 (CONDITIONAL_JUMP)  ; LAB_006066a3
    CMP EBX,dword ptr [0x00685214]      ; 0060669b | g_MaxHandleCount
    JBE 0x006066b6                      ; 006066a1
        ;   XREF to: 006066b6 (CONDITIONAL_JUMP)  ; LAB_006066b6
    PUSH 0x4                            ; 006066a3
        ;   Label: LAB_006066a3
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006066a5
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV EAX,0xffffffff                  ; 006066aa
    ADD ESP,0x4                         ; 006066af
    POP EDI                             ; 006066b2
    POP ESI                             ; 006066b3
    POP EBX                             ; 006066b4
    RET                                 ; 006066b5
    PUSH EBX                            ; 006066b6
        ;   Label: LAB_006066b6
    CALL dword ptr [0x00684ee8]         ; 006066b7 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 006066bd
    PUSH EBX                            ; 006066c0
    CALL 0x006088b0                     ; 006066c1
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)  ; CAVE_cave_006088b0
    ADD ESP,0x4                         ; 006066c6
    CMP dword ptr [ESP + 0x14],0x0      ; 006066c9
    JLE 0x006066e1                      ; 006066ce
        ;   XREF to: 006066e1 (CONDITIONAL_JUMP)  ; LAB_006066e1
    TEST AL,0x80                        ; 006066d0
    JNZ 0x006066e1                      ; 006066d2
        ;   XREF to: 006066e1 (CONDITIONAL_JUMP)  ; LAB_006066e1
    OR AH,0x80                          ; 006066d4
    PUSH EAX                            ; 006066d7
    PUSH EBX                            ; 006066d8
    CALL 0x00608908                     ; 006066d9
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)  ; SUB_00608908
    ADD ESP,0x8                         ; 006066de
    MOV ESI,dword ptr [0x0068526c]      ; 006066e1 | g_IOControlBlock
        ;   Label: LAB_006066e1
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 006066e7
    MOV ESI,dword ptr [ESP + 0x18]      ; 006066ea
    PUSH ESI                            ; 006066ee
    PUSH 0x0                            ; 006066ef
    MOV EDI,dword ptr [ESP + 0x1c]      ; 006066f1
    PUSH EDI                            ; 006066f5
    PUSH EAX                            ; 006066f6
    CALL dword ptr CS:[0x61162c]        ; 006066f7 | g_SetFilePointerFunc
    PUSH EBX                            ; 006066fe
    MOV ESI,EAX                         ; 006066ff
    CALL dword ptr [0x00684eec]         ; 00606701 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00606707
    CMP ESI,-0x1                        ; 0060670a
    JNZ 0x00606714                      ; 0060670d
        ;   XREF to: 00606714 (CONDITIONAL_JUMP)  ; LAB_00606714
    CALL crt_errno.c___set_errno_FUN_006083fc ; 0060670f
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    MOV EAX,ESI                         ; 00606714
        ;   Label: LAB_00606714
    POP EDI                             ; 00606716
    POP ESI                             ; 00606717
    POP EBX                             ; 00606718
    RET                                 ; 00606719

