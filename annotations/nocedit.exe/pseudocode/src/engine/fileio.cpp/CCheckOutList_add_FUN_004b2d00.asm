; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList * this_ptr, CCheckOutItem * new_entry)
;
; Parameters:
; CCheckOutList *  Stack[0x4]:4   this_ptr
; CCheckOutItem *  Stack[0x8]:4   new_entry
;
; XREF[3]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3df8
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 at 004b2cb8
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bacaf
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00626417
;
; Called Functions:
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2d00
        ;   Label: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b2d01
    MOV EDX,dword ptr [EBX]             ; 004b2d05
    INC EDX                             ; 004b2d07
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b2d08
    SUB EAX,EDX                         ; 004b2d0f
    SHL EAX,0x3                         ; 004b2d11
    PUSH 0x2e7                          ; 004b2d14
    MOV EDX,EAX                         ; 004b2d19
    SHL EAX,0x4                         ; 004b2d1b
    PUSH 0x626417                       ; 004b2d1e | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00626417 = ..\engine\fileio.cpp
    SUB EAX,EDX                         ; 004b2d23
    PUSH EAX                            ; 004b2d25
    MOV EDX,dword ptr [EBX + 0x4]       ; 004b2d26
    PUSH EDX                            ; 004b2d29
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b2d2a | void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b2d2f
    MOV dword ptr [EBX + 0x4],EAX       ; 004b2d32
    TEST EAX,EAX                        ; 004b2d35
    JNZ 0x004b2d3b                      ; 004b2d37 | LAB_004b2d3b
        ;   XREF to: 004b2d3b (CONDITIONAL_JUMP)
    POP EBX                             ; 004b2d39
    RET                                 ; 004b2d3a
    PUSH EDI                            ; 004b2d3b
        ;   Label: LAB_004b2d3b
    PUSH ESI                            ; 004b2d3c
    MOV EDX,dword ptr [EBX]             ; 004b2d3d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b2d3f
    SUB EAX,EDX                         ; 004b2d46
    SHL EAX,0x3                         ; 004b2d48
    MOV ECX,0x5a                        ; 004b2d4b
    MOV EDX,EAX                         ; 004b2d50
    SHL EAX,0x4                         ; 004b2d52
    MOV EDI,dword ptr [EBX + 0x4]       ; 004b2d55
    SUB EAX,EDX                         ; 004b2d58
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b2d5a
    ADD EDI,EAX                         ; 004b2d5e
    MOVSD.REP ES:EDI,ESI                ; 004b2d60
    MOV EAX,0x1                         ; 004b2d62
    ADD dword ptr [EBX],EAX             ; 004b2d67
    POP ESI                             ; 004b2d69
    POP EDI                             ; 004b2d6a
    POP EBX                             ; 004b2d6b
    RET                                 ; 004b2d6c

