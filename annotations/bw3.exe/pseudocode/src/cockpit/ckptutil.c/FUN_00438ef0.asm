; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl cockpit_ckptutil_c_FUN_00438ef0(char *filename,void *buffer,int size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   size
; Local Variables:
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0050f990 at 0050f9a1
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910 at 0050f93e
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004afa49
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_u_byt_005b8e90
;   TerminatedCString s_cockpit_ckptutil_c_005b8ec2
;   undefined4 DAT_005b8ed8
;   TerminatedCString s_Unable_to_open_bitmap_fi_005b8edc
;   TerminatedCString s_cockpit_ckptutil_c_005b8efd
;   TerminatedCString s_Unable_to_read_bitmap_fi_005b8f13
;   TerminatedCString s_cockpit_ckptutil_c_005b8f34
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trstream.cpp_CInStreamFile_close_FUN_00573db0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   support_trstream.cpp_CInStreamFile_read_FUN_00573c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438ef0
        ;   Label: cockpit_ckptutil.c_FUN_00438ef0
    PUSH ESI                            ; 00438ef1
    PUSH EDI                            ; 00438ef2
    PUSH EBP                            ; 00438ef3
    SUB ESP,0x7c                        ; 00438ef4
    MOV ESI,dword ptr [ESP + 0x90]      ; 00438ef7
    MOV EBX,dword ptr [ESP + 0x94]      ; 00438efe
    MOV EDI,dword ptr [ESP + 0x98]      ; 00438f05
    TEST EBX,EBX                        ; 00438f0c
    JZ 0x00438fa6                       ; 00438f0e
        ;   XREF to: 00438fa6 (CONDITIONAL_JUMP)  ; LAB_00438fa6
    LEA EAX,[ESP + 0x50]                ; 00438f14
        ;   Label: LAB_00438f14
    PUSH EAX                            ; 00438f18
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00438f19
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00438f1e
    PUSH 0x1                            ; 00438f21
    PUSH ESI                            ; 00438f23
    PUSH 0x5b8ed8                       ; 00438f24 | DAT_005b8ed8
    LEA EAX,[ESP + 0x5c]                ; 00438f29
    PUSH EAX                            ; 00438f2d
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 00438f2e
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 00438f33
    TEST EAX,EAX                        ; 00438f36
    JNZ 0x00438f6d                      ; 00438f38
        ;   XREF to: 00438f6d (CONDITIONAL_JUMP)  ; LAB_00438f6d
    PUSH ESI                            ; 00438f3a
    PUSH 0x5b8edc                       ; 00438f3b | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00438f40
    PUSH EAX                            ; 00438f44
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00438f45
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x994                       ; 00438f4a
    ADD ESP,0xc                         ; 00438f4f
    MOV [0x01d71de4],EAX                ; 00438f52 | DAT_01d71de4
    MOV EAX,ESP                         ; 00438f57
    MOV EBP,0x5b8efd                    ; 00438f59 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 00438f5e
    MOV dword ptr [0x01d71de0],EBP      ; 00438f5f | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 00438f65
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00438f6a
    PUSH EDI                            ; 00438f6d
        ;   Label: LAB_00438f6d
    PUSH EBX                            ; 00438f6e
    LEA EAX,[ESP + 0x58]                ; 00438f6f
    PUSH EAX                            ; 00438f73
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 00438f74
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 00438f79
    CMP EAX,EDI                         ; 00438f7c
    JNZ 0x00438ff3                      ; 00438f7e
        ;   XREF to: 00438ff3 (CONDITIONAL_JUMP)  ; LAB_00438ff3
    LEA EAX,[ESP + 0x50]                ; 00438f80
        ;   Label: LAB_00438f80
    PUSH EAX                            ; 00438f84
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 00438f85
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00438f8a
    PUSH 0x0                            ; 00438f8d
    LEA EAX,[ESP + 0x54]                ; 00438f8f
    PUSH EAX                            ; 00438f93
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00438f94
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00438f99
    MOV EAX,EBX                         ; 00438f9c
    ADD ESP,0x7c                        ; 00438f9e
    POP EBP                             ; 00438fa1
    POP EDI                             ; 00438fa2
    POP ESI                             ; 00438fa3
    POP EBX                             ; 00438fa4
    RET                                 ; 00438fa5
    PUSH EDI                            ; 00438fa6
        ;   Label: LAB_00438fa6
    CALL crt_memory.c_malloc_FUN_005a3650 ; 00438fa7
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00438fac
    MOV EBX,EAX                         ; 00438faf
    TEST EAX,EAX                        ; 00438fb1
    JNZ 0x00438f14                      ; 00438fb3
        ;   XREF to: 00438f14 (CONDITIONAL_JUMP)  ; LAB_00438f14
    PUSH ESI                            ; 00438fb9
    PUSH EDI                            ; 00438fba
    PUSH 0x5b8e90                       ; 00438fbb | = "Unable to allocate %u bytes for bitma..."
    LEA EAX,[ESP + 0xc]                 ; 00438fc0
    PUSH EAX                            ; 00438fc4
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00438fc5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5b8ec2                    ; 00438fca | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 00438fcf
    MOV EAX,ESP                         ; 00438fd2
    MOV ECX,0x98b                       ; 00438fd4
    PUSH EAX                            ; 00438fd9
    MOV dword ptr [0x01d71de0],EDX      ; 00438fda | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00438fe0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00438fe6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00438feb
    JMP 0x00438f14                      ; 00438fee
        ;   XREF to: 00438f14 (UNCONDITIONAL_JUMP)  ; LAB_00438f14
    PUSH ESI                            ; 00438ff3
        ;   Label: LAB_00438ff3
    PUSH 0x5b8f13                       ; 00438ff4 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00438ff9
    PUSH EAX                            ; 00438ffd
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00438ffe
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00439003
    LEA EAX,[ESP + 0x50]                ; 00439006
    PUSH EAX                            ; 0043900a
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 0043900b
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    MOV EDX,0x5b8f34                    ; 00439010 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x4                         ; 00439015
    MOV EAX,ESP                         ; 00439018
    MOV ECX,0x99c                       ; 0043901a
    PUSH EAX                            ; 0043901f
    MOV dword ptr [0x01d71de0],EDX      ; 00439020 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00439026 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043902c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00439031
    JMP 0x00438f80                      ; 00439034
        ;   XREF to: 00438f80 (UNCONDITIONAL_JUMP)  ; LAB_00438f80

