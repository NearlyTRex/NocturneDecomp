; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
; long             Stack[0x8]:4   distance_to_move
; int              Stack[0xc]:4   move_method
;
; XREF[11]:
;   crt_fstream.cpp_filebuf_overflow_FUN_0060d881 at 0060d9e4
;   crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae at 0060d85e
;   crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8 at 0060dc1f
;   crt_fstream.cpp_filebuf_sync_FUN_0060dc5e at 0060dcc7
;   crt_io.c_extend_file_for_append_FUN_00608410 at 00608425
;   crt_io.c_ftruncate_FUN_00600cf0 at 00600d3a
;   crt_stdio.c_fclose_FUN_00601fd0 at 00602028
;   crt_stdio.c_fflushInternal_FUN_006039d0 at 00603a99
;   crt_stdio.c_fseek_FUN_005ffacc at 005ffb57
;   crt_unknown.c_FUN_00600c80 at 00600ca2
;   ... and 1 more
;
; Referenced Globals:
;   SetFilePointer* SetFilePointer = 002121b6
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   uint g_MaxHandleCount = 0x14
;   SIOControlBlock* g_IOControlBlock = 00000000
;
; Called Functions:
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_getFileTypeFlags_FUN_006088b0
;   crt_io.c_setFileDescriptorFlags_FUN_00608908
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
    JL 0x006066a3                       ; 00606699 | LAB_006066a3
        ;   XREF to: 006066a3 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x00685214]      ; 0060669b | uint g_MaxHandleCount
    JBE 0x006066b6                      ; 006066a1 | LAB_006066b6
        ;   XREF to: 006066b6 (CONDITIONAL_JUMP)
    PUSH 0x4                            ; 006066a3
        ;   Label: LAB_006066a3
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006066a5 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 006066aa
    ADD ESP,0x4                         ; 006066af
    POP EDI                             ; 006066b2
    POP ESI                             ; 006066b3
    POP EBX                             ; 006066b4
    RET                                 ; 006066b5
    PUSH EBX                            ; 006066b6
        ;   Label: LAB_006066b6
    CALL dword ptr [0x00684ee8]         ; 006066b7 | ENTER_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 006066bd
    PUSH EBX                            ; 006066c0
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 006066c1 | uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006066c6
    CMP dword ptr [ESP + 0x14],0x0      ; 006066c9
    JLE 0x006066e1                      ; 006066ce | LAB_006066e1
        ;   XREF to: 006066e1 (CONDITIONAL_JUMP)
    TEST AL,0x80                        ; 006066d0
    JNZ 0x006066e1                      ; 006066d2 | LAB_006066e1
        ;   XREF to: 006066e1 (CONDITIONAL_JUMP)
    OR AH,0x80                          ; 006066d4
    PUSH EAX                            ; 006066d7
    PUSH EBX                            ; 006066d8
    CALL crt_io.c_setFileDescriptorFlags_FUN_00608908 ; 006066d9 | void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 006066de
    MOV ESI,dword ptr [0x0068526c]      ; 006066e1 | SIOControlBlock * g_IOControlBlock
        ;   Label: LAB_006066e1
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 006066e7
    MOV ESI,dword ptr [ESP + 0x18]      ; 006066ea
    PUSH ESI                            ; 006066ee
    PUSH 0x0                            ; 006066ef
    MOV EDI,dword ptr [ESP + 0x1c]      ; 006066f1
    PUSH EDI                            ; 006066f5
    PUSH EAX                            ; 006066f6
    CALL dword ptr CS:[0x61162c]        ; 006066f7 | SetFilePointer * SetFilePointer
    PUSH EBX                            ; 006066fe
    MOV ESI,EAX                         ; 006066ff
    CALL dword ptr [0x00684eec]         ; 00606701 | EXIT_CRITICAL_SECTION_BY_INDEX_FUNC * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00606707
    CMP ESI,-0x1                        ; 0060670a
    JNZ 0x00606714                      ; 0060670d | LAB_00606714
        ;   XREF to: 00606714 (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 0060670f | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    MOV EAX,ESI                         ; 00606714
        ;   Label: LAB_00606714
    POP EDI                             ; 00606716
    POP ESI                             ; 00606717
    POP EBX                             ; 00606718
    RET                                 ; 00606719

